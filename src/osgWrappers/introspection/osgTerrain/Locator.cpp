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

#include <osg/CoordinateSystemNode>
#include <osg/CopyOp>
#include <osg/Matrixd>
#include <osg/Object>
#include <osg/Vec3d>
#include <osgTerrain/Locator>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

BEGIN_ENUM_REFLECTOR(osgTerrain::Locator::CoordinateSystemType)
	I_DeclaringFile("osgTerrain/Locator");
	I_EnumLabel(osgTerrain::Locator::GEOCENTRIC);
	I_EnumLabel(osgTerrain::Locator::GEOGRAPHIC);
	I_EnumLabel(osgTerrain::Locator::PROJECTED);
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osgTerrain::Locator)
	I_DeclaringFile("osgTerrain/Locator");
	I_BaseType(osg::Object);
	I_Constructor0(____Locator,
	               "",
	               "");
	I_ConstructorWithDefaults2(IN, const osgTerrain::Locator &, x, , IN, const osg::CopyOp &, copyop, osg::CopyOp::SHALLOW_COPY,
	                           ____Locator__C5_Locator_R1__C5_osg_CopyOp_R1,
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
	I_Method1(void, setCoordinateSystemType, IN, osgTerrain::Locator::CoordinateSystemType, type,
	          Properties::NON_VIRTUAL,
	          __void__setCoordinateSystemType__CoordinateSystemType,
	          "Set the CoordinatesSyetemType. ",
	          "Note, the user must keep the CoordinateSystemString consistent with the type of the CoordinateSystem. ");
	I_Method0(osgTerrain::Locator::CoordinateSystemType, getCoordinateSystemType,
	          Properties::NON_VIRTUAL,
	          __CoordinateSystemType__getCoordinateSystemType,
	          "Get the CoordinatesSyetemType. ",
	          "");
	I_Method1(void, setFormat, IN, const std::string &, format,
	          Properties::NON_VIRTUAL,
	          __void__setFormat__C5_std_string_R1,
	          "Set the coordinate system format string. ",
	          "Typical values would be WKT, PROJ4, USGS etc. ");
	I_Method0(const std::string &, getFormat,
	          Properties::NON_VIRTUAL,
	          __C5_std_string_R1__getFormat,
	          "Get the coordinate system format string. ",
	          "");
	I_Method1(void, setCoordinateSystem, IN, const std::string &, cs,
	          Properties::NON_VIRTUAL,
	          __void__setCoordinateSystem__C5_std_string_R1,
	          "Set the CoordinateSystem reference string, should be stored in a form consistent with the Format. ",
	          "");
	I_Method0(const std::string &, getCoordinateSystem,
	          Properties::NON_VIRTUAL,
	          __C5_std_string_R1__getCoordinateSystem,
	          "Get the CoordinateSystem reference string. ",
	          "");
	I_Method1(void, setEllipsoidModel, IN, osg::EllipsoidModel *, ellipsode,
	          Properties::NON_VIRTUAL,
	          __void__setEllipsoidModel__osg_EllipsoidModel_P1,
	          "Set EllipsoidModel to describe the model used to map lat, long and height into geocentric XYZ and back. ",
	          "");
	I_Method0(osg::EllipsoidModel *, getEllipsoidModel,
	          Properties::NON_VIRTUAL,
	          __osg_EllipsoidModel_P1__getEllipsoidModel,
	          "Get the EllipsoidModel. ",
	          "");
	I_Method0(const osg::EllipsoidModel *, getEllipsoidModel,
	          Properties::NON_VIRTUAL,
	          __C5_osg_EllipsoidModel_P1__getEllipsoidModel,
	          "Get the const EllipsoidModel. ",
	          "");
	I_Method1(void, setTransform, IN, const osg::Matrixd &, transform,
	          Properties::NON_VIRTUAL,
	          __void__setTransform__C5_osg_Matrixd_R1,
	          "Set the transformation from local coordinates to model coordinates. ",
	          "");
	I_Method0(const osg::Matrixd &, getTransform,
	          Properties::NON_VIRTUAL,
	          __C5_osg_Matrixd_R1__getTransform,
	          "Set the transformation from local coordinates to model coordinates. ",
	          "");
	I_Method4(void, setTransformAsExtents, IN, double, minX, IN, double, minY, IN, double, maxX, IN, double, maxY,
	          Properties::NON_VIRTUAL,
	          __void__setTransformAsExtents__double__double__double__double,
	          "Set the extents of the local coords. ",
	          "");
	I_Method0(bool, orientationOpenGL,
	          Properties::VIRTUAL,
	          __bool__orientationOpenGL,
	          "",
	          "");
	I_Method2(bool, convertLocalToModel, IN, const osg::Vec3d &, local, IN, osg::Vec3d &, world,
	          Properties::VIRTUAL,
	          __bool__convertLocalToModel__C5_osg_Vec3d_R1__osg_Vec3d_R1,
	          "",
	          "");
	I_Method2(bool, convertModelToLocal, IN, const osg::Vec3d &, world, IN, osg::Vec3d &, local,
	          Properties::VIRTUAL,
	          __bool__convertModelToLocal__C5_osg_Vec3d_R1__osg_Vec3d_R1,
	          "",
	          "");
	I_Method3(bool, computeLocalBounds, IN, osgTerrain::Locator &, source, IN, osg::Vec3d &, bottomLeft, IN, osg::Vec3d &, topRight,
	          Properties::NON_VIRTUAL,
	          __bool__computeLocalBounds__Locator_R1__osg_Vec3d_R1__osg_Vec3d_R1,
	          "",
	          "");
	I_Method1(void, setDefinedInFile, IN, bool, flag,
	          Properties::NON_VIRTUAL,
	          __void__setDefinedInFile__bool,
	          "",
	          "");
	I_Method0(bool, getDefinedInFile,
	          Properties::NON_VIRTUAL,
	          __bool__getDefinedInFile,
	          "",
	          "");
	I_Method1(void, setTransformScaledByResolution, IN, bool, scaledByResolution,
	          Properties::NON_VIRTUAL,
	          __void__setTransformScaledByResolution__bool,
	          "",
	          "");
	I_Method0(bool, getTransformScaledByResolution,
	          Properties::NON_VIRTUAL,
	          __bool__getTransformScaledByResolution,
	          "",
	          "");
	I_StaticMethod4(bool, convertLocalCoordBetween, IN, const osgTerrain::Locator &, source, IN, const osg::Vec3d &, sourceNDC, IN, const osgTerrain::Locator &, destination, IN, osg::Vec3d &, destinationNDC,
	                __bool__convertLocalCoordBetween__C5_Locator_R1__C5_osg_Vec3d_R1__C5_Locator_R1__osg_Vec3d_R1_S,
	                "",
	                "");
	I_SimpleProperty(const std::string &, CoordinateSystem, 
	                 __C5_std_string_R1__getCoordinateSystem, 
	                 __void__setCoordinateSystem__C5_std_string_R1);
	I_SimpleProperty(osgTerrain::Locator::CoordinateSystemType, CoordinateSystemType, 
	                 __CoordinateSystemType__getCoordinateSystemType, 
	                 __void__setCoordinateSystemType__CoordinateSystemType);
	I_SimpleProperty(bool, DefinedInFile, 
	                 __bool__getDefinedInFile, 
	                 __void__setDefinedInFile__bool);
	I_SimpleProperty(osg::EllipsoidModel *, EllipsoidModel, 
	                 __osg_EllipsoidModel_P1__getEllipsoidModel, 
	                 __void__setEllipsoidModel__osg_EllipsoidModel_P1);
	I_SimpleProperty(const std::string &, Format, 
	                 __C5_std_string_R1__getFormat, 
	                 __void__setFormat__C5_std_string_R1);
	I_SimpleProperty(const osg::Matrixd &, Transform, 
	                 __C5_osg_Matrixd_R1__getTransform, 
	                 __void__setTransform__C5_osg_Matrixd_R1);
	I_SimpleProperty(bool, TransformScaledByResolution, 
	                 __bool__getTransformScaledByResolution, 
	                 __void__setTransformScaledByResolution__bool);
END_REFLECTOR

