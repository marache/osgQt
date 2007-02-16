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

#include <osg/.svn/text-base/Camera.svn-base>
#include <osg/.svn/text-base/CopyOp.svn-base>
#include <osg/.svn/text-base/FrameBufferObject.svn-base>
#include <osg/.svn/text-base/Object.svn-base>
#include <osg/.svn/text-base/StateAttribute.svn-base>
#include <osg/.svn/text-base/TextureCubeMap.svn-base>
#include <osg/FrameBufferObject>
#include <osg/State>
#include <osg/Texture1D>
#include <osg/Texture2D>
#include <osg/Texture3D>
#include <osg/TextureRectangle>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

TYPE_NAME_ALIAS(void , osg::FBOExtensions::TglBindRenderbufferEXT);

TYPE_NAME_ALIAS(void , osg::FBOExtensions::TglDeleteRenderbuffersEXT);

TYPE_NAME_ALIAS(void , osg::FBOExtensions::TglGenRenderbuffersEXT);

TYPE_NAME_ALIAS(void , osg::FBOExtensions::TglRenderbufferStorageEXT);

TYPE_NAME_ALIAS(void , osg::FBOExtensions::TglBindFramebufferEXT);

TYPE_NAME_ALIAS(void , osg::FBOExtensions::TglDeleteFramebuffersEXT);

TYPE_NAME_ALIAS(void , osg::FBOExtensions::TglGenFramebuffersEXT);

TYPE_NAME_ALIAS(GLenum , osg::FBOExtensions::TglCheckFramebufferStatusEXT);

TYPE_NAME_ALIAS(void , osg::FBOExtensions::TglFramebufferTexture1DEXT);

TYPE_NAME_ALIAS(void , osg::FBOExtensions::TglFramebufferTexture2DEXT);

TYPE_NAME_ALIAS(void , osg::FBOExtensions::TglFramebufferTexture3DEXT);

TYPE_NAME_ALIAS(void , osg::FBOExtensions::TglFramebufferRenderbufferEXT);

TYPE_NAME_ALIAS(void , osg::FBOExtensions::TglGenerateMipmapEXT);

BEGIN_OBJECT_REFLECTOR(osg::FBOExtensions)
	I_BaseType(osg::Referenced);
	I_BaseType(osg::Referenced);
	I_Method0(bool, isSupported,
	          Properties::NON_VIRTUAL,
	          __bool__isSupported,
	          "",
	          "");
	I_Method0(bool, isSupported,
	          Properties::NON_VIRTUAL,
	          __bool__isSupported,
	          "",
	          "");
	I_StaticMethod2(osg::FBOExtensions *, instance, IN, unsigned, contextID, IN, bool, createIfNotInitalized,
	                __FBOExtensions_P1__instance__unsigned__bool_S,
	                "",
	                "");
	I_StaticMethod2(osg::FBOExtensions *, instance, IN, unsigned, contextID, IN, bool, createIfNotInitalized,
	                __FBOExtensions_P1__instance__unsigned__bool_S,
	                "",
	                "");
	I_PublicMemberProperty(osg::FBOExtensions::TglBindRenderbufferEXT *, glBindRenderbufferEXT);
	I_PublicMemberProperty(osg::FBOExtensions::TglGenRenderbuffersEXT *, glGenRenderbuffersEXT);
	I_PublicMemberProperty(osg::FBOExtensions::TglDeleteRenderbuffersEXT *, glDeleteRenderbuffersEXT);
	I_PublicMemberProperty(osg::FBOExtensions::TglRenderbufferStorageEXT *, glRenderbufferStorageEXT);
	I_PublicMemberProperty(osg::FBOExtensions::TglBindFramebufferEXT *, glBindFramebufferEXT);
	I_PublicMemberProperty(osg::FBOExtensions::TglDeleteFramebuffersEXT *, glDeleteFramebuffersEXT);
	I_PublicMemberProperty(osg::FBOExtensions::TglGenFramebuffersEXT *, glGenFramebuffersEXT);
	I_PublicMemberProperty(osg::FBOExtensions::TglCheckFramebufferStatusEXT *, glCheckFramebufferStatusEXT);
	I_PublicMemberProperty(osg::FBOExtensions::TglFramebufferTexture1DEXT *, glFramebufferTexture1DEXT);
	I_PublicMemberProperty(osg::FBOExtensions::TglFramebufferTexture2DEXT *, glFramebufferTexture2DEXT);
	I_PublicMemberProperty(osg::FBOExtensions::TglFramebufferTexture3DEXT *, glFramebufferTexture3DEXT);
	I_PublicMemberProperty(osg::FBOExtensions::TglFramebufferRenderbufferEXT *, glFramebufferRenderbufferEXT);
	I_PublicMemberProperty(osg::FBOExtensions::TglGenerateMipmapEXT *, glGenerateMipmapEXT);
	I_PublicMemberProperty(osg::FBOExtensions::TglBindRenderbufferEXT *, glBindRenderbufferEXT);
	I_PublicMemberProperty(osg::FBOExtensions::TglGenRenderbuffersEXT *, glGenRenderbuffersEXT);
	I_PublicMemberProperty(osg::FBOExtensions::TglDeleteRenderbuffersEXT *, glDeleteRenderbuffersEXT);
	I_PublicMemberProperty(osg::FBOExtensions::TglRenderbufferStorageEXT *, glRenderbufferStorageEXT);
	I_PublicMemberProperty(osg::FBOExtensions::TglBindFramebufferEXT *, glBindFramebufferEXT);
	I_PublicMemberProperty(osg::FBOExtensions::TglDeleteFramebuffersEXT *, glDeleteFramebuffersEXT);
	I_PublicMemberProperty(osg::FBOExtensions::TglGenFramebuffersEXT *, glGenFramebuffersEXT);
	I_PublicMemberProperty(osg::FBOExtensions::TglCheckFramebufferStatusEXT *, glCheckFramebufferStatusEXT);
	I_PublicMemberProperty(osg::FBOExtensions::TglFramebufferTexture1DEXT *, glFramebufferTexture1DEXT);
	I_PublicMemberProperty(osg::FBOExtensions::TglFramebufferTexture2DEXT *, glFramebufferTexture2DEXT);
	I_PublicMemberProperty(osg::FBOExtensions::TglFramebufferTexture3DEXT *, glFramebufferTexture3DEXT);
	I_PublicMemberProperty(osg::FBOExtensions::TglFramebufferRenderbufferEXT *, glFramebufferRenderbufferEXT);
	I_PublicMemberProperty(osg::FBOExtensions::TglGenerateMipmapEXT *, glGenerateMipmapEXT);
