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

#include <osgFX/Effect>
#include <osgFX/Registry>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

TYPE_NAME_ALIAS(std::map< std::string COMMA  osg::ref_ptr< const osgFX::Effect > >, osgFX::Registry::EffectMap);

BEGIN_OBJECT_REFLECTOR(osgFX::Registry)
	I_BaseType(osg::Referenced);
	I_Method1(void, registerEffect, IN, const osgFX::Effect *, effect,
	          Properties::NON_VIRTUAL,
	          __void__registerEffect__C5_Effect_P1,
	          "",
	          "");
	I_Method0(const osgFX::Registry::EffectMap &, getEffectMap,
	          Properties::NON_VIRTUAL,
	          __C5_EffectMap_R1__getEffectMap,
	          "",
	          "");
	I_StaticMethod0(osgFX::Registry *, instance,
	                __Registry_P1__instance_S,
	                "",
	                "");
	I_SimpleProperty(const osgFX::Registry::EffectMap &, EffectMap, 
	                 __C5_EffectMap_R1__getEffectMap, 
	                 0);
END_REFLECTOR

BEGIN_VALUE_REFLECTOR(osgFX::Registry::Proxy)
	I_Constructor1(IN, const osgFX::Effect *, effect,
	               Properties::NON_EXPLICIT,
	               ____Proxy__C5_Effect_P1,
	               "",
	               "");
END_REFLECTOR

STD_MAP_REFLECTOR(std::map< std::string COMMA  osg::ref_ptr< const osgFX::Effect > >);

