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
#include <osg/Matrixd>
#include <osg/Node>
#include <osg/Quat>
#include <osg/Vec3d>
#include <osgGA/GUIActionAdapter>
#include <osgGA/GUIEventAdapter>
#include <osgGA/TrackballManipulator>
#include <osgUtil/SceneView>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

BEGIN_OBJECT_REFLECTOR(osgGA::TrackballManipulator)
	I_DeclaringFile("osgGA/TrackballManipulator");
	I_BaseType(osgGA::MatrixManipulator);
	I_Constructor0(____TrackballManipulator,
	               "",
	               "");
	I_Method0(const char *, className,
	          Properties::VIRTUAL,
	          __C5_char_P1__className,
	          "return the name of the object's class type. ",
	          "Must be defined by derived classes. ");
	I_Method1(void, setByMatrix, IN, const osg::Matrixd &, matrix,
	          Properties::VIRTUAL,
	          __void__setByMatrix__C5_osg_Matrixd_R1,
	          "set the position of the matrix manipulator using a 4x4 Matrix. ",
	          "");
	I_Method1(void, setByInverseMatrix, IN, const osg::Matrixd &, matrix,
	          Properties::VIRTUAL,
	          __void__setByInverseMatrix__C5_osg_Matrixd_R1,
	          "set the position of the matrix manipulator using a 4x4 Matrix. ",
	          "");
	I_Method0(osg::Matrixd, getMatrix,
	          Properties::VIRTUAL,
	          __osg_Matrixd__getMatrix,
	          "get the position of the manipulator as 4x4 Matrix. ",
	          "");
	I_Method0(osg::Matrixd, getInverseMatrix,
	          Properties::VIRTUAL,
	          __osg_Matrixd__getInverseMatrix,
	          "get the position of the manipulator as a inverse matrix of the manipulator, typically used as a model view matrix. ",
	          "");
	I_Method0(osgUtil::SceneView::FusionDistanceMode, getFusionDistanceMode,
	          Properties::VIRTUAL,
	          __osgUtil_SceneView_FusionDistanceMode__getFusionDistanceMode,
	          "Get the FusionDistanceMode. ",
	          "Used by SceneView for setting up stereo convergence. ");
	I_Method0(float, getFusionDistanceValue,
	          Properties::VIRTUAL,
	          __float__getFusionDistanceValue,
	          "Get the FusionDistanceValue. ",
	          "Used by SceneView for setting up stereo convergence. ");
	I_Method1(void, setNode, IN, osg::Node *, x,
	          Properties::VIRTUAL,
	          __void__setNode__osg_Node_P1,
	          "Attach a node to the manipulator. ",
	          "Automatically detaches previously attached node. setNode(NULL) detaches previously nodes. Is ignored by manipulators which do not require a reference model. ");
	I_Method0(const osg::Node *, getNode,
	          Properties::VIRTUAL,
	          __C5_osg_Node_P1__getNode,
	          "Return node if attached. ",
	          "");
	I_Method0(osg::Node *, getNode,
	          Properties::VIRTUAL,
	          __osg_Node_P1__getNode,
	          "Return node if attached. ",
	          "");
	I_Method2(void, home, IN, const osgGA::GUIEventAdapter &, ea, IN, osgGA::GUIActionAdapter &, us,
	          Properties::VIRTUAL,
	          __void__home__C5_GUIEventAdapter_R1__GUIActionAdapter_R1,
	          "Move the camera to the default position. ",
	          "May be ignored by manipulators if home functionality is not appropriate. ");
	I_Method1(void, home, IN, double, x,
	          Properties::VIRTUAL,
	          __void__home__double,
	          "Move the camera to the default position. ",
	          "This version does not require GUIEventAdapter and GUIActionAdapter so may be called from somewhere other than a handle() method in GUIEventHandler. Application must be aware of implications. ");
	I_Method2(void, init, IN, const osgGA::GUIEventAdapter &, ea, IN, osgGA::GUIActionAdapter &, us,
	          Properties::VIRTUAL,
	          __void__init__C5_GUIEventAdapter_R1__GUIActionAdapter_R1,
	          "Start/restart the manipulator. ",
	          "");
	I_Method2(bool, handle, IN, const osgGA::GUIEventAdapter &, ea, IN, osgGA::GUIActionAdapter &, us,
	          Properties::VIRTUAL,
	          __bool__handle__C5_GUIEventAdapter_R1__GUIActionAdapter_R1,
	          "handle events, return true if handled, false otherwise. ",
	          "");
	I_Method1(void, getUsage, IN, osg::ApplicationUsage &, usage,
	          Properties::VIRTUAL,
	          __void__getUsage__osg_ApplicationUsage_R1,
	          "Get the keyboard and mouse usage of this manipulator. ",
	          "");
	I_Method1(void, setMinimumZoomScale, IN, double, minimumZoomScale,
	          Properties::NON_VIRTUAL,
	          __void__setMinimumZoomScale__double,
	          "set the minimum distance (as ratio) the eye point can be zoomed in towards the center before the center is pushed forward. ",
	          "");
	I_Method0(double, getMinimumZoomScale,
	          Properties::NON_VIRTUAL,
	          __double__getMinimumZoomScale,
	          "get the minimum distance (as ratio) the eye point can be zoomed in ",
	          "");
	I_Method1(void, setScroolWheelZoomDelta, IN, double, zoomDelta,
	          Properties::NON_VIRTUAL,
	          __void__setScroolWheelZoomDelta__double,
	          "set the mouse scroll wheel zoom delta. ",
	          "Range -1.0 to +1.0, -ve value inverts wheel direction and zero switches off scroll wheel. ");
	I_Method0(double, getScroolWheelZoomDelta,
	          Properties::NON_VIRTUAL,
	          __double__getScroolWheelZoomDelta,
	          "get the mouse scroll wheel zoom delta. ",
	          "");
	I_Method1(void, setCenter, IN, const osg::Vec3d &, center,
	          Properties::NON_VIRTUAL,
	          __void__setCenter__C5_osg_Vec3d_R1,
	          "Set the center of the trackball. ",
	          "");
	I_Method0(const osg::Vec3d &, getCenter,
	          Properties::NON_VIRTUAL,
	          __C5_osg_Vec3d_R1__getCenter,
	          "Get the center of the trackball. ",
	          "");
	I_Method1(void, setRotation, IN, const osg::Quat &, rotation,
	          Properties::NON_VIRTUAL,
	          __void__setRotation__C5_osg_Quat_R1,
	          "Set the rotation of the trackball. ",
	          "");
	I_Method0(const osg::Quat &, getRotation,
	          Properties::NON_VIRTUAL,
	          __C5_osg_Quat_R1__getRotation,
	          "Get the rotation of the trackball. ",
	          "");
	I_Method1(void, setDistance, IN, double, distance,
	          Properties::NON_VIRTUAL,
	          __void__setDistance__double,
	          "Set the distance of the trackball. ",
	          "");
	I_Method0(double, getDistance,
	          Properties::VIRTUAL,
	          __double__getDistance,
	          "Get the distance of the trackball. ",
	          "");
	I_Method1(void, setTrackballSize, IN, float, size,
	          Properties::NON_VIRTUAL,
	          __void__setTrackballSize__float,
	          "Set the size of the trackball. ",
	          "");
	I_Method0(float, getTrackballSize,
	          Properties::NON_VIRTUAL,
	          __float__getTrackballSize,
	          "Get the size of the trackball. ",
	          "");
	I_Method1(void, setAllowThrow, IN, bool, allowThrow,
	          Properties::NON_VIRTUAL,
	          __void__setAllowThrow__bool,
	          "Set the 'allow throw' flag. ",
	          "Releasing the mouse button while moving the camera results in a throw. ");
	I_Method0(bool, getAllowThrow,
	          Properties::NON_VIRTUAL,
	          __bool__getAllowThrow,
	          "Returns true if the camera can be thrown, false otherwise. ",
	          "This defaults to true. ");
	I_ProtectedMethod0(void, flushMouseEventStack,
	                   Properties::NON_VIRTUAL,
	                   Properties::NON_CONST,
	                   __void__flushMouseEventStack,
	                   "Reset the internal GUIEvent stack. ",
	                   "");
	I_ProtectedMethod1(void, addMouseEvent, IN, const osgGA::GUIEventAdapter &, ea,
	                   Properties::NON_VIRTUAL,
	                   Properties::NON_CONST,
	                   __void__addMouseEvent__C5_GUIEventAdapter_R1,
	                   "Add the current mouse GUIEvent to internal stack. ",
	                   "");
	I_ProtectedMethod3(void, computePosition, IN, const osg::Vec3 &, eye, IN, const osg::Vec3 &, lv, IN, const osg::Vec3 &, up,
	                   Properties::NON_VIRTUAL,
	                   Properties::NON_CONST,
	                   __void__computePosition__C5_osg_Vec3_R1__C5_osg_Vec3_R1__C5_osg_Vec3_R1,
	                   "",
	                   "");
	I_ProtectedMethod0(bool, calcMovement,
	                   Properties::NON_VIRTUAL,
	                   Properties::NON_CONST,
	                   __bool__calcMovement,
	                   "For the give mouse movement calculate the movement of the camera. ",
	                   "Return true is camera has moved and a redraw is required. ");
	I_ProtectedMethod6(void, trackball, IN, osg::Vec3 &, axis, IN, float &, angle, IN, float, p1x, IN, float, p1y, IN, float, p2x, IN, float, p2y,
	                   Properties::NON_VIRTUAL,
	                   Properties::NON_CONST,
	                   __void__trackball__osg_Vec3_R1__float_R1__float__float__float__float,
	                   "",
	                   "");
	I_ProtectedMethod3(float, tb_project_to_sphere, IN, float, r, IN, float, x, IN, float, y,
	                   Properties::NON_VIRTUAL,
	                   Properties::NON_CONST,
	                   __float__tb_project_to_sphere__float__float__float,
	                   "",
	                   "");
	I_ProtectedMethod0(bool, isMouseMoving,
	                   Properties::NON_VIRTUAL,
	                   Properties::NON_CONST,
	                   __bool__isMouseMoving,
	                   "Check the speed at which the mouse is moving. ",
	                   "If speed is below a threshold then return false, otherwise return true. ");
	I_SimpleProperty(bool, AllowThrow, 
	                 __bool__getAllowThrow, 
	                 __void__setAllowThrow__bool);
	I_SimpleProperty(const osg::Matrixd &, ByInverseMatrix, 
	                 0, 
	                 __void__setByInverseMatrix__C5_osg_Matrixd_R1);
	I_SimpleProperty(const osg::Matrixd &, ByMatrix, 
	                 0, 
	                 __void__setByMatrix__C5_osg_Matrixd_R1);
	I_SimpleProperty(const osg::Vec3d &, Center, 
	                 __C5_osg_Vec3d_R1__getCenter, 
	                 __void__setCenter__C5_osg_Vec3d_R1);
	I_SimpleProperty(double, Distance, 
	                 __double__getDistance, 
	                 __void__setDistance__double);
	I_SimpleProperty(osgUtil::SceneView::FusionDistanceMode, FusionDistanceMode, 
	                 __osgUtil_SceneView_FusionDistanceMode__getFusionDistanceMode, 
	                 0);
	I_SimpleProperty(float, FusionDistanceValue, 
	                 __float__getFusionDistanceValue, 
	                 0);
	I_SimpleProperty(osg::Matrixd, InverseMatrix, 
	                 __osg_Matrixd__getInverseMatrix, 
	                 0);
	I_SimpleProperty(osg::Matrixd, Matrix, 
	                 __osg_Matrixd__getMatrix, 
	                 0);
	I_SimpleProperty(double, MinimumZoomScale, 
	                 __double__getMinimumZoomScale, 
	                 __void__setMinimumZoomScale__double);
	I_SimpleProperty(osg::Node *, Node, 
	                 __osg_Node_P1__getNode, 
	                 __void__setNode__osg_Node_P1);
	I_SimpleProperty(const osg::Quat &, Rotation, 
	                 __C5_osg_Quat_R1__getRotation, 
	                 __void__setRotation__C5_osg_Quat_R1);
	I_SimpleProperty(double, ScroolWheelZoomDelta, 
	                 __double__getScroolWheelZoomDelta, 
	                 __void__setScroolWheelZoomDelta__double);
	I_SimpleProperty(float, TrackballSize, 
	                 __float__getTrackballSize, 
	                 __void__setTrackballSize__float);
END_REFLECTOR