END_REFLECTOR

TYPE_NAME_ALIAS(void , osg::FBOExtensions::TglBindRenderbufferEXT);

TYPE_NAME_ALIAS(void , osg::FBOExtensions::TglDeleteRenderbuffersEXT);

TYPE_NAME_ALIAS(void , osg::FBOExtensions::TglGenRenderbuffersEXT);

TYPE_NAME_ALIAS(void , osg::FBOExtensions::TglRenderbufferStorageEXT);

TYPE_NAME_ALIAS(void , osg::FBOExtensions::TglBindFramebufferEXT);

TYPE_NAME_ALIAS(void , osg::FBOExtensions::TglDeleteFramebuffersEXT);

TYPE_NAME_ALIAS(void , osg::FBOExtensions::TglGenFramebuffersEXT);

TYPE_NAME_ALIAS(GLenum , osg::FBOExtensions::TglCheckFramebufferStatusEXT);

TYPE_NAME_ALIAS(void , osg::FBOExtensions::TglFramebufferTexture1DEXT);

TYPE_NAME_ALIAS(void , osg::FBOExtensions::TglFramebufferTexture2DEXT);

TYPE_NAME_ALIAS(void , osg::FBOExtensions::TglFramebufferTexture3DEXT);

TYPE_NAME_ALIAS(void , osg::FBOExtensions::TglFramebufferRenderbufferEXT);

TYPE_NAME_ALIAS(void , osg::FBOExtensions::TglGenerateMipmapEXT);

