// ***************************************************************************
//
//   Generated automatically by genwrapper.
//   Please DO NOT EDIT this file!
//
// ***************************************************************************

#include <osgIntrospection/ReflectionMacros>
#include <osgIntrospection/TypedMethodInfo>
#include <osgIntrospection/Attributes>

#include <osg/BoundingSphere>
#include <osg/CopyOp>
#include <osg/Node>
#include <osg/NodeVisitor>
#include <osg/Object>
#include <osg/Switch>

TYPE_NAME_ALIAS(std::vector< bool >, osg::Switch::ValueList);

BEGIN_OBJECT_REFLECTOR(osg::Switch)
	BaseType(osg::Group);
	Constructor0();
	ConstructorWithDefaults2(IN, const osg::Switch &, x, , IN, const osg::CopyOp &, copyop, osg::CopyOp::SHALLOW_COPY);
	Method0(osg::Object *, cloneType);
	Method1(osg::Object *, clone, IN, const osg::CopyOp &, copyop);
	Method1(bool, isSameKindAs, IN, const osg::Object *, obj);
	Method0(const char *, className);
	Method0(const char *, libraryName);
	Method1(void, accept, IN, osg::NodeVisitor &, nv);
	Method1(void, traverse, IN, osg::NodeVisitor &, nv);
	Method1(void, setNewChildDefaultValue, IN, bool, value);
	Method0(bool, getNewChildDefaultValue);
	Method1(bool, addChild, IN, osg::Node *, child);
	Method2(bool, addChild, IN, osg::Node *, child, IN, bool, value);
	Method2(bool, insertChild, IN, unsigned int, index, IN, osg::Node *, child);
	Method3(bool, insertChild, IN, unsigned int, index, IN, osg::Node *, child, IN, bool, value);
	Method1(bool, removeChild, IN, osg::Node *, child);
	Method2(void, setValue, IN, unsigned int, pos, IN, bool, value);
	Method1(bool, getValue, IN, unsigned int, pos);
	Method2(void, setChildValue, IN, const osg::Node *, child, IN, bool, value);
	Method1(bool, getChildValue, IN, const osg::Node *, child);
	Method0(bool, setAllChildrenOff);
	Method0(bool, setAllChildrenOn);
	Method1(bool, setSingleChildOn, IN, unsigned int, pos);
	Method1(void, setValueList, IN, const osg::Switch::ValueList &, values);
	Method0(const osg::Switch::ValueList &, getValueList);
	Method0(osg::BoundingSphere, computeBound);
	IndexedProperty1(bool, ChildValue, const osg::Node *, child);
	Property(bool, NewChildDefaultValue);
	WriteOnlyPropertyWithReturnType(unsigned int, SingleChildOn, bool);
	IndexedProperty1(bool, Value, unsigned int, pos);
	Property(const osg::Switch::ValueList &, ValueList);
END_REFLECTOR

STD_VECTOR_REFLECTOR(std::vector< bool >);

