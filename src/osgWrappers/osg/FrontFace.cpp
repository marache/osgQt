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
#include <osg/FrontFace>
#include <osg/Object>
#include <osg/State>
#include <osg/StateAttribute>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

BEGIN_ENUM_REFLECTOR(osg::FrontFace::Mode)
	I_EnumLabel(osg::FrontFace::CLOCKWISE);
	I_EnumLabel(osg::FrontFace::COUNTER_CLOCKWISE);
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osg::FrontFace)
	I_BaseType(osg::StateAttribute);
	I_ConstructorWithDefaults1(IN, osg::FrontFace::Mode, face, osg::FrontFace::COUNTER_CLOCKWISE);
	I_ConstructorWithDefaults2(IN, const osg::FrontFace &, ff, , IN, const osg::CopyOp &, copyop, osg::CopyOp::SHALLOW_COPY);
	I_Method0(osg::Object *, cloneType);
	I_Method1(osg::Object *, clone, IN, const osg::CopyOp &, copyop);
	I_Method1(bool, isSameKindAs, IN, const osg::Object *, obj);
	I_Method0(const char *, libraryName);
	I_Method0(const char *, className);
	I_Method0(osg::StateAttribute::Type, getType);
	I_Method1(int, compare, IN, const osg::StateAttribute &, sa);
	I_Method1(void, setMode, IN, osg::FrontFace::Mode, mode);
	I_Method0(osg::FrontFace::Mode, getMode);
	I_Method1(void, apply, IN, osg::State &, state);
	I_Property(osg::FrontFace::Mode, Mode);
	I_ReadOnlyProperty(osg::StateAttribute::Type, Type);
END_REFLECTOR

