/* -*-c++-*- Present3D - Copyright (C) 1999-2006 Robert Osfield
 *
 * This software is open source and may be redistributed and/or modified under  
 * the terms of the GNU General Public License (GPL) version 2.0.
 * The full license is in LICENSE.txt file included with this distribution,.
 * 
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the 
 * include LICENSE.txt for more details.
*/

#include "SlideShowConstructor.h"

#include <osg/Geometry>
#include <osg/PolygonOffset>
#include <osg/Geode>
#include <osg/Texture2D>
#include <osg/TextureRectangle>
#include <osg/MatrixTransform>
#include <osg/PositionAttitudeTransform>
#include <osg/TexMat>
#include <osg/ShapeDrawable>
#include <osg/Notify>
#include <osg/io_utils>

#include <osgUtil/TransformCallback>

#include <osgDB/ReadFile>
#include <osgDB/WriteFile>
#include <osgDB/FileUtils>
#include <osgDB/Input>
#include <osgDB/FileNameUtils>

#include <osgWidget/PdfReader>

#include <osgViewer/ViewerEventHandlers>

#include <osgText/Text>

#include <osgFX/SpecularHighlights>

#include <osgVolume/Volume>
#include <osgVolume/RayTracedTechnique>
#include <osgVolume/FixedFunctionTechnique>

#include <sstream>
#include <algorithm>

#include "AnimationMaterial.h"
#include "PickEventHandler.h"

class SetToTransparentBin : public osg::NodeVisitor
{
public:

    SetToTransparentBin():
        osg::NodeVisitor(osg::NodeVisitor::TRAVERSE_ALL_CHILDREN) {}
        
    virtual void appply(osg::Node& node)
    {
        if (node.getStateSet())
        {
            node.getStateSet()->setMode(GL_BLEND,osg::StateAttribute::ON);
            node.getStateSet()->setRenderingHint(osg::StateSet::TRANSPARENT_BIN);
        }
    }
    
    virtual void apply(osg::Geode& geode)
    {
        if (geode.getStateSet())
        {
            geode.getStateSet()->setMode(GL_BLEND,osg::StateAttribute::ON);
            geode.getStateSet()->setRenderingHint(osg::StateSet::TRANSPARENT_BIN);
        }
        for(unsigned int i=0;i<geode.getNumDrawables();++i)
        {
            if (geode.getDrawable(i)->getStateSet())
            {
                geode.getDrawable(i)->getStateSet()->setMode(GL_BLEND,osg::StateAttribute::ON);
                geode.getDrawable(i)->getStateSet()->setRenderingHint(osg::StateSet::TRANSPARENT_BIN);
            }
        }
    }        
};

void SlideShowConstructor::LayerAttributes::callEnterCallbacks(osg::Node* node)
{
    osg::notify(osg::INFO)<<"SlideShowConstructor::LayerAttributes::callEnterCallbacks("<<node<<")"<<std::endl;
    for(LayerCallbacks::iterator itr = _enterLayerCallbacks.begin();
        itr != _enterLayerCallbacks.end();
        ++itr)
    {
        (*(*itr))(node);
    }
}

void SlideShowConstructor::LayerAttributes::callLeaveCallbacks(osg::Node* node)
{
    osg::notify(osg::INFO)<<"SlideShowConstructor::LayerAttributes::callLeaveCallbacks("<<node<<")"<<std::endl;
    for(LayerCallbacks::iterator itr = _leaveLayerCallbacks.begin();
        itr != _leaveLayerCallbacks.end();
        ++itr)
    {
        (*(*itr))(node);
    }
}
        
SlideShowConstructor::SlideShowConstructor()
{
    _slideDistance = osg::DisplaySettings::instance()->getScreenDistance();
    _slideHeight = osg::DisplaySettings::instance()->getScreenHeight();
    _slideWidth = osg::DisplaySettings::instance()->getScreenWidth();

    _backgroundColor.set(0.0f,0.0f,0.0f,1.0f);

    _presentationDuration = -1.0;

    // set up title defaults
    _titleFontDataDefault.font = "fonts/arial.ttf";
    _titleFontDataDefault.color.set(1.0f,1.0f,1.0f,1.0f);
    _titleFontDataDefault.layout = osgText::Text::LEFT_TO_RIGHT;
    _titleFontDataDefault.alignment = osgText::Text::CENTER_BASE_LINE;
    _titleFontDataDefault.axisAlignment = osgText::Text::XZ_PLANE;
    _titleFontDataDefault.characterSize = 0.06f;
    _titleFontDataDefault.maximumWidth = 0.9f;

    _titlePositionDataDefault.position.set(0.5f,0.92f,0.0f);

    // set up text defaults
    _textFontDataDefault.font = "fonts/arial.ttf";
    _textFontDataDefault.color.set(1.0f,1.0f,1.0f,1.0f);
    _textFontDataDefault.layout = osgText::Text::LEFT_TO_RIGHT;
    _textFontDataDefault.alignment = osgText::Text::LEFT_BASE_LINE;
    _textFontDataDefault.axisAlignment = osgText::Text::XZ_PLANE;
    _textFontDataDefault.characterSize = 0.04f;
    _textFontDataDefault.maximumWidth = 0.8f;

    _textPositionDataDefault.position.set(0.1f,0.85f,0.0f);

    _loopPresentation = false;
    _autoSteppingActive = false;
}

void SlideShowConstructor::setPresentationAspectRatio(float aspectRatio)
{
    _slideWidth = _slideHeight*aspectRatio;
}

void SlideShowConstructor::setPresentationAspectRatio(const std::string& str)
{
    if (str=="Reality Theatre") setPresentationAspectRatio(3.0f);
    else if (str=="Desktop") setPresentationAspectRatio(1280.0f/1024.0f);
    else
    {
        float ratio = (float)atof(str.c_str());
        if (ratio!=0.0) setPresentationAspectRatio(1280.0f/1024.0f);
        else
        {
            osg::notify(osg::WARN)<<"Error: presentation aspect ratio incorrect type"<<std::endl;
            osg::notify(osg::WARN)<<"       valid types are \"Reality Theatre\", \"Desktop\" or a numerical value."<<std::endl;
        }
    }
}

void SlideShowConstructor::createPresentation()
{
    _slideOrigin.set(-_slideWidth*0.5f,_slideDistance,-_slideHeight*0.5f);

#if 0
    _titleFontDataDefault.characterSize = 0.06f;
    _titleFontDataDefault.maximumWidth = 0.9f;

    _textFontDataDefault.characterSize = 0.04f;
    _textFontDataDefault.maximumWidth = 0.8f;
#endif
    
    osg::notify(osg::INFO)<<"_titlePositionDataDefault.position="<<_titlePositionDataDefault.position<<std::endl;

    _textPositionDataDefault.position.set(0.1f,_titlePositionDataDefault.position.y()-_titleFontDataDefault.characterSize,0.0f);
    _imagePositionDataDefault.position.set(0.5f,0.5f,0.0f);
    _modelPositionDataDefault.position.set(0.5f,0.5f,0.0f);

    _root = new osg::Group;
    
    _presentationSwitch = new osg::Switch;
    _presentationSwitch->setName(std::string("Presentation_")+_presentationName);
    
    _root->addChild(_presentationSwitch.get());
    
    osg::Vec3 slideCenter = _slideOrigin + osg::Vec3(_slideWidth*0.5f,0.0f,_slideHeight*0.5f);
       
    HomePosition* hp = new HomePosition;
    hp->eye.set(0.0f,0.0f,0.0f);
    hp->center = slideCenter;
    hp->up.set(0.0f,0.0f,1.0f);
    
    osg::notify(osg::INFO)<<" slideCenter "<<slideCenter<<std::endl;
    
    if (_presentationDuration>=0.0)
    {
        setDuration(_presentationSwitch.get(),_presentationDuration);
    }
     
    _root->setUserData(hp);
    
    if (_loopPresentation) _root->addDescription("loop");
    if (_autoSteppingActive) _root->addDescription("auto");
}

