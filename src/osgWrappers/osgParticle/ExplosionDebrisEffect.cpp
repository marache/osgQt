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
#include <osg/Vec3>
#include <osgParticle/Emitter>
#include <osgParticle/ExplosionDebrisEffect>
#include <osgParticle/Program>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

BEGIN_OBJECT_REFLECTOR(osgParticle::ExplosionDebrisEffect)
	I_BaseType(osgParticle::ParticleEffect);
	I_ConstructorWithDefaults1(IN, bool, automaticSetup, true);
	I_ConstructorWithDefaults3(IN, const osg::Vec3 &, position, , IN, float, scale, 1.0f, IN, float, intensity, 1.0f);
	I_ConstructorWithDefaults2(IN, const osgParticle::ExplosionDebrisEffect &, copy, , IN, const osg::CopyOp &, copyop, osg::CopyOp::SHALLOW_COPY);
	I_Method0(osg::Object *, cloneType);
	I_Method1(osg::Object *, clone, IN, const osg::CopyOp &, copyop);
	I_Method1(bool, isSameKindAs, IN, const osg::Object *, obj);
	I_Method0(const char *, className);
	I_Method0(const char *, libraryName);
	I_Method1(void, accept, IN, osg::NodeVisitor &, nv);
	I_Method0(void, setDefaults);
	I_Method0(void, setUpEmitterAndProgram);
	I_Method0(osgParticle::Emitter *, getEmitter);
	I_Method0(const osgParticle::Emitter *, getEmitter);
	I_Method0(osgParticle::Program *, getProgram);
	I_Method0(const osgParticle::Program *, getProgram);
	I_ReadOnlyProperty(osgParticle::Emitter *, Emitter);
	I_ReadOnlyProperty(osgParticle::Program *, Program);
END_REFLECTOR

