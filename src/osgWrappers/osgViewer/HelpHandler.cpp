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
#include <osgGA/GUIActionAdapter>
#include <osgGA/GUIEventAdapter>
#include <osgViewer/HelpHandler>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

BEGIN_OBJECT_REFLECTOR(osgViewer::HelpHandler)
	I_BaseType(osgGA::GUIEventHandler);
	I_ConstructorWithDefaults1(IN, osg::ApplicationUsage *, au, 0,
	                           ____HelpHandler__osg_ApplicationUsage_P1,
	                           "",
	                           "");
	I_Method1(void, setApplicationUsage, IN, osg::ApplicationUsage *, au,
	          __void__setApplicationUsage__osg_ApplicationUsage_P1,
	          "",
	          "");
	I_Method0(osg::ApplicationUsage *, getApplicationUsage,
	          __osg_ApplicationUsage_P1__getApplicationUsage,
	          "",
	          "");
	I_Method0(const osg::ApplicationUsage *, getApplicationUsage,
	          __C5_osg_ApplicationUsage_P1__getApplicationUsage,
	          "",
	          "");
	I_Method1(void, setKeyEventTogglesOnScreenHelp, IN, int, key,
	          __void__setKeyEventTogglesOnScreenHelp__int,
	          "",
	          "");
	I_Method0(int, getKeyEventTogglesOnScreenHelp,
	          __int__getKeyEventTogglesOnScreenHelp,
	          "",
	          "");
	I_Method2(bool, handle, IN, const osgGA::GUIEventAdapter &, ea, IN, osgGA::GUIActionAdapter &, aa,
	          __bool__handle__C5_osgGA_GUIEventAdapter_R1__osgGA_GUIActionAdapter_R1,
	          "deprecated, Handle events, return true if handled, false otherwise. ",
	          "");
	I_Method1(void, getUsage, IN, osg::ApplicationUsage &, usage,
	          __void__getUsage__osg_ApplicationUsage_R1,
	          "Get the keyboard and mouse usage of this manipulator. ",
	          "");
	I_SimpleProperty(osg::ApplicationUsage *, ApplicationUsage, 
	                 __osg_ApplicationUsage_P1__getApplicationUsage, 
	                 __void__setApplicationUsage__osg_ApplicationUsage_P1);
	I_SimpleProperty(int, KeyEventTogglesOnScreenHelp, 
	                 __int__getKeyEventTogglesOnScreenHelp, 
	                 __void__setKeyEventTogglesOnScreenHelp__int);
END_REFLECTOR