SlideShowConstructor::LayerAttributes* SlideShowConstructor::getOrCreateLayerAttributes(osg::Node* node)
{
    LayerAttributes* la = dynamic_cast<LayerAttributes*>(node->getUserData());
    if (!la)
    {
        if (node->getUserData())
        {
            osg::notify(osg::NOTICE)<<"UserData already assigned, overriding to set LayerAttributes."<<std::endl;
        }

        la = new LayerAttributes;
        node->setUserData(la);
    }
    
    return la;
}

void SlideShowConstructor::setBackgroundColor(const osg::Vec4& color, bool updateClearNode)
{
    _backgroundColor = color;
    if (updateClearNode && _slideClearNode.valid()) _slideClearNode->setClearColor(_backgroundColor);
}

void SlideShowConstructor::setTextColor(const osg::Vec4& color)
{
    _titleFontDataDefault.color = color;
    _textFontDataDefault.color = color;

    _titleFontData.color = _titleFontDataDefault.color;
    _textFontData.color = _textFontDataDefault.color;

}

void SlideShowConstructor::setPresentationName(const std::string& name)
{
    _presentationName = name;
    if (_presentationSwitch.valid()) _presentationSwitch->setName(std::string("Presentation_")+_presentationName);
}

void SlideShowConstructor::setPresentationDuration(double duration)
{
    _presentationDuration = duration;
    if (_presentationDuration>=0.0 && _presentationSwitch.valid())
    {
        setDuration(_presentationSwitch.get(),_presentationDuration);
    }
}

void SlideShowConstructor::addSlide()
{
    if (!_presentationSwitch) createPresentation();

    // reset fonts
    _titleFontData = _titleFontDataDefault;
    _textFontData = _textFontDataDefault;

    // reset cursors
    _titlePositionData = _titlePositionDataDefault;
    _textPositionData = _textPositionDataDefault;
    _imagePositionData =  _imagePositionDataDefault;
    _modelPositionData =  _modelPositionDataDefault;    
    
    _slide = new osg::Switch;
    _slide->setName(std::string("Slide_")+_slideTitle);
    
    _slideClearNode = new osg::ClearNode;
    _slideClearNode->setClearColor(_backgroundColor);
    _slideClearNode->addChild(_slide.get());
    
    _presentationSwitch->addChild(_slideClearNode.get());

    _previousLayer = 0;
    _currentLayer = 0;
    
    
    _filePathData = new FilePathData(osgDB::getDataFilePathList());
    
    _slideClearNode->setUserData(_filePathData.get());
}

void SlideShowConstructor::selectSlide(int slideNum)
{
    if (slideNum<0)
    {        
        addSlide();
    }
    else if (slideNum>=_presentationSwitch->getNumChildren())
    {
        addSlide();
    }
    else
    {
        _slideClearNode = dynamic_cast<osg::ClearNode*>(_presentationSwitch->getChild(slideNum));
        if (!_slideClearNode || _slideClearNode->getNumChildren()==0 || _slideClearNode->getChild(0)->asSwitch()==0)
        {
            addSlide();
        }
        else
        {
            _slide = _slideClearNode->getChild(0)->asSwitch();
            _previousLayer = _slide->getChild(_slide->getNumChildren()-1)->asGroup();
            _currentLayer = 0;
        }
    }
}

void SlideShowConstructor::setSlideDuration(double duration)
{
    if (!_slide) addSlide();

    if (_slide.valid())
    {
        setDuration(_slide.get(),duration);
    }
}

void SlideShowConstructor::addLayer(bool inheritPreviousLayers, bool defineAsBaseLayer)
{
    if (!_slide) addSlide();

    _currentLayer = new osg::Group;
    
    if (!_previousLayer || !inheritPreviousLayers)
    {
        _textPositionData = _textPositionDataDefault;
        _imagePositionData =  _imagePositionDataDefault;
        _modelPositionData =  _modelPositionDataDefault;    

        // create the background and title..
        if (!_slideBackgroundImageFileName.empty())
        {
            osg::Geometry* backgroundQuad = osg::createTexturedQuadGeometry(_slideOrigin,
                                                            osg::Vec3(_slideWidth,0.0f,0.0f),
                                                            osg::Vec3(0.0f,0.0f,_slideHeight));

            osg::Geode* background = new osg::Geode;

            osg::StateSet* backgroundStateSet = background->getOrCreateStateSet();
            backgroundStateSet->setAttributeAndModes(
                        new osg::PolygonOffset(1.0f,2.0f),
                        osg::StateAttribute::ON);
                        
            osg::Texture2D* texture = new osg::Texture2D(osgDB::readImageFile(_slideBackgroundImageFileName));
            texture->setResizeNonPowerOfTwoHint(false);

            backgroundStateSet->setTextureAttributeAndModes(0,
                        texture,
                        osg::StateAttribute::ON);

            background->addDrawable(backgroundQuad);

            _currentLayer->addChild(background);
        }
        
        if (!_slideTitle.empty())
        {
            osg::Geode* geode = new osg::Geode;

            osg::Vec3 localPosition = computePositionInModelCoords(_titlePositionData);

            osgText::Text* text = new osgText::Text;
            text->setFont(_titleFontData.font);
            text->setColor(_titleFontData.color);
            text->setCharacterSize(_titleFontData.characterSize*_slideHeight);
            text->setFontResolution(110,120);
            text->setMaximumWidth(_titleFontData.maximumWidth*_slideWidth);
            text->setLayout(_titleFontData.layout);
            text->setAlignment(_titleFontData.alignment);
            text->setAxisAlignment(_titleFontData.axisAlignment);
            //text->setPosition(_titlePositionData.position);
            text->setPosition(localPosition);

            text->setText(_slideTitle);

            geode->addDrawable(text);

            _currentLayer->addChild(geode);
        }
        
    }
    else
    {
        // copy previous layer's children across into new layer.
        for(unsigned int i=0;i<_previousLayer->getNumChildren();++i)
        {
            _currentLayer->addChild(_previousLayer->getChild(i));
        }
    }

    if (!defineAsBaseLayer)
    {
        _slide->addChild(_currentLayer.get());
    }
    
    _previousLayer = _currentLayer;
}

void SlideShowConstructor::selectLayer(int layerNum)
{
    if (!_slide) 
    {
        addSlide();
        addLayer();
    }
    else if (layerNum>=0 && layerNum<_slide->getNumChildren() && _slide->getChild(layerNum)->asGroup())
    {
        _currentLayer = _slide->getChild(layerNum)->asGroup();
        _previousLayer = _currentLayer;
    }
    else
    {
        addLayer();
    }
    
}


void SlideShowConstructor::setLayerDuration(double duration)
{
    if (!_currentLayer) addLayer();

    if (_currentLayer.valid())
    {
        setDuration(_currentLayer.get(),duration);
    }
}

void SlideShowConstructor::layerClickToDoOperation(Operation operation, bool relativeJump, int slideNum, int layerNum)
{
    if (!_currentLayer) addLayer();
    
    if (_currentLayer.valid())
    {
        if (_previousLayer==_currentLayer)
        {
            if (_currentLayer->getNumChildren()>0)
            {
                osg::notify(osg::INFO)<<"creating new group within layer"<<std::endl;
                osg::Group* group = new osg::Group;
                _currentLayer->addChild(group);
                _currentLayer = group;
            }
        }
        else
        {
            osg::notify(osg::INFO)<<"creating secondary group within layer"<<std::endl;
            osg::Group* group = new osg::Group;
            _previousLayer->addChild(group);
            _currentLayer = group;
        }                
        _currentLayer->setEventCallback(new PickEventHandler(operation, relativeJump, slideNum, layerNum));
    }
    
}


void SlideShowConstructor::layerClickToDoOperation(const std::string& command, Operation operation, bool relativeJump, int slideNum, int layerNum)
{
    if (!_currentLayer) addLayer();
    
    if (_currentLayer.valid())
    {
        if (_previousLayer==_currentLayer)
        {
            if (_currentLayer->getNumChildren()>0)
            {
                osg::notify(osg::INFO)<<"creating new group within layer"<<std::endl;
                osg::Group* group = new osg::Group;
                _currentLayer->addChild(group);
                _currentLayer = group;
            }
        }
        else
        {
            osg::notify(osg::INFO)<<"creating secondary group within layer"<<std::endl;
            osg::Group* group = new osg::Group;
            _previousLayer->addChild(group);
            _currentLayer = group;
        }                
        _currentLayer->setEventCallback(new PickEventHandler(command, operation, relativeJump, slideNum, layerNum));
    }
    
}


