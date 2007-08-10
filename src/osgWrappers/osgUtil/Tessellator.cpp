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

#include <osg/Geometry>
#include <osg/Vec3>
#include <osgUtil/Tessellator>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

TYPE_NAME_ALIAS(std::vector< osg::Vec3 * >, osgUtil::Tessellator::VertexPointList)

TYPE_NAME_ALIAS(std::vector< osg::ref_ptr< osgUtil::Tessellator::Prim > >, osgUtil::Tessellator::PrimList)

BEGIN_ENUM_REFLECTOR(osgUtil::Tessellator::WindingType)
	I_DeclaringFile("osgUtil/Tessellator");
	I_EnumLabel(osgUtil::Tessellator::TESS_WINDING_ODD);
	I_EnumLabel(osgUtil::Tessellator::TESS_WINDING_NONZERO);
	I_EnumLabel(osgUtil::Tessellator::TESS_WINDING_POSITIVE);
	I_EnumLabel(osgUtil::Tessellator::TESS_WINDING_NEGATIVE);
	I_EnumLabel(osgUtil::Tessellator::TESS_WINDING_ABS_GEQ_TWO);
END_REFLECTOR

BEGIN_ENUM_REFLECTOR(osgUtil::Tessellator::TessellationType)
	I_DeclaringFile("osgUtil/Tessellator");
	I_EnumLabel(osgUtil::Tessellator::TESS_TYPE_GEOMETRY);
	I_EnumLabel(osgUtil::Tessellator::TESS_TYPE_DRAWABLE);
	I_EnumLabel(osgUtil::Tessellator::TESS_TYPE_POLYGONS);
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osgUtil::Tessellator)
	I_DeclaringFile("osgUtil/Tessellator");
	I_BaseType(osg::Referenced);
	I_Constructor0(____Tessellator,
	               "",
	               "");
	I_Method1(void, setBoundaryOnly, IN, const bool, tt,
	          Properties::NON_VIRTUAL,
	          __void__setBoundaryOnly__C5_bool,
	          "Set and get tessellation request boundary only on/off. ",
	          "");
	I_Method0(const bool, getBoundaryOnly,
	          Properties::NON_VIRTUAL,
	          __C5_bool__getBoundaryOnly,
	          "",
	          "");
	I_Method1(void, setWindingType, IN, const osgUtil::Tessellator::WindingType, wt,
	          Properties::NON_VIRTUAL,
	          __void__setWindingType__C5_WindingType,
	          "Set and get tessellation windong rule. ",
	          "");
	I_Method0(const osgUtil::Tessellator::WindingType, getWindingType,
	          Properties::NON_VIRTUAL,
	          __C5_WindingType__getWindingType,
	          "",
	          "");
	I_Method1(void, setTessellationType, IN, const osgUtil::Tessellator::TessellationType, tt,
	          Properties::NON_VIRTUAL,
	          __void__setTessellationType__C5_TessellationType,
	          "Set and get tessellation type. ",
	          "");
	I_Method0(const osgUtil::Tessellator::TessellationType, getTessellationType,
	          Properties::NON_VIRTUAL,
	          __C5_TessellationType__getTessellationType,
	          "",
	          "");
	I_Method1(void, retessellatePolygons, IN, osg::Geometry &, cxgeom,
	          Properties::NON_VIRTUAL,
	          __void__retessellatePolygons__osg_Geometry_R1,
	          "Change the contours lists of the geometry into tessellated primitives (the list of primitives in the original geometry is stored in the Tessellator for possible re-use. ",
	          "The name remains retessellatePolygons although it now handles trifans, strips, quads etc. as well as Polygons so as to not break old codes relying on this function name. ");
	I_Method1(void, setTessellationNormal, IN, const osg::Vec3, norm,
	          Properties::NON_VIRTUAL,
	          __void__setTessellationNormal__C5_osg_Vec3,
	          "Define the normal to the tessellated polygon - this provides a hint how to tessellate the contours; see gluTessNormal in red book or man pages. ",
	          "GWM July 2005. Can improve teselation \"For example, if you know that all polygons lie in the x-y plane, call gluTessNormal(tess, 0.0, 0.0, 1.0) before rendering any polygons.\" ");
	I_Method0(osg::Geometry::PrimitiveSetList, getContours,
	          Properties::NON_VIRTUAL,
	          __osg_Geometry_PrimitiveSetList__getContours,
	          "",
	          "");
	I_Method0(void, beginTessellation,
	          Properties::NON_VIRTUAL,
	          __void__beginTessellation,
	          "",
	          "");
	I_Method0(void, beginContour,
	          Properties::NON_VIRTUAL,
	          __void__beginContour,
	          "",
	          "");
	I_Method1(void, addVertex, IN, osg::Vec3 *, vertex,
	          Properties::NON_VIRTUAL,
	          __void__addVertex__osg_Vec3_P1,
	          "",
	          "");
	I_Method0(void, endContour,
	          Properties::NON_VIRTUAL,
	          __void__endContour,
	          "",
	          "");
	I_Method0(void, endTessellation,
	          Properties::NON_VIRTUAL,
	          __void__endTessellation,
	          "",
	          "");
	I_Method0(osgUtil::Tessellator::PrimList &, getPrimList,
	          Properties::NON_VIRTUAL,
	          __PrimList_R1__getPrimList,
	          "",
	          "");
	I_Method0(void, reset,
	          Properties::NON_VIRTUAL,
	          __void__reset,
	          "",
	          "");
	I_ProtectedMethod2(void, reduceArray, IN, osg::Array *, cold, IN, const unsigned int, nnu,
	                   Properties::NON_VIRTUAL,
	                   Properties::NON_CONST,
	                   __void__reduceArray__osg_Array_P1__C5_unsigned_int,
	                   "remove unused parts of the array, eg for wehn retessellating tessellation can introduce extra vertices for concave or crossing boundaries, these will leak memory if not removed when retessellating. ",
	                   "");
	I_ProtectedMethod2(void, collectTessellation, IN, osg::Geometry &, cxgeom, IN, unsigned int, originalIndex,
	                   Properties::NON_VIRTUAL,
	                   Properties::NON_CONST,
	                   __void__collectTessellation__osg_Geometry_R1__unsigned_int,
	                   "",
	                   "");
	I_ProtectedMethod4(void, addContour, IN, GLenum, mode, IN, unsigned int, first, IN, unsigned int, last, IN, osg::Vec3Array *, vertices,
	                   Properties::NON_VIRTUAL,
	                   Properties::NON_CONST,
	                   __void__addContour__GLenum__unsigned_int__unsigned_int__osg_Vec3Array_P1,
	                   "",
	                   "");
	I_ProtectedMethod2(void, addContour, IN, osg::PrimitiveSet *, primitive, IN, osg::Vec3Array *, vertices,
	                   Properties::NON_VIRTUAL,
	                   Properties::NON_CONST,
	                   __void__addContour__osg_PrimitiveSet_P1__osg_Vec3Array_P1,
	                   "",
	                   "");

	I_ProtectedMethod1(void, begin, IN, GLenum, mode,
	                   Properties::NON_VIRTUAL,
	                   Properties::NON_CONST,
	                   __void__begin__GLenum,
	                   "",
	                   "");
	I_ProtectedMethod1(void, vertex, IN, osg::Vec3 *, vertex,
	                   Properties::NON_VIRTUAL,
	                   Properties::NON_CONST,
	                   __void__vertex__osg_Vec3_P1,
	                   "",
	                   "");
	I_ProtectedMethod3(void, combine, IN, osg::Vec3 *, vertex, IN, void *, vertex_data, IN, GLfloat, weight,
	                   Properties::NON_VIRTUAL,
	                   Properties::NON_CONST,
	                   __void__combine__osg_Vec3_P1__void_P1__GLfloat,
	                   "",
	                   "");
	I_ProtectedMethod0(void, end,
	                   Properties::NON_VIRTUAL,
	                   Properties::NON_CONST,
	                   __void__end,
	                   "",
	                   "");
	I_ProtectedMethod1(void, error, IN, GLenum, errorCode,
	                   Properties::NON_VIRTUAL,
	                   Properties::NON_CONST,
	                   __void__error__GLenum,
	                   "",
	                   "");
	I_SimpleProperty(const bool, BoundaryOnly, 
	                 __C5_bool__getBoundaryOnly, 
	                 __void__setBoundaryOnly__C5_bool);
	I_SimpleProperty(osg::Geometry::PrimitiveSetList, Contours, 
	                 __osg_Geometry_PrimitiveSetList__getContours, 
	                 0);
	I_SimpleProperty(osgUtil::Tessellator::PrimList &, PrimList, 
	                 __PrimList_R1__getPrimList, 
	                 0);
	I_SimpleProperty(const osg::Vec3, TessellationNormal, 
	                 0, 
	                 __void__setTessellationNormal__C5_osg_Vec3);
	I_SimpleProperty(const osgUtil::Tessellator::TessellationType, TessellationType, 
	                 __C5_TessellationType__getTessellationType, 
	                 __void__setTessellationType__C5_TessellationType);
	I_SimpleProperty(const osgUtil::Tessellator::WindingType, WindingType, 
	                 __C5_WindingType__getWindingType, 
	                 __void__setWindingType__C5_WindingType);
