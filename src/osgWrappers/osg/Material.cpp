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
#include <osg/Material>
#include <osg/Object>
#include <osg/State>
#include <osg/StateAttribute>
#include <osg/Vec4>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

BEGIN_ENUM_REFLECTOR(osg::Material::Face)
	I_DeclaringFile("osg/Material");
	I_EnumLabel(osg::Material::FRONT);
	I_EnumLabel(osg::Material::BACK);
	I_EnumLabel(osg::Material::FRONT_AND_BACK);
END_REFLECTOR

BEGIN_ENUM_REFLECTOR(osg::Material::ColorMode)
	I_DeclaringFile("osg/Material");
	I_EnumLabel(osg::Material::AMBIENT);
	I_EnumLabel(osg::Material::DIFFUSE);
	I_EnumLabel(osg::Material::SPECULAR);
	I_EnumLabel(osg::Material::EMISSION);
	I_EnumLabel(osg::Material::AMBIENT_AND_DIFFUSE);
	I_EnumLabel(osg::Material::OFF);
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osg::Material)
	I_DeclaringFile("osg/Material");
	I_BaseType(osg::StateAttribute);
	I_Constructor0(____Material,
	               "",
	               "");
	I_ConstructorWithDefaults2(IN, const osg::Material &, mat, , IN, const osg::CopyOp &, copyop, osg::CopyOp::SHALLOW_COPY,
	                           ____Material__C5_Material_R1__C5_CopyOp_R1,
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
	          "return -1 if *this < *rhs, 0 if *this==*rhs, 1 if *this>*rhs. ",
	          "");
	I_Method1(bool, getModeUsage, IN, osg::StateAttribute::ModeUsage &, x,
	          Properties::VIRTUAL,
	          __bool__getModeUsage__StateAttribute_ModeUsage_R1,
	          "Return the modes associated with this StateAttribute. ",
	          "");
	I_Method1(void, apply, IN, osg::State &, state,
	          Properties::VIRTUAL,
	          __void__apply__State_R1,
	          "apply the OpenGL state attributes. ",
	          "The render info for the current OpenGL context is passed in to allow the StateAttribute to obtain details on the the current context and state. ");
	I_Method1(void, setColorMode, IN, osg::Material::ColorMode, mode,
	          Properties::NON_VIRTUAL,
	          __void__setColorMode__ColorMode,
	          "",
	          "");
	I_Method0(osg::Material::ColorMode, getColorMode,
	          Properties::NON_VIRTUAL,
	          __ColorMode__getColorMode,
	          "",
	          "");
	I_Method2(void, setAmbient, IN, osg::Material::Face, face, IN, const osg::Vec4 &, ambient,
	          Properties::NON_VIRTUAL,
	          __void__setAmbient__Face__C5_Vec4_R1,
	          "",
	          "");
	I_Method1(const osg::Vec4 &, getAmbient, IN, osg::Material::Face, face,
	          Properties::NON_VIRTUAL,
	          __C5_Vec4_R1__getAmbient__Face,
	          "",
	          "");
	I_Method0(bool, getAmbientFrontAndBack,
	          Properties::NON_VIRTUAL,
	          __bool__getAmbientFrontAndBack,
	          "",
	          "");
	I_Method2(void, setDiffuse, IN, osg::Material::Face, face, IN, const osg::Vec4 &, diffuse,
	          Properties::NON_VIRTUAL,
	          __void__setDiffuse__Face__C5_Vec4_R1,
	          "",
	          "");
	I_Method1(const osg::Vec4 &, getDiffuse, IN, osg::Material::Face, face,
	          Properties::NON_VIRTUAL,
	          __C5_Vec4_R1__getDiffuse__Face,
	          "",
	          "");
	I_Method0(bool, getDiffuseFrontAndBack,
	          Properties::NON_VIRTUAL,
	          __bool__getDiffuseFrontAndBack,
	          "",
	          "");
	I_Method2(void, setSpecular, IN, osg::Material::Face, face, IN, const osg::Vec4 &, specular,
	          Properties::NON_VIRTUAL,
	          __void__setSpecular__Face__C5_Vec4_R1,
	          "Set specular value of specified face(s) of the material, valid specular[0. ",
	          ".3] range is 0.0 to 1.0. ");
	I_Method1(const osg::Vec4 &, getSpecular, IN, osg::Material::Face, face,
	          Properties::NON_VIRTUAL,
	          __C5_Vec4_R1__getSpecular__Face,
	          "Get the specular value for specified face. ",
	          "");
	I_Method0(bool, getSpecularFrontAndBack,
	          Properties::NON_VIRTUAL,
	          __bool__getSpecularFrontAndBack,
	          "Return whether specular values are equal for front and back faces or not. ",
	          "");
	I_Method2(void, setEmission, IN, osg::Material::Face, face, IN, const osg::Vec4 &, emission,
	          Properties::NON_VIRTUAL,
	          __void__setEmission__Face__C5_Vec4_R1,
	          "Set emission value of specified face(s) of the material, valid emission[0. ",
	          ".3] range is 0.0 to 1.0. ");
	I_Method1(const osg::Vec4 &, getEmission, IN, osg::Material::Face, face,
	          Properties::NON_VIRTUAL,
	          __C5_Vec4_R1__getEmission__Face,
	          "Get the emission value for specified face. ",
	          "");
	I_Method0(bool, getEmissionFrontAndBack,
	          Properties::NON_VIRTUAL,
	          __bool__getEmissionFrontAndBack,
	          "Return whether emission values are equal for front and back faces or not. ",
	          "");
	I_Method2(void, setShininess, IN, osg::Material::Face, face, IN, float, shininess,
	          Properties::NON_VIRTUAL,
	          __void__setShininess__Face__float,
	          "Set shininess of specified face(s) of the material. ",
	          "valid shininess range is 0.0 to 128.0. ");
	I_Method1(float, getShininess, IN, osg::Material::Face, face,
	          Properties::NON_VIRTUAL,
	          __float__getShininess__Face,
	          "Get the shininess value for specified face. ",
	          "");
	I_Method0(bool, getShininessFrontAndBack,
	          Properties::NON_VIRTUAL,
	          __bool__getShininessFrontAndBack,
	          "Return whether shininess values are equal for front and back faces or not. ",
	          "");
	I_Method2(void, setTransparency, IN, osg::Material::Face, face, IN, float, trans,
	          Properties::NON_VIRTUAL,
	          __void__setTransparency__Face__float,
	          "Set the alpha value of ambient, diffuse, specular and emission colors of specified face, to 1-transparency. ",
	          "Valid transparency range is 0.0 to 1.0. ");
	I_Method2(void, setAlpha, IN, osg::Material::Face, face, IN, float, alpha,
	          Properties::NON_VIRTUAL,
	          __void__setAlpha__Face__float,
	          "Set the alpha value of ambient, diffuse, specular and emission colors. ",
	          "Valid transparency range is 0.0 to 1.0. ");
	I_IndexedProperty(const osg::Vec4 &, Ambient, 
	                  __C5_Vec4_R1__getAmbient__Face, 
	                  __void__setAmbient__Face__C5_Vec4_R1, 
	                  0);
	I_SimpleProperty(bool, AmbientFrontAndBack, 
	                 __bool__getAmbientFrontAndBack, 
	                 0);
	I_SimpleProperty(osg::Material::ColorMode, ColorMode, 
	                 __ColorMode__getColorMode, 
	                 __void__setColorMode__ColorMode);
	I_IndexedProperty(const osg::Vec4 &, Diffuse, 
	                  __C5_Vec4_R1__getDiffuse__Face, 
	                  __void__setDiffuse__Face__C5_Vec4_R1, 
	                  0);
	I_SimpleProperty(bool, DiffuseFrontAndBack, 
	                 __bool__getDiffuseFrontAndBack, 
	                 0);
	I_IndexedProperty(const osg::Vec4 &, Emission, 
	                  __C5_Vec4_R1__getEmission__Face, 
	                  __void__setEmission__Face__C5_Vec4_R1, 
	                  0);
	I_SimpleProperty(bool, EmissionFrontAndBack, 
	                 __bool__getEmissionFrontAndBack, 
	                 0);
	I_IndexedProperty(float, Shininess, 
	                  __float__getShininess__Face, 
	                  __void__setShininess__Face__float, 
	                  0);
	I_SimpleProperty(bool, ShininessFrontAndBack, 
	                 __bool__getShininessFrontAndBack, 
	                 0);
	I_IndexedProperty(const osg::Vec4 &, Specular, 
	                  __C5_Vec4_R1__getSpecular__Face, 
	                  __void__setSpecular__Face__C5_Vec4_R1, 
	                  0);
	I_SimpleProperty(bool, SpecularFrontAndBack, 
	                 __bool__getSpecularFrontAndBack, 
	                 0);
	I_SimpleProperty(osg::StateAttribute::Type, Type, 
	                 __Type__getType, 
	                 0);
END_REFLECTOR