void SlideShowConstructor::layerClickEventOperation(const SlideShowConstructor::KeyPosition& keyPos, bool relativeJump, int slideNum, int layerNum)
{
    if (!_currentLayer) addLayer();
    
    if (_currentLayer.valid())
    {
        if (_previousLayer==_currentLayer)
        {
            if (_currentLayer->getNumChildren()>0)
            {
                osg::notify(osg::INFO)<<"creating new group within layer"<<std::endl;
                osg::Group* group = new osg::Group;
                _currentLayer->addChild(group);
                _currentLayer = group;
            }
        }
        else
        {
            osg::notify(osg::INFO)<<"creating secondary group within layer"<<std::endl;
            osg::Group* group = new osg::Group;
            _previousLayer->addChild(group);
            _currentLayer = group;
        }                
        _currentLayer->setEventCallback(new PickEventHandler(keyPos, relativeJump, slideNum, layerNum));
    }
    
}

void SlideShowConstructor::addBullet(const std::string& bullet, PositionData& positionData, FontData& fontData)
{
    if (!_currentLayer) addLayer();

    osg::Geode* geode = new osg::Geode;

    osgText::Text* text = new osgText::Text;

    osg::Vec3 localPosition = computePositionInModelCoords(positionData);

    text->setFont(fontData.font);
    text->setColor(fontData.color);
    text->setCharacterSize(fontData.characterSize*_slideHeight);
    text->setFontResolution(110,120);
    text->setMaximumWidth(fontData.maximumWidth*_slideWidth);
    text->setLayout(fontData.layout);
    text->setAlignment(fontData.alignment);
    text->setAxisAlignment(fontData.axisAlignment);
    text->setPosition(localPosition);
    
    text->setText(bullet);

    osg::BoundingBox bb = text->getBound();
    
    // note, this increment is only "correct" when text is on the plane of the slide..
    // will need to make this more general later.
    localPosition.z() = bb.zMin()-fontData.characterSize*_slideHeight*1.5;
    
    geode->addDrawable(text);
    
    osg::Node* subgraph = geode;
    
    if (positionData.requiresMaterialAnimation())
        subgraph = attachMaterialAnimation(subgraph,positionData);

    if (positionData.rotation[0]!=0.0)
    {
        osg::MatrixTransform* animation_transform = new osg::MatrixTransform;
        animation_transform->setDataVariance(osg::Object::DYNAMIC);
        animation_transform->setUpdateCallback(
            new osgUtil::TransformCallback(geode->getBound().center(),
                                           osg::Vec3(positionData.rotation[1],positionData.rotation[2],positionData.rotation[3]),
                                           osg::DegreesToRadians(positionData.rotation[0])));
        animation_transform->addChild(subgraph);

        subgraph = animation_transform;
    }

    _currentLayer->addChild(subgraph);

    updatePositionFromInModelCoords(localPosition, positionData);
}

void SlideShowConstructor::addParagraph(const std::string& paragraph, PositionData& positionData, FontData& fontData)
{
    if (!_currentLayer) addLayer();

    osg::Geode* geode = new osg::Geode;

    osg::Vec3 localPosition = computePositionInModelCoords(positionData);

    osgText::Text* text = new osgText::Text;

    text->setFont(fontData.font);
    text->setColor(fontData.color);
    text->setCharacterSize(fontData.characterSize*_slideHeight);
    text->setFontResolution(110,120);
    text->setMaximumWidth(fontData.maximumWidth*_slideWidth);
    text->setLayout(fontData.layout);
    text->setAlignment(fontData.alignment);
    text->setAxisAlignment(fontData.axisAlignment);
    text->setPosition(localPosition);
    
    text->setText(paragraph);

    osg::BoundingBox bb = text->getBound();
    
    // note, this increment is only "correct" when text is on the plane of the slide..
    // will need to make this more general later.
    localPosition.z() = bb.zMin()-fontData.characterSize*_slideHeight*1.5;

    geode->addDrawable(text);
    
    osg::Node* subgraph = geode;

    if (positionData.requiresMaterialAnimation())
        subgraph = attachMaterialAnimation(subgraph,positionData);

    if (positionData.rotation[0]!=0.0)
    {
        osg::MatrixTransform* animation_transform = new osg::MatrixTransform;
        animation_transform->setDataVariance(osg::Object::DYNAMIC);
        animation_transform->setUpdateCallback(
            new osgUtil::TransformCallback(geode->getBound().center(),
                                           osg::Vec3(positionData.rotation[1],positionData.rotation[2],positionData.rotation[3]),
                                           osg::DegreesToRadians(positionData.rotation[0])));
        animation_transform->addChild(subgraph);

        subgraph = animation_transform;
    }

    _currentLayer->addChild(subgraph);

    updatePositionFromInModelCoords(localPosition, positionData);
}

class FindImageStreamsVisitor : public osg::NodeVisitor
{
public:
    FindImageStreamsVisitor():
        osg::NodeVisitor(osg::NodeVisitor::TRAVERSE_ALL_CHILDREN) {}
        
    virtual void apply(osg::Node& node)
    {
	if (node.getStateSet())
	{
	     process(node.getStateSet());
	}
	traverse(node);
    }    	

    virtual void apply(osg::Geode& node)
    {
	if (node.getStateSet())
	{
	     process(node.getStateSet());
	}
    	
        for(unsigned int i=0;i<node.getNumDrawables();++i)
        {
            osg::Drawable* drawable = node.getDrawable(i);
            if (drawable && drawable->getStateSet())
            {
                process(drawable->getStateSet());
            }
        }
    }

    void process(osg::StateSet* ss)
    {
        for(unsigned int i=0;i<ss->getTextureAttributeList().size();++i)
        {
            osg::Texture* texture = dynamic_cast<osg::Texture*>(ss->getTextureAttribute(i,osg::StateAttribute::TEXTURE));
            osg::Image* image = texture ? texture->getImage(0) : 0;
            osg::ImageStream* imageStream = image ? dynamic_cast<osg::ImageStream*>(image) : 0;
            if (imageStream) 
            {
                texture->setDataVariance(osg::Object::DYNAMIC);
                texture->setUnRefImageDataAfterApply(false);
                texture->setResizeNonPowerOfTwoHint(false);
                texture->setFilter(osg::Texture::MIN_FILTER,osg::Texture::LINEAR);
                texture->setFilter(osg::Texture::MAG_FILTER,osg::Texture::LINEAR);
                texture->setClientStorageHint(true);
            }
        }
    }
    
};

void SlideShowConstructor::findImageStreamsAndAddCallbacks(osg::Node* node)
{
    FindImageStreamsVisitor fisv;
    node->accept(fisv);
}


