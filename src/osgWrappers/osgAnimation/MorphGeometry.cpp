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
#include <osg/Drawable>
#include <osg/Geometry>
#include <osg/Node>
#include <osg/NodeVisitor>
#include <osg/Object>
#include <osgAnimation/Channel>
#include <osgAnimation/MorphGeometry>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

BEGIN_ENUM_REFLECTOR(osgAnimation::MorphGeometry::Method)
	I_DeclaringFile("osgAnimation/MorphGeometry");
	I_EnumLabel(osgAnimation::MorphGeometry::NORMALIZED);
	I_EnumLabel(osgAnimation::MorphGeometry::RELATIVE);
END_REFLECTOR

TYPE_NAME_ALIAS(std::vector< osgAnimation::MorphGeometry::MorphTarget >, osgAnimation::MorphGeometry::MorphTargetList)

BEGIN_OBJECT_REFLECTOR(osgAnimation::MorphGeometry)
	I_DeclaringFile("osgAnimation/MorphGeometry");
	I_BaseType(osg::Geometry);
	I_Constructor0(____MorphGeometry,
	               "",
	               "");
	I_Constructor1(IN, const osg::Geometry &, b,
	               Properties::NON_EXPLICIT,
	               ____MorphGeometry__C5_osg_Geometry_R1,
	               "",
	               "");
	I_ConstructorWithDefaults2(IN, const osgAnimation::MorphGeometry &, b, , IN, const osg::CopyOp &, copyop, osg::CopyOp::SHALLOW_COPY,
	                           ____MorphGeometry__C5_MorphGeometry_R1__C5_osg_CopyOp_R1,
	                           "",
	                           "");
	I_Method0(osg::Object *, cloneType,
	          Properties::VIRTUAL,
	          __osg_Object_P1__cloneType,
	          "Clone the type of an object, with Object* return type. ",
	          "Must be defined by derived classes. ");
	I_Method1(osg::Object *, clone, IN, const osg::CopyOp &, x,
	          Properties::VIRTUAL,
	          __osg_Object_P1__clone__C5_osg_CopyOp_R1,
	          "Clone an object, with Object* return type. ",
	          "Must be defined by derived classes. ");
	I_Method1(bool, isSameKindAs, IN, const osg::Object *, obj,
	          Properties::VIRTUAL,
	          __bool__isSameKindAs__C5_osg_Object_P1,
	          "",
	          "");
	I_Method0(const char *, libraryName,
	          Properties::VIRTUAL,
	          __C5_char_P1__libraryName,
	          "return the name of the object's library. ",
	          "Must be defined by derived classes. The OpenSceneGraph convention is that the namespace of a library is the same as the library name. ");
	I_Method0(const char *, className,
	          Properties::VIRTUAL,
	          __C5_char_P1__className,
	          "return the name of the object's class type. ",
	          "Must be defined by derived classes. ");
	I_Method0(void, transformSoftwareMethod,
	          Properties::VIRTUAL,
	          __void__transformSoftwareMethod,
	          "",
	          "");
	I_Method1(void, setMethod, IN, osgAnimation::MorphGeometry::Method, method,
	          Properties::NON_VIRTUAL,
	          __void__setMethod__Method,
	          "Set the morphing method. ",
	          "");
	I_Method0(osgAnimation::MorphGeometry::Method, getMethod,
	          Properties::NON_VIRTUAL,
	          __Method__getMethod,
	          "Get the morphing method. ",
	          "");
	I_Method1(void, setMorphNormals, IN, bool, morphNormals,
	          Properties::NON_VIRTUAL,
	          __void__setMorphNormals__bool,
	          "Set flag for morphing normals. ",
	          "");
	I_Method0(bool, getMorphNormals,
	          Properties::NON_VIRTUAL,
	          __bool__getMorphNormals,
	          "Get the flag for morphing normals. ",
	          "");
	I_MethodWithDefaults2(void, addMorphTarget, IN, osg::Geometry *, morphTarget, , IN, float, weight, 1.0,
	                      Properties::VIRTUAL,
	                      __void__addMorphTarget__osg_Geometry_P1__float,
	                      "Add a MorphTarget to the MorphGeometry. ",
	                      " param morphTarget The MorphTarget to be added to the MorphGeometry.   return true for success; false otherwise. ");
	I_Method2(void, setWeight, IN, unsigned int, index, IN, float, morphWeight,
	          Properties::NON_VIRTUAL,
	          __void__setWeight__unsigned_int__float,
	          "",
	          "");
	I_Method0(void, dirty,
	          Properties::NON_VIRTUAL,
	          __void__dirty,
	          "Set the MorphGeometry dirty. ",
	          "");
	I_Method0(const osgAnimation::MorphGeometry::MorphTargetList &, getMorphTargetList,
	          Properties::NON_VIRTUAL,
	          __C5_MorphTargetList_R1__getMorphTargetList,
	          "Get the list of MorphTargets. ",
	          "");
	I_Method0(osgAnimation::MorphGeometry::MorphTargetList &, getMorphTargetList,
	          Properties::NON_VIRTUAL,
	          __MorphTargetList_R1__getMorphTargetList,
	          "Get the list of MorphTargets. ",
	          "Warning if you modify this array you will have to call dirty() ");
	I_Method1(const osgAnimation::MorphGeometry::MorphTarget &, getMorphTarget, IN, unsigned int, i,
	          Properties::NON_VIRTUAL,
	          __C5_MorphTarget_R1__getMorphTarget__unsigned_int,
	          "Return the MorphTarget at position i. ",
	          "");
	I_Method1(osgAnimation::MorphGeometry::MorphTarget &, getMorphTarget, IN, unsigned int, i,
	          Properties::NON_VIRTUAL,
	          __MorphTarget_R1__getMorphTarget__unsigned_int,
	          "Return the MorphTarget at position i. ",
	          "");
	I_SimpleProperty(osgAnimation::MorphGeometry::Method, Method, 
	                 __Method__getMethod, 
	                 __void__setMethod__Method);
	I_SimpleProperty(bool, MorphNormals, 
	                 __bool__getMorphNormals, 
	                 __void__setMorphNormals__bool);
	I_SimpleProperty(osgAnimation::MorphGeometry::MorphTargetList &, MorphTargetList, 
	                 __MorphTargetList_R1__getMorphTargetList, 
	                 0);
