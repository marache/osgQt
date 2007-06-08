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

#include <osg/Camera>
#include <osg/Node>
#include <osg/Vec3>
#include <osgGA/GUIActionAdapter>
#include <osgGA/GUIEventAdapter>
#include <osgManipulator/CommandManager>
#include <osgManipulator/Dragger>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

TYPE_NAME_ALIAS(std::vector< osg::ref_ptr< osgManipulator::Dragger > >, osgManipulator::CompositeDragger::DraggerList)

BEGIN_OBJECT_REFLECTOR(osgManipulator::CompositeDragger)
	I_DeclaringFile("osgManipulator/Dragger");
	I_BaseType(osgManipulator::Dragger);
	I_Method0(const osgManipulator::CompositeDragger *, getComposite,
	          Properties::VIRTUAL,
	          __C5_CompositeDragger_P1__getComposite,
	          "Returns 0 if this Dragger is not a CompositeDragger. ",
	          "");
	I_Method0(osgManipulator::CompositeDragger *, getComposite,
	          Properties::VIRTUAL,
	          __CompositeDragger_P1__getComposite,
	          "Returns 0 if this Dragger is not a CompositeDragger. ",
	          "");
	I_Method1(void, setCommandManager, IN, osgManipulator::CommandManager *, cm,
	          Properties::VIRTUAL,
	          __void__setCommandManager__CommandManager_P1,
	          "Set/Get the CommandManager. ",
	          "Draggers use CommandManager to dispatch commands. ");
	I_Method1(void, setParentDragger, IN, osgManipulator::Dragger *, parent,
	          Properties::VIRTUAL,
	          __void__setParentDragger__Dragger_P1,
	          "Set/Get parent dragger. ",
	          "For simple draggers parent points to itself. For composite draggers parent points to the parent dragger that uses this dragger.");
	I_Method3(bool, handle, IN, const osgManipulator::PointerInfo &, pi, IN, const osgGA::GUIEventAdapter &, ea, IN, osgGA::GUIActionAdapter &, aa,
	          Properties::VIRTUAL,
	          __bool__handle__C5_PointerInfo_R1__C5_osgGA_GUIEventAdapter_R1__osgGA_GUIActionAdapter_R1,
	          "",
	          "");
	I_Method1(bool, addDragger, IN, osgManipulator::Dragger *, dragger,
	          Properties::VIRTUAL,
	          __bool__addDragger__Dragger_P1,
	          "",
	          "");
	I_Method1(bool, removeDragger, IN, osgManipulator::Dragger *, dragger,
	          Properties::VIRTUAL,
	          __bool__removeDragger__Dragger_P1,
	          "",
	          "");
	I_Method0(unsigned int, getNumDraggers,
	          Properties::NON_VIRTUAL,
	          __unsigned_int__getNumDraggers,
	          "",
	          "");
	I_Method1(osgManipulator::Dragger *, getDragger, IN, unsigned int, i,
	          Properties::NON_VIRTUAL,
	          __Dragger_P1__getDragger__unsigned_int,
	          "",
	          "");
	I_Method1(const osgManipulator::Dragger *, getDragger, IN, unsigned int, i,
	          Properties::NON_VIRTUAL,
	          __C5_Dragger_P1__getDragger__unsigned_int,
	          "",
	          "");
	I_Method1(bool, containsDragger, IN, const osgManipulator::Dragger *, dragger,
	          Properties::NON_VIRTUAL,
	          __bool__containsDragger__C5_Dragger_P1,
	          "",
	          "");
	I_Method1(osgManipulator::CompositeDragger::DraggerList::iterator, findDragger, IN, const osgManipulator::Dragger *, dragger,
	          Properties::NON_VIRTUAL,
	          __DraggerList_iterator__findDragger__C5_Dragger_P1,
	          "",
	          "");
	I_ProtectedConstructor0(____CompositeDragger,
	                        "",
	                        "");
	I_SimpleProperty(osgManipulator::CommandManager *, CommandManager, 
	                 0, 
	                 __void__setCommandManager__CommandManager_P1);
	I_SimpleProperty(osgManipulator::CompositeDragger *, Composite, 
	                 __CompositeDragger_P1__getComposite, 
	                 0);
	I_ArrayProperty(osgManipulator::Dragger *, Dragger, 
	                __Dragger_P1__getDragger__unsigned_int, 
	                0, 
	                __unsigned_int__getNumDraggers, 
	                __bool__addDragger__Dragger_P1, 
	                0, 
	                0);
	I_SimpleProperty(osgManipulator::Dragger *, ParentDragger, 
	                 0, 
	                 __void__setParentDragger__Dragger_P1);
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osgManipulator::Dragger)
	I_DeclaringFile("osgManipulator/Dragger");
	I_BaseType(osgManipulator::Selection);
	I_Method1(void, setCommandManager, IN, osgManipulator::CommandManager *, cm,
	          Properties::VIRTUAL,
	          __void__setCommandManager__CommandManager_P1,
	          "Set/Get the CommandManager. ",
	          "Draggers use CommandManager to dispatch commands. ");
	I_Method0(osgManipulator::CommandManager *, getCommandManager,
	          Properties::NON_VIRTUAL,
	          __CommandManager_P1__getCommandManager,
	          "",
	          "");
	I_Method0(const osgManipulator::CommandManager *, getCommandManager,
	          Properties::NON_VIRTUAL,
	          __C5_CommandManager_P1__getCommandManager,
	          "",
	          "");
	I_Method1(void, setParentDragger, IN, osgManipulator::Dragger *, parent,
	          Properties::VIRTUAL,
	          __void__setParentDragger__Dragger_P1,
	          "Set/Get parent dragger. ",
	          "For simple draggers parent points to itself. For composite draggers parent points to the parent dragger that uses this dragger.");
	I_Method0(osgManipulator::Dragger *, getParentDragger,
	          Properties::NON_VIRTUAL,
	          __Dragger_P1__getParentDragger,
	          "",
	          "");
	I_Method0(const osgManipulator::Dragger *, getParentDragger,
	          Properties::NON_VIRTUAL,
	          __C5_Dragger_P1__getParentDragger,
	          "",
	          "");
	I_Method0(const osgManipulator::CompositeDragger *, getComposite,
	          Properties::VIRTUAL,
	          __C5_CompositeDragger_P1__getComposite,
	          "Returns 0 if this Dragger is not a CompositeDragger. ",
	          "");
	I_Method0(osgManipulator::CompositeDragger *, getComposite,
	          Properties::VIRTUAL,
	          __CompositeDragger_P1__getComposite,
	          "Returns 0 if this Dragger is not a CompositeDragger. ",
	          "");
	I_Method3(bool, handle, IN, const osgManipulator::PointerInfo &, x, IN, const osgGA::GUIEventAdapter &, x, IN, osgGA::GUIActionAdapter &, x,
	          Properties::VIRTUAL,
	          __bool__handle__C5_PointerInfo_R1__C5_osgGA_GUIEventAdapter_R1__osgGA_GUIActionAdapter_R1,
	          "",
	          "");
	I_ProtectedConstructor0(____Dragger,
	                        "",
	                        "");
	I_SimpleProperty(osgManipulator::CommandManager *, CommandManager, 
	                 __CommandManager_P1__getCommandManager, 
	                 __void__setCommandManager__CommandManager_P1);
	I_SimpleProperty(osgManipulator::CompositeDragger *, Composite, 
	                 __CompositeDragger_P1__getComposite, 
	                 0);
	I_SimpleProperty(osgManipulator::Dragger *, ParentDragger, 
	                 __Dragger_P1__getParentDragger, 
	                 __void__setParentDragger__Dragger_P1);
