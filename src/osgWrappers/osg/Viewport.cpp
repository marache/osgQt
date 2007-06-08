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
#include <osg/Matrix>
#include <osg/Object>
#include <osg/State>
#include <osg/StateAttribute>
#include <osg/Viewport>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

TYPE_NAME_ALIAS(double, osg::Viewport::value_type)

BEGIN_OBJECT_REFLECTOR(osg::Viewport)
	I_DeclaringFile("osg/Viewport");
	I_BaseType(osg::StateAttribute);
	I_Constructor0(____Viewport,
	               "",
	               "");
	I_Constructor4(IN, osg::Viewport::value_type, x, IN, osg::Viewport::value_type, y, IN, osg::Viewport::value_type, width, IN, osg::Viewport::value_type, height,
	               ____Viewport__value_type__value_type__value_type__value_type,
	               "",
	               "");
	I_ConstructorWithDefaults2(IN, const osg::Viewport &, vp, , IN, const osg::CopyOp &, copyop, osg::CopyOp::SHALLOW_COPY,
	                           ____Viewport__C5_Viewport_R1__C5_CopyOp_R1,
	                           "Copy constructor using CopyOp to manage deep vs shallow copy. ",
	                           "");
	I_Method0(osg::Object *, cloneType,
	          Properties::VIRTUAL,
	          __osg_Object_P1__cloneType,
	          "Clone the type of an attribute, with Object* return type. ",
	          "Must be defined by derived classes. ");
	I_Method1(osg::Object *, clone, IN, const osg::CopyOp &, copyop,
	          Properties::VIRTUAL,
	          __osg_Object_P1__clone__C5_osg_CopyOp_R1,
	          "Clone an attribute, with Object* return type. ",
	          "Must be defined by derived classes. ");
	I_Method1(bool, isSameKindAs, IN, const osg::Object *, obj,
	          Properties::VIRTUAL,
	          __bool__isSameKindAs__C5_osg_Object_P1,
	          "Return true if this and obj are of the same kind of object. ",
	          "");
	I_Method0(const char *, libraryName,
	          Properties::VIRTUAL,
	          __C5_char_P1__libraryName,
	          "Return the name of the attribute's library. ",
	          "");
	I_Method0(const char *, className,
	          Properties::VIRTUAL,
	          __C5_char_P1__className,
	          "Return the name of the attribute's class type. ",
	          "");
	I_Method0(osg::StateAttribute::Type, getType,
	          Properties::VIRTUAL,
	          __Type__getType,
	          "Return the Type identifier of the attribute's class type. ",
	          "");
	I_Method1(int, compare, IN, const osg::StateAttribute &, sa,
	          Properties::VIRTUAL,
	          __int__compare__C5_StateAttribute_R1,
	          "Return -1 if *this < *rhs, 0 if *this==*rhs, 1 if *this>*rhs. ",
	          "");
	I_Method4(void, setViewport, IN, osg::Viewport::value_type, x, IN, osg::Viewport::value_type, y, IN, osg::Viewport::value_type, width, IN, osg::Viewport::value_type, height,
	          Properties::NON_VIRTUAL,
	          __void__setViewport__value_type__value_type__value_type__value_type,
	          "",
	          "");
	I_Method0(osg::Viewport::value_type &, x,
	          Properties::NON_VIRTUAL,
	          __value_type_R1__x,
	          "",
	          "");
	I_Method0(osg::Viewport::value_type, x,
	          Properties::NON_VIRTUAL,
	          __value_type__x,
	          "",
	          "");
	I_Method0(osg::Viewport::value_type &, y,
	          Properties::NON_VIRTUAL,
	          __value_type_R1__y,
	          "",
	          "");
	I_Method0(osg::Viewport::value_type, y,
	          Properties::NON_VIRTUAL,
	          __value_type__y,
	          "",
	          "");
	I_Method0(osg::Viewport::value_type &, width,
	          Properties::NON_VIRTUAL,
	          __value_type_R1__width,
	          "",
	          "");
	I_Method0(osg::Viewport::value_type, width,
	          Properties::NON_VIRTUAL,
	          __value_type__width,
	          "",
	          "");
	I_Method0(osg::Viewport::value_type &, height,
	          Properties::NON_VIRTUAL,
	          __value_type_R1__height,
	          "",
	          "");
	I_Method0(osg::Viewport::value_type, height,
	          Properties::NON_VIRTUAL,
	          __value_type__height,
	          "",
	          "");
	I_Method0(bool, valid,
	          Properties::NON_VIRTUAL,
	          __bool__valid,
	          "",
	          "");
	I_Method0(double, aspectRatio,
	          Properties::NON_VIRTUAL,
	          __double__aspectRatio,
	          "Return the aspectRatio of the viewport, which is equal to width/height. ",
	          "If height is zero, the potental division by zero is avoided by simply returning 1.0f.");
	I_Method0(const osg::Matrix, computeWindowMatrix,
	          Properties::NON_VIRTUAL,
	          __C5_osg_Matrix__computeWindowMatrix,
	          "Compute the Window Matrix which takes projected coords into Window coordinates. ",
	          "To convert local coordinates into window coordinates use v_window = v_local * MVPW matrix, where the MVPW matrix is ModelViewMatrix * ProjectionMatrix * WindowMatrix, the latter supplied by Viewport::computeWindowMatrix(), the ModelView and Projection Matrix can either be sourced from the current osg::State object, via osgUtil::SceneView or CullVisitor.");
	I_Method1(void, apply, IN, osg::State &, state,
	          Properties::VIRTUAL,
	          __void__apply__State_R1,
	          "apply the OpenGL state attributes. ",
	          "The render info for the current OpenGL context is passed in to allow the StateAttribute to obtain details on the the current context and state.");
	I_SimpleProperty(osg::StateAttribute::Type, Type, 
	                 __Type__getType, 
	                 0);
END_REFLECTOR

