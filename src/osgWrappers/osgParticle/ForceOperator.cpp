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
#include <osg/Object>
#include <osg/Vec3>
#include <osgParticle/ForceOperator>
#include <osgParticle/Particle>
#include <osgParticle/Program>

BEGIN_OBJECT_REFLECTOR(osgParticle::ForceOperator)
	BaseType(osgParticle::Operator);
	Constructor0();
	ConstructorWithDefaults2(IN, const osgParticle::ForceOperator &, copy, , IN, const osg::CopyOp &, copyop, osg::CopyOp::SHALLOW_COPY);
	Method0(osg::Object *, cloneType);
	Method1(osg::Object *, clone, IN, const osg::CopyOp &, copyop);
	Method1(bool, isSameKindAs, IN, const osg::Object *, obj);
	Method0(const char *, libraryName);
	Method0(const char *, className);
	Method0(const osg::Vec3 &, getForce);
	Method1(void, setForce, IN, const osg::Vec3 &, f);
	Method2(void, operate, IN, osgParticle::Particle *, P, IN, double, dt);
	Method1(void, beginOperate, IN, osgParticle::Program *, prg);
	Property(const osg::Vec3 &, Force);
END_REFLECTOR