END_REFLECTOR

TYPE_NAME_ALIAS(std::pair< osg::NodePath COMMA  osg::Vec3 >, osgManipulator::PointerInfo::NodePathIntersectionPair)

TYPE_NAME_ALIAS(std::list< osgManipulator::PointerInfo::NodePathIntersectionPair >, osgManipulator::PointerInfo::IntersectionList)

BEGIN_VALUE_REFLECTOR(osgManipulator::PointerInfo)
	I_DeclaringFile("osgManipulator/Dragger");
	I_Constructor0(____PointerInfo,
	               "",
	               "");
	I_Constructor1(IN, const osgManipulator::PointerInfo &, rhs,
	               Properties::NON_EXPLICIT,
	               ____PointerInfo__C5_PointerInfo_R1,
	               "",
	               "");
	I_Method0(void, reset,
	          Properties::NON_VIRTUAL,
	          __void__reset,
	          "",
	          "");
	I_Method0(bool, completed,
	          Properties::NON_VIRTUAL,
	          __bool__completed,
	          "",
	          "");
	I_Method0(void, next,
	          Properties::NON_VIRTUAL,
	          __void__next,
	          "",
	          "");
	I_Method0(osg::Vec3, getLocalIntersectPoint,
	          Properties::NON_VIRTUAL,
	          __osg_Vec3__getLocalIntersectPoint,
	          "",
	          "");
	I_Method2(void, setNearFarPoints, IN, osg::Vec3, nearPoint, IN, osg::Vec3, farPoint,
	          Properties::NON_VIRTUAL,
	          __void__setNearFarPoints__osg_Vec3__osg_Vec3,
	          "",
	          "");
	I_Method0(const osg::Vec3 &, getEyeDir,
	          Properties::NON_VIRTUAL,
	          __C5_osg_Vec3_R1__getEyeDir,
	          "",
	          "");
	I_Method2(void, getNearFarPoints, IN, osg::Vec3 &, nearPoint, IN, osg::Vec3 &, farPoint,
	          Properties::NON_VIRTUAL,
	          __void__getNearFarPoints__osg_Vec3_R1__osg_Vec3_R1,
	          "",
	          "");
	I_Method1(bool, contains, IN, const osg::Node *, node,
	          Properties::NON_VIRTUAL,
	          __bool__contains__C5_osg_Node_P1,
	          "",
	          "");
	I_Method1(void, setCamera, IN, osg::Camera *, camera,
	          Properties::NON_VIRTUAL,
	          __void__setCamera__osg_Camera_P1,
	          "",
	          "");
	I_Method2(void, addIntersection, IN, const osg::NodePath &, nodePath, IN, osg::Vec3, intersectionPoint,
	          Properties::NON_VIRTUAL,
	          __void__addIntersection__C5_osg_NodePath_R1__osg_Vec3,
	          "",
	          "");
	I_Method2(void, setMousePosition, IN, float, pixel_x, IN, float, pixel_y,
	          Properties::NON_VIRTUAL,
	          __void__setMousePosition__float__float,
	          "",
	          "");
	I_ProtectedMethod3(bool, projectWindowXYIntoObject, IN, const osg::Vec2 &, windowCoord, IN, osg::Vec3 &, nearPoint, IN, osg::Vec3 &, farPoint,
	                   Properties::NON_VIRTUAL,
	                   Properties::CONST,
	                   __bool__projectWindowXYIntoObject__C5_osg_Vec2_R1__osg_Vec3_R1__osg_Vec3_R1,
	                   "",
	                   "");
	I_SimpleProperty(osg::Camera *, Camera, 
	                 0, 
	                 __void__setCamera__osg_Camera_P1);
	I_SimpleProperty(const osg::Vec3 &, EyeDir, 
	                 __C5_osg_Vec3_R1__getEyeDir, 
	                 0);
	I_SimpleProperty(osg::Vec3, LocalIntersectPoint, 
	                 __osg_Vec3__getLocalIntersectPoint, 
	                 0);
	I_PublicMemberProperty(osgManipulator::PointerInfo::IntersectionList, _hitList);
