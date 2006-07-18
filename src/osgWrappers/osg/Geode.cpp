// ***************************************************************************
//
//   Generated automatically by genwrapper.
//   Please DO NOT EDIT this file!
//
// ***************************************************************************

#include <osgIntrospection/ReflectionMacros>
#include <osgIntrospection/TypedMethodInfo>
#include <osgIntrospection/Attributes>

#include <osg/BoundingBox>
#include <osg/BoundingSphere>
#include <osg/CopyOp>
#include <osg/Drawable>
#include <osg/Geode>
#include <osg/NodeVisitor>
#include <osg/Object>
#include <osg/State>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

TYPE_NAME_ALIAS(std::vector< osg::ref_ptr< osg::Drawable > >, osg::Geode::DrawableList);

BEGIN_OBJECT_REFLECTOR(osg::Geode)
	I_BaseType(osg::Node);
	I_Constructor0();
	I_ConstructorWithDefaults2(IN, const osg::Geode &, x, , IN, const osg::CopyOp &, copyop, osg::CopyOp::SHALLOW_COPY);
	I_Method0(osg::Object *, cloneType);
	I_Method1(osg::Object *, clone, IN, const osg::CopyOp &, copyop);
	I_Method1(bool, isSameKindAs, IN, const osg::Object *, obj);
	I_Method0(const char *, className);
	I_Method0(const char *, libraryName);
	I_Method1(void, accept, IN, osg::NodeVisitor &, nv);
	I_Method1(bool, addDrawable, IN, osg::Drawable *, drawable);
	I_Method1(bool, removeDrawable, IN, osg::Drawable *, drawable);
	I_MethodWithDefaults2(bool, removeDrawables, IN, unsigned int, i, , IN, unsigned int, numDrawablesToRemove, 1);
	I_Method2(bool, replaceDrawable, IN, osg::Drawable *, origDraw, IN, osg::Drawable *, newDraw);
	I_Method2(bool, setDrawable, IN, unsigned int, i, IN, osg::Drawable *, drawable);
	I_Method0(unsigned int, getNumDrawables);
	I_Method1(osg::Drawable *, getDrawable, IN, unsigned int, i);
	I_Method1(const osg::Drawable *, getDrawable, IN, unsigned int, i);
	I_Method1(bool, containsDrawable, IN, const osg::Drawable *, gset);
	I_Method1(unsigned int, getDrawableIndex, IN, const osg::Drawable *, drawable);
	I_Method0(const osg::Geode::DrawableList &, getDrawableList);
	I_Method1(void, compileDrawables, IN, osg::State &, state);
	I_Method0(const osg::BoundingBox &, getBoundingBox);
	I_Method0(osg::BoundingSphere, computeBound);
	I_MethodWithDefaults1(void, releaseGLObjects, IN, osg::State *, x, 0);
	I_ReadOnlyProperty(const osg::BoundingBox &, BoundingBox);
	I_ArrayProperty_GSA(osg::Drawable *, Drawable, Drawables, unsigned int, bool);
	I_ReadOnlyProperty(const osg::Geode::DrawableList &, DrawableList);
END_REFLECTOR

BEGIN_VALUE_REFLECTOR(osg::ref_ptr< osg::Drawable >)
	I_Constructor0();
	I_Constructor1(IN, osg::Drawable *, ptr);
	I_Constructor1(IN, const osg::ref_ptr< osg::Drawable > &, rp);
	I_Method0(osg::Drawable *, get);
	I_Method0(bool, valid);
	I_Method0(osg::Drawable *, release);
	I_Method1(void, swap, IN, osg::ref_ptr< osg::Drawable > &, rp);
	I_ReadOnlyProperty(osg::Drawable *, );
END_REFLECTOR

STD_VECTOR_REFLECTOR(std::vector< osg::ref_ptr< osg::Drawable > >);

