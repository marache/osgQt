#include <osg/AutoTransform>

#include <osgDB/Registry>
#include <osgDB/Input>
#include <osgDB/Output>

using namespace osg;
using namespace osgDB;

// forward declare functions to use later.
bool AutoTransform_readLocalData(Object& obj, Input& fr);
bool AutoTransform_writeLocalData(const Object& obj, Output& fw);

// register the read and write functions with the osgDB::Registry.
RegisterDotOsgWrapperProxy g_AutoTransformProxy
(
    new osg::AutoTransform,
    "AutoTransform",
    "Object Node Transform AutoTransform Group",
    &AutoTransform_readLocalData,
    &AutoTransform_writeLocalData,
    DotOsgWrapper::READ_AND_WRITE
);

bool AutoTransform_readLocalData(Object& obj, Input& fr)
{
    bool iteratorAdvanced = false;

    AutoTransform& transform = static_cast<AutoTransform&>(obj);

    if (fr.matchSequence("position %f %f %f"))
    {
        osg::Vec3 pos;
        fr[1].getFloat(pos[0]);
        fr[2].getFloat(pos[1]);
        fr[3].getFloat(pos[2]);
        
        transform.setPosition(pos);

        fr += 4;
        iteratorAdvanced = true;
    }

    if (fr.matchSequence("rotation %f %f %f %f"))
    {
        osg::Quat att;
        fr[1].getFloat(att[0]);
        fr[2].getFloat(att[1]);
        fr[3].getFloat(att[2]);
        fr[4].getFloat(att[3]);
        
        transform.setRotation(att);
        
        fr += 5;
        iteratorAdvanced = true;
    }

    if (fr.matchSequence("scale %f %f %f"))
    {
        osg::Vec3 scale;
        fr[1].getFloat(scale[0]);
        fr[2].getFloat(scale[1]);
        fr[3].getFloat(scale[2]);
        
        transform.setScale(scale);

        fr += 4;
        iteratorAdvanced = true;
    }

    if (fr.matchSequence("pivotPoint %f %f %f"))
    {
        osg::Vec3 pivot;
        fr[1].getFloat(pivot[0]);
        fr[2].getFloat(pivot[1]);
        fr[3].getFloat(pivot[2]);
        
        transform.setPivotPoint(pivot);
        
        fr += 4;
        iteratorAdvanced = true;
    }

	if (fr.matchSequence("autoUpdateEyeMovementTolerance %f"))
	{
		float f;
		fr[1].getFloat(f);
		transform.setAutoUpdateEyeMovementTolerance(f);
		fr += 2;
		iteratorAdvanced = true;
	}

	if (fr.matchSequence("autoRotateToScreen %w"))
	{
		std::string w(fr[1].getStr());
		transform.setAutoRotateToScreen(w == "TRUE");
		fr += 2;
		iteratorAdvanced = true;
	}

	if (fr.matchSequence("autoScaleToScreen %w"))
	{
		std::string w(fr[1].getStr());
		transform.setAutoScaleToScreen(w == "TRUE");
		fr += 2;
		iteratorAdvanced = true;
	}

    return iteratorAdvanced;
}


bool AutoTransform_writeLocalData(const Object& obj, Output& fw)
{
    const AutoTransform& transform = static_cast<const AutoTransform&>(obj);

    fw.indent()<<"position "<<transform.getPosition()<<std::endl;
    fw.indent()<<"rotation "<<transform.getRotation()<<std::endl;
    fw.indent()<<"scale "<<transform.getScale()<<std::endl;
    fw.indent()<<"pivotPoint "<<transform.getPivotPoint()<<std::endl;
	fw.indent()<<"autoUpdateEyeMovementTolerance "<<transform.getAutoUpdateEyeMovementTolerance()<<std::endl;
	fw.indent()<<"autoRotateToScreen "<<(transform.getAutoRotateToScreen()?"TRUE":"FALSE")<<std::endl;
	fw.indent()<<"autoScaleToScreen "<<(transform.getAutoScaleToScreen()?"TRUE":"FALSE")<<std::endl;

    return true;
}
