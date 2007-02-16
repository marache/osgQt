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
#include <osg/.svn/text-base/Object.svn-base>
#include <osg/.svn/text-base/RenderInfo.svn-base>
#include <osgText/.svn/text-base/Text.svn-base>
#include <osgText/FadeText>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

BEGIN_OBJECT_REFLECTOR(osgText::FadeText)
	I_BaseType(osgText::Text);
	I_BaseType(osgText::Text);
	I_Constructor0(____FadeText,
	               "",
	               "");
	I_ConstructorWithDefaults2(IN, const osgText::Text &, text, , IN, const osg::CopyOp &, copyop, osg::CopyOp::SHALLOW_COPY,
	                           ____FadeText__C5_Text_R1__C5_osg_CopyOp_R1,
	                           "",
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
	I_Method0(const char *, libraryName,
	          Properties::VIRTUAL,
	          __C5_char_P1__libraryName,
	          "",
	          "");
	I_Method0(const char *, className,
	          Properties::VIRTUAL,
	          __C5_char_P1__className,
	          "",
	          "");
	I_Method1(void, setFadeSpeed, IN, float, fadeSpeed,
	          Properties::NON_VIRTUAL,
	          __void__setFadeSpeed__float,
	          "Set the speed that the alpha value changes as the text is occluded or becomes visible. ",
	          "");
	I_Method0(float, getFadeSpeed,
	          Properties::NON_VIRTUAL,
	          __float__getFadeSpeed,
	          "Get the speed that the alpha value changes. ",
	          "");
	I_Method1(void, drawImplementation, IN, osg::RenderInfo &, renderInfo,
	          Properties::VIRTUAL,
	          __void__drawImplementation__osg_RenderInfo_R1,
	          "Draw the text. ",
	          "");
	I_Constructor0(____FadeText,
	               "",
	               "");
	I_ConstructorWithDefaults2(IN, const osgText::Text &, text, , IN, const osg::CopyOp &, copyop, osg::CopyOp::SHALLOW_COPY,
	                           ____FadeText__C5_Text_R1__C5_osg_CopyOp_R1,
	                           "",
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
	I_Method0(const char *, libraryName,
	          Properties::VIRTUAL,
	          __C5_char_P1__libraryName,
	          "",
	          "");
	I_Method0(const char *, className,
	          Properties::VIRTUAL,
	          __C5_char_P1__className,
	          "",
	          "");
	I_Method1(void, setFadeSpeed, IN, float, fadeSpeed,
	          Properties::NON_VIRTUAL,
	          __void__setFadeSpeed__float,
	          "Set the speed that the alpha value changes as the text is occluded or becomes visible. ",
	          "");
	I_Method0(float, getFadeSpeed,
	          Properties::NON_VIRTUAL,
	          __float__getFadeSpeed,
	          "Get the speed that the alpha value changes. ",
	          "");
	I_Method1(void, drawImplementation, IN, osg::RenderInfo &, renderInfo,
	          Properties::VIRTUAL,
	          __void__drawImplementation__osg_RenderInfo_R1,
	          "Draw the text. ",
	          "");
	I_SimpleProperty(float, FadeSpeed, 
	                 __float__getFadeSpeed, 
	                 __void__setFadeSpeed__float);
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osgText::FadeText)
	I_BaseType(osgText::Text);
	I_BaseType(osgText::Text);
	I_Constructor0(____FadeText,
	               "",
	               "");
	I_ConstructorWithDefaults2(IN, const osgText::Text &, text, , IN, const osg::CopyOp &, copyop, osg::CopyOp::SHALLOW_COPY,
	                           ____FadeText__C5_Text_R1__C5_osg_CopyOp_R1,
	                           "",
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
	I_Method0(const char *, libraryName,
	          Properties::VIRTUAL,
	          __C5_char_P1__libraryName,
	          "",
	          "");
	I_Method0(const char *, className,
	          Properties::VIRTUAL,
	          __C5_char_P1__className,
	          "",
	          "");
	I_Method1(void, setFadeSpeed, IN, float, fadeSpeed,
	          Properties::NON_VIRTUAL,
	          __void__setFadeSpeed__float,
	          "Set the speed that the alpha value changes as the text is occluded or becomes visible. ",
	          "");
	I_Method0(float, getFadeSpeed,
	          Properties::NON_VIRTUAL,
	          __float__getFadeSpeed,
	          "Get the speed that the alpha value changes. ",
	          "");
	I_Method1(void, drawImplementation, IN, osg::RenderInfo &, renderInfo,
	          Properties::VIRTUAL,
	          __void__drawImplementation__osg_RenderInfo_R1,
	          "Draw the text. ",
	          "");
	I_Constructor0(____FadeText,
	               "",
	               "");
	I_ConstructorWithDefaults2(IN, const osgText::Text &, text, , IN, const osg::CopyOp &, copyop, osg::CopyOp::SHALLOW_COPY,
	                           ____FadeText__C5_Text_R1__C5_osg_CopyOp_R1,
	                           "",
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
	I_Method0(const char *, libraryName,
	          Properties::VIRTUAL,
	          __C5_char_P1__libraryName,
	          "",
	          "");
	I_Method0(const char *, className,
	          Properties::VIRTUAL,
	          __C5_char_P1__className,
	          "",
	          "");
	I_Method1(void, setFadeSpeed, IN, float, fadeSpeed,
	          Properties::NON_VIRTUAL,
	          __void__setFadeSpeed__float,
	          "Set the speed that the alpha value changes as the text is occluded or becomes visible. ",
	          "");
	I_Method0(float, getFadeSpeed,
	          Properties::NON_VIRTUAL,
	          __float__getFadeSpeed,
	          "Get the speed that the alpha value changes. ",
	          "");
	I_Method1(void, drawImplementation, IN, osg::RenderInfo &, renderInfo,
	          Properties::VIRTUAL,
	          __void__drawImplementation__osg_RenderInfo_R1,
	          "Draw the text. ",
	          "");
	I_SimpleProperty(float, FadeSpeed, 
	                 __float__getFadeSpeed, 
	                 __void__setFadeSpeed__float);
END_REFLECTOR