osg::Geometry* SlideShowConstructor::createTexturedQuadGeometry(const osg::Vec3& pos, const osg::Vec4& rotation, float width, float height, osg::Image* image, bool& usedTextureRectangle)
{
    osg::Geometry* pictureQuad = 0;
    osg::Texture* texture = 0;
    osg::StateSet* stateset = 0;

    osg::Vec3 positionVec = pos;
    osg::Vec3 widthVec(width,0.0f,0.0f);
    osg::Vec3 heightVec(0.0f,0.0f,height);

    osg::Matrixd rotationMatrix = osg::Matrixd::rotate(osg::DegreesToRadians(rotation[0]),rotation[1],rotation[2],rotation[3]);
    widthVec = widthVec*rotationMatrix;
    heightVec = heightVec*rotationMatrix;

    osg::ImageStream* imageStream = dynamic_cast<osg::ImageStream*>(image);
  
    bool flipYAxis = image->getOrigin()==osg::Image::TOP_LEFT;

#ifdef __sgi
    bool useTextureRectangle = false;
#else
    bool useTextureRectangle = true;
#endif

    // pass back info on wether texture 2D is used.
    usedTextureRectangle = useTextureRectangle;

    if (useTextureRectangle)
    {
        pictureQuad = osg::createTexturedQuadGeometry(positionVec,
                                           widthVec,
                                           heightVec,
                                           0.0f, flipYAxis ? image->t() : 0.0f,
                                           image->s(), flipYAxis ? 0.0f : image->t());

        stateset = pictureQuad->getOrCreateStateSet();                                

        texture = new osg::TextureRectangle(image);
        stateset->setTextureAttributeAndModes(0,
                    texture,
                    osg::StateAttribute::ON);
                    
        
                    
    }
    else
    {
        pictureQuad = osg::createTexturedQuadGeometry(positionVec,
                                           widthVec,
                                           heightVec,
                                           0.0f, flipYAxis ? 1.0f : 0.0f,
                                           1.0f, flipYAxis ? 0.0f : 1.0f);
                                       
        stateset = pictureQuad->getOrCreateStateSet();                                

        texture = new osg::Texture2D(image);
        
        stateset->setTextureAttributeAndModes(0,
                    texture,
                    osg::StateAttribute::ON);

    }

    if (!pictureQuad) return 0;

    if (imageStream)
    {
        imageStream->pause();
    
        osg::notify(osg::INFO)<<"Reading video "<<imageStream->getFileName()<<std::endl; 
        
        // make sure that OSX uses the client storage extension to accelerate peformance where possible.
        texture->setClientStorageHint(true);
    }


    return pictureQuad;
}


void SlideShowConstructor::addImage(const std::string& filename, const PositionData& positionData, const ImageData& imageData)
{
    if (!_currentLayer) addLayer();

    osg::Image* image = osgDB::readImageFile(filename);
    
    if (!image) return;

    bool isImageTranslucent = false;

    osg::ImageStream* imageStream = dynamic_cast<osg::ImageStream*>(image);
    if (imageStream)
    {
        imageStream->setLoopingMode(imageData.loopingMode);

        isImageTranslucent = imageStream->getPixelFormat()==GL_RGBA ||
                             imageStream->getPixelFormat()==GL_BGRA;

    }
    else
    {
        isImageTranslucent = image->isImageTranslucent();
    }

    float s = image->s();
    float t = image->t();

    // temporary hack
    float height = 0.0f;

    float sx = imageData.region_in_pixel_coords ? 1.0f : s;
    float sy = imageData.region_in_pixel_coords ? 1.0f : t;

    float x1 = imageData.region[0]*sx;
    float y1 = imageData.region[1]*sy;
    float x2 = imageData.region[2]*sx;
    float y2 = imageData.region[3]*sy;

    float aspectRatio = (y2-y1)/(x2-x1);

    float image_width = _slideWidth*positionData.scale.x();
    float image_height = image_width*aspectRatio*positionData.scale.y()/positionData.scale.x();
    float offset = height*image_height*0.1f;

    osg::Vec3 pos = computePositionInModelCoords(positionData) + osg::Vec3(-image_width*0.5f+offset,-offset,-image_height*0.5f-offset);

    osg::Geode* picture = new osg::Geode;
    osg::Node* subgraph = picture;


    bool usedTextureRectangle = false;
    osg::Geometry* pictureQuad = createTexturedQuadGeometry(pos, positionData.rotate, image_width, image_height, image, usedTextureRectangle);
    osg::StateSet* pictureStateSet = pictureQuad->getOrCreateStateSet();

    attachTexMat(pictureStateSet, imageData, s, t, usedTextureRectangle);

    picture->addDrawable(pictureQuad);

    // attach any meterial animation.
    if (positionData.requiresMaterialAnimation())
        subgraph = attachMaterialAnimation(subgraph,positionData);


    if (isImageTranslucent)
    {
        SetToTransparentBin sttb;
        subgraph->accept(sttb);
        pictureStateSet->setMode(GL_BLEND, osg::StateAttribute::ON);
    }

    // attached any rotation
    if (positionData.rotation[0]!=0.0)
    {
        osg::MatrixTransform* animation_transform = new osg::MatrixTransform;
        animation_transform->setDataVariance(osg::Object::DYNAMIC);
        animation_transform->setUpdateCallback(
            new osgUtil::TransformCallback(picture->getBound().center(),
                                           osg::Vec3(positionData.rotation[1],positionData.rotation[2],positionData.rotation[3]),
                                           osg::DegreesToRadians(positionData.rotation[0])));

        animation_transform->addChild(subgraph);

        subgraph = animation_transform;
    }


    // attached any animation
    osg::AnimationPathCallback* animation = getAnimationPathCallback(positionData);
    if (animation)
    {
        osg::notify(osg::INFO)<<"Have animation path for image"<<std::endl;

        osg::Vec3 pivot = positionData.absolute_path ? osg::Vec3(0.0f,0.0f,0.0f) : subgraph->getBound().center();

        osg::PositionAttitudeTransform* animation_transform = new osg::PositionAttitudeTransform;
        animation_transform->setDataVariance(osg::Object::DYNAMIC);
        animation_transform->setPivotPoint(pivot);
        animation->setPivotPoint(pivot);

        animation_transform->setUpdateCallback(animation);

        animation_transform->setReferenceFrame(positionData.absolute_path ? 
                                                    osg::Transform::ABSOLUTE_RF:
                                                    osg::Transform::RELATIVE_RF);

        animation_transform->addChild(subgraph);

        subgraph = animation_transform;
    }

    _currentLayer->addChild(subgraph);
}

