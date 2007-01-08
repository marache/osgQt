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

#include <osg/Node>
#include <osgGA/EventQueue>
#include <osgGA/GUIEventHandler>
#include <osgGA/MatrixManipulator>
#include <osgViewer/View>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

TYPE_NAME_ALIAS(std::list< osg::ref_ptr< osgGA::GUIEventHandler > >, osgViewer::View::EventHandlers);

BEGIN_OBJECT_REFLECTOR(osgViewer::View)
	I_BaseType(osg::View);
	I_BaseType(osgGA::GUIActionAdapter);
	I_Constructor0(____View,
	               "",
	               "");
	I_Method1(void, setSceneData, IN, osg::Node *, node,
	          __void__setSceneData__osg_Node_P1,
	          "",
	          "");
	I_Method0(osg::Node *, getSceneData,
	          __osg_Node_P1__getSceneData,
	          "",
	          "");
	I_Method0(const osg::Node *, getSceneData,
	          __C5_osg_Node_P1__getSceneData,
	          "",
	          "");
	I_Method1(void, setEventQueue, IN, osgGA::EventQueue *, eventQueue,
	          __void__setEventQueue__osgGA_EventQueue_P1,
	          "",
	          "");
	I_Method0(osgGA::EventQueue *, getEventQueue,
	          __osgGA_EventQueue_P1__getEventQueue,
	          "",
	          "");
	I_Method0(const osgGA::EventQueue *, getEventQueue,
	          __C5_osgGA_EventQueue_P1__getEventQueue,
	          "",
	          "");
	I_Method1(void, setCameraManipulator, IN, osgGA::MatrixManipulator *, manipulator,
	          __void__setCameraManipulator__osgGA_MatrixManipulator_P1,
	          "",
	          "");
	I_Method0(osgGA::MatrixManipulator *, getCameraManipulator,
	          __osgGA_MatrixManipulator_P1__getCameraManipulator,
	          "",
	          "");
	I_Method0(const osgGA::MatrixManipulator *, getCameraManipulator,
	          __C5_osgGA_MatrixManipulator_P1__getCameraManipulator,
	          "",
	          "");
	I_Method1(void, addEventHandler, IN, osgGA::GUIEventHandler *, eventHandler,
	          __void__addEventHandler__osgGA_GUIEventHandler_P1,
	          "",
	          "");
	I_Method0(osgViewer::View::EventHandlers &, getEventHandlers,
	          __EventHandlers_R1__getEventHandlers,
	          "",
	          "");
	I_Method0(const osgViewer::View::EventHandlers &, getEventHandlers,
	          __C5_EventHandlers_R1__getEventHandlers,
	          "",
	          "");
	I_Method0(void, setUpViewAcrossAllScreens,
	          __void__setUpViewAcrossAllScreens,
	          "Convinience method for creating slave Cameras and associated GraphicsWindows across all screens. ",
	          "");
	I_MethodWithDefaults1(void, setUpViewOnSingleScreen, IN, unsigned int, screenNum, 0,
	                      __void__setUpViewOnSingleScreen__unsigned_int,
	                      "Convinience method for a single Camara associated with a single full screen GraphicsWindow. ",
	                      "");
	I_Method0(void, requestRedraw,
	          __void__requestRedraw,
	          "requestRedraw() requests a single redraw. ",
	          "");
	I_MethodWithDefaults1(void, requestContinuousUpdate, IN, bool, needed, true,
	                      __void__requestContinuousUpdate__bool,
	                      "requestContinousUpdate(bool) is for en/disabling a throw or idle callback to be requested by a GUIEventHandler (typically a MatrixManipulator, though other GUIEventHandler's may also provide functionality). ",
	                      "GUI toolkits can respond to this immediately by registering an idle/timed callback, or can delay setting the callback and update at their own leisure.");
	I_Method2(void, requestWarpPointer, IN, float, x, IN, float, y,
	          __void__requestWarpPointer__float__float,
	          "requestWarpPointer(int,int) is requesting a repositioning of the mouse pointer to a specified x,y location on the window. ",
	          "This is used by some camera manipulators to initialise the mouse pointer when mouse position relative to a controls neutral mouse position is required, i.e when mimicking a aircrafts joystick.");
	I_Method0(void, assignSceneDataToCameras,
	          __void__assignSceneDataToCameras,
	          "",
	          "");
	I_SimpleProperty(osgGA::MatrixManipulator *, CameraManipulator, 
	                 __osgGA_MatrixManipulator_P1__getCameraManipulator, 
	                 __void__setCameraManipulator__osgGA_MatrixManipulator_P1);
	I_SimpleProperty(osgViewer::View::EventHandlers &, EventHandlers, 
	                 __EventHandlers_R1__getEventHandlers, 
	                 0);
	I_SimpleProperty(osgGA::EventQueue *, EventQueue, 
	                 __osgGA_EventQueue_P1__getEventQueue, 
	                 __void__setEventQueue__osgGA_EventQueue_P1);
	I_SimpleProperty(osg::Node *, SceneData, 
	                 __osg_Node_P1__getSceneData, 
	                 __void__setSceneData__osg_Node_P1);
	I_SimpleProperty(unsigned int, UpViewOnSingleScreen, 
	                 0, 
	                 __void__setUpViewOnSingleScreen__unsigned_int);
END_REFLECTOR

