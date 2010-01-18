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

#include <osgViewer/api/Cocoa/GraphicsHandleCocoa>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

BEGIN_VALUE_REFLECTOR(osgViewer::GraphicsHandleCocoa)
	I_DeclaringFile("osgViewer/api/Cocoa/GraphicsHandleCocoa");
	I_Constructor0(____GraphicsHandleCocoa,
	               "",
	               "");
	I_Method1(void, setNSOpenGLContext, IN, NSOpenGLContext *, context,
	          Properties::NON_VIRTUAL,
	          __void__setNSOpenGLContext__NSOpenGLContext_P1,
	          "Set native AGL graphics context. ",
	          "");
	I_Method0(NSOpenGLContext *, getNSOpenGLContext,
	          Properties::NON_VIRTUAL,
	          __NSOpenGLContext_P1__getNSOpenGLContext,
	          "Get native AGL graphics context. ",
	          "");
	I_SimpleProperty(NSOpenGLContext *, NSOpenGLContext, 
	                 __NSOpenGLContext_P1__getNSOpenGLContext, 
	                 __void__setNSOpenGLContext__NSOpenGLContext_P1);
END_REFLECTOR