void SlideShowConstructor::addStereoImagePair(const std::string& filenameLeft, const ImageData& imageDataLeft, const std::string& filenameRight, const ImageData& imageDataRight,const PositionData& positionData)
{
    if (!_currentLayer) addLayer();


    osg::ref_ptr<osg::Image> imageLeft = osgDB::readImageFile(filenameLeft);
    osg::ref_ptr<osg::Image> imageRight = (filenameRight==filenameLeft) ? imageLeft.get() : osgDB::readImageFile(filenameRight);

    if (!imageLeft && !imageRight) return;

    bool isImageTranslucent = false;

    osg::ImageStream* imageStreamLeft = dynamic_cast<osg::ImageStream*>(imageLeft.get());
    if (imageStreamLeft)
    {
        imageStreamLeft->setLoopingMode(imageDataLeft.loopingMode);
        isImageTranslucent = imageStreamLeft->getPixelFormat()==GL_RGBA ||
                             imageStreamLeft->getPixelFormat()==GL_BGRA;
    }
    else
    {
        isImageTranslucent = imageLeft->isImageTranslucent();
    }

    osg::ImageStream* imageStreamRight = dynamic_cast<osg::ImageStream*>(imageRight.get());
    if (imageStreamRight)
    {
        imageStreamRight->setLoopingMode(imageDataRight.loopingMode);
        if (!isImageTranslucent)
        {
            isImageTranslucent = imageStreamRight->getPixelFormat()==GL_RGBA ||
                                imageStreamRight->getPixelFormat()==GL_BGRA;
        }
    }
    else if (!isImageTranslucent)
    {
        isImageTranslucent = imageRight->isImageTranslucent();
    }


    float s = imageLeft->s();
    float t = imageLeft->t();
    
    // temporary hack
    float height = 0.0f;

    float sx = imageDataLeft.region_in_pixel_coords ? 1.0f : s;
    float sy = imageDataLeft.region_in_pixel_coords ? 1.0f : t;

    float x1 = imageDataLeft.region[0]*sx;
    float y1 = imageDataLeft.region[1]*sy;
    float x2 = imageDataLeft.region[2]*sx;
    float y2 = imageDataLeft.region[3]*sy;
    
    float aspectRatio = (y2-y1)/(x2-x1);

    float image_width = _slideWidth*positionData.scale.x();
    float image_height = image_width*aspectRatio*positionData.scale.y()/positionData.scale.x();

    float offset = height*image_height*0.1f;
    
    bool usedTextureRectangle = false;

    osg::Vec3 pos = computePositionInModelCoords(positionData) + 
                    osg::Vec3(-image_width*0.5f+offset,-offset,-image_height*0.5f-offset);

    osg::Geode* pictureLeft = new osg::Geode;
    {
        pictureLeft->setNodeMask(0x01);

        osg::Geometry* pictureLeftQuad = createTexturedQuadGeometry(pos, positionData.rotate, image_width,image_height,imageLeft.get(),usedTextureRectangle);
        osg::StateSet* pictureLeftStateSet = pictureLeftQuad->getOrCreateStateSet();

        if (isImageTranslucent)
        {
            pictureLeftStateSet->setMode(GL_BLEND, osg::StateAttribute::ON);
        }

	attachTexMat(pictureLeftStateSet, imageDataLeft, s, t, usedTextureRectangle);

        pictureLeft->addDrawable(pictureLeftQuad);

    }

    osg::Geode* pictureRight = new osg::Geode;
    {
        pictureRight->setNodeMask(0x02);

        osg::Geometry* pictureRightQuad = createTexturedQuadGeometry(pos, positionData.rotate, image_width,image_height,imageRight.get(),usedTextureRectangle);
        osg::StateSet* pictureRightStateSet = pictureRightQuad->getOrCreateStateSet();

        if (isImageTranslucent)
        {
            pictureRightStateSet->setMode(GL_BLEND, osg::StateAttribute::ON);
        }

	attachTexMat(pictureRightStateSet, imageDataRight, s, t, usedTextureRectangle);

        pictureRight->addDrawable(pictureRightQuad);
    }

    osg::Group* subgraph = new osg::Group;
    subgraph->addChild(pictureLeft);
    subgraph->addChild(pictureRight);

    // attach any meterial animation.
    if (positionData.requiresMaterialAnimation())
        subgraph = attachMaterialAnimation(subgraph,positionData)->asGroup();

    if (isImageTranslucent)
    {
        SetToTransparentBin sttb;
        subgraph->accept(sttb);
    }

    // attached any rotation
    if (positionData.rotation[0]!=0.0)
    {
        osg::MatrixTransform* animation_transform = new osg::MatrixTransform;
        animation_transform->setDataVariance(osg::Object::DYNAMIC);
        animation_transform->setUpdateCallback(
            new osgUtil::TransformCallback(subgraph->getBound().center(),
                                           osg::Vec3(positionData.rotation[1],positionData.rotation[2],positionData.rotation[3]),
                                           osg::DegreesToRadians(positionData.rotation[0])));
                                           
        animation_transform->addChild(subgraph);
        
        subgraph = animation_transform;
    }


    // attached any animation
    osg::AnimationPathCallback* animation = getAnimationPathCallback(positionData);
    if (animation)
    {
        osg::notify(osg::INFO)<<"Have animation path for image"<<std::endl;
        
        osg::Vec3 pivot = positionData.absolute_path ? osg::Vec3(0.0f,0.0f,0.0f) : subgraph->getBound().center();
        
        osg::PositionAttitudeTransform* animation_transform = new osg::PositionAttitudeTransform;
        animation_transform->setDataVariance(osg::Object::DYNAMIC);
        animation_transform->setPivotPoint(pivot);
        animation->setPivotPoint(pivot);

        animation_transform->setUpdateCallback(animation);
        animation_transform->setReferenceFrame(positionData.absolute_path ? 
                                                    osg::Transform::ABSOLUTE_RF:
                                                    osg::Transform::RELATIVE_RF);

        animation_transform->addChild(subgraph);

        subgraph = animation_transform;
    }

    _currentLayer->addChild(subgraph);
}

void SlideShowConstructor::addVNC(const std::string& hostname, const PositionData& positionData, const ImageData& imageData)
{
    addInteractiveImage(hostname+".vnc", positionData, imageData);
}

void SlideShowConstructor::addBrowser(const std::string& url, const PositionData& positionData, const ImageData& imageData)
{
    addInteractiveImage(url+".gecko", positionData, imageData);
}

void SlideShowConstructor::addPDF(const std::string& filename, const PositionData& positionData, const ImageData& imageData)
{
    addInteractiveImage(filename, positionData, imageData);
}

class SetPageCallback: public SlideShowConstructor::LayerCallback
{
public:
    SetPageCallback(osgWidget::PdfImage* pdfImage, int pageNum):
        _pdfImage(pdfImage),
        _pageNum(pageNum)
    {
    }

    virtual void operator() (osg::Node*) const
    {
        osg::notify(osg::INFO)<<"PDF Page to be updated "<<_pageNum<<std::endl;
    
        if (_pdfImage.valid() && _pdfImage->getPageNum()!=_pageNum)
        {
            _pdfImage->page(_pageNum);
        }
    }
    
    osg::observer_ptr<osgWidget::PdfImage> _pdfImage;
    int _pageNum;
};


osg::Image* SlideShowConstructor::addInteractiveImage(const std::string& filename, const PositionData& positionData, const ImageData& imageData)
{
    if (!_currentLayer) addLayer();

    osg::Image* image = osgDB::readImageFile(filename);
    
    osg::notify(osg::INFO)<<"addInteractiveImage("<<filename<<") "<<image<<std::endl;
    
    
    if (!image) return 0;
    
    float s = image->s();
    float t = image->t();
    
    // temporary hack
    float height = 0.0f;
    
    float sx = imageData.region_in_pixel_coords ? 1.0f : s;
    float sy = imageData.region_in_pixel_coords ? 1.0f : t;

    float x1 = imageData.region[0]*sx;
    float y1 = imageData.region[1]*sy;
    float x2 = imageData.region[2]*sx;
    float y2 = imageData.region[3]*sy;
    
    float aspectRatio = (y2-y1)/(x2-x1);

    float image_width = _slideWidth*positionData.scale.x();
    float image_height = image_width*aspectRatio*positionData.scale.y()/positionData.scale.x();
    float offset = height*image_height*0.1f;
    
    osg::Vec3 pos = computePositionInModelCoords(positionData) + osg::Vec3(-image_width*0.5f+offset,-offset,-image_height*0.5f-offset);

    osg::Geode* picture = new osg::Geode;
    osg::Node* subgraph = picture;


    bool usedTextureRectangle = false;
    osg::Geometry* pictureQuad = createTexturedQuadGeometry(pos, positionData.rotate, image_width, image_height, image, usedTextureRectangle);

    osg::ref_ptr<osgViewer::InteractiveImageHandler> handler = new osgViewer::InteractiveImageHandler(image);
    pictureQuad->setEventCallback(handler.get());
    pictureQuad->setCullCallback(handler.get());

    osg::StateSet* pictureStateSet = pictureQuad->getOrCreateStateSet();

    attachTexMat(pictureStateSet, imageData, s, t, usedTextureRectangle);

    pictureStateSet->setMode(GL_LIGHTING, osg::StateAttribute::OFF);

    picture->addDrawable(pictureQuad);

    // attach any meterial animation.
    if (positionData.requiresMaterialAnimation())
        subgraph = attachMaterialAnimation(subgraph,positionData);


    // attached any rotation
    if (positionData.rotation[0]!=0.0)
    {
        osg::MatrixTransform* animation_transform = new osg::MatrixTransform;
        animation_transform->setDataVariance(osg::Object::DYNAMIC);
        animation_transform->setUpdateCallback(
            new osgUtil::TransformCallback(picture->getBound().center(),
                                           osg::Vec3(positionData.rotation[1],positionData.rotation[2],positionData.rotation[3]),
                                           osg::DegreesToRadians(positionData.rotation[0])));
                                           
        animation_transform->addChild(subgraph);
        
        subgraph = animation_transform;
    }


    // attached any animation
    osg::AnimationPathCallback* animation = getAnimationPathCallback(positionData);
    if (animation)
    {
        osg::notify(osg::INFO)<<"Have animation path for image"<<std::endl;
        
        osg::Vec3 pivot = positionData.absolute_path ? osg::Vec3(0.0f,0.0f,0.0f) : subgraph->getBound().center();
        
        osg::PositionAttitudeTransform* animation_transform = new osg::PositionAttitudeTransform;
        animation_transform->setDataVariance(osg::Object::DYNAMIC);
        animation_transform->setPivotPoint(pivot);
        animation->setPivotPoint(pivot);

        animation_transform->setUpdateCallback(animation);

        animation_transform->setReferenceFrame(positionData.absolute_path ? 
                                                    osg::Transform::ABSOLUTE_RF:
                                                    osg::Transform::RELATIVE_RF);

        animation_transform->addChild(subgraph);

        subgraph = animation_transform;
    }

    _currentLayer->addChild(subgraph);
    
    osgWidget::PdfImage* pdfImage = dynamic_cast<osgWidget::PdfImage*>(image);
    if (pdfImage && imageData.page>=0)
    {
        getOrCreateLayerAttributes(_currentLayer.get())->addEnterCallback(new SetPageCallback(pdfImage, imageData.page));

        osg::notify(osg::INFO)<<"Setting pdf page num "<<imageData.page<<std::endl;
        pdfImage->setBackgroundColor(imageData.backgroundColor);
        pdfImage->page(imageData.page);

        if (imageData.backgroundColor.a()<1.0f)
        {
            SetToTransparentBin sttb;
            subgraph->accept(sttb);
        }


    }


    return image;
}

