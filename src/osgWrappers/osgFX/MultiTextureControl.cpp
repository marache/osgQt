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

#include <osg/CopyOp>
#include <osg/NodeVisitor>
#include <osg/Object>
#include <osgFX/MultiTextureControl>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

BEGIN_OBJECT_REFLECTOR(osgFX::MultiTextureControl)
	I_BaseType(osg::Group);
	I_Constructor0(____MultiTextureControl,
	               "",
	               "");
	I_ConstructorWithDefaults2(IN, const osgFX::MultiTextureControl &, copy, , IN, const osg::CopyOp &, copyop, osg::CopyOp::SHALLOW_COPY,
	                           ____MultiTextureControl__C5_MultiTextureControl_R1__C5_osg_CopyOp_R1,
	                           "",
	                           "");
	I_Method0(osg::Object *, cloneType,
	          Properties::VIRTUAL,
	          __osg_Object_P1__cloneType,
	          "clone an object of the same type as the node. ",
	          "");
	I_Method1(osg::Object *, clone, IN, const osg::CopyOp &, copyop,
	          Properties::VIRTUAL,
	          __osg_Object_P1__clone__C5_osg_CopyOp_R1,
	          "return a clone of a node, with Object* return type. ",
	          "");
	I_Method1(bool, isSameKindAs, IN, const osg::Object *, obj,
	          Properties::VIRTUAL,
	          __bool__isSameKindAs__C5_osg_Object_P1,
	          "return true if this and obj are of the same kind of object. ",
	          "");
	I_Method0(const char *, className,
	          Properties::VIRTUAL,
	          __C5_char_P1__className,
	          "return the name of the node's class type. ",
	          "");
	I_Method0(const char *, libraryName,
	          Properties::VIRTUAL,
	          __C5_char_P1__libraryName,
	          "return the name of the node's library. ",
	          "");
	I_Method1(void, accept, IN, osg::NodeVisitor &, nv,
	          Properties::VIRTUAL,
	          __void__accept__osg_NodeVisitor_R1,
	          "Visitor Pattern : calls the apply method of a NodeVisitor with this node's type. ",
	          "");
	I_Method2(void, setTextureWeight, IN, unsigned int, unit, IN, float, weight,
	          Properties::NON_VIRTUAL,
	          __void__setTextureWeight__unsigned_int__float,
	          "",
	          "");
	I_Method1(float, getTextureWeight, IN, unsigned int, unit,
	          Properties::NON_VIRTUAL,
	          __float__getTextureWeight__unsigned_int,
	          "",
	          "");
	I_Method0(unsigned int, getNumTextureWeights,
	          Properties::NON_VIRTUAL,
	          __unsigned_int__getNumTextureWeights,
	          "",
	          "");
	I_ProtectedMethod0(void, updateStateSet,
	                   Properties::NON_VIRTUAL,
	                   Properties::NON_CONST,
	                   __void__updateStateSet,
	                   "",
	                   "");
	I_ArrayProperty(float, TextureWeight, 
	                __float__getTextureWeight__unsigned_int, 
	                __void__setTextureWeight__unsigned_int__float, 
	                __unsigned_int__getNumTextureWeights, 
	                0, 
	                0, 
	                0);
END_REFLECTOR

