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

#include <osg/BoundingSphere>
#include <osg/CopyOp>
#include <osg/Light>
#include <osg/LightSource>
#include <osg/NodeVisitor>
#include <osg/Object>
#include <osg/StateAttribute>
#include <osg/StateSet>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

#include <osg/observer_ptr>
        
BEGIN_ENUM_REFLECTOR(osg::LightSource::ReferenceFrame)
	I_DeclaringFile("osg/LightSource");
	I_EnumLabel(osg::LightSource::RELATIVE_RF);
	I_EnumLabel(osg::LightSource::ABSOLUTE_RF);
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osg::LightSource)
	I_DeclaringFile("osg/LightSource");
	I_BaseType(osg::Group);
	I_Constructor0(____LightSource,
	               "",
	               "");
	I_ConstructorWithDefaults2(IN, const osg::LightSource &, ls, , IN, const osg::CopyOp &, copyop, osg::CopyOp::SHALLOW_COPY,
	                           ____LightSource__C5_LightSource_R1__C5_CopyOp_R1,
	                           "Copy constructor using CopyOp to manage deep vs shallow copy. ",
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
	I_Method1(void, setReferenceFrame, IN, osg::LightSource::ReferenceFrame, rf,
	          Properties::NON_VIRTUAL,
	          __void__setReferenceFrame__ReferenceFrame,
	          "Set the light sources's ReferenceFrame, either to be relative to its parent reference frame, or relative to an absolute coordinate frame. ",
	          "RELATIVE_RF is the default. Note: setting the ReferenceFrame to be ABSOLUTE_RF will also set the CullingActive flag on the light source, and hence all of its parents, to false, thereby disabling culling of it and all its parents. This is necessary to prevent inappropriate culling, but may impact cull times if the absolute light source is deep in the scene graph. It is therefore recommended to only use absolute light source at the top of the scene. ");
	I_Method0(osg::LightSource::ReferenceFrame, getReferenceFrame,
	          Properties::NON_VIRTUAL,
	          __ReferenceFrame__getReferenceFrame,
	          "",
	          "");
	I_Method1(void, setLight, IN, osg::Light *, light,
	          Properties::NON_VIRTUAL,
	          __void__setLight__Light_P1,
	          "Set the attached light. ",
	          "");
	I_Method0(osg::Light *, getLight,
	          Properties::NON_VIRTUAL,
	          __Light_P1__getLight,
	          "Get the attached light. ",
	          "");
	I_Method0(const osg::Light *, getLight,
	          Properties::NON_VIRTUAL,
	          __C5_Light_P1__getLight,
	          "Get the const attached light. ",
	          "");
	I_Method2(void, setStateSetModes, IN, osg::StateSet &, x, IN, osg::StateAttribute::GLModeValue, x,
	          Properties::NON_VIRTUAL,
	          __void__setStateSetModes__StateSet_R1__StateAttribute_GLModeValue,
	          "Set the GLModes on StateSet associated with the LightSource. ",
	          "");
	I_MethodWithDefaults1(void, setLocalStateSetModes, IN, osg::StateAttribute::GLModeValue, value, osg::StateAttribute::ON,
	                      Properties::NON_VIRTUAL,
	                      __void__setLocalStateSetModes__StateAttribute_GLModeValue,
	                      "Set up the local StateSet. ",
	                      "");
	I_Method1(void, setThreadSafeRefUnref, IN, bool, threadSafe,
	          Properties::VIRTUAL,
	          __void__setThreadSafeRefUnref__bool,
	          "Set whether to use a mutex to ensure ref() and unref() are thread safe. ",
	          "");
	I_Method0(osg::BoundingSphere, computeBound,
	          Properties::VIRTUAL,
	          __BoundingSphere__computeBound,
	          "Compute the bounding sphere around Node's geometry or children. ",
	          "This method is automatically called by getBound() when the bounding sphere has been marked dirty via dirtyBound(). ");
	I_SimpleProperty(osg::Light *, Light, 
	                 __Light_P1__getLight, 
	                 __void__setLight__Light_P1);
	I_SimpleProperty(osg::StateAttribute::GLModeValue, LocalStateSetModes, 
	                 0, 
	                 __void__setLocalStateSetModes__StateAttribute_GLModeValue);
	I_SimpleProperty(osg::LightSource::ReferenceFrame, ReferenceFrame, 
	                 __ReferenceFrame__getReferenceFrame, 
	                 __void__setReferenceFrame__ReferenceFrame);
	I_SimpleProperty(bool, ThreadSafeRefUnref, 
	                 0, 
	                 __void__setThreadSafeRefUnref__bool);
END_REFLECTOR

