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

#include <osg/.svn/text-base/CopyOp.svn-base>
#include <osg/.svn/text-base/Node.svn-base>
#include <osg/.svn/text-base/NodeVisitor.svn-base>
#include <osg/.svn/text-base/Object.svn-base>
#include <osgSim/VisibilityGroup>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

BEGIN_OBJECT_REFLECTOR(osgSim::VisibilityGroup)
	I_BaseType(osg::Group);
	I_BaseType(osg::Group);
	I_Constructor0(____VisibilityGroup,
	               "",
	               "");
	I_ConstructorWithDefaults2(IN, const osgSim::VisibilityGroup &, x, , IN, const osg::CopyOp &, copyop, osg::CopyOp::SHALLOW_COPY,
	                           ____VisibilityGroup__C5_VisibilityGroup_R1__C5_osg_CopyOp_R1,
	                           "Copy constructor using CopyOp to manage deep vs shallow copy. ",
	                           "");
	I_Method0(osg::Object *, cloneType,
	          Properties::VIRTUAL,
	          __osg_Object_P1__cloneType,
	          "",
	          "");
	I_Method1(osg::Object *, clone, IN, const osg::CopyOp &, copyop,
	          Properties::VIRTUAL,
	          __osg_Object_P1__clone__C5_osg_CopyOp_R1,
	          "",
	          "");
	I_Method1(bool, isSameKindAs, IN, const osg::Object *, obj,
	          Properties::VIRTUAL,
	          __bool__isSameKindAs__C5_osg_Object_P1,
	          "",
	          "");
	I_Method0(const char *, className,
	          Properties::VIRTUAL,
	          __C5_char_P1__className,
	          "",
	          "");
	I_Method0(const char *, libraryName,
	          Properties::VIRTUAL,
	          __C5_char_P1__libraryName,
	          "",
	          "");
	I_Method1(void, accept, IN, osg::NodeVisitor &, nv,
	          Properties::VIRTUAL,
	          __void__accept__osg_NodeVisitor_R1,
	          "",
	          "");
	I_Method1(void, traverse, IN, osg::NodeVisitor &, nv,
	          Properties::VIRTUAL,
	          __void__traverse__osg_NodeVisitor_R1,
	          "",
	          "");
	I_Method1(void, setVisibilityVolume, IN, osg::Node *, node,
	          Properties::NON_VIRTUAL,
	          __void__setVisibilityVolume__osg_Node_P1,
	          "Set the subgraph that is intersected for the visibility determination. ",
	          "");
	I_Method0(osg::Node *, getVisibilityVolume,
	          Properties::NON_VIRTUAL,
	          __osg_Node_P1__getVisibilityVolume,
	          "Get the subgraph that is intersected for the visibility determination. ",
	          "");
	I_Method0(const osg::Node *, getVisibilityVolume,
	          Properties::NON_VIRTUAL,
	          __C5_osg_Node_P1__getVisibilityVolume,
	          "Get the const subgraph that is intersected for the visibility determination. ",
	          "");
	I_Method1(void, setVolumeIntersectionMask, IN, osg::Node::NodeMask, mask,
	          Properties::NON_VIRTUAL,
	          __void__setVolumeIntersectionMask__osg_Node_NodeMask,
	          "Set the traversal mask for the intersection testing. ",
	          "");
	I_Method0(osg::Node::NodeMask, getVolumeIntersectionMask,
	          Properties::NON_VIRTUAL,
	          __osg_Node_NodeMask__getVolumeIntersectionMask,
	          "Get the traversal mask for the intersection testing. ",
	          "");
	I_Method1(void, setSegmentLength, IN, float, length,
	          Properties::NON_VIRTUAL,
	          __void__setSegmentLength__float,
	          "Set the length of the intersection segment. ",
	          "The segments extends this many database units from the camera eye-point along the look vector. If this is left at zero then the diameter of the bounding sphere of the visibility volume is used. ");
	I_Method0(float, getSegmentLength,
	          Properties::NON_VIRTUAL,
	          __float__getSegmentLength,
	          "Get the length of the intersection segment. ",
	          "");
	I_Constructor0(____VisibilityGroup,
	               "",
	               "");
	I_ConstructorWithDefaults2(IN, const osgSim::VisibilityGroup &, x, , IN, const osg::CopyOp &, copyop, osg::CopyOp::SHALLOW_COPY,
	                           ____VisibilityGroup__C5_VisibilityGroup_R1__C5_osg_CopyOp_R1,
	                           "Copy constructor using CopyOp to manage deep vs shallow copy. ",
	                           "");
	I_Method0(osg::Object *, cloneType,
	          Properties::VIRTUAL,
	          __osg_Object_P1__cloneType,
	          "",
	          "");
	I_Method1(osg::Object *, clone, IN, const osg::CopyOp &, copyop,
	          Properties::VIRTUAL,
	          __osg_Object_P1__clone__C5_osg_CopyOp_R1,
	          "",
	          "");
	I_Method1(bool, isSameKindAs, IN, const osg::Object *, obj,
	          Properties::VIRTUAL,
	          __bool__isSameKindAs__C5_osg_Object_P1,
	          "",
	          "");
	I_Method0(const char *, className,
	          Properties::VIRTUAL,
	          __C5_char_P1__className,
	          "",
	          "");
	I_Method0(const char *, libraryName,
	          Properties::VIRTUAL,
	          __C5_char_P1__libraryName,
	          "",
	          "");
	I_Method1(void, accept, IN, osg::NodeVisitor &, nv,
	          Properties::VIRTUAL,
	          __void__accept__osg_NodeVisitor_R1,
	          "",
	          "");
	I_Method1(void, traverse, IN, osg::NodeVisitor &, nv,
	          Properties::VIRTUAL,
	          __void__traverse__osg_NodeVisitor_R1,
	          "",
	          "");
	I_Method1(void, setVisibilityVolume, IN, osg::Node *, node,
	          Properties::NON_VIRTUAL,
	          __void__setVisibilityVolume__osg_Node_P1,
	          "Set the subgraph that is intersected for the visibility determination. ",
	          "");
	I_Method0(osg::Node *, getVisibilityVolume,
	          Properties::NON_VIRTUAL,
	          __osg_Node_P1__getVisibilityVolume,
	          "Get the subgraph that is intersected for the visibility determination. ",
	          "");
	I_Method0(const osg::Node *, getVisibilityVolume,
	          Properties::NON_VIRTUAL,
	          __C5_osg_Node_P1__getVisibilityVolume,
	          "Get the const subgraph that is intersected for the visibility determination. ",
	          "");
	I_Method1(void, setVolumeIntersectionMask, IN, osg::Node::NodeMask, mask,
	          Properties::NON_VIRTUAL,
	          __void__setVolumeIntersectionMask__osg_Node_NodeMask,
	          "Set the traversal mask for the intersection testing. ",
	          "");
	I_Method0(osg::Node::NodeMask, getVolumeIntersectionMask,
	          Properties::NON_VIRTUAL,
	          __osg_Node_NodeMask__getVolumeIntersectionMask,
	          "Get the traversal mask for the intersection testing. ",
	          "");
	I_Method1(void, setSegmentLength, IN, float, length,
	          Properties::NON_VIRTUAL,
	          __void__setSegmentLength__float,
	          "Set the length of the intersection segment. ",
	          "The segments extends this many database units from the camera eye-point along the look vector. If this is left at zero then the diameter of the bounding sphere of the visibility volume is used. ");
	I_Method0(float, getSegmentLength,
	          Properties::NON_VIRTUAL,
	          __float__getSegmentLength,
	          "Get the length of the intersection segment. ",
	          "");
	I_SimpleProperty(float, SegmentLength, 
	                 __float__getSegmentLength, 
	                 __void__setSegmentLength__float);
	I_SimpleProperty(osg::Node *, VisibilityVolume, 
	                 __osg_Node_P1__getVisibilityVolume, 
	                 __void__setVisibilityVolume__osg_Node_P1);
	I_SimpleProperty(osg::Node::NodeMask, VolumeIntersectionMask, 
	                 __osg_Node_NodeMask__getVolumeIntersectionMask, 
	                 __void__setVolumeIntersectionMask__osg_Node_NodeMask);
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osgSim::VisibilityGroup)
	I_BaseType(osg::Group);
	I_BaseType(osg::Group);
	I_Constructor0(____VisibilityGroup,
	               "",
	               "");
	I_ConstructorWithDefaults2(IN, const osgSim::VisibilityGroup &, x, , IN, const osg::CopyOp &, copyop, osg::CopyOp::SHALLOW_COPY,
	                           ____VisibilityGroup__C5_VisibilityGroup_R1__C5_osg_CopyOp_R1,
	                           "Copy constructor using CopyOp to manage deep vs shallow copy. ",
	                           "");
	I_Method0(osg::Object *, cloneType,
	          Properties::VIRTUAL,
	          __osg_Object_P1__cloneType,
	          "",
	          "");
	I_Method1(osg::Object *, clone, IN, const osg::CopyOp &, copyop,
	          Properties::VIRTUAL,
	          __osg_Object_P1__clone__C5_osg_CopyOp_R1,
	          "",
	          "");
	I_Method1(bool, isSameKindAs, IN, const osg::Object *, obj,
	          Properties::VIRTUAL,
	          __bool__isSameKindAs__C5_osg_Object_P1,
	          "",
	          "");
	I_Method0(const char *, className,
	          Properties::VIRTUAL,
	          __C5_char_P1__className,
	          "",
	          "");
	I_Method0(const char *, libraryName,
	          Properties::VIRTUAL,
	          __C5_char_P1__libraryName,
	          "",
	          "");
	I_Method1(void, accept, IN, osg::NodeVisitor &, nv,
	          Properties::VIRTUAL,
	          __void__accept__osg_NodeVisitor_R1,
	          "",
	          "");
	I_Method1(void, traverse, IN, osg::NodeVisitor &, nv,
	          Properties::VIRTUAL,
	          __void__traverse__osg_NodeVisitor_R1,
	          "",
	          "");
	I_Method1(void, setVisibilityVolume, IN, osg::Node *, node,
	          Properties::NON_VIRTUAL,
	          __void__setVisibilityVolume__osg_Node_P1,
	          "Set the subgraph that is intersected for the visibility determination. ",
	          "");
	I_Method0(osg::Node *, getVisibilityVolume,
	          Properties::NON_VIRTUAL,
	          __osg_Node_P1__getVisibilityVolume,
	          "Get the subgraph that is intersected for the visibility determination. ",
	          "");
	I_Method0(const osg::Node *, getVisibilityVolume,
	          Properties::NON_VIRTUAL,
	          __C5_osg_Node_P1__getVisibilityVolume,
	          "Get the const subgraph that is intersected for the visibility determination. ",
	          "");
	I_Method1(void, setVolumeIntersectionMask, IN, osg::Node::NodeMask, mask,
	          Properties::NON_VIRTUAL,
	          __void__setVolumeIntersectionMask__osg_Node_NodeMask,
	          "Set the traversal mask for the intersection testing. ",
	          "");
	I_Method0(osg::Node::NodeMask, getVolumeIntersectionMask,
	          Properties::NON_VIRTUAL,
	          __osg_Node_NodeMask__getVolumeIntersectionMask,
	          "Get the traversal mask for the intersection testing. ",
	          "");
	I_Method1(void, setSegmentLength, IN, float, length,
	          Properties::NON_VIRTUAL,
	          __void__setSegmentLength__float,
	          "Set the length of the intersection segment. ",
	          "The segments extends this many database units from the camera eye-point along the look vector. If this is left at zero then the diameter of the bounding sphere of the visibility volume is used. ");
	I_Method0(float, getSegmentLength,
	          Properties::NON_VIRTUAL,
	          __float__getSegmentLength,
	          "Get the length of the intersection segment. ",
	          "");
	I_Constructor0(____VisibilityGroup,
	               "",
	               "");
	I_ConstructorWithDefaults2(IN, const osgSim::VisibilityGroup &, x, , IN, const osg::CopyOp &, copyop, osg::CopyOp::SHALLOW_COPY,
	                           ____VisibilityGroup__C5_VisibilityGroup_R1__C5_osg_CopyOp_R1,
	                           "Copy constructor using CopyOp to manage deep vs shallow copy. ",
	                           "");
	I_Method0(osg::Object *, cloneType,
	          Properties::VIRTUAL,
	          __osg_Object_P1__cloneType,
	          "",
	          "");
	I_Method1(osg::Object *, clone, IN, const osg::CopyOp &, copyop,
	          Properties::VIRTUAL,
	          __osg_Object_P1__clone__C5_osg_CopyOp_R1,
	          "",
	          "");
	I_Method1(bool, isSameKindAs, IN, const osg::Object *, obj,
	          Properties::VIRTUAL,
	          __bool__isSameKindAs__C5_osg_Object_P1,
	          "",
	          "");
	I_Method0(const char *, className,
	          Properties::VIRTUAL,
	          __C5_char_P1__className,
	          "",
	          "");
	I_Method0(const char *, libraryName,
	          Properties::VIRTUAL,
	          __C5_char_P1__libraryName,
	          "",
	          "");
	I_Method1(void, accept, IN, osg::NodeVisitor &, nv,
	          Properties::VIRTUAL,
	          __void__accept__osg_NodeVisitor_R1,
	          "",
	          "");
	I_Method1(void, traverse, IN, osg::NodeVisitor &, nv,
	          Properties::VIRTUAL,
	          __void__traverse__osg_NodeVisitor_R1,
	          "",
	          "");
	I_Method1(void, setVisibilityVolume, IN, osg::Node *, node,
	          Properties::NON_VIRTUAL,
	          __void__setVisibilityVolume__osg_Node_P1,
	          "Set the subgraph that is intersected for the visibility determination. ",
	          "");
	I_Method0(osg::Node *, getVisibilityVolume,
	          Properties::NON_VIRTUAL,
	          __osg_Node_P1__getVisibilityVolume,
	          "Get the subgraph that is intersected for the visibility determination. ",
	          "");
	I_Method0(const osg::Node *, getVisibilityVolume,
	          Properties::NON_VIRTUAL,
	          __C5_osg_Node_P1__getVisibilityVolume,
	          "Get the const subgraph that is intersected for the visibility determination. ",
	          "");
	I_Method1(void, setVolumeIntersectionMask, IN, osg::Node::NodeMask, mask,
	          Properties::NON_VIRTUAL,
	          __void__setVolumeIntersectionMask__osg_Node_NodeMask,
	          "Set the traversal mask for the intersection testing. ",
	          "");
	I_Method0(osg::Node::NodeMask, getVolumeIntersectionMask,
	          Properties::NON_VIRTUAL,
	          __osg_Node_NodeMask__getVolumeIntersectionMask,
	          "Get the traversal mask for the intersection testing. ",
	          "");
	I_Method1(void, setSegmentLength, IN, float, length,
	          Properties::NON_VIRTUAL,
	          __void__setSegmentLength__float,
	          "Set the length of the intersection segment. ",
	          "The segments extends this many database units from the camera eye-point along the look vector. If this is left at zero then the diameter of the bounding sphere of the visibility volume is used. ");
	I_Method0(float, getSegmentLength,
	          Properties::NON_VIRTUAL,
	          __float__getSegmentLength,
	          "Get the length of the intersection segment. ",
	          "");
	I_SimpleProperty(float, SegmentLength, 
	                 __float__getSegmentLength, 
	                 __void__setSegmentLength__float);
	I_SimpleProperty(osg::Node *, VisibilityVolume, 
	                 __osg_Node_P1__getVisibilityVolume, 
	                 __void__setVisibilityVolume__osg_Node_P1);
	I_SimpleProperty(osg::Node::NodeMask, VolumeIntersectionMask, 
	                 __osg_Node_NodeMask__getVolumeIntersectionMask, 
	                 __void__setVolumeIntersectionMask__osg_Node_NodeMask);
END_REFLECTOR

