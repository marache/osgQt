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

#include <osg/Vec4>
#include <osgSim/ColorRange>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

BEGIN_ABSTRACT_OBJECT_REFLECTOR(osgSim::ColorRange)
	I_BaseType(osgSim::ScalarsToColors);
	I_Constructor2(IN, float, min, IN, float, max,
	               ____ColorRange__float__float,
	               "Constructor for a ColorRange with a default list of colors set to Red-Yellow-Green-Blue-Cyan. ",
	               " param min minimum scalar value  max maximum scalar value ");
	I_Constructor3(IN, float, min, IN, float, max, IN, const std::vector< osg::Vec4 > &, colors,
	               ____ColorRange__float__float__C5_std_vectorT1_osg_Vec4__R1,
	               "Constructor for a ColorRange. ",
	               " param min minimum scalar value  max maximum scalar value  colors optional range of colors, ");
	I_Method1(void, setColors, IN, const std::vector< osg::Vec4 > &, colors,
	          Properties::NON_VIRTUAL,
	          __void__setColors__C5_std_vectorT1_osg_Vec4__R1,
	          "Set the range of colors. ",
	          "");
	I_Method1(osg::Vec4, getColor, IN, float, scalar,
	          Properties::VIRTUAL,
	          __osg_Vec4__getColor__float,
	          "Get the color for a given scalar value. ",
	          "");
	I_SimpleProperty(const std::vector< osg::Vec4 > &, Colors, 
	                 0, 
	                 __void__setColors__C5_std_vectorT1_osg_Vec4__R1);
END_REFLECTOR

STD_VECTOR_REFLECTOR(std::vector< osg::Vec4 >);