BEGIN_OBJECT_REFLECTOR(osg::FBOExtensions)
	I_BaseType(osg::Referenced);
	I_BaseType(osg::Referenced);
	I_Method0(bool, isSupported,
	          Properties::NON_VIRTUAL,
	          __bool__isSupported,
	          "",
	          "");
	I_Method0(bool, isSupported,
	          Properties::NON_VIRTUAL,
	          __bool__isSupported,
	          "",
	          "");
	I_StaticMethod2(osg::FBOExtensions *, instance, IN, unsigned, contextID, IN, bool, createIfNotInitalized,
	                __FBOExtensions_P1__instance__unsigned__bool_S,
	                "",
	                "");
	I_StaticMethod2(osg::FBOExtensions *, instance, IN, unsigned, contextID, IN, bool, createIfNotInitalized,
	                __FBOExtensions_P1__instance__unsigned__bool_S,
	                "",
	                "");
	I_PublicMemberProperty(osg::FBOExtensions::TglBindRenderbufferEXT *, glBindRenderbufferEXT);
	I_PublicMemberProperty(osg::FBOExtensions::TglGenRenderbuffersEXT *, glGenRenderbuffersEXT);
	I_PublicMemberProperty(osg::FBOExtensions::TglDeleteRenderbuffersEXT *, glDeleteRenderbuffersEXT);
	I_PublicMemberProperty(osg::FBOExtensions::TglRenderbufferStorageEXT *, glRenderbufferStorageEXT);
	I_PublicMemberProperty(osg::FBOExtensions::TglBindFramebufferEXT *, glBindFramebufferEXT);
	I_PublicMemberProperty(osg::FBOExtensions::TglDeleteFramebuffersEXT *, glDeleteFramebuffersEXT);
	I_PublicMemberProperty(osg::FBOExtensions::TglGenFramebuffersEXT *, glGenFramebuffersEXT);
	I_PublicMemberProperty(osg::FBOExtensions::TglCheckFramebufferStatusEXT *, glCheckFramebufferStatusEXT);
	I_PublicMemberProperty(osg::FBOExtensions::TglFramebufferTexture1DEXT *, glFramebufferTexture1DEXT);
	I_PublicMemberProperty(osg::FBOExtensions::TglFramebufferTexture2DEXT *, glFramebufferTexture2DEXT);
	I_PublicMemberProperty(osg::FBOExtensions::TglFramebufferTexture3DEXT *, glFramebufferTexture3DEXT);
	I_PublicMemberProperty(osg::FBOExtensions::TglFramebufferRenderbufferEXT *, glFramebufferRenderbufferEXT);
	I_PublicMemberProperty(osg::FBOExtensions::TglGenerateMipmapEXT *, glGenerateMipmapEXT);
	I_PublicMemberProperty(osg::FBOExtensions::TglBindRenderbufferEXT *, glBindRenderbufferEXT);
	I_PublicMemberProperty(osg::FBOExtensions::TglGenRenderbuffersEXT *, glGenRenderbuffersEXT);
	I_PublicMemberProperty(osg::FBOExtensions::TglDeleteRenderbuffersEXT *, glDeleteRenderbuffersEXT);
	I_PublicMemberProperty(osg::FBOExtensions::TglRenderbufferStorageEXT *, glRenderbufferStorageEXT);
	I_PublicMemberProperty(osg::FBOExtensions::TglBindFramebufferEXT *, glBindFramebufferEXT);
	I_PublicMemberProperty(osg::FBOExtensions::TglDeleteFramebuffersEXT *, glDeleteFramebuffersEXT);
	I_PublicMemberProperty(osg::FBOExtensions::TglGenFramebuffersEXT *, glGenFramebuffersEXT);
	I_PublicMemberProperty(osg::FBOExtensions::TglCheckFramebufferStatusEXT *, glCheckFramebufferStatusEXT);
	I_PublicMemberProperty(osg::FBOExtensions::TglFramebufferTexture1DEXT *, glFramebufferTexture1DEXT);
	I_PublicMemberProperty(osg::FBOExtensions::TglFramebufferTexture2DEXT *, glFramebufferTexture2DEXT);
	I_PublicMemberProperty(osg::FBOExtensions::TglFramebufferTexture3DEXT *, glFramebufferTexture3DEXT);
	I_PublicMemberProperty(osg::FBOExtensions::TglFramebufferRenderbufferEXT *, glFramebufferRenderbufferEXT);
	I_PublicMemberProperty(osg::FBOExtensions::TglGenerateMipmapEXT *, glGenerateMipmapEXT);
END_REFLECTOR

