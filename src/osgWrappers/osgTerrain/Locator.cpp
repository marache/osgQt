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

BEGIN_OBJECT_REFLECTOR(osgTerrain::CartizianLocator)
	I_BaseType(osgTerrain::Locator);
	I_ConstructorWithDefaults6(IN, double, originX, , IN, double, originY, , IN, double, lengthX, , IN, double, lengthY, , IN, double, height, 0.0f, IN, double, heightScale, 1.0f,
	                           ____CartizianLocator__double__double__double__double__double__double,
	                           "",
	                           "");
	I_MethodWithDefaults6(void, setExtents, IN, double, originX, , IN, double, originY, , IN, double, lengthX, , IN, double, lengthY, , IN, double, height, 0.0f, IN, double, heightScale, 1.0f,
	                      Properties::NON_VIRTUAL,
	                      __void__setExtents__double__double__double__double__double__double,
	                      "",
	                      "");
	I_Method1(void, setOriginX, IN, double, x,
	          Properties::NON_VIRTUAL,
	          __void__setOriginX__double,
	          "",
	          "");
	I_Method0(double, getOriginX,
	          Properties::NON_VIRTUAL,
	          __double__getOriginX,
	          "",
	          "");
	I_Method1(void, setOriginY, IN, double, y,
	          Properties::NON_VIRTUAL,
	          __void__setOriginY__double,
	          "",
	          "");
	I_Method0(double, getOriginY,
	          Properties::NON_VIRTUAL,
	          __double__getOriginY,
	          "",
	          "");
	I_Method1(void, setLengthX, IN, double, x,
	          Properties::NON_VIRTUAL,
	          __void__setLengthX__double,
	          "",
	          "");
	I_Method0(double, getLengthX,
	          Properties::NON_VIRTUAL,
	          __double__getLengthX,
	          "",
	          "");
	I_Method1(void, setLengthY, IN, double, y,
	          Properties::NON_VIRTUAL,
	          __void__setLengthY__double,
	          "",
	          "");
	I_Method0(double, getLengthY,
	          Properties::NON_VIRTUAL,
	          __double__getLengthY,
	          "",
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
	I_SimpleProperty(double, LengthX, 
	                 __double__getLengthX, 
	                 __void__setLengthX__double);
	I_SimpleProperty(double, LengthY, 
	                 __double__getLengthY, 
	                 __void__setLengthY__double);
	I_SimpleProperty(double, OriginX, 
	                 __double__getOriginX, 
	                 __void__setOriginX__double);
	I_SimpleProperty(double, OriginY, 
	                 __double__getOriginY, 
	                 __void__setOriginY__double);
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osgTerrain::EllipsoidLocator)
	I_BaseType(osgTerrain::Locator);
	I_ConstructorWithDefaults6(IN, double, longitude, , IN, double, latitude, , IN, double, deltaLongitude, , IN, double, deltaLatitude, , IN, double, height, 0.0, IN, double, heightScale, 1.0f,
	                           ____EllipsoidLocator__double__double__double__double__double__double,
	                           "",
	                           "");
	I_MethodWithDefaults6(void, setExtents, IN, double, longitude, , IN, double, latitude, , IN, double, deltaLongitude, , IN, double, deltaLatitude, , IN, double, height, 0.0, IN, double, heightScale, 1.0f,
	                      Properties::NON_VIRTUAL,
	                      __void__setExtents__double__double__double__double__double__double,
	                      "",
	                      "");
	I_Method0(double, getLongitude,
	          Properties::NON_VIRTUAL,
	          __double__getLongitude,
	          "",
	          "");
	I_Method0(double, getDeltaLongitude,
	          Properties::NON_VIRTUAL,
	          __double__getDeltaLongitude,
	          "",
	          "");
	I_Method0(double, getLatitude,
	          Properties::NON_VIRTUAL,
	          __double__getLatitude,
	          "",
	          "");
	I_Method0(double, getDeltaLatitude,
	          Properties::NON_VIRTUAL,
	          __double__getDeltaLatitude,
	          "",
	          "");
	I_Method0(double, getHeight,
	          Properties::NON_VIRTUAL,
	          __double__getHeight,
	          "",
	          "");
	I_Method0(osg::EllipsoidModel *, getEllipsoidModel,
	          Properties::NON_VIRTUAL,
	          __osg_EllipsoidModel_P1__getEllipsoidModel,
	          "",
	          "");
	I_Method0(const osg::EllipsoidModel *, getEllipsoidModel,
	          Properties::NON_VIRTUAL,
	          __C5_osg_EllipsoidModel_P1__getEllipsoidModel,
	          "",
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
	I_SimpleProperty(double, DeltaLatitude, 
	                 __double__getDeltaLatitude, 
	                 0);
	I_SimpleProperty(double, DeltaLongitude, 
	                 __double__getDeltaLongitude, 
	                 0);
	I_SimpleProperty(osg::EllipsoidModel *, EllipsoidModel, 
	                 __osg_EllipsoidModel_P1__getEllipsoidModel, 
	                 0);
	I_SimpleProperty(double, Height, 
	                 __double__getHeight, 
	                 0);
	I_SimpleProperty(double, Latitude, 
	                 __double__getLatitude, 
	                 0);
	I_SimpleProperty(double, Longitude, 
	                 __double__getLongitude, 
	                 0);
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osgTerrain::Locator)
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
	I_Method1(osg::Object *, clone, IN, const osg::CopyOp &, copyop,
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
	I_Method0(bool, orientationOpenGL,
	          Properties::VIRTUAL,
	          __bool__orientationOpenGL,
	          "",
	          "");
	I_Method2(bool, convertLocalToModel, IN, const osg::Vec3d &, x, IN, osg::Vec3d &, x,
	          Properties::VIRTUAL,
	          __bool__convertLocalToModel__C5_osg_Vec3d_R1__osg_Vec3d_R1,
	          "",
	          "");
	I_Method2(bool, convertModelToLocal, IN, const osg::Vec3d &, x, IN, osg::Vec3d &, x,
	          Properties::VIRTUAL,
	          __bool__convertModelToLocal__C5_osg_Vec3d_R1__osg_Vec3d_R1,
	          "",
	          "");
	I_Method3(bool, computeLocalBounds, IN, osgTerrain::Locator &, source, IN, osg::Vec3d &, bottomLeft, IN, osg::Vec3d &, topRight,
	          Properties::NON_VIRTUAL,
	          __bool__computeLocalBounds__Locator_R1__osg_Vec3d_R1__osg_Vec3d_R1,
	          "",
	          "");
	I_StaticMethod4(bool, convertLocalCoordBetween, IN, const osgTerrain::Locator &, source, IN, const osg::Vec3d &, sourceNDC, IN, const osgTerrain::Locator &, destination, IN, osg::Vec3d &, destinationNDC,
	                __bool__convertLocalCoordBetween__C5_Locator_R1__C5_osg_Vec3d_R1__C5_Locator_R1__osg_Vec3d_R1_S,
	                "",
	                "");
END_REFLECTOR

