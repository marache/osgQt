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
#include <osgSim/LightPointSystem>

BEGIN_ENUM_REFLECTOR(osgSim::LightPointSystem::AnimationState)
	EnumLabel(osgSim::LightPointSystem::ANIMATION_ON);
	EnumLabel(osgSim::LightPointSystem::ANIMATION_OFF);
	EnumLabel(osgSim::LightPointSystem::ANIMATION_RANDOM);
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osgSim::LightPointSystem)
	BaseType(osg::Object);
	Constructor0();
	ConstructorWithDefaults2(IN, const osgSim::LightPointSystem &, lps, , IN, const osg::CopyOp &, copyop, osg::CopyOp::SHALLOW_COPY);
	Method0(osg::Object *, cloneType);
	Method1(osg::Object *, clone, IN, const osg::CopyOp &, copyop);
	Method1(bool, isSameKindAs, IN, const osg::Object *, obj);
	Method0(const char *, libraryName);
	Method0(const char *, className);
	Method1(void, setIntensity, IN, float, intensity);
	Method0(float, getIntensity);
	Method1(void, setAnimationState, IN, osgSim::LightPointSystem::AnimationState, state);
	Method0(osgSim::LightPointSystem::AnimationState, getAnimationState);
	Property(osgSim::LightPointSystem::AnimationState, AnimationState);
	Property(float, Intensity);
END_REFLECTOR