BEGIN_VALUE_REFLECTOR(osg::FrameBufferAttachment)
	I_Constructor0(____FrameBufferAttachment,
	               "",
	               "");
	I_Constructor1(IN, const osg::FrameBufferAttachment &, copy,
	               Properties::NON_EXPLICIT,
	               ____FrameBufferAttachment__C5_FrameBufferAttachment_R1,
	               "",
	               "");
	I_Constructor1(IN, osg::RenderBuffer *, target,
	               Properties::EXPLICIT,
	               ____FrameBufferAttachment__RenderBuffer_P1,
	               "",
	               "");
	I_ConstructorWithDefaults2(IN, osg::Texture1D *, target, , IN, int, level, 0,
	                           ____FrameBufferAttachment__Texture1D_P1__int,
	                           "",
	                           "");
	I_ConstructorWithDefaults2(IN, osg::Texture2D *, target, , IN, int, level, 0,
	                           ____FrameBufferAttachment__Texture2D_P1__int,
	                           "",
	                           "");
	I_ConstructorWithDefaults3(IN, osg::Texture3D *, target, , IN, int, zoffset, , IN, int, level, 0,
	                           ____FrameBufferAttachment__Texture3D_P1__int__int,
	                           "",
	                           "");
	I_ConstructorWithDefaults3(IN, osg::TextureCubeMap *, target, , IN, int, face, , IN, int, level, 0,
	                           ____FrameBufferAttachment__TextureCubeMap_P1__int__int,
	                           "",
	                           "");
	I_Constructor1(IN, osg::TextureRectangle *, target,
	               Properties::EXPLICIT,
	               ____FrameBufferAttachment__TextureRectangle_P1,
	               "",
	               "");
	I_Constructor1(IN, osg::Camera::Attachment &, attachment,
	               Properties::EXPLICIT,
	               ____FrameBufferAttachment__Camera_Attachment_R1,
	               "",
	               "");
	I_Method2(void, createRequiredTexturesAndApplyGenerateMipMap, IN, osg::State &, state, IN, const osg::FBOExtensions *, ext,
	          Properties::NON_VIRTUAL,
	          __void__createRequiredTexturesAndApplyGenerateMipMap__State_R1__C5_FBOExtensions_P1,
	          "",
	          "");
	I_Method3(void, attach, IN, osg::State &, state, IN, GLenum, attachment_point, IN, const osg::FBOExtensions *, ext,
	          Properties::NON_VIRTUAL,
	          __void__attach__State_R1__GLenum__C5_FBOExtensions_P1,
	          "",
	          "");
	I_Method1(int, compare, IN, const osg::FrameBufferAttachment &, fa,
	          Properties::NON_VIRTUAL,
	          __int__compare__C5_FrameBufferAttachment_R1,
	          "",
	          "");
	I_Constructor0(____FrameBufferAttachment,
	               "",
	               "");
	I_Constructor1(IN, const osg::FrameBufferAttachment &, copy,
	               Properties::NON_EXPLICIT,
	               ____FrameBufferAttachment__C5_FrameBufferAttachment_R1,
	               "",
	               "");
	I_Constructor1(IN, osg::RenderBuffer *, target,
	               Properties::EXPLICIT,
	               ____FrameBufferAttachment__RenderBuffer_P1,
	               "",
	               "");
	I_ConstructorWithDefaults2(IN, osg::Texture1D *, target, , IN, int, level, 0,
	                           ____FrameBufferAttachment__Texture1D_P1__int,
	                           "",
	                           "");
	I_ConstructorWithDefaults2(IN, osg::Texture2D *, target, , IN, int, level, 0,
	                           ____FrameBufferAttachment__Texture2D_P1__int,
	                           "",
	                           "");
	I_ConstructorWithDefaults3(IN, osg::Texture3D *, target, , IN, int, zoffset, , IN, int, level, 0,
	                           ____FrameBufferAttachment__Texture3D_P1__int__int,
	                           "",
	                           "");
	I_ConstructorWithDefaults3(IN, osg::TextureCubeMap *, target, , IN, int, face, , IN, int, level, 0,
	                           ____FrameBufferAttachment__TextureCubeMap_P1__int__int,
	                           "",
	                           "");
	I_Constructor1(IN, osg::TextureRectangle *, target,
	               Properties::EXPLICIT,
	               ____FrameBufferAttachment__TextureRectangle_P1,
	               "",
	               "");
	I_Constructor1(IN, osg::Camera::Attachment &, attachment,
	               Properties::EXPLICIT,
	               ____FrameBufferAttachment__Camera_Attachment_R1,
	               "",
	               "");
	I_Method2(void, createRequiredTexturesAndApplyGenerateMipMap, IN, osg::State &, state, IN, const osg::FBOExtensions *, ext,
	          Properties::NON_VIRTUAL,
	          __void__createRequiredTexturesAndApplyGenerateMipMap__State_R1__C5_FBOExtensions_P1,
	          "",
	          "");
	I_Method3(void, attach, IN, osg::State &, state, IN, GLenum, attachment_point, IN, const osg::FBOExtensions *, ext,
	          Properties::NON_VIRTUAL,
	          __void__attach__State_R1__GLenum__C5_FBOExtensions_P1,
	          "",
	          "");
	I_Method1(int, compare, IN, const osg::FrameBufferAttachment &, fa,
	          Properties::NON_VIRTUAL,
	          __int__compare__C5_FrameBufferAttachment_R1,
	          "",
	          "");