END_REFLECTOR

BEGIN_VALUE_REFLECTOR(osg::ref_ptr< osgManipulator::Dragger >)
	I_DeclaringFile("osg/ref_ptr");
	I_Constructor0(____ref_ptr,
	               "",
	               "");
	I_Constructor1(IN, osgManipulator::Dragger *, ptr,
	               Properties::NON_EXPLICIT,
	               ____ref_ptr__T_P1,
	               "",
	               "");
	I_Constructor1(IN, const osg::ref_ptr< osgManipulator::Dragger > &, rp,
	               Properties::NON_EXPLICIT,
	               ____ref_ptr__C5_ref_ptr_R1,
	               "",
	               "");
	I_Method0(osgManipulator::Dragger *, get,
	          Properties::NON_VIRTUAL,
	          __T_P1__get,
	          "",
	          "");
	I_Method0(bool, valid,
	          Properties::NON_VIRTUAL,
	          __bool__valid,
	          "",
	          "");
	I_Method0(osgManipulator::Dragger *, release,
	          Properties::NON_VIRTUAL,
	          __T_P1__release,
	          "",
	          "");
	I_Method1(void, swap, IN, osg::ref_ptr< osgManipulator::Dragger > &, rp,
	          Properties::NON_VIRTUAL,
	          __void__swap__ref_ptr_R1,
	          "",
	          "");
	I_SimpleProperty(osgManipulator::Dragger *, , 
	                 __T_P1__get, 
	                 0);
END_REFLECTOR

STD_LIST_REFLECTOR(std::list< osgManipulator::PointerInfo::NodePathIntersectionPair >)

STD_PAIR_REFLECTOR(std::pair< osg::NodePath COMMA  osg::Vec3 >)

STD_VECTOR_REFLECTOR(std::vector< osg::ref_ptr< osgManipulator::Dragger > >)