END_REFLECTOR

TYPE_NAME_ALIAS(std::vector< osg::Vec3 * >, osgUtil::Tessellator::Prim::VecList)

BEGIN_OBJECT_REFLECTOR(osgUtil::Tessellator::Prim)
	I_DeclaringFile("osgUtil/Tessellator");
	I_BaseType(osg::Referenced);
	I_Constructor1(IN, GLenum, mode,
	               Properties::NON_EXPLICIT,
	               ____Prim__GLenum,
	               "",
	               "");
	I_PublicMemberProperty(GLenum, _mode);
	I_PublicMemberProperty(osgUtil::Tessellator::Prim::VecList, _vertices);
END_REFLECTOR

BEGIN_VALUE_REFLECTOR(osg::ref_ptr< osgUtil::Tessellator::Prim >)
	I_DeclaringFile("osg/ref_ptr");
	I_Constructor0(____ref_ptr,
	               "",
	               "");
	I_Constructor1(IN, osgUtil::Tessellator::Prim *, ptr,
	               Properties::NON_EXPLICIT,
	               ____ref_ptr__T_P1,
	               "",
	               "");
	I_Constructor1(IN, const osg::ref_ptr< osgUtil::Tessellator::Prim > &, rp,
	               Properties::NON_EXPLICIT,
	               ____ref_ptr__C5_ref_ptr_R1,
	               "",
	               "");
	I_Method0(osgUtil::Tessellator::Prim *, get,
	          Properties::NON_VIRTUAL,
	          __T_P1__get,
	          "",
	          "");
	I_Method0(bool, valid,
	          Properties::NON_VIRTUAL,
	          __bool__valid,
	          "",
	          "");
	I_Method0(osgUtil::Tessellator::Prim *, release,
	          Properties::NON_VIRTUAL,
	          __T_P1__release,
	          "",
	          "");
	I_Method1(void, swap, IN, osg::ref_ptr< osgUtil::Tessellator::Prim > &, rp,
	          Properties::NON_VIRTUAL,
	          __void__swap__ref_ptr_R1,
	          "",
	          "");
	I_SimpleProperty(osgUtil::Tessellator::Prim *, , 
	                 __T_P1__get, 
	                 0);
END_REFLECTOR

STD_VECTOR_REFLECTOR(std::vector< osg::Vec3 * >)

STD_VECTOR_REFLECTOR(std::vector< osg::ref_ptr< osgUtil::Tessellator::Prim > >)

