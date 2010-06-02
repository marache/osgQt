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
#include <osg/Image>
#include <osg/Object>
#include <osg/TransferFunction>
#include <osg/Vec4>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

#include <osg/observer_ptr>
        
BEGIN_OBJECT_REFLECTOR(osg::TransferFunction)
	I_DeclaringFile("osg/TransferFunction");
	I_BaseType(osg::Object);
	I_Constructor0(____TransferFunction,
	               "",
	               "");
	I_ConstructorWithDefaults2(IN, const osg::TransferFunction &, tf, , IN, const osg::CopyOp &, copyop, osg::CopyOp::SHALLOW_COPY,
	                           ____TransferFunction__C5_TransferFunction_R1__C5_CopyOp_R1,
	                           "Copy constructor using CopyOp to manage deep vs shallow copy. ",
	                           "");
	I_Method0(osg::Object *, cloneType,
	          Properties::VIRTUAL,
	          __osg_Object_P1__cloneType,
	          "Clone the type of an object, with Object* return type. ",
	          "Must be defined by derived classes. ");
	I_Method1(osg::Object *, clone, IN, const osg::CopyOp &, x,
	          Properties::VIRTUAL,
	          __osg_Object_P1__clone__C5_osg_CopyOp_R1,
	          "Clone an object, with Object* return type. ",
	          "Must be defined by derived classes. ");
	I_Method1(bool, isSameKindAs, IN, const osg::Object *, obj,
	          Properties::VIRTUAL,
	          __bool__isSameKindAs__C5_osg_Object_P1,
	          "",
	          "");
	I_Method0(const char *, libraryName,
	          Properties::VIRTUAL,
	          __C5_char_P1__libraryName,
	          "return the name of the object's library. ",
	          "Must be defined by derived classes. The OpenSceneGraph convention is that the namespace of a library is the same as the library name. ");
	I_Method0(const char *, className,
	          Properties::VIRTUAL,
	          __C5_char_P1__className,
	          "return the name of the object's class type. ",
	          "Must be defined by derived classes. ");
	I_Method0(osg::Image *, getImage,
	          Properties::NON_VIRTUAL,
	          __osg_Image_P1__getImage,
	          "Get the image that is used for passing the transfer function data to the GPU. ",
	          "");
	I_Method0(const osg::Image *, getImage,
	          Properties::NON_VIRTUAL,
	          __C5_osg_Image_P1__getImage,
	          "Get the const image that is used for passing the transfer function data to the GPU. ",
	          "");
	I_SimpleProperty(osg::Image *, Image, 
	                 __osg_Image_P1__getImage, 
	                 0);
END_REFLECTOR

TYPE_NAME_ALIAS(std::map< float COMMA  osg::Vec4 >, osg::TransferFunction1D::ColorMap)

