#include <osg/Geode>
#include <osg/ProceduralGeometry>
#include <osg/Material>
#include <osg/Texture2D>

#include <osgGA/TrackballManipulator>

#include <osgGLUT/Viewer>
#include <osgGLUT/glut>

#include <osgDB/ReadFile>

#include <osg/Math>

osg::Geode* createShapes()
{
    osg::Geode* geode = osgNew osg::Geode();

    // ---------------------------------------
    // Set up a StateSet to make the cube red
    // ---------------------------------------
    osg::StateSet* stateset = osgNew osg::StateSet();

   
    osg::Image* image = osgDB::readImageFile("lz.rgb");
    if (image)
    {
	osg::Texture2D* texture = osgNew osg::Texture2D;
	texture->setImage(image);
	stateset->setTextureAttributeAndModes(0,texture,osg::StateAttribute::ON);
    }
    
    geode->setStateSet( stateset );
    
    float radius = 0.8f;
    float height = 1.0f;
    
    geode->addDrawable(new osg::ProceduralGeometry(osgNew osg::Sphere(osg::Vec3(0.0f,0.0f,0.0f),radius)));
    geode->addDrawable(new osg::ProceduralGeometry(osgNew osg::Box(osg::Vec3(2.0f,0.0f,0.0f),2*radius)));
    geode->addDrawable(new osg::ProceduralGeometry(osgNew osg::Cone(osg::Vec3(4.0f,0.0f,0.0f),radius,height)));
    geode->addDrawable(new osg::ProceduralGeometry(osgNew osg::Cylinder(osg::Vec3(6.0f,0.0f,0.0f),radius,height)));
    
    return geode;
}

int main( int argc, char **argv )
{

    glutInit( &argc, argv );

    // create the commandline args.
    std::vector<std::string> commandLine;
    for(int i=1;i<argc;++i) commandLine.push_back(argv[i]);

    // create the viewer and the model to it.
    osgGLUT::Viewer viewer;

    viewer.setWindowTitle(argv[0]);

 
    // configure the viewer from the commandline arguments, and eat any
    // parameters that have been matched.
    viewer.readCommandLine(commandLine);
    
    osg::Node* node = createShapes();

    // add model to viewer.
    viewer.addViewport( node );

    // register trackball maniupulators.
    viewer.registerCameraManipulator(osgNew osgGA::TrackballManipulator);
    
    viewer.open();

    viewer.run();

    return 0;
}
