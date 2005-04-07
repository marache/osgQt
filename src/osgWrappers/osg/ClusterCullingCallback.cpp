// ***************************************************************************
//
//   Generated automatically by genwrapper.
//   Please DO NOT EDIT this file!
//
// ***************************************************************************

#include <osgIntrospection/ReflectionMacros>
#include <osgIntrospection/TypedMethodInfo>
#include <osgIntrospection/Attributes>

#include <osg/ClusterCullingCallback>
#include <osg/CopyOp>
#include <osg/Drawable>
#include <osg/Matrixd>
#include <osg/Node>
#include <osg/NodeVisitor>
#include <osg/Object>
#include <osg/State>
#include <osg/Vec3>

BEGIN_OBJECT_REFLECTOR(osg::ClusterCullingCallback)
	BaseType(osg::Drawable::CullCallback);
	BaseType(osg::NodeCallback);
	Constructor0();
	Constructor2(IN, const osg::ClusterCullingCallback &, ccc, IN, const osg::CopyOp &, copyop);
	Constructor3(IN, const osg::Vec3 &, controlPoint, IN, const osg::Vec3 &, normal, IN, float, deviation);
	Constructor1(IN, const osg::Drawable *, drawable);
	Method0(osg::Object *, cloneType);
	Method1(osg::Object *, clone, IN, const osg::CopyOp &, copyop);
	Method1(bool, isSameKindAs, IN, const osg::Object *, obj);
	Method0(const char *, libraryName);
	Method0(const char *, className);
	Method1(void, computeFrom, IN, const osg::Drawable *, drawable);
	Method1(void, transform, IN, const osg::Matrixd &, matrix);
	Method4(void, set, IN, const osg::Vec3 &, controlPoint, IN, const osg::Vec3 &, normal, IN, float, deviation, IN, float, radius);
	Method1(void, setControlPoint, IN, const osg::Vec3 &, controlPoint);
	Method0(const osg::Vec3 &, getControlPoint);
	Method1(void, setNormal, IN, const osg::Vec3 &, normal);
	Method0(const osg::Vec3 &, getNormal);
	Method1(void, setRadius, IN, float, radius);
	Method0(float, getRadius);
	Method1(void, setDeviation, IN, float, deviation);
	Method0(float, getDeviation);
	Method3(bool, cull, IN, osg::NodeVisitor *, x, IN, osg::Drawable *, x, IN, osg::State *, x);
	Property(const osg::Vec3 &, ControlPoint);
	Property(float, Deviation);
	Property(const osg::Vec3 &, Normal);
	Property(float, Radius);
END_REFLECTOR