END_REFLECTOR

BEGIN_VALUE_REFLECTOR(osg::FrameBufferAttachment)
	I_Constructor0(____FrameBufferAttachment,
	               "",
	               "");
	I_Constructor1(IN, const osg::FrameBufferAttachment &, copy,
	               Properties::NON_EXPLICIT,
	               ____FrameBufferAttachment__C5_FrameBufferAttachment_R1,
	               "",
	               "");
	I_Constructor1(IN, osg::RenderBuffer *, target,
	               Properties::EXPLICIT,
	               ____FrameBufferAttachment__RenderBuffer_P1,
	               "",
	               "");
	I_ConstructorWithDefaults2(IN, osg::Texture1D *, target, , IN, int, level, 0,
	                           ____FrameBufferAttachment__Texture1D_P1__int,
	                           "",
	                           "");
	I_ConstructorWithDefaults2(IN, osg::Texture2D *, target, , IN, int, level, 0,
	                           ____FrameBufferAttachment__Texture2D_P1__int,
	                           "",
	                           "");
	I_ConstructorWithDefaults3(IN, osg::Texture3D *, target, , IN, int, zoffset, , IN, int, level, 0,
	                           ____FrameBufferAttachment__Texture3D_P1__int__int,
	                           "",
	                           "");
	I_ConstructorWithDefaults3(IN, osg::TextureCubeMap *, target, , IN, int, face, , IN, int, level, 0,
	                           ____FrameBufferAttachment__TextureCubeMap_P1__int__int,
	                           "",
	                           "");
	I_Constructor1(IN, osg::TextureRectangle *, target,
	               Properties::EXPLICIT,
	               ____FrameBufferAttachment__TextureRectangle_P1,
	               "",
	               "");
	I_Constructor1(IN, osg::Camera::Attachment &, attachment,
	               Properties::EXPLICIT,
	               ____FrameBufferAttachment__Camera_Attachment_R1,
	               "",
	               "");
	I_Method2(void, createRequiredTexturesAndApplyGenerateMipMap, IN, osg::State &, state, IN, const osg::FBOExtensions *, ext,
	          Properties::NON_VIRTUAL,
	          __void__createRequiredTexturesAndApplyGenerateMipMap__State_R1__C5_FBOExtensions_P1,
	          "",
	          "");
	I_Method3(void, attach, IN, osg::State &, state, IN, GLenum, attachment_point, IN, const osg::FBOExtensions *, ext,
	          Properties::NON_VIRTUAL,
	          __void__attach__State_R1__GLenum__C5_FBOExtensions_P1,
	          "",
	          "");
	I_Method1(int, compare, IN, const osg::FrameBufferAttachment &, fa,
	          Properties::NON_VIRTUAL,
	          __int__compare__C5_FrameBufferAttachment_R1,
	          "",
	          "");
	I_Constructor0(____FrameBufferAttachment,
	               "",
	               "");
	I_Constructor1(IN, const osg::FrameBufferAttachment &, copy,
	               Properties::NON_EXPLICIT,
	               ____FrameBufferAttachment__C5_FrameBufferAttachment_R1,
	               "",
	               "");
	I_Constructor1(IN, osg::RenderBuffer *, target,
	               Properties::EXPLICIT,
	               ____FrameBufferAttachment__RenderBuffer_P1,
	               "",
	               "");
	I_ConstructorWithDefaults2(IN, osg::Texture1D *, target, , IN, int, level, 0,
	                           ____FrameBufferAttachment__Texture1D_P1__int,
	                           "",
	                           "");
	I_ConstructorWithDefaults2(IN, osg::Texture2D *, target, , IN, int, level, 0,
	                           ____FrameBufferAttachment__Texture2D_P1__int,
	                           "",
	                           "");
	I_ConstructorWithDefaults3(IN, osg::Texture3D *, target, , IN, int, zoffset, , IN, int, level, 0,
	                           ____FrameBufferAttachment__Texture3D_P1__int__int,
	                           "",
	                           "");
	I_ConstructorWithDefaults3(IN, osg::TextureCubeMap *, target, , IN, int, face, , IN, int, level, 0,
	                           ____FrameBufferAttachment__TextureCubeMap_P1__int__int,
	                           "",
	                           "");
	I_Constructor1(IN, osg::TextureRectangle *, target,
	               Properties::EXPLICIT,
	               ____FrameBufferAttachment__TextureRectangle_P1,
	               "",
	               "");
	I_Constructor1(IN, osg::Camera::Attachment &, attachment,
	               Properties::EXPLICIT,
	               ____FrameBufferAttachment__Camera_Attachment_R1,
	               "",
	               "");
	I_Method2(void, createRequiredTexturesAndApplyGenerateMipMap, IN, osg::State &, state, IN, const osg::FBOExtensions *, ext,
	          Properties::NON_VIRTUAL,
	          __void__createRequiredTexturesAndApplyGenerateMipMap__State_R1__C5_FBOExtensions_P1,
	          "",
	          "");
	I_Method3(void, attach, IN, osg::State &, state, IN, GLenum, attachment_point, IN, const osg::FBOExtensions *, ext,
	          Properties::NON_VIRTUAL,
	          __void__attach__State_R1__GLenum__C5_FBOExtensions_P1,
	          "",
	          "");
	I_Method1(int, compare, IN, const osg::FrameBufferAttachment &, fa,
	          Properties::NON_VIRTUAL,
	          __int__compare__C5_FrameBufferAttachment_R1,
	          "",
	          "");