std::string SlideShowConstructor::findFileAndRecordPath(const std::string& filename)
{
    std::string foundFile = osgDB::findDataFile(filename);
    if (foundFile.empty()) return foundFile;

    osg::notify(osg::INFO)<<"foundFile "<<foundFile<<std::endl;

    std::string path = osgDB::getFilePath(foundFile);
    if (!path.empty() && _filePathData.valid())
    {
        osgDB::FilePathList::iterator itr = std::find(_filePathData->filePathList.begin(),_filePathData->filePathList.end(),path);
        if (itr==_filePathData->filePathList.end())
        {
            osg::notify(osg::INFO)<<"New path to record "<<path<<std::endl;
            _filePathData->filePathList.push_front(path);
        }
    }
    
    return foundFile;

}

void SlideShowConstructor::addModel(const std::string& filename, const PositionData& positionData, const ModelData& modelData)
{
    osg::Node* subgraph = 0;

    if (filename=="sphere")
    {
        osg::Geode* geode = new osg::Geode;
        geode->addDrawable(new osg::ShapeDrawable(new osg::Sphere));
        
        subgraph = geode;
    }
    else if (filename=="box")
    {
        osg::Geode* geode = new osg::Geode;
        geode->addDrawable(new osg::ShapeDrawable(new osg::Box));
        
        subgraph = geode;
    }
    else
    {
        std::string foundFile = findFileAndRecordPath(filename);
        if (foundFile.empty()) return;

        subgraph = osgDB::readNodeFile(foundFile);
    }
    
    if (!subgraph) return;

    addModel(subgraph, positionData, modelData);
}

void SlideShowConstructor::addModel(osg::Node* subgraph, const PositionData& positionData, const ModelData& modelData)
{
    osg::Object::DataVariance defaultMatrixDataVariance = osg::Object::DYNAMIC; // STATIC

    if (!modelData.effect.empty())
    {
        if (modelData.effect=="SpecularHighlights" || modelData.effect=="glossy")
        {
            osgFX::SpecularHighlights* specularHighlights = new osgFX::SpecularHighlights;
            specularHighlights->setTextureUnit(1);
            specularHighlights->addChild(subgraph);
            subgraph = specularHighlights;
        }
    }
    
    if (positionData.frame==SLIDE)
    {
        osg::Vec3 pos = convertSlideToModel(positionData.position);
     
        const osg::BoundingSphere& bs = subgraph->getBound();
        float model_scale = positionData.scale.x()*_slideHeight*(1.0f-positionData.position.z())*0.7f/bs.radius();

        osg::MatrixTransform* transform = new osg::MatrixTransform;
        transform->setDataVariance(defaultMatrixDataVariance);
        transform->setMatrix(osg::Matrix::translate(-bs.center())*
                             osg::Matrix::scale(model_scale,model_scale,model_scale)*
                             osg::Matrix::rotate(osg::DegreesToRadians(positionData.rotate[0]),positionData.rotate[1],positionData.rotate[2],positionData.rotate[3])*
                             osg::Matrix::translate(pos));


        transform->setStateSet(createTransformStateSet());
        transform->addChild(subgraph);

        subgraph = transform;

    }
    else
    {
        osg::Matrix matrix(osg::Matrix::scale(1.0f/positionData.scale.x(),1.0f/positionData.scale.x(),1.0f/positionData.scale.x())*
                           osg::Matrix::rotate(osg::DegreesToRadians(positionData.rotate[0]),positionData.rotate[1],positionData.rotate[2],positionData.rotate[3])*
                           osg::Matrix::translate(positionData.position));

        osg::MatrixTransform* transform = new osg::MatrixTransform;
        transform->setDataVariance(defaultMatrixDataVariance);
        transform->setMatrix(osg::Matrix::inverse(matrix));
        
        osg::notify(osg::INFO)<<"Position Matrix "<<transform->getMatrix()<<std::endl;

        transform->addChild(subgraph);

        subgraph = transform;
    }
    
    float referenceSizeRatio = 0.707;
    float referenceSize = subgraph->getBound().radius() * referenceSizeRatio;


    // attach any meterial animation.
    if (positionData.requiresMaterialAnimation())
        subgraph = attachMaterialAnimation(subgraph,positionData);


    // attached any rotation
    if (positionData.rotation[0]!=0.0)
    {
        osg::MatrixTransform* animation_transform = new osg::MatrixTransform;
        animation_transform->setDataVariance(osg::Object::DYNAMIC);
        animation_transform->setUpdateCallback(
            new osgUtil::TransformCallback(subgraph->getBound().center(),
                                           osg::Vec3(positionData.rotation[1],positionData.rotation[2],positionData.rotation[3]),
                                           osg::DegreesToRadians(positionData.rotation[0])));
                                           
        animation_transform->addChild(subgraph);
        
        osg::notify(osg::INFO)<<"Rotation Matrix "<<animation_transform->getMatrix()<<std::endl;

        subgraph = animation_transform;
    }


    // attached any animation
    osg::AnimationPathCallback* animation = getAnimationPathCallback(positionData);
    if (animation)
    {
        osg::notify(osg::INFO)<<"Have animation path for model"<<std::endl;
        
        osg::Vec3 pivot = positionData.absolute_path ? osg::Vec3(0.0f,0.0f,0.0f) : subgraph->getBound().center();
                
        osg::AnimationPath* path = animation->getAnimationPath();
        if (positionData.animation_name=="wheel" && (path->getTimeControlPointMap()).size()>=2)
        {
            osg::notify(osg::INFO)<<"****  Need to handle special wheel animation"<<std::endl;

            osg::AnimationPath::TimeControlPointMap& controlPoints = path->getTimeControlPointMap();
            
            osg::AnimationPath::TimeControlPointMap::iterator curr_itr = controlPoints.begin();
            osg::AnimationPath::TimeControlPointMap::iterator prev_itr=curr_itr;
            ++curr_itr;
            
            osg::AnimationPath::ControlPoint* prev_cp = &(prev_itr->second);
            osg::AnimationPath::ControlPoint* curr_cp = &(curr_itr->second);

            float totalLength = 0;
            float rotation_y_axis = 0;
            osg::Vec3 delta_position = curr_cp->getPosition() - prev_cp->getPosition();
            float rotation_z_axis = atan2f(delta_position.y(),delta_position.x());

            osg::Quat quat_y_axis,quat_z_axis,quat_combined;
            
            quat_y_axis.makeRotate(rotation_y_axis,0.0f,1.0f,0.0f);
            quat_z_axis.makeRotate(rotation_z_axis,0.0f,0.0f,1.0f);
            quat_combined = quat_y_axis*quat_z_axis;

            // set first rotation.
            prev_cp->setRotation(quat_combined);

            for(;
                curr_itr!=controlPoints.end();
                ++curr_itr)
            {
                prev_cp = &(prev_itr->second);
                curr_cp = &(curr_itr->second);
                
                delta_position = curr_cp->getPosition() - prev_cp->getPosition();
                
                totalLength += delta_position.length();
                
                // rolling - rotation about the y axis.
                rotation_y_axis = totalLength/referenceSize;
                
                // direction - rotation about the z axis. 
                rotation_z_axis = atan2f(delta_position.y(),delta_position.x());

                osg::notify(osg::INFO)<<" rotation_y_axis="<<rotation_y_axis<<" rotation_z_axis="<<rotation_z_axis<<std::endl;
                
                quat_y_axis.makeRotate(rotation_y_axis,0.0f,1.0f,0.0f);
                quat_z_axis.makeRotate(rotation_z_axis,0.0f,0.0f,1.0f);
                quat_combined = quat_y_axis*quat_z_axis;
                
                curr_cp->setRotation(quat_combined);              
                
                prev_itr = curr_itr;

            }

        }


        osg::PositionAttitudeTransform* animation_transform = new osg::PositionAttitudeTransform;
        animation_transform->setDataVariance(osg::Object::DYNAMIC);
        animation_transform->setPivotPoint(pivot);
        animation->setPivotPoint(pivot);
        animation_transform->setUpdateCallback(animation);

        animation_transform->setReferenceFrame(positionData.absolute_path ? 
                                                    osg::Transform::ABSOLUTE_RF:
                                                    osg::Transform::RELATIVE_RF);

        animation_transform->addChild(subgraph);

        subgraph = animation_transform;
    }

    findImageStreamsAndAddCallbacks(subgraph);

    _currentLayer->addChild(subgraph);
}