END_REFLECTOR

BEGIN_VALUE_REFLECTOR(osgAnimation::MorphGeometry::MorphTarget)
	I_DeclaringFile("osgAnimation/MorphGeometry");
	I_ConstructorWithDefaults2(IN, osg::Geometry *, geom, , IN, float, w, 1.0,
	                           ____MorphTarget__osg_Geometry_P1__float,
	                           "",
	                           "");
	I_Method1(void, setWeight, IN, float, weight,
	          Properties::NON_VIRTUAL,
	          __void__setWeight__float,
	          "",
	          "");
	I_Method0(const float, getWeight,
	          Properties::NON_VIRTUAL,
	          __C5_float__getWeight,
	          "",
	          "");
	I_Method0(osg::Geometry *, getGeometry,
	          Properties::NON_VIRTUAL,
	          __osg_Geometry_P1__getGeometry,
	          "",
	          "");
	I_Method0(const osg::Geometry *, getGeometry,
	          Properties::NON_VIRTUAL,
	          __C5_osg_Geometry_P1__getGeometry,
	          "",
	          "");
	I_Method1(void, setGeometry, IN, osg::Geometry *, geom,
	          Properties::NON_VIRTUAL,
	          __void__setGeometry__osg_Geometry_P1,
	          "",
	          "");
	I_SimpleProperty(osg::Geometry *, Geometry, 
	                 __osg_Geometry_P1__getGeometry, 
	                 __void__setGeometry__osg_Geometry_P1);
	I_SimpleProperty(float, Weight, 
	                 0, 
	                 __void__setWeight__float);
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osgAnimation::MorphGeometry::UpdateVertex)
	I_DeclaringFile("osgAnimation/MorphGeometry");
	I_BaseType(osg::Drawable::UpdateCallback);
	I_Constructor0(____UpdateVertex,
	               "",
	               "");
	I_Method2(void, update, IN, osg::NodeVisitor *, x, IN, osg::Drawable *, x,
	          Properties::VIRTUAL,
	          __void__update__osg_NodeVisitor_P1__osg_Drawable_P1,
	          "do customized update code. ",
	          "");
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osgAnimation::UpdateMorph)
	I_DeclaringFile("osgAnimation/MorphGeometry");
	I_BaseType(osgAnimation::AnimationUpdateCallback);
	I_Method0(osg::Object *, cloneType,
	          Properties::VIRTUAL,
	          __osg_Object_P1__cloneType,
	          "Clone the type of an object, with Object* return type. ",
	          "Must be defined by derived classes. ");
	I_Method1(osg::Object *, clone, IN, const osg::CopyOp &, x,
	          Properties::VIRTUAL,
	          __osg_Object_P1__clone__C5_osg_CopyOp_R1,
	          "Clone an object, with Object* return type. ",
	          "Must be defined by derived classes. ");
	I_Method1(bool, isSameKindAs, IN, const osg::Object *, obj,
	          Properties::VIRTUAL,
	          __bool__isSameKindAs__C5_osg_Object_P1,
	          "",
	          "");
	I_Method0(const char *, libraryName,
	          Properties::VIRTUAL,
	          __C5_char_P1__libraryName,
	          "return the name of the object's library. ",
	          "Must be defined by derived classes. The OpenSceneGraph convention is that the namespace of a library is the same as the library name. ");
	I_Method0(const char *, className,
	          Properties::VIRTUAL,
	          __C5_char_P1__className,
	          "return the name of the object's class type. ",
	          "Must be defined by derived classes. ");
	I_ConstructorWithDefaults1(IN, const std::string &, name, "",
	                           Properties::NON_EXPLICIT,
	                           ____UpdateMorph__C5_std_string_R1,
	                           "",
	                           "");
	I_Constructor2(IN, const osgAnimation::UpdateMorph &, apc, IN, const osg::CopyOp &, copyop,
	               ____UpdateMorph__C5_UpdateMorph_R1__C5_osg_CopyOp_R1,
	               "",
	               "");
	I_Method0(bool, needLink,
	          Properties::VIRTUAL,
	          __bool__needLink,
	          "",
	          "");
	I_Method1(bool, link, IN, osgAnimation::Channel *, channel,
	          Properties::VIRTUAL,
	          __bool__link__osgAnimation_Channel_P1,
	          "",
	          "");
END_REFLECTOR

STD_VECTOR_REFLECTOR(std::vector< osgAnimation::MorphGeometry::MorphTarget >)