END_REFLECTOR

TYPE_NAME_ALIAS(std::map< GLenum COMMA  osg::FrameBufferAttachment >, osg::FrameBufferObject::AttachmentMap);

BEGIN_OBJECT_REFLECTOR(osg::FrameBufferObject)
	I_BaseType(osg::StateAttribute);
	I_BaseType(osg::StateAttribute);
	I_Constructor0(____FrameBufferObject,
	               "",
	               "");
	I_ConstructorWithDefaults2(IN, const osg::FrameBufferObject &, copy, , IN, const osg::CopyOp &, copyop, osg::CopyOp::SHALLOW_COPY,
	                           ____FrameBufferObject__C5_FrameBufferObject_R1__C5_CopyOp_R1,
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
	I_Method0(Type, getType,
	          Properties::VIRTUAL,
	          __Type__getType,
	          "",
	          "");
	I_Method0(const osg::FrameBufferObject::AttachmentMap &, getAttachmentMap,
	          Properties::NON_VIRTUAL,
	          __C5_AttachmentMap_R1__getAttachmentMap,
	          "",
	          "");
	I_Method1(bool, hasAttachment, IN, GLenum, attachment_point,
	          Properties::NON_VIRTUAL,
	          __bool__hasAttachment__GLenum,
	          "",
	          "");
	I_Method1(const osg::FrameBufferAttachment &, getAttachment, IN, GLenum, attachment_point,
	          Properties::NON_VIRTUAL,
	          __C5_FrameBufferAttachment_R1__getAttachment__GLenum,
	          "",
	          "");
	I_Method2(void, setAttachment, IN, GLenum, attachment_point, IN, const osg::FrameBufferAttachment &, attachment,
	          Properties::NON_VIRTUAL,
	          __void__setAttachment__GLenum__C5_FrameBufferAttachment_R1,
	          "",
	          "");
	I_Method1(int, compare, IN, const osg::StateAttribute &, sa,
	          Properties::NON_VIRTUAL,
	          __int__compare__C5_StateAttribute_R1,
	          "",
	          "");
	I_Method1(void, apply, IN, osg::State &, state,
	          Properties::NON_VIRTUAL,
	          __void__apply__State_R1,
	          "",
	          "");
	I_Constructor0(____FrameBufferObject,
	               "",
	               "");
	I_ConstructorWithDefaults2(IN, const osg::FrameBufferObject &, copy, , IN, const osg::CopyOp &, copyop, osg::CopyOp::SHALLOW_COPY,
	                           ____FrameBufferObject__C5_FrameBufferObject_R1__C5_CopyOp_R1,
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
	I_Method0(Type, getType,
	          Properties::VIRTUAL,
	          __Type__getType,
	          "",
	          "");
	I_Method0(const osg::FrameBufferObject::AttachmentMap &, getAttachmentMap,
	          Properties::NON_VIRTUAL,
	          __C5_AttachmentMap_R1__getAttachmentMap,
	          "",
	          "");
	I_Method1(bool, hasAttachment, IN, GLenum, attachment_point,
	          Properties::NON_VIRTUAL,
	          __bool__hasAttachment__GLenum,
	          "",
	          "");
	I_Method1(const osg::FrameBufferAttachment &, getAttachment, IN, GLenum, attachment_point,
	          Properties::NON_VIRTUAL,
	          __C5_FrameBufferAttachment_R1__getAttachment__GLenum,
	          "",
	          "");
	I_Method2(void, setAttachment, IN, GLenum, attachment_point, IN, const osg::FrameBufferAttachment &, attachment,
	          Properties::NON_VIRTUAL,
	          __void__setAttachment__GLenum__C5_FrameBufferAttachment_R1,
	          "",
	          "");
	I_Method1(int, compare, IN, const osg::StateAttribute &, sa,
	          Properties::NON_VIRTUAL,
	          __int__compare__C5_StateAttribute_R1,
	          "",
	          "");
	I_Method1(void, apply, IN, osg::State &, state,
	          Properties::NON_VIRTUAL,
	          __void__apply__State_R1,
	          "",
	          "");
	I_StaticMethod2(void, deleteFrameBufferObject, IN, unsigned int, contextID, IN, GLuint, program,
	                __void__deleteFrameBufferObject__unsigned_int__GLuint_S,
	                "Mark internal FBO for deletion. ",
	                "Deletion requests are queued until they can be executed in the proper GL context. ");
	I_StaticMethod3(void, flushDeletedFrameBufferObjects, IN, unsigned int, contextID, IN, double, currentTime, IN, double &, availableTime,
	                __void__flushDeletedFrameBufferObjects__unsigned_int__double__double_R1_S,
	                "flush all the cached FBOs which need to be deleted in the OpenGL context related to contextID. ",
	                "");
	I_StaticMethod2(void, deleteFrameBufferObject, IN, unsigned int, contextID, IN, GLuint, program,
	                __void__deleteFrameBufferObject__unsigned_int__GLuint_S,
	                "Mark internal FBO for deletion. ",
	                "Deletion requests are queued until they can be executed in the proper GL context. ");
	I_StaticMethod3(void, flushDeletedFrameBufferObjects, IN, unsigned int, contextID, IN, double, currentTime, IN, double &, availableTime,
	                __void__flushDeletedFrameBufferObjects__unsigned_int__double__double_R1_S,
	                "flush all the cached FBOs which need to be deleted in the OpenGL context related to contextID. ",
	                "");
	I_IndexedProperty(const osg::FrameBufferAttachment &, Attachment, 
	                  __C5_FrameBufferAttachment_R1__getAttachment__GLenum, 
	                  __void__setAttachment__GLenum__C5_FrameBufferAttachment_R1, 
	                  0);
	I_SimpleProperty(const osg::FrameBufferObject::AttachmentMap &, AttachmentMap, 
	                 __C5_AttachmentMap_R1__getAttachmentMap, 
	                 0);
	I_SimpleProperty(Type, Type, 
	                 __Type__getType, 
	                 0);
END_REFLECTOR

TYPE_NAME_ALIAS(std::map< GLenum COMMA  osg::FrameBufferAttachment >, osg::FrameBufferObject::AttachmentMap);

BEGIN_OBJECT_REFLECTOR(osg::FrameBufferObject)
	I_BaseType(osg::StateAttribute);
	I_BaseType(osg::StateAttribute);
	I_Constructor0(____FrameBufferObject,
	               "",
	               "");
	I_ConstructorWithDefaults2(IN, const osg::FrameBufferObject &, copy, , IN, const osg::CopyOp &, copyop, osg::CopyOp::SHALLOW_COPY,
	                           ____FrameBufferObject__C5_FrameBufferObject_R1__C5_CopyOp_R1,
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
	I_Method0(Type, getType,
	          Properties::VIRTUAL,
	          __Type__getType,
	          "",
	          "");
	I_Method0(const osg::FrameBufferObject::AttachmentMap &, getAttachmentMap,
	          Properties::NON_VIRTUAL,
	          __C5_AttachmentMap_R1__getAttachmentMap,
	          "",
	          "");
	I_Method1(bool, hasAttachment, IN, GLenum, attachment_point,
	          Properties::NON_VIRTUAL,
	          __bool__hasAttachment__GLenum,
	          "",
	          "");
	I_Method1(const osg::FrameBufferAttachment &, getAttachment, IN, GLenum, attachment_point,
	          Properties::NON_VIRTUAL,
	          __C5_FrameBufferAttachment_R1__getAttachment__GLenum,
	          "",
	          "");
	I_Method2(void, setAttachment, IN, GLenum, attachment_point, IN, const osg::FrameBufferAttachment &, attachment,
	          Properties::NON_VIRTUAL,
	          __void__setAttachment__GLenum__C5_FrameBufferAttachment_R1,
	          "",
	          "");
	I_Method1(int, compare, IN, const osg::StateAttribute &, sa,
	          Properties::NON_VIRTUAL,
	          __int__compare__C5_StateAttribute_R1,
	          "",
	          "");
	I_Method1(void, apply, IN, osg::State &, state,
	          Properties::NON_VIRTUAL,
	          __void__apply__State_R1,
	          "",
	          "");
	I_Constructor0(____FrameBufferObject,
	               "",
	               "");
	I_ConstructorWithDefaults2(IN, const osg::FrameBufferObject &, copy, , IN, const osg::CopyOp &, copyop, osg::CopyOp::SHALLOW_COPY,
	                           ____FrameBufferObject__C5_FrameBufferObject_R1__C5_CopyOp_R1,
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
	I_Method0(Type, getType,
	          Properties::VIRTUAL,
	          __Type__getType,
	          "",
	          "");
	I_Method0(const osg::FrameBufferObject::AttachmentMap &, getAttachmentMap,
	          Properties::NON_VIRTUAL,
	          __C5_AttachmentMap_R1__getAttachmentMap,
	          "",
	          "");
	I_Method1(bool, hasAttachment, IN, GLenum, attachment_point,
	          Properties::NON_VIRTUAL,
	          __bool__hasAttachment__GLenum,
	          "",
	          "");
	I_Method1(const osg::FrameBufferAttachment &, getAttachment, IN, GLenum, attachment_point,
	          Properties::NON_VIRTUAL,
	          __C5_FrameBufferAttachment_R1__getAttachment__GLenum,
	          "",
	          "");
	I_Method2(void, setAttachment, IN, GLenum, attachment_point, IN, const osg::FrameBufferAttachment &, attachment,
	          Properties::NON_VIRTUAL,
	          __void__setAttachment__GLenum__C5_FrameBufferAttachment_R1,
	          "",
	          "");
	I_Method1(int, compare, IN, const osg::StateAttribute &, sa,
	          Properties::NON_VIRTUAL,
	          __int__compare__C5_StateAttribute_R1,
	          "",
	          "");
	I_Method1(void, apply, IN, osg::State &, state,
	          Properties::NON_VIRTUAL,
	          __void__apply__State_R1,
	          "",
	          "");
	I_StaticMethod2(void, deleteFrameBufferObject, IN, unsigned int, contextID, IN, GLuint, program,
	                __void__deleteFrameBufferObject__unsigned_int__GLuint_S,
	                "Mark internal FBO for deletion. ",
	                "Deletion requests are queued until they can be executed in the proper GL context. ");
	I_StaticMethod3(void, flushDeletedFrameBufferObjects, IN, unsigned int, contextID, IN, double, currentTime, IN, double &, availableTime,
	                __void__flushDeletedFrameBufferObjects__unsigned_int__double__double_R1_S,
	                "flush all the cached FBOs which need to be deleted in the OpenGL context related to contextID. ",
	                "");
	I_StaticMethod2(void, deleteFrameBufferObject, IN, unsigned int, contextID, IN, GLuint, program,
	                __void__deleteFrameBufferObject__unsigned_int__GLuint_S,
	                "Mark internal FBO for deletion. ",
	                "Deletion requests are queued until they can be executed in the proper GL context. ");
	I_StaticMethod3(void, flushDeletedFrameBufferObjects, IN, unsigned int, contextID, IN, double, currentTime, IN, double &, availableTime,
	                __void__flushDeletedFrameBufferObjects__unsigned_int__double__double_R1_S,
	                "flush all the cached FBOs which need to be deleted in the OpenGL context related to contextID. ",
	                "");
	I_IndexedProperty(const osg::FrameBufferAttachment &, Attachment, 
	                  __C5_FrameBufferAttachment_R1__getAttachment__GLenum, 
	                  __void__setAttachment__GLenum__C5_FrameBufferAttachment_R1, 
	                  0);
	I_SimpleProperty(const osg::FrameBufferObject::AttachmentMap &, AttachmentMap, 
	                 __C5_AttachmentMap_R1__getAttachmentMap, 
	                 0);
	I_SimpleProperty(Type, Type, 
	                 __Type__getType, 
	                 0);
END_REFLECTOR

