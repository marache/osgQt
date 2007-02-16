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

#include <osg/Group>
#include <osg/LOD>
#include <osg/Node>
#include <osgSim/InsertImpostorsVisitor>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

BEGIN_OBJECT_REFLECTOR(osgSim::InsertImpostorsVisitor)
	I_BaseType(osg::NodeVisitor);
	I_Constructor0(____InsertImpostorsVisitor,
	               "Default to traversing all children. ",
	               "");
	I_Method1(void, setImpostorThresholdRatio, IN, float, ratio,
	          Properties::NON_VIRTUAL,
	          __void__setImpostorThresholdRatio__float,
	          "",
	          "");
	I_Method0(float, getImpostorThresholdRatio,
	          Properties::NON_VIRTUAL,
	          __float__getImpostorThresholdRatio,
	          "",
	          "");
	I_Method1(void, setMaximumNumberOfNestedImpostors, IN, unsigned int, num,
	          Properties::NON_VIRTUAL,
	          __void__setMaximumNumberOfNestedImpostors__unsigned_int,
	          "",
	          "");
	I_Method0(unsigned int, getMaximumNumberOfNestedImpostors,
	          Properties::NON_VIRTUAL,
	          __unsigned_int__getMaximumNumberOfNestedImpostors,
	          "",
	          "");
	I_Method0(void, reset,
	          Properties::VIRTUAL,
	          __void__reset,
	          "Empty visitor, make it ready for next traversal. ",
	          "");
	I_Method1(void, apply, IN, osg::Node &, node,
	          Properties::VIRTUAL,
	          __void__apply__osg_Node_R1,
	          "",
	          "");
	I_Method1(void, apply, IN, osg::Group &, node,
	          Properties::VIRTUAL,
	          __void__apply__osg_Group_R1,
	          "",
	          "");
	I_Method1(void, apply, IN, osg::LOD &, node,
	          Properties::VIRTUAL,
	          __void__apply__osg_LOD_R1,
	          "",
	          "");
	I_Method0(void, insertImpostors,
	          Properties::NON_VIRTUAL,
	          __void__insertImpostors,
	          "",
	          "");
	I_SimpleProperty(float, ImpostorThresholdRatio, 
	                 __float__getImpostorThresholdRatio, 
	                 __void__setImpostorThresholdRatio__float);
	I_SimpleProperty(unsigned int, MaximumNumberOfNestedImpostors, 
	                 __unsigned_int__getMaximumNumberOfNestedImpostors, 
	                 __void__setMaximumNumberOfNestedImpostors__unsigned_int);
END_REFLECTOR

