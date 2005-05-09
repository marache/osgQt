// ***************************************************************************
//
//   Generated automatically by genwrapper.
//   Please DO NOT EDIT this file!
//
// ***************************************************************************

#include <osgIntrospection/ReflectionMacros>
#include <osgIntrospection/TypedMethodInfo>
#include <osgIntrospection/Attributes>

#include <osg/CopyOp>
#include <osg/NodeVisitor>
#include <osg/Object>
#include <osg/Vec4>
#include <osgFX/Scribe>

BEGIN_OBJECT_REFLECTOR(osgFX::Scribe)
	BaseType(osgFX::Effect);
	Constructor0();
	ConstructorWithDefaults2(IN, const osgFX::Scribe &, copy, , IN, const osg::CopyOp &, copyop, osg::CopyOp::SHALLOW_COPY);
	Method0(osg::Object *, cloneType);
	Method1(osg::Object *, clone, IN, const osg::CopyOp &, copyop);
	Method1(bool, isSameKindAs, IN, const osg::Object *, obj);
	Method0(const char *, className);
	Method0(const char *, libraryName);
	Method1(void, accept, IN, osg::NodeVisitor &, nv);
	Method0(const char *, effectName);
	Method0(const char *, effectDescription);
	Method0(const char *, effectAuthor);
	Method0(const osg::Vec4 &, getWireframeColor);
	Method1(void, setWireframeColor, IN, const osg::Vec4 &, color);
	Method0(float, getWireframeLineWidth);
	Method1(void, setWireframeLineWidth, IN, float, w);
	Property(const osg::Vec4 &, WireframeColor);
	Property(float, WireframeLineWidth);
END_REFLECTOR