BEGIN_OBJECT_REFLECTOR(osg::TransferFunction1D)
	I_DeclaringFile("osg/TransferFunction");
	I_BaseType(osg::TransferFunction);
	I_Constructor0(____TransferFunction1D,
	               "",
	               "");
	I_ConstructorWithDefaults2(IN, const osg::TransferFunction1D &, tf, , IN, const osg::CopyOp &, copyop, osg::CopyOp::SHALLOW_COPY,
	                           ____TransferFunction1D__C5_TransferFunction1D_R1__C5_CopyOp_R1,
	                           "Copy constructor using CopyOp to manage deep vs shallow copy. ",
	                           "");
	I_Method0(osg::Object *, cloneType,
	          Properties::VIRTUAL,
	          __osg_Object_P1__cloneType,
	          "Clone the type of an object, with Object* return type. ",
	          "Must be defined by derived classes. ");
	I_Method1(osg::Object *, clone, IN, const osg::CopyOp &, x,
	          Properties::VIRTUAL,
	          __osg_Object_P1__clone__C5_osg_CopyOp_R1,
	          "Clone an object, with Object* return type. ",
	          "Must be defined by derived classes. ");
	I_Method1(bool, isSameKindAs, IN, const osg::Object *, obj,
	          Properties::VIRTUAL,
	          __bool__isSameKindAs__C5_osg_Object_P1,
	          "",
	          "");
	I_Method0(const char *, libraryName,
	          Properties::VIRTUAL,
	          __C5_char_P1__libraryName,
	          "return the name of the object's library. ",
	          "Must be defined by derived classes. The OpenSceneGraph convention is that the namespace of a library is the same as the library name. ");
	I_Method0(const char *, className,
	          Properties::VIRTUAL,
	          __C5_char_P1__className,
	          "return the name of the object's class type. ",
	          "Must be defined by derived classes. ");
	I_Method0(float, getMinimum,
	          Properties::NON_VIRTUAL,
	          __float__getMinimum,
	          "Get the mnimum transfer function value. ",
	          "");
	I_Method0(float, getMaximum,
	          Properties::NON_VIRTUAL,
	          __float__getMaximum,
	          "Get the maximum transfer function value. ",
	          "");
	I_Method1(void, allocate, IN, unsigned int, numImageCells,
	          Properties::NON_VIRTUAL,
	          __void__allocate__unsigned_int,
	          "allocate the osg::Image with specified dimension. ",
	          "The Image tracks the color map, and is used to represent the transfer function when download to GPU. ");
	I_MethodWithDefaults1(void, clear, IN, const osg::Vec4 &, color, osg::Vec4(1.0f, 1.0f, 1.0f, 1.0f),
	                      Properties::NON_VIRTUAL,
	                      __void__clear__C5_osg_Vec4_R1,
	                      "Clear the whole range to just represet a single color. ",
	                      "");
	I_Method1(osg::Vec4, getPixelValue, IN, unsigned int, i,
	          Properties::NON_VIRTUAL,
	          __osg_Vec4__getPixelValue__unsigned_int,
	          "Get pixel value from the image. ",
	          "");
	I_Method0(unsigned int, getNumberImageCells,
	          Properties::NON_VIRTUAL,
	          __unsigned_int__getNumberImageCells,
	          "Get the number of image cells that are assigned to the represent the transfer function when download to the GPU. ",
	          "");
	I_MethodWithDefaults3(void, setColor, IN, float, v, , IN, const osg::Vec4 &, color, , IN, bool, updateImage, true,
	                      Properties::NON_VIRTUAL,
	                      __void__setColor__float__C5_osg_Vec4_R1__bool,
	                      "Set the color for a specified transfer function value. ",
	                      "updateImage defaults to true, and tells the setColor function to update the associate osg::Image that tracks the color map. Pass in false as the updateImage parameter if you are setting up many values at once to avoid recomputating og the image data, then once all setColor calls are made explictly call updateImage() to bring the osg::Image back into sync with the color map. ");
	I_Method1(osg::Vec4, getColor, IN, float, v,
	          Properties::NON_VIRTUAL,
	          __osg_Vec4__getColor__float,
	          "Get the color for a specified transfer function value, interpolating the value if no exact match is found. ",
	          "");
	I_Method0(osg::TransferFunction1D::ColorMap &, getColorMap,
	          Properties::NON_VIRTUAL,
	          __ColorMap_R1__getColorMap,
	          "Get the color map that stores the mapping between the the tranfser function value and the colour it maps to. ",
	          "");
	I_Method0(const osg::TransferFunction1D::ColorMap &, getColorMap,
	          Properties::NON_VIRTUAL,
	          __C5_ColorMap_R1__getColorMap,
	          "Get the const color map that stores the mapping between the the tranfser function value and the colour it maps to. ",
	          "");
	I_Method1(void, assign, IN, const osg::TransferFunction1D::ColorMap &, vcm,
	          Properties::NON_VIRTUAL,
	          __void__assign__C5_ColorMap_R1,
	          "Assign a color map and automatically update the image to make sure they are in sync. ",
	          "");
	I_Method0(void, updateImage,
	          Properties::NON_VIRTUAL,
	          __void__updateImage,
	          "Manually update the associate osg::Image to represent the colors assigned in the color map. ",
	          "");
	I_ProtectedMethod4(void, assignToImage, IN, float, lower_v, IN, const osg::Vec4 &, lower_c, IN, float, upper_v, IN, const osg::Vec4 &, upper_c,
	                   Properties::NON_VIRTUAL,
	                   Properties::NON_CONST,
	                   __void__assignToImage__float__C5_osg_Vec4_R1__float__C5_osg_Vec4_R1,
	                   "",
	                   "");
	I_SimpleProperty(osg::TransferFunction1D::ColorMap &, ColorMap, 
	                 __ColorMap_R1__getColorMap, 
	                 0);
	I_SimpleProperty(float, Maximum, 
	                 __float__getMaximum, 
	                 0);
	I_SimpleProperty(float, Minimum, 
	                 __float__getMinimum, 
	                 0);
	I_SimpleProperty(unsigned int, NumberImageCells, 
	                 __unsigned_int__getNumberImageCells, 
	                 0);
END_REFLECTOR

STD_MAP_REFLECTOR(std::map< float COMMA  osg::Vec4 >)

