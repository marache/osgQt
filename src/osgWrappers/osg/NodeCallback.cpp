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
#include <osg/Node>
#include <osg/NodeCallback>
#include <osg/NodeVisitor>
#include <osg/Object>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

BEGIN_OBJECT_REFLECTOR(osg::NodeCallback)
	I_VirtualBaseType(osg::Object);
	I_Constructor0();
	I_Constructor2(IN, const osg::NodeCallback &, nc, IN, const osg::CopyOp &, x);
	I_Method0(osg::Object *, cloneType);
	I_Method1(osg::Object *, clone, IN, const osg::CopyOp &, copyop);
	I_Method1(bool, isSameKindAs, IN, const osg::Object *, obj);
	I_Method0(const char *, libraryName);
	I_Method0(const char *, className);
	I_Method2(void, traverse, IN, osg::Node *, node, IN, osg::NodeVisitor *, nv);
	I_Method1(void, setNestedCallback, IN, osg::NodeCallback *, nc);
	I_Method0(osg::NodeCallback *, getNestedCallback);
	I_Method0(const osg::NodeCallback *, getNestedCallback);
	I_Method1(void, addNestedCallback, IN, osg::NodeCallback *, nc);
	I_Method1(void, removeNestedCallback, IN, osg::NodeCallback *, nc);
	I_Property(osg::NodeCallback *, NestedCallback);
	I_PublicMemberProperty(osg::ref_ptr< osg::NodeCallback >, _nestedCallback);
END_REFLECTOR

