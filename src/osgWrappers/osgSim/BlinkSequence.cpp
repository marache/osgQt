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
#include <osg/Object>
#include <osg/Vec4>
#include <osgSim/BlinkSequence>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

BEGIN_OBJECT_REFLECTOR(osgSim::BlinkSequence)
	I_BaseType(osg::Object);
	I_Constructor0();
	I_ConstructorWithDefaults2(IN, const osgSim::BlinkSequence &, bs, , IN, const osg::CopyOp &, copyop, osg::CopyOp::SHALLOW_COPY);
	I_Method0(osg::Object *, cloneType);
	I_Method1(osg::Object *, clone, IN, const osg::CopyOp &, copyop);
	I_Method1(bool, isSameKindAs, IN, const osg::Object *, obj);
	I_Method0(const char *, libraryName);
	I_Method0(const char *, className);
	I_Method2(void, addPulse, IN, double, length, IN, const osg::Vec4 &, color);
	I_Method0(int, getNumPulses);
	I_Method3(void, getPulse, IN, unsigned int, i, IN, double &, length, IN, osg::Vec4 &, color);
	I_Method3(void, setPulse, IN, unsigned int, i, IN, double, length, IN, const osg::Vec4 &, color);
	I_Method0(double, getPulsePeriod);
	I_Method1(void, setSequenceGroup, IN, osgSim::SequenceGroup *, sg);
	I_Method0(osgSim::SequenceGroup *, getSequenceGroup);
	I_Method0(const osgSim::SequenceGroup *, getSequenceGroup);
	I_Method1(void, setPhaseShift, IN, double, ps);
	I_Method0(double, getPhaseShift);
	I_Method1(double, localTime, IN, double, time);
	I_Method2(osg::Vec4, color, IN, double, time, IN, double, length);
	I_Property(double, PhaseShift);
	I_ReadOnlyProperty(double, PulsePeriod);
	I_Property(osgSim::SequenceGroup *, SequenceGroup);
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osgSim::SequenceGroup)
	I_BaseType(osg::Object);
	I_Constructor0();
	I_ConstructorWithDefaults2(IN, const osgSim::SequenceGroup &, bs, , IN, const osg::CopyOp &, copyop, osg::CopyOp::SHALLOW_COPY);
	I_Constructor1(IN, double, baseTime);
	I_Method0(osg::Object *, cloneType);
	I_Method1(osg::Object *, clone, IN, const osg::CopyOp &, copyop);
	I_Method1(bool, isSameKindAs, IN, const osg::Object *, obj);
	I_Method0(const char *, libraryName);
	I_Method0(const char *, className);
	I_PublicMemberProperty(double, _baseTime);
END_REFLECTOR