void SlideShowConstructor::addVolume(const std::string& filename, const PositionData& positionData)
{
    osg::Object::DataVariance defaultMatrixDataVariance = osg::Object::DYNAMIC; // STATIC

    std::string foundFile = filename;

    osgDB::FileType fileType = osgDB::fileType(foundFile);
    if (fileType == osgDB::FILE_NOT_FOUND)
    {
        foundFile = findFileAndRecordPath(foundFile);
        fileType = osgDB::fileType(foundFile);
    }
    
    osg::ref_ptr<osg::Image> image;
    if (fileType == osgDB::DIRECTORY)
    {
       image = osgDB::readImageFile(foundFile+".dicom");
    }
    else if (fileType == osgDB::REGULAR_FILE)
    {
        image = osgDB::readImageFile( foundFile );
    }

    if (!image) return;


    osg::ref_ptr<osgVolume::Volume> volume = new osgVolume::Volume;
    osg::ref_ptr<osgVolume::VolumeTile> tile = new osgVolume::VolumeTile;
    volume->addChild(tile.get());

    osg::ref_ptr<osgVolume::ImageLayer> layer = new osgVolume::ImageLayer(image.get());
    layer->rescaleToZeroToOneRange();

    osg::RefMatrix* matrix = dynamic_cast<osg::RefMatrix*>(image->getUserData());        
    if (matrix)
    {
        osgVolume::Locator* locator = new osgVolume::Locator(*matrix);
        layer->setLocator(locator);
        tile->setLocator(locator);
    }

    tile->setLayer(layer.get());

    float alphaFunc = 0.1;

    osgVolume::SwitchProperty* sp = new osgVolume::SwitchProperty;
    sp->setActiveProperty(0);

    osgVolume::AlphaFuncProperty* ap = new osgVolume::AlphaFuncProperty(alphaFunc);
    osgVolume::SampleDensityProperty* sd = new osgVolume::SampleDensityProperty(0.005);
    osgVolume::TransparencyProperty* tp = new osgVolume::TransparencyProperty(1.0);

    {
        // Standard
        osgVolume::CompositeProperty* cp = new osgVolume::CompositeProperty;
        cp->addProperty(ap);
        cp->addProperty(sd);
        cp->addProperty(tp);

        sp->addProperty(cp);
    }

    {
        // Light
        osgVolume::CompositeProperty* cp = new osgVolume::CompositeProperty;
        cp->addProperty(ap);
        cp->addProperty(sd);
        cp->addProperty(tp);
        cp->addProperty(new osgVolume::LightingProperty);

        sp->addProperty(cp);
    }

    {
        // Isosurface
        osgVolume::CompositeProperty* cp = new osgVolume::CompositeProperty;
        cp->addProperty(sd);
        cp->addProperty(tp);
        cp->addProperty(new osgVolume::IsoSurfaceProperty(alphaFunc));

        sp->addProperty(cp);
    }

    {
        // MaximumIntensityProjection
        osgVolume::CompositeProperty* cp = new osgVolume::CompositeProperty;
        cp->addProperty(ap);
        cp->addProperty(sd);
        cp->addProperty(tp);
        cp->addProperty(new osgVolume::MaximumIntensityProjectionProperty);

        sp->addProperty(cp);
    }

    layer->addProperty(sp);
    tile->setVolumeTechnique(new osgVolume::RayTracedTechnique);
    tile->setEventCallback(new osgVolume::PropertyAdjustmentCallback());

    ModelData modelData;
    addModel(volume.get(), positionData, modelData);
}

bool SlideShowConstructor::attachTexMat(osg::StateSet* stateset, const ImageData& imageData, float s, float t, bool textureRectangle)
{
    float xScale = textureRectangle ? s : 1.0f;
    float yScale = textureRectangle ? t : 1.0f;

    float sx = (textureRectangle ? s : 1.0f) / (imageData.region_in_pixel_coords ? s : 1.0f);
    float sy = (textureRectangle ? t : 1.0f) / (imageData.region_in_pixel_coords ? t : 1.0f);

    float x1 = imageData.region[0]*sx;
    float y1 = imageData.region[1]*sy;
    float x2 = imageData.region[2]*sx;
    float y2 = imageData.region[3]*sy;

    if (x1!=0.0f || y1!=0.0f || x2!=xScale || y2 != yScale ||
        imageData.texcoord_rotate != 0.0f)
    {
        osg::TexMat* texmat = new osg::TexMat;
        texmat->setMatrix(osg::Matrix::translate(-0.5f*xScale,-0.5f*yScale,0.0f)*
                          osg::Matrix::rotate(osg::DegreesToRadians(imageData.texcoord_rotate),0.0f,0.0f,1.0f)*
                          osg::Matrix::translate(0.5f*xScale,0.5f*yScale,0.0f)*
                          osg::Matrix::scale((x2-x1)/xScale,(y2-y1)/yScale,1.0f)*
                          osg::Matrix::translate(x1,
                                                 y1,
                                                 0.0f));
                          
        stateset->setTextureAttribute(0,texmat);
        return true;
    }
    return false;
}

osg::Node* SlideShowConstructor::attachMaterialAnimation(osg::Node* model, const PositionData& positionData)
{
    ss3d::AnimationMaterial* animationMaterial = 0;

    if (!positionData.animation_material_filename.empty())
    {
        std::string absolute_animation_file_path = osgDB::findDataFile(positionData.animation_material_filename);
        if (!absolute_animation_file_path.empty())
        {        
            std::ifstream animation_filestream(absolute_animation_file_path.c_str());
            if (!animation_filestream.eof())
            {
                animationMaterial = new ss3d::AnimationMaterial;
                animationMaterial->read(animation_filestream);
            }
        }
    }
    else if (!positionData.fade.empty())
    {
        std::istringstream iss(positionData.fade);
        
        animationMaterial = new ss3d::AnimationMaterial;
        while (!iss.fail() && !iss.eof())
        {
            float time=1.0f, alpha=1.0f;
            iss >> time >> alpha;
            if (!iss.fail())
            {
                osg::Material* material = new osg::Material;
                material->setAmbient(osg::Material::FRONT_AND_BACK,osg::Vec4(1.0f,1.0f,1.0f,alpha));
                material->setDiffuse(osg::Material::FRONT_AND_BACK,osg::Vec4(1.0f,1.0f,1.0f,alpha));
                animationMaterial->insert(time,material);
            }
        }
    }
    
    if (animationMaterial) 
    {
        animationMaterial->setLoopMode(positionData.animation_material_loop_mode);

        ss3d::AnimationMaterialCallback* animationMaterialCallback = new ss3d::AnimationMaterialCallback(animationMaterial);
        animationMaterialCallback->setTimeOffset(positionData.animation_material_time_offset);
        animationMaterialCallback->setTimeMultiplier(positionData.animation_material_time_multiplier);

        osg::Group* decorator = new osg::Group;
        decorator->addChild(model);

        decorator->setUpdateCallback(animationMaterialCallback);

        if (animationMaterial->requiresBlending())
        {
            SetToTransparentBin sttb;
            decorator->accept(sttb);
        }

        return decorator;
    }

    return model;
}

