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

#include <osg/DisplaySettings>
#include <osg/FrameStamp>
#include <osg/GraphicsContext>
#include <osg/Matrix>
#include <osg/Polytope>
#include <osg/Program>
#include <osg/State>
#include <osg/StateAttribute>
#include <osg/StateSet>
#include <osg/Viewport>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

TYPE_NAME_ALIAS(std::vector< const osg::StateSet * >, osg::State::StateSetStack);

BEGIN_ENUM_REFLECTOR(osg::State::CheckForGLErrors)
	I_EnumLabel(osg::State::NEVER_CHECK_GL_ERRORS);
	I_EnumLabel(osg::State::ONCE_PER_FRAME);
	I_EnumLabel(osg::State::ONCE_PER_ATTRIBUTE);
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osg::State)
	I_BaseType(osg::Referenced);
	I_Constructor0(____State,
	               "",
	               "");
	I_Method1(void, setGraphicsContext, IN, osg::GraphicsContext *, context,
	          __void__setGraphicsContext__GraphicsContext_P1,
	          "Set the graphics context associated with that owns this State object. ",
	          "");
	I_Method0(osg::GraphicsContext *, getGraphicsContext,
	          __GraphicsContext_P1__getGraphicsContext,
	          "Get the graphics context associated with that owns this State object. ",
	          "");
	I_Method0(const osg::GraphicsContext *, getGraphicsContext,
	          __C5_GraphicsContext_P1__getGraphicsContext,
	          "Get the const graphics context associated with that owns this State object. ",
	          "");
	I_Method1(void, setContextID, IN, unsigned int, contextID,
	          __void__setContextID__unsigned_int,
	          "Set the current OpenGL context uniqueID. ",
	          "Note, it is the application developers responsibility to set up unique ID for each OpenGL context. This value is then used by osg::StateAttribute's and osg::Drawable's to help manage OpenGL display list and texture binds appropriate for each context, the contextID simply acts as an index in local arrays that they maintain for the purpose. Typical settings for contextID are 0,1,2,3... up to the maximum number of graphics contexts you have set up. By default contextID is 0. ");
	I_Method0(unsigned int, getContextID,
	          __unsigned_int__getContextID,
	          "Get the current OpenGL context unique ID. ",
	          "");
	I_Method1(void, pushStateSet, IN, const osg::StateSet *, dstate,
	          __void__pushStateSet__C5_StateSet_P1,
	          "Push stateset onto state stack. ",
	          "");
	I_Method0(void, popStateSet,
	          __void__popStateSet,
	          "Pop stateset off state stack. ",
	          "");
	I_Method0(void, popAllStateSets,
	          __void__popAllStateSets,
	          "pop all statesets off state stack, ensuring it is empty ready for the next frame. ",
	          "Note, to return OpenGL to default state, one should do any state.popAllStatSets(); state.apply(). ");
	I_Method0(unsigned int, getStateSetStackSize,
	          __unsigned_int__getStateSetStackSize,
	          "Get the number of StateSet's on the StateSet stack. ",
	          "");
	I_Method1(void, popStateSetStackToSize, IN, unsigned int, size,
	          __void__popStateSetStackToSize__unsigned_int,
	          "Pop StateSet's for the StateSet stack till its size equals the specified size. ",
	          "");
	I_Method0(osg::State::StateSetStack &, getStateSetStack,
	          __StateSetStack_R1__getStateSetStack,
	          "Get the StateSet stack. ",
	          "");
	I_Method1(void, captureCurrentState, IN, osg::StateSet &, stateset,
	          __void__captureCurrentState__StateSet_R1,
	          "Copy the modes and attributes which capture the current state. ",
	          "");
	I_Method0(void, reset,
	          __void__reset,
	          "reset the state object to an empty stack. ",
	          "");
	I_Method0(const osg::Viewport *, getCurrentViewport,
	          __C5_Viewport_P1__getCurrentViewport,
	          "",
	          "");
	I_Method1(void, setInitialViewMatrix, IN, const osg::RefMatrix *, matrix,
	          __void__setInitialViewMatrix__C5_osg_RefMatrix_P1,
	          "",
	          "");
	I_Method0(const osg::Matrix &, getInitialViewMatrix,
	          __C5_osg_Matrix_R1__getInitialViewMatrix,
	          "",
	          "");
	I_Method0(const osg::Matrix &, getInitialInverseViewMatrix,
	          __C5_osg_Matrix_R1__getInitialInverseViewMatrix,
	          "",
	          "");
	I_Method1(void, applyProjectionMatrix, IN, const osg::RefMatrix *, matrix,
	          __void__applyProjectionMatrix__C5_osg_RefMatrix_P1,
	          "",
	          "");
	I_Method0(const osg::Matrix &, getProjectionMatrix,
	          __C5_osg_Matrix_R1__getProjectionMatrix,
	          "",
	          "");
	I_Method1(void, applyModelViewMatrix, IN, const osg::RefMatrix *, matrix,
	          __void__applyModelViewMatrix__C5_osg_RefMatrix_P1,
	          "",
	          "");
	I_Method0(const osg::Matrix &, getModelViewMatrix,
	          __C5_osg_Matrix_R1__getModelViewMatrix,
	          "",
	          "");
	I_Method0(osg::Polytope, getViewFrustum,
	          __Polytope__getViewFrustum,
	          "",
	          "");
	I_Method1(void, apply, IN, const osg::StateSet *, dstate,
	          __void__apply__C5_StateSet_P1,
	          "Apply stateset. ",
	          "");
	I_Method0(void, apply,
	          __void__apply,
	          "Updates the OpenGL state so that it matches the StateSet at the top of the stack of StateSets maintained internally by a State. ",
	          "");
	I_Method2(void, setModeValidity, IN, osg::StateAttribute::GLMode, mode, IN, bool, valid,
	          __void__setModeValidity__StateAttribute_GLMode__bool,
	          "Set whether a particular OpenGL mode is valid in the current graphics context. ",
	          "Use to disable OpenGL modes that are not supported by current graphics drivers/context. ");
	I_Method1(bool, getModeValidity, IN, osg::StateAttribute::GLMode, mode,
	          __bool__getModeValidity__StateAttribute_GLMode,
	          "Get whether a particular OpenGL mode is valid in the current graphics context. ",
	          "Use to disable OpenGL modes that are not supported by current graphics drivers/context. ");
	I_Method2(void, setGlobalDefaultModeValue, IN, osg::StateAttribute::GLMode, mode, IN, bool, enabled,
	          __void__setGlobalDefaultModeValue__StateAttribute_GLMode__bool,
	          "",
	          "");
	I_Method1(bool, getGlobalDefaultModeValue, IN, osg::StateAttribute::GLMode, mode,
	          __bool__getGlobalDefaultModeValue__StateAttribute_GLMode,
	          "",
	          "");
	I_Method2(bool, applyMode, IN, osg::StateAttribute::GLMode, mode, IN, bool, enabled,
	          __bool__applyMode__StateAttribute_GLMode__bool,
	          "Apply an OpenGL mode if required. ",
	          "This is a wrapper around glEnable() and glDisable(), that just actually calls these functions if the enabled flag is different than the current state. true if the state was actually changed. false otherwise. Notice that a false return does not indicate an error, it just means that the mode was already set to the same value as the enabled parameter. ");
	I_Method3(void, setGlobalDefaultTextureModeValue, IN, unsigned int, unit, IN, osg::StateAttribute::GLMode, mode, IN, bool, enabled,
	          __void__setGlobalDefaultTextureModeValue__unsigned_int__StateAttribute_GLMode__bool,
	          "",
	          "");
	I_Method2(bool, getGlobalDefaultTextureModeValue, IN, unsigned int, unit, IN, osg::StateAttribute::GLMode, mode,
	          __bool__getGlobalDefaultTextureModeValue__unsigned_int__StateAttribute_GLMode,
	          "",
	          "");
	I_Method3(bool, applyTextureMode, IN, unsigned int, unit, IN, osg::StateAttribute::GLMode, mode, IN, bool, enabled,
	          __bool__applyTextureMode__unsigned_int__StateAttribute_GLMode__bool,
	          "",
	          "");
	I_Method1(void, setGlobalDefaultAttribute, IN, const osg::StateAttribute *, attribute,
	          __void__setGlobalDefaultAttribute__C5_StateAttribute_P1,
	          "",
	          "");
	I_MethodWithDefaults2(const osg::StateAttribute *, getGlobalDefaultAttribute, IN, osg::StateAttribute::Type, type, , IN, unsigned int, member, 0,
	                      __C5_StateAttribute_P1__getGlobalDefaultAttribute__StateAttribute_Type__unsigned_int,
	                      "",
	                      "");
	I_Method1(bool, applyAttribute, IN, const osg::StateAttribute *, attribute,
	          __bool__applyAttribute__C5_StateAttribute_P1,
	          "Apply an attribute if required. ",
	          "");
	I_Method2(void, setGlobalDefaultTextureAttribute, IN, unsigned int, unit, IN, const osg::StateAttribute *, attribute,
	          __void__setGlobalDefaultTextureAttribute__unsigned_int__C5_StateAttribute_P1,
	          "",
	          "");
	I_MethodWithDefaults3(const osg::StateAttribute *, getGlobalDefaultTextureAttribute, IN, unsigned int, unit, , IN, osg::StateAttribute::Type, type, , IN, unsigned int, member, 0,
	                      __C5_StateAttribute_P1__getGlobalDefaultTextureAttribute__unsigned_int__StateAttribute_Type__unsigned_int,
	                      "",
	                      "");
	I_Method2(bool, applyTextureAttribute, IN, unsigned int, unit, IN, const osg::StateAttribute *, attribute,
	          __bool__applyTextureAttribute__unsigned_int__C5_StateAttribute_P1,
	          "",
	          "");
	I_Method2(void, haveAppliedMode, IN, osg::StateAttribute::GLMode, mode, IN, osg::StateAttribute::GLModeValue, value,
	          __void__haveAppliedMode__StateAttribute_GLMode__StateAttribute_GLModeValue,
	          "Mode has been set externally, update state to reflect this setting. ",
	          "");
	I_Method1(void, haveAppliedMode, IN, osg::StateAttribute::GLMode, mode,
	          __void__haveAppliedMode__StateAttribute_GLMode,
	          "Mode has been set externally, therefore dirty the associated mode in osg::State so it is applied on next call to osg::State::apply(. ",
	          ".) ");
	I_Method1(void, haveAppliedAttribute, IN, const osg::StateAttribute *, attribute,
	          __void__haveAppliedAttribute__C5_StateAttribute_P1,
	          "Attribute has been applied externally, update state to reflect this setting. ",
	          "");
	I_MethodWithDefaults2(void, haveAppliedAttribute, IN, osg::StateAttribute::Type, type, , IN, unsigned int, member, 0,
	                      __void__haveAppliedAttribute__StateAttribute_Type__unsigned_int,
	                      "Attribute has been applied externally, and therefore this attribute type has been dirtied and will need to be re-applied on next osg::State.apply(. ",
	                      ".). note, if you have an osg::StateAttribute which you have applied externally then use the have_applied(attribute) method as this will cause the osg::State to track the current state more accurately and enable lazy state updating such that only changed state will be applied. ");
	I_Method1(bool, getLastAppliedMode, IN, osg::StateAttribute::GLMode, mode,
	          __bool__getLastAppliedMode__StateAttribute_GLMode,
	          "Get whether the current specified mode is enabled (true) or disabled (false). ",
	          "");
	I_MethodWithDefaults2(const osg::StateAttribute *, getLastAppliedAttribute, IN, osg::StateAttribute::Type, type, , IN, unsigned int, member, 0,
	                      __C5_StateAttribute_P1__getLastAppliedAttribute__StateAttribute_Type__unsigned_int,
	                      "Get the current specified attribute, return NULL if one has not yet been applied. ",
	                      "");
	I_Method3(void, haveAppliedTextureMode, IN, unsigned int, unit, IN, osg::StateAttribute::GLMode, mode, IN, osg::StateAttribute::GLModeValue, value,
	          __void__haveAppliedTextureMode__unsigned_int__StateAttribute_GLMode__StateAttribute_GLModeValue,
	          "texture Mode has been set externally, update state to reflect this setting. ",
	          "");
	I_Method2(void, haveAppliedTextureMode, IN, unsigned int, unit, IN, osg::StateAttribute::GLMode, mode,
	          __void__haveAppliedTextureMode__unsigned_int__StateAttribute_GLMode,
	          "texture Mode has been set externally, therefore dirty the associated mode in osg::State so it is applied on next call to osg::State::apply(. ",
	          ".) ");
	I_Method2(void, haveAppliedTextureAttribute, IN, unsigned int, unit, IN, const osg::StateAttribute *, attribute,
	          __void__haveAppliedTextureAttribute__unsigned_int__C5_StateAttribute_P1,
	          "texture Attribute has been applied externally, update state to reflect this setting. ",
	          "");
	I_MethodWithDefaults3(void, haveAppliedTextureAttribute, IN, unsigned int, unit, , IN, osg::StateAttribute::Type, type, , IN, unsigned int, member, 0,
	                      __void__haveAppliedTextureAttribute__unsigned_int__StateAttribute_Type__unsigned_int,
	                      "texture Attribute has been applied externally, and therefore this attribute type has been dirtied and will need to be re-appplied on next osg::State.apply(. ",
	                      ".). note, if you have an osg::StateAttribute which you have applied externally then use the have_applied(attribute) method as this will the osg::State to track the current state more accurately and enable lazy state updating such that only changed state will be applied. ");
	I_Method2(bool, getLastAppliedTextureMode, IN, unsigned int, unit, IN, osg::StateAttribute::GLMode, mode,
	          __bool__getLastAppliedTextureMode__unsigned_int__StateAttribute_GLMode,
	          "Get whether the current specified texture mode is enabled (true) or disabled (false). ",
	          "");
	I_MethodWithDefaults3(const osg::StateAttribute *, getLastAppliedTextureAttribute, IN, unsigned int, unit, , IN, osg::StateAttribute::Type, type, , IN, unsigned int, member, 0,
	                      __C5_StateAttribute_P1__getLastAppliedTextureAttribute__unsigned_int__StateAttribute_Type__unsigned_int,
	                      "Get the current specified texture attribute, return NULL if one has not yet been applied. ",
	                      "");
	I_Method0(void, dirtyAllModes,
	          __void__dirtyAllModes,
	          "Dirty the modes previously applied in osg::State. ",
	          "");
	I_Method0(void, dirtyAllAttributes,
	          __void__dirtyAllAttributes,
	          "Dirty the modes attributes previously applied in osg::State. ",
	          "");
	I_Method0(void, disableAllVertexArrays,
	          __void__disableAllVertexArrays,
	          "disable the vertex, normal, color, tex coords, secondary color, fog coord and index arrays. ",
	          "");
	I_Method0(void, dirtyAllVertexArrays,
	          __void__dirtyAllVertexArrays,
	          "dirty the vertex, normal, color, tex coords, secondary color, fog coord and index arrays. ",
	          "");
	I_Method3(void, setInterleavedArrays, IN, GLenum, format, IN, GLsizei, stride, IN, const GLvoid *, pointer,
	          __void__setInterleavedArrays__GLenum__GLsizei__C5_GLvoid_P1,
	          "Wrapper around glInterleavedArrays(. ",
	          ".). also resets the internal array points and modes within osg::State to keep the other vertex array operations consistent. ");
	I_Method4(void, setVertexPointer, IN, GLint, size, IN, GLenum, type, IN, GLsizei, stride, IN, const GLvoid *, ptr,
	          __void__setVertexPointer__GLint__GLenum__GLsizei__C5_GLvoid_P1,
	          "wrapper around glEnableClientState(GL_VERTEX_ARRAY);glVertexPointer(. ",
	          ".); note, only updates values that change. ");
	I_Method0(void, disableVertexPointer,
	          __void__disableVertexPointer,
	          "wrapper around glDisableClientState(GL_VERTEX_ARRAY). ",
	          "note, only updates values that change. ");
	I_Method0(void, dirtyVertexPointer,
	          __void__dirtyVertexPointer,
	          "",
	          "");
	I_Method3(void, setNormalPointer, IN, GLenum, type, IN, GLsizei, stride, IN, const GLvoid *, ptr,
	          __void__setNormalPointer__GLenum__GLsizei__C5_GLvoid_P1,
	          "wrapper around glEnableClientState(GL_NORMAL_ARRAY);glNormalPointer(. ",
	          ".); note, only updates values that change. ");
	I_Method0(void, disableNormalPointer,
	          __void__disableNormalPointer,
	          "wrapper around glDisableClientState(GL_NORMAL_ARRAY); note, only updates values that change. ",
	          "");
	I_Method0(void, dirtyNormalPointer,
	          __void__dirtyNormalPointer,
	          "",
	          "");
	I_Method4(void, setColorPointer, IN, GLint, size, IN, GLenum, type, IN, GLsizei, stride, IN, const GLvoid *, ptr,
	          __void__setColorPointer__GLint__GLenum__GLsizei__C5_GLvoid_P1,
	          "wrapper around glEnableClientState(GL_COLOR_ARRAY);glColorPointer(. ",
	          ".); note, only updates values that change. ");
	I_Method0(void, disableColorPointer,
	          __void__disableColorPointer,
	          "wrapper around glDisableClientState(GL_COLOR_ARRAY); note, only updates values that change. ",
	          "");
	I_Method0(void, dirtyColorPointer,
	          __void__dirtyColorPointer,
	          "",
	          "");
	I_Method0(bool, isSecondaryColorSupported,
	          __bool__isSecondaryColorSupported,
	          "",
	          "");
	I_Method4(void, setSecondaryColorPointer, IN, GLint, size, IN, GLenum, type, IN, GLsizei, stride, IN, const GLvoid *, ptr,
	          __void__setSecondaryColorPointer__GLint__GLenum__GLsizei__C5_GLvoid_P1,
	          "wrapper around glEnableClientState(GL_SECONDARY_COLOR_ARRAY);glSecondayColorPointer(. ",
	          ".); note, only updates values that change. ");
	I_Method0(void, disableSecondaryColorPointer,
	          __void__disableSecondaryColorPointer,
	          "wrapper around glDisableClientState(GL_SECONDARY_COLOR_ARRAY); note, only updates values that change. ",
	          "");
	I_Method0(void, dirtySecondaryColorPointer,
	          __void__dirtySecondaryColorPointer,
	          "",
	          "");
	I_Method3(void, setIndexPointer, IN, GLenum, type, IN, GLsizei, stride, IN, const GLvoid *, ptr,
	          __void__setIndexPointer__GLenum__GLsizei__C5_GLvoid_P1,
	          "wrapper around glEnableClientState(GL_INDEX_ARRAY);glIndexPointer(. ",
	          ".); note, only updates values that change. ");
	I_Method0(void, disableIndexPointer,
	          __void__disableIndexPointer,
	          "wrapper around glDisableClientState(GL_INDEX_ARRAY); note, only updates values that change. ",
	          "");
	I_Method0(void, dirtyIndexPointer,
	          __void__dirtyIndexPointer,
	          "",
	          "");
	I_Method0(bool, isFogCoordSupported,
	          __bool__isFogCoordSupported,
	          "",
	          "");
	I_Method3(void, setFogCoordPointer, IN, GLenum, type, IN, GLsizei, stride, IN, const GLvoid *, ptr,
	          __void__setFogCoordPointer__GLenum__GLsizei__C5_GLvoid_P1,
	          "wrapper around glEnableClientState(GL_FOG_COORDINATE_ARRAY);glFogCoordPointer(. ",
	          ".); note, only updates values that change. ");
	I_Method0(void, disableFogCoordPointer,
	          __void__disableFogCoordPointer,
	          "wrapper around glDisableClientState(GL_FOG_COORDINATE_ARRAY); note, only updates values that change. ",
	          "");
	I_Method0(void, dirtyFogCoordPointer,
	          __void__dirtyFogCoordPointer,
	          "",
	          "");
	I_Method5(void, setTexCoordPointer, IN, unsigned int, unit, IN, GLint, size, IN, GLenum, type, IN, GLsizei, stride, IN, const GLvoid *, ptr,
	          __void__setTexCoordPointer__unsigned_int__GLint__GLenum__GLsizei__C5_GLvoid_P1,
	          "wrapper around glEnableClientState(GL_TEXTURE_COORD_ARRAY);glTexCoordPointer(. ",
	          ".); note, only updates values that change. ");
	I_Method1(void, disableTexCoordPointer, IN, unsigned int, unit,
	          __void__disableTexCoordPointer__unsigned_int,
	          "wrapper around glDisableClientState(GL_TEXTURE_COORD_ARRAY); note, only updates values that change. ",
	          "");
	I_Method1(void, dirtyTexCoordPointer, IN, unsigned int, unit,
	          __void__dirtyTexCoordPointer__unsigned_int,
	          "",
	          "");
	I_Method1(void, disableTexCoordPointersAboveAndIncluding, IN, unsigned int, unit,
	          __void__disableTexCoordPointersAboveAndIncluding__unsigned_int,
	          "",
	          "");
	I_Method1(void, dirtyTexCoordPointersAboveAndIncluding, IN, unsigned int, unit,
	          __void__dirtyTexCoordPointersAboveAndIncluding__unsigned_int,
	          "",
	          "");
	I_Method1(bool, setActiveTextureUnit, IN, unsigned int, unit,
	          __bool__setActiveTextureUnit__unsigned_int,
	          "Set the current texture unit, return true if selected, false if selection failed such as when multitexturing is not supported. ",
	          "note, only updates values that change. ");
	I_Method0(unsigned int, getActiveTextureUnit,
	          __unsigned_int__getActiveTextureUnit,
	          "Get the current texture unit. ",
	          "");
	I_Method1(bool, setClientActiveTextureUnit, IN, unsigned int, unit,
	          __bool__setClientActiveTextureUnit__unsigned_int,
	          "Set the current tex coord array texture unit, return true if selected, false if selection failed such as when multitexturing is not supported. ",
	          "note, only updates values that change. ");
	I_Method0(unsigned int, getClientActiveTextureUnit,
	          __unsigned_int__getClientActiveTextureUnit,
	          "Get the current tex coord array texture unit. ",
	          "");
	I_Method6(void, setVertexAttribPointer, IN, unsigned int, index, IN, GLint, size, IN, GLenum, type, IN, GLboolean, normalized, IN, GLsizei, stride, IN, const GLvoid *, ptr,
	          __void__setVertexAttribPointer__unsigned_int__GLint__GLenum__GLboolean__GLsizei__C5_GLvoid_P1,
	          "wrapper around glEnableVertexAttribArrayARB(index);glVertexAttribPointerARB(. ",
	          ".); note, only updates values that change. ");
	I_Method1(void, disableVertexAttribPointer, IN, unsigned int, index,
	          __void__disableVertexAttribPointer__unsigned_int,
	          "wrapper around DisableVertexAttribArrayARB(index); note, only updates values that change. ",
	          "");
	I_Method1(void, disableVertexAttribPointersAboveAndIncluding, IN, unsigned int, index,
	          __void__disableVertexAttribPointersAboveAndIncluding__unsigned_int,
	          "",
	          "");
	I_Method1(void, dirtyVertexAttribPointersAboveAndIncluding, IN, unsigned int, index,
	          __void__dirtyVertexAttribPointersAboveAndIncluding__unsigned_int,
	          "",
	          "");
	I_Method0(bool, isVertexBufferObjectSupported,
	          __bool__isVertexBufferObjectSupported,
	          "",
	          "");
	I_Method1(void, setLastAppliedProgramObject, IN, const osg::Program::PerContextProgram *, program,
	          __void__setLastAppliedProgramObject__C5_Program_PerContextProgram_P1,
	          "",
	          "");
	I_Method0(const osg::Program::PerContextProgram *, getLastAppliedProgramObject,
	          __C5_Program_PerContextProgram_P1__getLastAppliedProgramObject,
	          "",
	          "");
	I_Method1(GLint, getUniformLocation, IN, const std::string &, name,
	          __GLint__getUniformLocation__C5_std_string_R1,
	          "",
	          "");
	I_Method1(GLint, getAttribLocation, IN, const std::string &, name,
	          __GLint__getAttribLocation__C5_std_string_R1,
	          "",
	          "");
	I_Method1(void, setFrameStamp, IN, osg::FrameStamp *, fs,
	          __void__setFrameStamp__FrameStamp_P1,
	          "Set the frame stamp for the current frame. ",
	          "");
	I_Method0(const osg::FrameStamp *, getFrameStamp,
	          __C5_FrameStamp_P1__getFrameStamp,
	          "Get the frame stamp for the current frame. ",
	          "");
	I_Method1(void, setDisplaySettings, IN, osg::DisplaySettings *, vs,
	          __void__setDisplaySettings__DisplaySettings_P1,
	          "Set the DisplaySettings. ",
	          "Note, nothing is applied, the visual settings are just used in the State object to pass the current visual settings to Drawables during rendering. ");
	I_Method0(const osg::DisplaySettings *, getDisplaySettings,
	          __C5_DisplaySettings_P1__getDisplaySettings,
	          "Get the DisplaySettings. ",
	          "");
	I_Method1(void, setAbortRenderingPtr, IN, bool *, abortPtr,
	          __void__setAbortRenderingPtr__bool_P1,
	          "Set flag for early termination of the draw traversal. ",
	          "");
	I_Method0(bool, getAbortRendering,
	          __bool__getAbortRendering,
	          "Get flag for early termination of the draw traversal, if true steps should be taken to complete rendering early. ",
	          "");
	I_Method1(void, setDynamicObjectRenderingCompletedCallback, IN, osg::State::DynamicObjectRenderingCompletedCallback *, cb,
	          __void__setDynamicObjectRenderingCompletedCallback__DynamicObjectRenderingCompletedCallback_P1,
	          "Set the callback to be called when the dynamic object count hits 0. ",
	          "");
	I_Method0(osg::State::DynamicObjectRenderingCompletedCallback *, getDynamicObjectRenderingCompletedCallback,
	          __DynamicObjectRenderingCompletedCallback_P1__getDynamicObjectRenderingCompletedCallback,
	          "Get the callback to be called when the dynamic object count hits 0. ",
	          "");
	I_MethodWithDefaults2(void, setDynamicObjectCount, IN, unsigned int, count, , IN, bool, callCallbackOnZero, false,
	                      __void__setDynamicObjectCount__unsigned_int__bool,
	                      "Set the number of dynamic objects that will be rendered in this graphics context this frame. ",
	                      "");
	I_Method0(unsigned int, getDynamicObjectCount,
	          __unsigned_int__getDynamicObjectCount,
	          "Get the number of dynamic objects that will be rendered in this graphics context this frame. ",
	          "");
	I_Method0(void, decrementDynamicObjectCount,
	          __void__decrementDynamicObjectCount,
	          "Decrement the number of dynamic objects left to render this frame, and once the count goes to zero call the DynamicObjectRenderingCompletedCallback to inform of completion. ",
	          "");
	I_Method1(void, setCheckForGLErrors, IN, osg::State::CheckForGLErrors, check,
	          __void__setCheckForGLErrors__CheckForGLErrors,
	          "Set whether and how often OpenGL errors should be checked for. ",
	          "");
	I_Method0(osg::State::CheckForGLErrors, getCheckForGLErrors,
	          __CheckForGLErrors__getCheckForGLErrors,
	          "Get whether and how often OpenGL errors should be checked for. ",
	          "");
	I_Method1(bool, checkGLErrors, IN, const char *, str,
	          __bool__checkGLErrors__C5_char_P1,
	          "",
	          "");
	I_Method1(bool, checkGLErrors, IN, osg::StateAttribute::GLMode, mode,
	          __bool__checkGLErrors__StateAttribute_GLMode,
	          "",
	          "");
	I_Method1(bool, checkGLErrors, IN, const osg::StateAttribute *, attribute,
	          __bool__checkGLErrors__C5_StateAttribute_P1,
	          "",
	          "");
	I_SimpleProperty(bool, AbortRendering, 
	                 __bool__getAbortRendering, 
	                 0);
	I_SimpleProperty(bool *, AbortRenderingPtr, 
	                 0, 
	                 __void__setAbortRenderingPtr__bool_P1);
	I_SimpleProperty(unsigned int, ActiveTextureUnit, 
	                 __unsigned_int__getActiveTextureUnit, 
	                 __bool__setActiveTextureUnit__unsigned_int);
	I_SimpleProperty(osg::State::CheckForGLErrors, CheckForGLErrors, 
	                 __CheckForGLErrors__getCheckForGLErrors, 
	                 __void__setCheckForGLErrors__CheckForGLErrors);
	I_SimpleProperty(unsigned int, ClientActiveTextureUnit, 
	                 __unsigned_int__getClientActiveTextureUnit, 
	                 __bool__setClientActiveTextureUnit__unsigned_int);
	I_SimpleProperty(unsigned int, ContextID, 
	                 __unsigned_int__getContextID, 
	                 __void__setContextID__unsigned_int);
	I_SimpleProperty(const osg::Viewport *, CurrentViewport, 
	                 __C5_Viewport_P1__getCurrentViewport, 
	                 0);
	I_SimpleProperty(osg::DisplaySettings *, DisplaySettings, 
	                 0, 
	                 __void__setDisplaySettings__DisplaySettings_P1);
	I_SimpleProperty(unsigned int, DynamicObjectCount, 
	                 __unsigned_int__getDynamicObjectCount, 
	                 0);
	I_SimpleProperty(osg::State::DynamicObjectRenderingCompletedCallback *, DynamicObjectRenderingCompletedCallback, 
	                 __DynamicObjectRenderingCompletedCallback_P1__getDynamicObjectRenderingCompletedCallback, 
	                 __void__setDynamicObjectRenderingCompletedCallback__DynamicObjectRenderingCompletedCallback_P1);
	I_SimpleProperty(osg::FrameStamp *, FrameStamp, 
	                 0, 
	                 __void__setFrameStamp__FrameStamp_P1);
	I_SimpleProperty(const osg::StateAttribute *, GlobalDefaultAttribute, 
	                 0, 
	                 __void__setGlobalDefaultAttribute__C5_StateAttribute_P1);
	I_IndexedProperty(bool, GlobalDefaultModeValue, 
	                  __bool__getGlobalDefaultModeValue__StateAttribute_GLMode, 
	                  __void__setGlobalDefaultModeValue__StateAttribute_GLMode__bool, 
	                  0);
	I_IndexedProperty(bool, GlobalDefaultTextureModeValue, 
	                  __bool__getGlobalDefaultTextureModeValue__unsigned_int__StateAttribute_GLMode, 
	                  __void__setGlobalDefaultTextureModeValue__unsigned_int__StateAttribute_GLMode__bool, 
	                  0);
	I_SimpleProperty(osg::GraphicsContext *, GraphicsContext, 
	                 __GraphicsContext_P1__getGraphicsContext, 
	                 __void__setGraphicsContext__GraphicsContext_P1);
	I_SimpleProperty(const osg::Matrix &, InitialInverseViewMatrix, 
	                 __C5_osg_Matrix_R1__getInitialInverseViewMatrix, 
	                 0);
	I_SimpleProperty(const osg::RefMatrix *, InitialViewMatrix, 
	                 0, 
	                 __void__setInitialViewMatrix__C5_osg_RefMatrix_P1);
	I_SimpleProperty(const osg::Program::PerContextProgram *, LastAppliedProgramObject, 
	                 __C5_Program_PerContextProgram_P1__getLastAppliedProgramObject, 
	                 __void__setLastAppliedProgramObject__C5_Program_PerContextProgram_P1);
	I_IndexedProperty(bool, ModeValidity, 
	                  __bool__getModeValidity__StateAttribute_GLMode, 
	                  __void__setModeValidity__StateAttribute_GLMode__bool, 
	                  0);
	I_SimpleProperty(const osg::Matrix &, ModelViewMatrix, 
	                 __C5_osg_Matrix_R1__getModelViewMatrix, 
	                 0);
	I_SimpleProperty(const osg::Matrix &, ProjectionMatrix, 
	                 __C5_osg_Matrix_R1__getProjectionMatrix, 
	                 0);
	I_SimpleProperty(osg::State::StateSetStack &, StateSetStack, 
	                 __StateSetStack_R1__getStateSetStack, 
	                 0);
	I_SimpleProperty(unsigned int, StateSetStackSize, 
	                 __unsigned_int__getStateSetStackSize, 
	                 0);
	I_SimpleProperty(osg::Polytope, ViewFrustum, 
	                 __Polytope__getViewFrustum, 
	                 0);
END_REFLECTOR

BEGIN_ABSTRACT_OBJECT_REFLECTOR(osg::State::DynamicObjectRenderingCompletedCallback)
	I_BaseType(osg::Referenced);
	I_Constructor0(____DynamicObjectRenderingCompletedCallback,
	               "",
	               "");
	I_Method1(void, completed, IN, osg::State *, x,
	          __void__completed__osg_State_P1,
	          "",
	          "");
END_REFLECTOR

STD_VECTOR_REFLECTOR(std::vector< const osg::StateSet * >);

