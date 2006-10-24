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

#include <osg/ApplicationUsage>
#include <osg/PolygonMode>
#include <osg/StateSet>
#include <osgGA/GUIActionAdapter>
#include <osgGA/GUIEventAdapter>
#include <osgGA/StateSetManipulator>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

BEGIN_OBJECT_REFLECTOR(osgGA::StateSetManipulator)
	I_BaseType(osgGA::GUIEventHandler);
	I_Constructor0(____StateSetManipulator,
	               "",
	               "");
	I_Method0(const char *, className,
	          __C5_char_P1__className,
	          "return the name of the object's class type. ",
	          "Must be defined by derived classes. ");
	I_Method1(void, setStateSet, IN, osg::StateSet *, x,
	          __void__setStateSet__osg_StateSet_P1,
	          "attach a STATESTATE to the manipulator to be used for specifying view. ",
	          "");
	I_Method0(osg::StateSet *, getStateSet,
	          __osg_StateSet_P1__getStateSet,
	          "get the attached a STATESTATE. ",
	          "");
	I_Method0(const osg::StateSet *, getStateSet,
	          __C5_osg_StateSet_P1__getStateSet,
	          "get the attached a STATESTATE. ",
	          "");
	I_Method2(bool, handle, IN, const osgGA::GUIEventAdapter &, ea, IN, osgGA::GUIActionAdapter &, us,
	          __bool__handle__C5_GUIEventAdapter_R1__GUIActionAdapter_R1,
	          "Handle events, return true if handled, false otherwise. ",
	          "");
	I_Method1(void, getUsage, IN, osg::ApplicationUsage &, usage,
	          __void__getUsage__osg_ApplicationUsage_R1,
	          "Get the keyboard and mouse usage of this manipulator. ",
	          "");
	I_Method1(void, setMaximumNumOfTextureUnits, IN, unsigned int, i,
	          __void__setMaximumNumOfTextureUnits__unsigned_int,
	          "",
	          "");
	I_Method0(unsigned int, getMaximumNumOfTextureUnits,
	          __unsigned_int__getMaximumNumOfTextureUnits,
	          "",
	          "");
	I_Method1(void, setBackfaceEnabled, IN, bool, newbackface,
	          __void__setBackfaceEnabled__bool,
	          "",
	          "");
	I_Method0(bool, getBackfaceEnabled,
	          __bool__getBackfaceEnabled,
	          "",
	          "");
	I_Method1(void, setLightingEnabled, IN, bool, newlighting,
	          __void__setLightingEnabled__bool,
	          "",
	          "");
	I_Method0(bool, getLightingEnabled,
	          __bool__getLightingEnabled,
	          "",
	          "");
	I_Method1(void, setTextureEnabled, IN, bool, newtexture,
	          __void__setTextureEnabled__bool,
	          "",
	          "");
	I_Method0(bool, getTextureEnabled,
	          __bool__getTextureEnabled,
	          "",
	          "");
	I_Method1(void, setPolygonMode, IN, osg::PolygonMode::Mode, newpolygonmode,
	          __void__setPolygonMode__osg_PolygonMode_Mode,
	          "",
	          "");
	I_Method0(osg::PolygonMode::Mode, getPolygonMode,
	          __osg_PolygonMode_Mode__getPolygonMode,
	          "",
	          "");
	I_Method0(void, cyclePolygonMode,
	          __void__cyclePolygonMode,
	          "",
	          "");
	I_SimpleProperty(bool, BackfaceEnabled, 
	                 __bool__getBackfaceEnabled, 
	                 __void__setBackfaceEnabled__bool);
	I_SimpleProperty(bool, LightingEnabled, 
	                 __bool__getLightingEnabled, 
	                 __void__setLightingEnabled__bool);
	I_SimpleProperty(unsigned int, MaximumNumOfTextureUnits, 
	                 __unsigned_int__getMaximumNumOfTextureUnits, 
	                 __void__setMaximumNumOfTextureUnits__unsigned_int);
	I_SimpleProperty(osg::PolygonMode::Mode, PolygonMode, 
	                 __osg_PolygonMode_Mode__getPolygonMode, 
	                 __void__setPolygonMode__osg_PolygonMode_Mode);
	I_SimpleProperty(osg::StateSet *, StateSet, 
	                 __osg_StateSet_P1__getStateSet, 
	                 __void__setStateSet__osg_StateSet_P1);
	I_SimpleProperty(bool, TextureEnabled, 
	                 __bool__getTextureEnabled, 
	                 __void__setTextureEnabled__bool);
END_REFLECTOR

