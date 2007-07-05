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

#include <osg/ArgumentParser>
#include <osg/Camera>
#include <osg/FrameStamp>
#include <osg/GraphicsThread>
#include <osg/Timer>
#include <osgGA/EventQueue>
#include <osgViewer/CompositeViewer>
#include <osgViewer/View>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

TYPE_NAME_ALIAS(std::vector< osg::GraphicsContext * >, osgViewer::CompositeViewer::Contexts)

TYPE_NAME_ALIAS(std::vector< osgViewer::GraphicsWindow * >, osgViewer::CompositeViewer::Windows)

TYPE_NAME_ALIAS(std::vector< osgViewer::Scene * >, osgViewer::CompositeViewer::Scenes)

BEGIN_ENUM_REFLECTOR(osgViewer::CompositeViewer::ThreadingModel)
	I_DeclaringFile("osgViewer/CompositeViewer");
	I_EnumLabel(osgViewer::CompositeViewer::SingleThreaded);
	I_EnumLabel(osgViewer::CompositeViewer::ThreadPerContext);
	I_EnumLabel(osgViewer::CompositeViewer::ThreadPerCamera);
END_REFLECTOR

BEGIN_ENUM_REFLECTOR(osgViewer::CompositeViewer::BarrierPosition)
	I_DeclaringFile("osgViewer/CompositeViewer");
	I_EnumLabel(osgViewer::CompositeViewer::BeforeSwapBuffers);
	I_EnumLabel(osgViewer::CompositeViewer::AfterSwapBuffers);
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osgViewer::CompositeViewer)
	I_DeclaringFile("osgViewer/CompositeViewer");
	I_BaseType(osg::Referenced);
	I_Constructor0(____CompositeViewer,
	               "",
	               "");
	I_Constructor1(IN, osg::ArgumentParser &, arguments,
	               Properties::NON_EXPLICIT,
	               ____CompositeViewer__osg_ArgumentParser_R1,
	               "",
	               "");
	I_Method1(void, addView, IN, osgViewer::View *, view,
	          Properties::NON_VIRTUAL,
	          __void__addView__osgViewer_View_P1,
	          "",
	          "");
	I_Method1(void, removeView, IN, osgViewer::View *, view,
	          Properties::NON_VIRTUAL,
	          __void__removeView__osgViewer_View_P1,
	          "",
	          "");
	I_Method1(osgViewer::View *, getView, IN, unsigned, i,
	          Properties::NON_VIRTUAL,
	          __osgViewer_View_P1__getView__unsigned,
	          "",
	          "");
	I_Method1(const osgViewer::View *, getView, IN, unsigned, i,
	          Properties::NON_VIRTUAL,
	          __C5_osgViewer_View_P1__getView__unsigned,
	          "",
	          "");
	I_Method0(unsigned int, getNumViews,
	          Properties::NON_VIRTUAL,
	          __unsigned_int__getNumViews,
	          "",
	          "");
	I_Method0(bool, isRealized,
	          Properties::NON_VIRTUAL,
	          __bool__isRealized,
	          "Get whether at least of one of this viewers windows are realized. ",
	          "");
	I_Method0(void, realize,
	          Properties::NON_VIRTUAL,
	          __void__realize,
	          "set up windows and associated threads. ",
	          "");
	I_Method1(void, setDone, IN, bool, done,
	          Properties::NON_VIRTUAL,
	          __void__setDone__bool,
	          "",
	          "");
	I_Method0(bool, done,
	          Properties::NON_VIRTUAL,
	          __bool__done,
	          "",
	          "");
	I_Method1(void, setStartTick, IN, osg::Timer_t, tick,
	          Properties::NON_VIRTUAL,
	          __void__setStartTick__osg_Timer_t,
	          "",
	          "");
	I_Method0(osg::Timer_t, getStartTick,
	          Properties::NON_VIRTUAL,
	          __osg_Timer_t__getStartTick,
	          "",
	          "");
	I_MethodWithDefaults1(void, setReferenceTime, IN, double, time, 0.0,
	                      Properties::NON_VIRTUAL,
	                      __void__setReferenceTime__double,
	                      "",
	                      "");
	I_Method0(osg::FrameStamp *, getFrameStamp,
	          Properties::NON_VIRTUAL,
	          __osg_FrameStamp_P1__getFrameStamp,
	          "",
	          "");
	I_Method0(const osg::FrameStamp *, getFrameStamp,
	          Properties::NON_VIRTUAL,
	          __C5_osg_FrameStamp_P1__getFrameStamp,
	          "",
	          "");
	I_Method1(void, setThreadingModel, IN, osgViewer::CompositeViewer::ThreadingModel, threadingModel,
	          Properties::NON_VIRTUAL,
	          __void__setThreadingModel__ThreadingModel,
	          "Set the threading model the rendering traversals will use. ",
	          "");
	I_Method0(osgViewer::CompositeViewer::ThreadingModel, getThreadingModel,
	          Properties::NON_VIRTUAL,
	          __ThreadingModel__getThreadingModel,
	          "Get the threading model the rendering traversals will use. ",
	          "");
	I_Method1(void, setEndBarrierPosition, IN, osgViewer::CompositeViewer::BarrierPosition, bp,
	          Properties::NON_VIRTUAL,
	          __void__setEndBarrierPosition__BarrierPosition,
	          "Set the position of the end barrier. ",
	          "AfterSwapBuffers will may result is slightly higher framerates, by may lead to inconcistent swapping between different windows. BeforeSwapBuffers may lead to slightly lower framerate, but improve consistency in timing of swap buffers, especially important if you are likely to consistently break frame. ");
	I_Method0(osgViewer::CompositeViewer::BarrierPosition, getEndBarrierPosition,
	          Properties::NON_VIRTUAL,
	          __BarrierPosition__getEndBarrierPosition,
	          "Get the end barrier position. ",
	          "");
	I_Method1(void, setEventQueue, IN, osgGA::EventQueue *, eventQueue,
	          Properties::NON_VIRTUAL,
	          __void__setEventQueue__osgGA_EventQueue_P1,
	          "",
	          "");
	I_Method0(osgGA::EventQueue *, getEventQueue,
	          Properties::NON_VIRTUAL,
	          __osgGA_EventQueue_P1__getEventQueue,
	          "",
	          "");
	I_Method0(const osgGA::EventQueue *, getEventQueue,
	          Properties::NON_VIRTUAL,
	          __C5_osgGA_EventQueue_P1__getEventQueue,
	          "",
	          "");
	I_Method1(void, setKeyEventSetsDone, IN, int, key,
	          Properties::NON_VIRTUAL,
	          __void__setKeyEventSetsDone__int,
	          "Set the key event that the viewer checks on each frame to see if the viewer's done flag should be set to signal end of viewers main loop. ",
	          "Default value is Escape (osgGA::GUIEVentAdapter::KEY_Escape). Setting to 0 switches off the feature. ");
	I_Method0(int, getKeyEventSetsDone,
	          Properties::NON_VIRTUAL,
	          __int__getKeyEventSetsDone,
	          "get the key event that the viewer checks on each frame to see if the viewer's done flag. ",
	          "");
	I_Method1(void, setQuitEventSetsDone, IN, bool, flag,
	          Properties::NON_VIRTUAL,
	          __void__setQuitEventSetsDone__bool,
	          "if the flag is true, the viewer set its done flag when a QUIT_APPLICATION is received, false disables this feature ",
	          "");
	I_Method0(bool, getQuitEventSetsDone,
	          Properties::NON_VIRTUAL,
	          __bool__getQuitEventSetsDone,
	          "",
	          "true if the viewer respond to the QUIT_APPLICATION-event  ");
	I_Method0(int, run,
	          Properties::VIRTUAL,
	          __int__run,
	          "Execute a main frame loop. ",
	          "Equivialant to while (!viewer.done()) viewer.frame(); Also calls realize() if the viewer is not already realized, and installs trackball manipulator if one is not already assigned.");
	I_MethodWithDefaults1(void, frame, IN, double, simulationTime, USE_REFERENCE_TIME,
	                      Properties::VIRTUAL,
	                      __void__frame__double,
	                      "Render a complete new frame. ",
	                      "Calls advance(), eventTraversal(), updateTraversal(), renderingTraversals(). ");
	I_MethodWithDefaults1(void, advance, IN, double, simulationTime, USE_REFERENCE_TIME,
	                      Properties::VIRTUAL,
	                      __void__advance__double,
	                      "",
	                      "");
	I_Method0(void, eventTraversal,
	          Properties::VIRTUAL,
	          __void__eventTraversal,
	          "",
	          "");
	I_Method0(void, updateTraversal,
	          Properties::VIRTUAL,
	          __void__updateTraversal,
	          "",
	          "");
	I_Method0(void, renderingTraversals,
	          Properties::VIRTUAL,
	          __void__renderingTraversals,
	          "",
	          "");
	I_Method1(void, setCameraWithFocus, IN, osg::Camera *, camera,
	          Properties::NON_VIRTUAL,
	          __void__setCameraWithFocus__osg_Camera_P1,
	          "",
	          "");
	I_Method0(osg::Camera *, getCameraWithFocus,
	          Properties::NON_VIRTUAL,
	          __osg_Camera_P1__getCameraWithFocus,
	          "",
	          "");
	I_Method0(const osg::Camera *, getCameraWithFocus,
	          Properties::NON_VIRTUAL,
	          __C5_osg_Camera_P1__getCameraWithFocus,
	          "",
	          "");
	I_Method0(osgViewer::View *, getViewWithFocus,
	          Properties::NON_VIRTUAL,
	          __osgViewer_View_P1__getViewWithFocus,
	          "",
	          "");
	I_Method0(const osgViewer::View *, getViewWithFocus,
	          Properties::NON_VIRTUAL,
	          __C5_osgViewer_View_P1__getViewWithFocus,
	          "",
	          "");
	I_MethodWithDefaults2(void, getContexts, IN, osgViewer::CompositeViewer::Contexts &, contexts, , IN, bool, onlyValid, true,
	                      Properties::NON_VIRTUAL,
	                      __void__getContexts__Contexts_R1__bool,
	                      "",
	                      "");
	I_MethodWithDefaults2(void, getWindows, IN, osgViewer::CompositeViewer::Windows &, windows, , IN, bool, onlyValid, true,
	                      Properties::NON_VIRTUAL,
	                      __void__getWindows__Windows_R1__bool,
	                      "",
	                      "");
	I_MethodWithDefaults2(void, getScenes, IN, osgViewer::CompositeViewer::Scenes &, scenes, , IN, bool, onlyValid, true,
	                      Properties::NON_VIRTUAL,
	                      __void__getScenes__Scenes_R1__bool,
	                      "",
	                      "");
	I_Method1(void, setRealizeOperation, IN, osg::Operation *, op,
	          Properties::NON_VIRTUAL,
	          __void__setRealizeOperation__osg_Operation_P1,
	          "Set the graphics operation to call on realization of the viewers graphics windows. ",
	          "");
	I_Method0(osg::Operation *, getRealizeOperation,
	          Properties::NON_VIRTUAL,
	          __osg_Operation_P1__getRealizeOperation,
	          "Get the graphics operation to call on realization of the viewers graphics windows. ",
	          "");
	I_Method0(bool, areThreadsRunning,
	          Properties::NON_VIRTUAL,
	          __bool__areThreadsRunning,
	          "Return true if viewer threads are running. ",
	          "");
	I_Method0(void, stopThreading,
	          Properties::NON_VIRTUAL,
	          __void__stopThreading,
	          "Stop any threads begin run by viewer. ",
	          "");
	I_Method0(void, startThreading,
	          Properties::NON_VIRTUAL,
	          __void__startThreading,
	          "Start any threads required by the viewer, as per viewers ThreadingModel. ",
	          "");
	I_Method0(void, setUpRenderingSupport,
	          Properties::NON_VIRTUAL,
	          __void__setUpRenderingSupport,
	          "Set up the Operations to render the various viewer cameras on the viewers graphics windows. ",
	          "");
	I_ProtectedMethod0(void, constructorInit,
	                   Properties::NON_VIRTUAL,
	                   Properties::NON_CONST,
	                   __void__constructorInit,
	                   "",
	                   "");
	I_ProtectedMethod0(void, init,
	                   Properties::NON_VIRTUAL,
	                   Properties::NON_CONST,
	                   __void__init,
	                   "",
	                   "");
	I_ProtectedMethod0(void, checkWindowStatus,
	                   Properties::NON_VIRTUAL,
	                   Properties::NON_CONST,
	                   __void__checkWindowStatus,
	                   "",
	                   "");
	I_ProtectedMethod0(unsigned int, computeNumberOfThreadsIncludingMainRequired,
	                   Properties::NON_VIRTUAL,
	                   Properties::NON_CONST,
	                   __unsigned_int__computeNumberOfThreadsIncludingMainRequired,
	                   "",
	                   "");
	I_SimpleProperty(osg::Camera *, CameraWithFocus, 
	                 __osg_Camera_P1__getCameraWithFocus, 
	                 __void__setCameraWithFocus__osg_Camera_P1);
	I_SimpleProperty(bool, Done, 
	                 0, 
	                 __void__setDone__bool);
	I_SimpleProperty(osgViewer::CompositeViewer::BarrierPosition, EndBarrierPosition, 
	                 __BarrierPosition__getEndBarrierPosition, 
	                 __void__setEndBarrierPosition__BarrierPosition);
	I_SimpleProperty(osgGA::EventQueue *, EventQueue, 
	                 __osgGA_EventQueue_P1__getEventQueue, 
	                 __void__setEventQueue__osgGA_EventQueue_P1);
	I_SimpleProperty(osg::FrameStamp *, FrameStamp, 
	                 __osg_FrameStamp_P1__getFrameStamp, 
	                 0);
	I_SimpleProperty(int, KeyEventSetsDone, 
	                 __int__getKeyEventSetsDone, 
	                 __void__setKeyEventSetsDone__int);
	I_SimpleProperty(bool, QuitEventSetsDone, 
	                 __bool__getQuitEventSetsDone, 
	                 __void__setQuitEventSetsDone__bool);
	I_SimpleProperty(osg::Operation *, RealizeOperation, 
	                 __osg_Operation_P1__getRealizeOperation, 
	                 __void__setRealizeOperation__osg_Operation_P1);
	I_SimpleProperty(double, ReferenceTime, 
	                 0, 
	                 __void__setReferenceTime__double);
	I_SimpleProperty(osg::Timer_t, StartTick, 
	                 __osg_Timer_t__getStartTick, 
	                 __void__setStartTick__osg_Timer_t);
	I_SimpleProperty(osgViewer::CompositeViewer::ThreadingModel, ThreadingModel, 
	                 __ThreadingModel__getThreadingModel, 
	                 __void__setThreadingModel__ThreadingModel);
	I_ArrayProperty(osgViewer::View *, View, 
	                __osgViewer_View_P1__getView__unsigned, 
	                0, 
	                __unsigned_int__getNumViews, 
	                __void__addView__osgViewer_View_P1, 
	                0, 
	                0);
	I_SimpleProperty(osgViewer::View *, ViewWithFocus, 
	                 __osgViewer_View_P1__getViewWithFocus, 
	                 0);
END_REFLECTOR

STD_VECTOR_REFLECTOR(std::vector< osgViewer::GraphicsWindow * >)

STD_VECTOR_REFLECTOR(std::vector< osgViewer::Scene * >)

