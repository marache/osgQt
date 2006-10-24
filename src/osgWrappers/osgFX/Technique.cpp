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

#include <osg/NodeVisitor>
#include <osg/State>
#include <osg/StateSet>
#include <osgFX/Effect>
#include <osgFX/Technique>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

BEGIN_ABSTRACT_OBJECT_REFLECTOR(osgFX::Technique)
	I_BaseType(osg::Referenced);
	I_Constructor0(____Technique,
	               "",
	               "");
	I_Method0(const char *, techniqueName,
	          __C5_char_P1__techniqueName,
	          "get the name of this Technique ",
	          "");
	I_Method0(const char *, techniqueDescription,
	          __C5_char_P1__techniqueDescription,
	          "get a brief description of this Technique ",
	          "");
	I_Method1(void, getRequiredExtensions, IN, std::vector< std::string > &, x,
	          __void__getRequiredExtensions__std_vectorT1_std_string__R1,
	          "collect the GL extension strings which are required for this technique to work properly. ",
	          "This method is called from the default implementation of validate().");
	I_Method1(bool, validate, IN, osg::State &, x,
	          __bool__validate__osg_State_R1,
	          "tests whether this technique is valid for the current rendering context. ",
	          "The default behavior is to call getRequiredExtensions() and check for extension availability.");
	I_Method0(int, getNumPasses,
	          __int__getNumPasses,
	          "get the number of rendering passes defined in this Technique ",
	          "");
	I_Method1(osg::StateSet *, getPassStateSet, IN, int, i,
	          __osg_StateSet_P1__getPassStateSet__int,
	          "get the StateSet object associated to the i-th pass ",
	          "");
	I_Method1(const osg::StateSet *, getPassStateSet, IN, int, i,
	          __C5_osg_StateSet_P1__getPassStateSet__int,
	          "get the const StateSet object associated to the i-th pass ",
	          "");
	I_Method2(void, traverse, IN, osg::NodeVisitor &, nv, IN, osgFX::Effect *, fx,
	          __void__traverse__osg_NodeVisitor_R1__Effect_P1,
	          "traverse children with multipass if necessary. ",
	          "By default this method simply calls the protected method traverse_implementation(); you can override it to change the default behavior. Don't call this method directly as it is called by osgFX::Effect");
END_REFLECTOR

