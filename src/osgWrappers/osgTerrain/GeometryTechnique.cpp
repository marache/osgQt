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

#include <osg/Array>
#include <osg/BoundingBox>
#include <osg/CopyOp>
#include <osg/Object>
#include <osg/PrimitiveSet>
#include <osg/RenderInfo>
#include <osg/Uniform>
#include <osgTerrain/GeometryTechnique>
#include <osgUtil/CullVisitor>
#include <osgUtil/UpdateVisitor>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

BEGIN_ENUM_REFLECTOR(osgTerrain::GeometryTechnique::FilterType)
	I_DeclaringFile("osgTerrain/GeometryTechnique");
	I_EnumLabel(osgTerrain::GeometryTechnique::GAUSSIAN);
	I_EnumLabel(osgTerrain::GeometryTechnique::SMOOTH);
	I_EnumLabel(osgTerrain::GeometryTechnique::SHARPEN);
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osgTerrain::GeometryTechnique)
	I_DeclaringFile("osgTerrain/GeometryTechnique");
	I_BaseType(osgTerrain::TerrainTechnique);
	I_Constructor0(____GeometryTechnique,
	               "",
	               "");
	I_ConstructorWithDefaults2(IN, const osgTerrain::GeometryTechnique &, x, , IN, const osg::CopyOp &, copyop, osg::CopyOp::SHALLOW_COPY,
	                           ____GeometryTechnique__C5_GeometryTechnique_R1__C5_osg_CopyOp_R1,
	                           "Copy constructor using CopyOp to manage deep vs shallow copy. ",
	                           "");
	I_Method0(void, init,
	          Properties::VIRTUAL,
	          __void__init,
	          "",
	          "");
	I_Method1(void, update, IN, osgUtil::UpdateVisitor *, nv,
	          Properties::VIRTUAL,
	          __void__update__osgUtil_UpdateVisitor_P1,
	          "",
	          "");
	I_Method1(void, cull, IN, osgUtil::CullVisitor *, nv,
	          Properties::VIRTUAL,
	          __void__cull__osgUtil_CullVisitor_P1,
	          "",
	          "");
	I_Method0(void, cleanSceneGraph,
	          Properties::VIRTUAL,
	          __void__cleanSceneGraph,
	          "Clean scene graph from any terrain technique specific nodes. ",
	          "");
	I_Method0(void, dirty,
	          Properties::VIRTUAL,
	          __void__dirty,
	          "Dirty so that cached data structurese will be updated on next use. ",
	          "");
	I_Method1(void, setFilterBias, IN, float, filterBias,
	          Properties::NON_VIRTUAL,
	          __void__setFilterBias__float,
	          "",
	          "");
	I_Method0(float, getFilterBias,
	          Properties::NON_VIRTUAL,
	          __float__getFilterBias,
	          "",
	          "");
	I_Method1(void, setFilterWidth, IN, float, filterWidth,
	          Properties::NON_VIRTUAL,
	          __void__setFilterWidth__float,
	          "",
	          "");
	I_Method0(float, getFilterWidth,
	          Properties::NON_VIRTUAL,
	          __float__getFilterWidth,
	          "",
	          "");
	I_Method1(void, setFilterMatrix, IN, const osg::Matrix3 &, matrix,
	          Properties::NON_VIRTUAL,
	          __void__setFilterMatrix__C5_osg_Matrix3_R1,
	          "",
	          "");
	I_Method0(osg::Matrix3 &, getFilterMatrix,
	          Properties::NON_VIRTUAL,
	          __osg_Matrix3_R1__getFilterMatrix,
	          "",
	          "");
	I_Method0(const osg::Matrix3 &, getFilterMatrix,
	          Properties::NON_VIRTUAL,
	          __C5_osg_Matrix3_R1__getFilterMatrix,
	          "",
	          "");
	I_Method1(void, setFilterMatrixAs, IN, osgTerrain::GeometryTechnique::FilterType, filterType,
	          Properties::NON_VIRTUAL,
	          __void__setFilterMatrixAs__FilterType,
	          "",
	          "");
	I_SimpleProperty(float, FilterBias, 
	                 __float__getFilterBias, 
	                 __void__setFilterBias__float);
	I_SimpleProperty(const osg::Matrix3 &, FilterMatrix, 
	                 __C5_osg_Matrix3_R1__getFilterMatrix, 
	                 __void__setFilterMatrix__C5_osg_Matrix3_R1);
	I_SimpleProperty(osgTerrain::GeometryTechnique::FilterType, FilterMatrixAs, 
	                 0, 
	                 __void__setFilterMatrixAs__FilterType);
	I_SimpleProperty(float, FilterWidth, 
	                 __float__getFilterWidth, 
	                 __void__setFilterWidth__float);
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osgTerrain::TerrainGeometry)
	I_DeclaringFile("osgTerrain/GeometryTechnique");
	I_BaseType(osg::Drawable);
	I_Constructor0(____TerrainGeometry,
	               "",
	               "");
	I_ConstructorWithDefaults2(IN, const osgTerrain::TerrainGeometry &, geometry, , IN, const osg::CopyOp &, copyop, osg::CopyOp::SHALLOW_COPY,
	                           ____TerrainGeometry__C5_TerrainGeometry_R1__C5_osg_CopyOp_R1,
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
	I_Method1(void, setVertices, IN, osg::Vec3Array *, vertices,
	          Properties::NON_VIRTUAL,
	          __void__setVertices__osg_Vec3Array_P1,
	          "",
	          "");
	I_Method0(osg::Vec3Array *, getVertices,
	          Properties::NON_VIRTUAL,
	          __osg_Vec3Array_P1__getVertices,
	          "",
	          "");
	I_Method0(const osg::Vec3Array *, getVertices,
	          Properties::NON_VIRTUAL,
	          __C5_osg_Vec3Array_P1__getVertices,
	          "",
	          "");
	I_Method1(void, setNormals, IN, osg::Vec3Array *, normals,
	          Properties::NON_VIRTUAL,
	          __void__setNormals__osg_Vec3Array_P1,
	          "",
	          "");
	I_Method0(osg::Vec3Array *, getNormals,
	          Properties::NON_VIRTUAL,
	          __osg_Vec3Array_P1__getNormals,
	          "",
	          "");
	I_Method0(const osg::Vec3Array *, getNormals,
	          Properties::NON_VIRTUAL,
	          __C5_osg_Vec3Array_P1__getNormals,
	          "",
	          "");
	I_Method1(void, setColors, IN, osg::Vec4Array *, colors,
	          Properties::NON_VIRTUAL,
	          __void__setColors__osg_Vec4Array_P1,
	          "",
	          "");
	I_Method0(osg::Vec4Array *, getColors,
	          Properties::NON_VIRTUAL,
	          __osg_Vec4Array_P1__getColors,
	          "",
	          "");
	I_Method0(const osg::Vec4Array *, getColors,
	          Properties::NON_VIRTUAL,
	          __C5_osg_Vec4Array_P1__getColors,
	          "",
	          "");
	I_Method2(void, setTexCoords, IN, unsigned int, unit, IN, osg::Array *, array,
	          Properties::NON_VIRTUAL,
	          __void__setTexCoords__unsigned_int__osg_Array_P1,
	          "",
	          "");
	I_Method1(osg::Array *, getTexCoords, IN, unsigned int, unit,
	          Properties::NON_VIRTUAL,
	          __osg_Array_P1__getTexCoords__unsigned_int,
	          "",
	          "");
	I_Method1(const osg::Array *, getTexCoords, IN, unsigned int, unit,
	          Properties::NON_VIRTUAL,
	          __C5_osg_Array_P1__getTexCoords__unsigned_int,
	          "",
	          "");
	I_Method1(void, addPrimitiveSet, IN, osg::PrimitiveSet *, primitiveSet,
	          Properties::NON_VIRTUAL,
	          __void__addPrimitiveSet__osg_PrimitiveSet_P1,
	          "",
	          "");
	I_Method1(osg::PrimitiveSet *, getPrimtitiveSet, IN, unsigned int, i,
	          Properties::NON_VIRTUAL,
	          __osg_PrimitiveSet_P1__getPrimtitiveSet__unsigned_int,
	          "",
	          "");
	I_Method1(const osg::PrimitiveSet *, getPrimtitiveSet, IN, unsigned int, i,
	          Properties::NON_VIRTUAL,
	          __C5_osg_PrimitiveSet_P1__getPrimtitiveSet__unsigned_int,
	          "",
	          "");
	I_Method0(unsigned int, getNumPrimitiveSets,
	          Properties::NON_VIRTUAL,
	          __unsigned_int__getNumPrimitiveSets,
	          "",
	          "");
	I_Method0(osg::BoundingBox, computeBound,
	          Properties::VIRTUAL,
	          __osg_BoundingBox__computeBound,
	          "Compute the bounding box around Drawables's geometry. ",
	          "");
	I_Method1(void, drawImplementation, IN, osg::RenderInfo &, renderInfo,
	          Properties::VIRTUAL,
	          __void__drawImplementation__osg_RenderInfo_R1,
	          "Draw Geometry directly ignoring an OpenGL display list which could be attached. ",
	          "This is the internal draw method which does the drawing itself, and is the method to override when deriving from Geometry for user-drawn objects.");
	I_SimpleProperty(osg::Vec4Array *, Colors, 
	                 __osg_Vec4Array_P1__getColors, 
	                 __void__setColors__osg_Vec4Array_P1);
	I_SimpleProperty(osg::Vec3Array *, Normals, 
	                 __osg_Vec3Array_P1__getNormals, 
	                 __void__setNormals__osg_Vec3Array_P1);
	I_IndexedProperty(osg::Array *, TexCoords, 
	                  __osg_Array_P1__getTexCoords__unsigned_int, 
	                  __void__setTexCoords__unsigned_int__osg_Array_P1, 
	                  0);
	I_SimpleProperty(osg::Vec3Array *, Vertices, 
	                 __osg_Vec3Array_P1__getVertices, 
	                 __void__setVertices__osg_Vec3Array_P1);
END_REFLECTOR