osg::AnimationPath* SlideShowConstructor::readPivotPath(const std::string& filename) const
{
    std::ifstream in(filename.c_str());
    if (!in.eof())
    {
        osg::AnimationPath* animation = new osg::AnimationPath;

        while (!in.eof())
        {
            double time;
            osg::Vec3 pivot;
            osg::Vec3 position;
            float scale;
            osg::Quat rotation;
            in >> time >> pivot.x() >> pivot.y() >> pivot.z() >> position.x() >> position.y() >> position.z() >> rotation.x() >> rotation.y() >> rotation.z() >> rotation.w() >> scale;
            if(!in.eof())
            {
                osg::Matrix SR = osg::Matrix::scale(scale,scale,scale)*
                                 osg::Matrixf::rotate(rotation);
            
                osg::Matrix invSR;
                invSR.invert(SR);
                
                position += (invSR*pivot)*SR;
            
                animation->insert(time,osg::AnimationPath::ControlPoint(position,rotation,osg::Vec3(scale,scale,scale)));
            }
        }
        
        return animation;
    }
    return 0;
}

struct RotationPathData
{
    RotationPathData():
        time(0.0),
        scale(1.0f),
        azim(0.0f),
        elevation(0.0f) {}

    double time;
    osg::Vec3 pivot;
    osg::Vec3 position;
    float scale;
    float azim;
    float elevation;

    void addToPath(osg::AnimationPath* animation) const
    {
        osg::Quat Rx, Rz, rotation;

        Rx.makeRotate(osg::DegreesToRadians(elevation),1.0f,0.0f,0.0f);
        Rz.makeRotate(osg::DegreesToRadians(azim),0.0f,0.0f,1.0f);
        rotation = Rz * Rx; // note, I believe this is the wrong way round, but I had to put it in this order to fix the Quat properly.

        osg::Matrix SR = osg::Matrix::scale(scale,scale,scale)*
                         osg::Matrixf::rotate(rotation);

        osg::Matrix invSR;
        invSR.invert(SR);

        osg::Vec3 local_position = position + (invSR*pivot)*SR;

        animation->insert(time,osg::AnimationPath::ControlPoint(local_position,rotation,osg::Vec3(scale,scale,scale)));
    }
    
};
osg::AnimationPath* SlideShowConstructor::readRotationPath(const std::string& filename) const
{
    std::ifstream in(filename.c_str());
    if (!in.eof())
    {
        osg::AnimationPath* animation = new osg::AnimationPath;

        RotationPathData prevValue;
        bool first = true;
        while (!in.eof())
        {
            RotationPathData currValue;
            in >> currValue.time >> currValue.pivot.x() >> currValue.pivot.y() >> currValue.pivot.z() >> currValue.position.x() >> currValue.position.y() >> currValue.position.z() >> currValue.azim >> currValue.elevation >> currValue.scale;
            if(!in.eof())
            {
            
                if (!first)
                {
            
                    unsigned int num = 20;
                    float dr = 1.0f/(float)num;
                    float r=dr;
                    for(unsigned int i=0;
                        i<num;
                        ++i, r+=dr)
                    {
                        RotationPathData localValue;
                        localValue.time = currValue.time *r + prevValue.time * (1.0f-r);
                        localValue.pivot = currValue.pivot *r + prevValue.pivot * (1.0f-r);
                        localValue.position = currValue.position *r + prevValue.position * (1.0f-r);
                        localValue.scale = currValue.scale *r + prevValue.scale * (1.0f-r);
                        localValue.azim = currValue.azim *r + prevValue.azim * (1.0f-r);
                        localValue.elevation = currValue.elevation *r + prevValue.elevation * (1.0f-r);

                        localValue.addToPath(animation);
                    }
                }
                else
                {
                    currValue.addToPath(animation);
                }
                prevValue = currValue;
                first = false;
            }
            
        }
        
        return animation;
    }
    return 0;
}

osg::AnimationPathCallback* SlideShowConstructor::getAnimationPathCallback(const PositionData& positionData)
{
    if (!positionData.path.empty()) 
    {
        std::string absolute_animation_file_path = osgDB::findDataFile(positionData.path);
        if (!absolute_animation_file_path.empty())
        {        

            osg::AnimationPath* animation = 0;

            std::string extension = osgDB::getLowerCaseFileExtension(absolute_animation_file_path);
            if (osgDB::equalCaseInsensitive(extension,"pivot_path"))
            {
                animation = readPivotPath(absolute_animation_file_path);
            }
            else if (osgDB::equalCaseInsensitive(extension,"rotation_path"))
            {
                animation = readRotationPath(absolute_animation_file_path);
            }
            else if (osgDB::equalCaseInsensitive(extension,"path"))
            {            
                std::ifstream animation_filestream(absolute_animation_file_path.c_str());
                if (!animation_filestream.eof())
                {
                    animation = new osg::AnimationPath;
                    animation->read(animation_filestream);
                }
            }
            else
            {
                std::ifstream animation_filestream(absolute_animation_file_path.c_str());

                osgDB::Input fr;
                fr.attach(&animation_filestream);

                static osg::ref_ptr<osg::AnimationPath> s_path = new osg::AnimationPath;
                osg::ref_ptr<osg::Object> object = osgDB::readObjectFile(absolute_animation_file_path); // fr.readObjectOfType(*s_path);
                object = fr.readObject(); // fr.readObjectOfType(*s_path);
                if (object.valid())
                {
                    animation = dynamic_cast<osg::AnimationPath*>(object.get());
                }
            }
            
            if (animation)
            {
                if (positionData.frame==SlideShowConstructor::SLIDE)
                {
                    osg::AnimationPath::TimeControlPointMap& controlPoints = animation->getTimeControlPointMap();
                    for(osg::AnimationPath::TimeControlPointMap::iterator itr=controlPoints.begin();
                        itr!=controlPoints.end();
                        ++itr)
                    {
                        osg::AnimationPath::ControlPoint& cp = itr->second;
                        cp.setPosition(convertSlideToModel(cp.getPosition()+positionData.position));
                    }
                }

                animation->setLoopMode(positionData.path_loop_mode);

                osg::AnimationPathCallback* apc = new osg::AnimationPathCallback(animation);
                apc->setTimeOffset(positionData.path_time_offset);
                apc->setTimeMultiplier(positionData.path_time_multiplier);
                apc->setUseInverseMatrix(positionData.inverse_path);
                
                osg::notify(osg::INFO)<<"UseInverseMatrix "<<positionData.inverse_path<<std::endl;

                return apc;
                
            }
        }
    }
    return 0;
}



osg::Vec3 SlideShowConstructor::computePositionInModelCoords(const PositionData& positionData) const
{
    if (positionData.frame==SLIDE)
    {
        osg::notify(osg::INFO)<<"********* Scaling from slide coords to model coords"<<std::endl;
        return convertSlideToModel(positionData.position);
    }
    else
    {
        osg::notify(osg::INFO)<<"keeping original model coords"<<std::endl;
        return positionData.position;
    }
}

osg::Vec3 SlideShowConstructor::convertSlideToModel(const osg::Vec3& position) const
{
    return osg::Vec3(_slideOrigin+osg::Vec3(_slideWidth*position.x(),0.0f,_slideHeight*position.y()))*(1.0f-position.z());
}

osg::Vec3 SlideShowConstructor::convertModelToSlide(const osg::Vec3& position) const
{
    return osg::Vec3((position.x()*(_slideOrigin.y()/position.y())-_slideOrigin.x())/_slideWidth,
                     (position.z()*(_slideOrigin.y()/position.y())-_slideOrigin.z())/_slideHeight,
                     1.0f-position.y()/_slideOrigin.y());
}

void SlideShowConstructor::updatePositionFromInModelCoords(const osg::Vec3& vertex, PositionData& positionData) const
{
    if (positionData.frame==SLIDE)
    {
        positionData.position = convertModelToSlide(vertex);
    }
    else
    {
        positionData.position = vertex;
    }
}
