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
#include <osg/ArgumentParser>
#include <osg/Camera>
#include <osg/FrameStamp>
#include <osg/GraphicsThread>
#include <osg/Node>
#include <osg/Timer>
#include <osgViewer/GraphicsWindow>
#include <osgViewer/Viewer>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

TYPE_NAME_ALIAS(std::vector< osg::GraphicsContext * >, osgViewer::Viewer::Contexts)

TYPE_NAME_ALIAS(std::vector< osgViewer::GraphicsWindow * >, osgViewer::Viewer::Windows)

TYPE_NAME_ALIAS(std::vector< osg::Camera * >, osgViewer::Viewer::Cameras)

TYPE_NAME_ALIAS(std::vector< OpenThreads::Thread * >, osgViewer::Viewer::Threads)

TYPE_NAME_ALIAS(std::vector< osg::OperationsThread * >, osgViewer::Viewer::OperationsThreads)

BEGIN_ENUM_REFLECTOR(osgViewer::Viewer::ThreadingModel)
	I_EnumLabel(osgViewer::Viewer::SingleThreaded);
	I_EnumLabel(osgViewer::Viewer::CullDrawThreadPerContext);
	I_EnumLabel(osgViewer::Viewer::DrawThreadPerContext);
	I_EnumLabel(osgViewer::Viewer::CullThreadPerCameraDrawThreadPerContext);
	I_EnumLabel(osgViewer::Viewer::AutomaticSelection);
END_REFLECTOR

