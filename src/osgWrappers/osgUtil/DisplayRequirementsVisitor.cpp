// ***************************************************************************
//
//   Generated automatically by genwrapper.
//   Please DO NOT EDIT this file!
//
// ***************************************************************************

#include <osgIntrospection/ReflectionMacros>
#include <osgIntrospection/TypedMethodInfo>
#include <osgIntrospection/StaticMethodInfo>
#include <osgIntrospection/Attributes>

#include <osg/DisplaySettings>
#include <osg/Geode>
#include <osg/Node>
#include <osg/StateSet>
#include <osgUtil/DisplayRequirementsVisitor>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

BEGIN_OBJECT_REFLECTOR(osgUtil::DisplayRequirementsVisitor)
	I_BaseType(osg::NodeVisitor);
	I_Constructor0(____DisplayRequirementsVisitor,
	               "Default to traversing all children, and requiresDoubleBuffer, requiresRGB and requiresDepthBuffer to true and with alpha and stencil off. ",
	               "");
	I_Method1(void, setDisplaySettings, IN, osg::DisplaySettings *, ds,
	          __void__setDisplaySettings__osg_DisplaySettings_P1,
	          "Set the DisplaySettings. ",
	          "");
	I_Method0(const osg::DisplaySettings *, getDisplaySettings,
	          __C5_osg_DisplaySettings_P1__getDisplaySettings,
	          "Get the DisplaySettings. ",
	          "");
	I_Method1(void, applyStateSet, IN, osg::StateSet &, stateset,
	          __void__applyStateSet__osg_StateSet_R1,
	          "",
	          "");
	I_Method1(void, apply, IN, osg::Node &, node,
	          __void__apply__osg_Node_R1,
	          "",
	          "");
	I_Method1(void, apply, IN, osg::Geode &, geode,
	          __void__apply__osg_Geode_R1,
	          "",
	          "");
	I_SimpleProperty(osg::DisplaySettings *, DisplaySettings, 
	                 0, 
	                 __void__setDisplaySettings__osg_DisplaySettings_P1);
END_REFLECTOR