BEGIN_ENUM_REFLECTOR(osgViewer::Viewer::BarrierPosition)
	I_EnumLabel(osgViewer::Viewer::BeforeSwapBuffers);
	I_EnumLabel(osgViewer::Viewer::AfterSwapBuffers);
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osgViewer::Viewer)
	I_BaseType(osgViewer::View);
	I_Constructor0(____Viewer,
	               "",
	               "");
	I_Constructor1(IN, osg::ArgumentParser &, arguments,
	               Properties::NON_EXPLICIT,
	               ____Viewer__osg_ArgumentParser_R1,
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
	I_Method1(void, setSceneData, IN, osg::Node *, node,
	          Properties::VIRTUAL,
	          __void__setSceneData__osg_Node_P1,
	          "Set the sene graph data that viewer with view. ",
	          "");
	I_Method4(osgViewer::GraphicsWindowEmbedded *, setUpViewerAsEmbeddedInWindow, IN, int, x, IN, int, y, IN, int, width, IN, int, height,
	          Properties::VIRTUAL,
	          __GraphicsWindowEmbedded_P1__setUpViewerAsEmbeddedInWindow__int__int__int__int,
	          "Convenience method for setting up the viewer so it can be used embedded in an external managed window. ",
	          "Returns the GraphicsWindowEmbedded that can be used by applications to pass in events to the viewer. ");
	I_Method1(void, setThreadingModel, IN, osgViewer::Viewer::ThreadingModel, threadingModel,
	          Properties::NON_VIRTUAL,
	          __void__setThreadingModel__ThreadingModel,
	          "Set the threading model the rendering traversals will use. ",
	          "");
	I_Method0(osgViewer::Viewer::ThreadingModel, getThreadingModel,
	          Properties::NON_VIRTUAL,
	          __ThreadingModel__getThreadingModel,
	          "Get the threading model the rendering traversals will use. ",
	          "");
	I_Method1(void, setUseMainThreadForRenderingTraversals, IN, bool, flag,
	          Properties::NON_VIRTUAL,
	          __void__setUseMainThreadForRenderingTraversals__bool,
	          "Set whether the main thread, calling frame(), should be used for the rendering traversals. ",
	          "");
	I_Method0(bool, getUseMainThreadForRenderingTraversals,
	          Properties::NON_VIRTUAL,
	          __bool__getUseMainThreadForRenderingTraversals,
	          "Get whether the main thread, calling frame(), should be used for the rendering traversals. ",
	          "");
	I_Method0(osgViewer::Viewer::ThreadingModel, suggestBestThreadingModel,
	          Properties::NON_VIRTUAL,
	          __ThreadingModel__suggestBestThreadingModel,
	          "Let the viewer suggest the best threading model for the viewers camera/window setup and the hardware available. ",
	          "");
	I_Method1(void, setEndBarrierPosition, IN, osgViewer::Viewer::BarrierPosition, bp,
	          Properties::NON_VIRTUAL,
	          __void__setEndBarrierPosition__BarrierPosition,
	          "Set the position of the end barrier. ",
	          "AfterSwapBuffers will may result is slightly higher framerates, by may lead to inconcistent swapping between different windows. BeforeSwapBuffers may lead to slightly lower framerate, but improve consistency in timing of swap buffers, especially important if you are likely to consistently break frame. ");
	I_Method0(osgViewer::Viewer::BarrierPosition, getEndBarrierPosition,
	          Properties::NON_VIRTUAL,
	          __BarrierPosition__getEndBarrierPosition,
	          "Get the end barrier position. ",
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
	I_MethodWithDefaults2(void, getContexts, IN, osgViewer::Viewer::Contexts &, contexts, , IN, bool, onlyValid, true,
	                      Properties::NON_VIRTUAL,
	                      __void__getContexts__Contexts_R1__bool,
	                      "",
	                      "");
	I_MethodWithDefaults2(void, getWindows, IN, osgViewer::Viewer::Windows &, windows, , IN, bool, onlyValid, true,
	                      Properties::NON_VIRTUAL,
	                      __void__getWindows__Windows_R1__bool,
	                      "",
	                      "");
	I_MethodWithDefaults2(void, getCameras, IN, osgViewer::Viewer::Cameras &, cameras, , IN, bool, onlyActive, true,
	                      Properties::NON_VIRTUAL,
	                      __void__getCameras__Cameras_R1__bool,
	                      "",
	                      "");
	I_MethodWithDefaults2(void, getAllThreads, IN, osgViewer::Viewer::Threads &, threads, , IN, bool, onlyActive, true,
	                      Properties::NON_VIRTUAL,
	                      __void__getAllThreads__Threads_R1__bool,
	                      "",
	                      "");
	I_MethodWithDefaults2(void, getOperationsThreads, IN, osgViewer::Viewer::OperationsThreads &, threads, , IN, bool, onlyActive, true,
	                      Properties::NON_VIRTUAL,
	                      __void__getOperationsThreads__OperationsThreads_R1__bool,
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
	I_Method0(void, setUpThreading,
	          Properties::NON_VIRTUAL,
	          __void__setUpThreading,
	          "Set up the threading and processor affinity as per the viewers threading model. ",
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
	          "Start any threads required by the viewer. ",
	          "");
	I_Method0(void, setUpRenderingSupport,
	          Properties::NON_VIRTUAL,
	          __void__setUpRenderingSupport,
	          "Set up the Operations to render the various viewer cameras on the viewers graphics windows. ",
	          "");
	I_Method1(void, getUsage, IN, osg::ApplicationUsage &, usage,
	          Properties::VIRTUAL,
	          __void__getUsage__osg_ApplicationUsage_R1,
	          "Get the keyboard and mouse usage of this viewer. ",
	          "");
	I_ProtectedMethod0(void, constructorInit,
	                   Properties::NON_VIRTUAL,
	                   Properties::NON_CONST,
	                   __void__constructorInit,
	                   "",
	                   "");
	I_ProtectedMethod0(void, checkWindowStatus,
	                   Properties::NON_VIRTUAL,
	                   Properties::NON_CONST,
	                   __void__checkWindowStatus,
	                   "",
	                   "");
	I_ProtectedMethod1(void, makeCurrent, IN, osg::GraphicsContext *, gc,
	                   Properties::NON_VIRTUAL,
	                   Properties::NON_CONST,
	                   __void__makeCurrent__osg_GraphicsContext_P1,
	                   "",
	                   "");
	I_ProtectedMethod0(void, releaseContext,
	                   Properties::NON_VIRTUAL,
	                   Properties::NON_CONST,
	                   __void__releaseContext,
	                   "",
	                   "");
	I_SimpleProperty(osg::Camera *, CameraWithFocus, 
	                 __osg_Camera_P1__getCameraWithFocus, 
	                 __void__setCameraWithFocus__osg_Camera_P1);
	I_SimpleProperty(bool, Done, 
	                 0, 
	                 __void__setDone__bool);
	I_SimpleProperty(osgViewer::Viewer::BarrierPosition, EndBarrierPosition, 
	                 __BarrierPosition__getEndBarrierPosition, 
	                 __void__setEndBarrierPosition__BarrierPosition);
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
	I_SimpleProperty(osg::Node *, SceneData, 
	                 0, 
	                 __void__setSceneData__osg_Node_P1);
	I_SimpleProperty(osg::Timer_t, StartTick, 
	                 __osg_Timer_t__getStartTick, 
	                 __void__setStartTick__osg_Timer_t);
	I_SimpleProperty(osgViewer::Viewer::ThreadingModel, ThreadingModel, 
	                 __ThreadingModel__getThreadingModel, 
	                 __void__setThreadingModel__ThreadingModel);
	I_SimpleProperty(bool, UseMainThreadForRenderingTraversals, 
	                 __bool__getUseMainThreadForRenderingTraversals, 
	                 __void__setUseMainThreadForRenderingTraversals__bool);
END_REFLECTOR

STD_VECTOR_REFLECTOR(std::vector< OpenThreads::Thread * >)

STD_VECTOR_REFLECTOR(std::vector< osg::Camera * >)

STD_VECTOR_REFLECTOR(std::vector< osg::OperationsThread * >)

