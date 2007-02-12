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
#include <osg/CopyOp>
#include <osg/PrimitiveSet>
#include <osg/Vec3>
#include <osgUtil/DelaunayTriangulator>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

BEGIN_ABSTRACT_OBJECT_REFLECTOR(osgUtil::DelaunayConstraint)
	I_BaseType(osg::Geometry);
	I_Constructor0(____DelaunayConstraint,
	               "",
	               "");
	I_Method3(void, addtriangle, IN, const int, i1, IN, const int, i2, IN, const int, i3,
	          Properties::NON_VIRTUAL,
	          __void__addtriangle__C5_int__C5_int__C5_int,
	          "collect up indices of triangle from delaunay triangles. ",
	          "The delaunay triangles inside the DelaunayConstraint area can be used to fill the area or generate geometry that terrain follows the area in some way. These triangles can form a canopy or a field. ");
	I_Method0(const osg::DrawElementsUInt *, getTriangles,
	          Properties::NON_VIRTUAL,
	          __C5_osg_DrawElementsUInt_P1__getTriangles,
	          "Get the filling primitive. ",
	          "One: triangulate must have bneen called and two: triangle list is filled when DelaunayTriangulator::removeInternalTriangles is called. These return the triangles removed from the delaunay triangulation by DelaunayTriangulator::removeInternalTriangles. ");
	I_Method0(osg::DrawElementsUInt *, getTriangles,
	          Properties::NON_VIRTUAL,
	          __osg_DrawElementsUInt_P1__getTriangles,
	          "",
	          "");
	I_Method1(osg::Vec3Array *, getPoints, IN, const osg::Vec3Array *, points,
	          Properties::NON_VIRTUAL,
	          __osg_Vec3Array_P1__getPoints__C5_osg_Vec3Array_P1,
	          "Call BEFORE makeDrawable to reorder points to make optimised set. ",
	          "");
	I_Method0(osg::DrawElementsUInt *, makeDrawable,
	          Properties::NON_VIRTUAL,
	          __osg_DrawElementsUInt_P1__makeDrawable,
	          "converts simple list of triangles into a drawarray. ",
	          "");
	I_Method1(void, merge, IN, osgUtil::DelaunayConstraint *, dco,
	          Properties::NON_VIRTUAL,
	          __void__merge__DelaunayConstraint_P1,
	          "Add vertices and constraint loops from dco Can be used to generate extra vertices where dco crosses 'this' using osgUtil::Tessellator to insert overlap vertices. ",
	          "");
	I_Method1(void, removeVerticesInside, IN, const osgUtil::DelaunayConstraint *, dco,
	          Properties::NON_VIRTUAL,
	          __void__removeVerticesInside__C5_DelaunayConstraint_P1,
	          "remove from line the vertices that are inside dco ",
	          "");
	I_Method1(float, windingNumber, IN, const osg::Vec3, testpoint,
	          Properties::NON_VIRTUAL,
	          __float__windingNumber__C5_osg_Vec3,
	          "return winding number as a float of loop around testpoint; may use multiple loops does not reject points on the edge or very very close to the edge ",
	          "");
	I_Method1(bool, contains, IN, const osg::Vec3, testpoint,
	          Properties::VIRTUAL,
	          __bool__contains__C5_osg_Vec3,
	          "true if testpoint is internal (or external) to constraint. ",
	          "");
	I_Method1(bool, outside, IN, const osg::Vec3, testpoint,
	          Properties::VIRTUAL,
	          __bool__outside__C5_osg_Vec3,
	          "",
	          "");
	I_Method0(void, handleOverlaps,
	          Properties::NON_VIRTUAL,
	          __void__handleOverlaps,
	          "Tessellate the constraint loops so that the crossing points are interpolated and added to the contraints for the triangulation. ",
	          "");
	I_SimpleProperty(osg::DrawElementsUInt *, Triangles, 
	                 __osg_DrawElementsUInt_P1__getTriangles, 
	                 0);
END_REFLECTOR

TYPE_NAME_ALIAS(std::vector< osg::ref_ptr< osgUtil::DelaunayConstraint > >, osgUtil::DelaunayTriangulator::linelist);

BEGIN_ABSTRACT_OBJECT_REFLECTOR(osgUtil::DelaunayTriangulator)
	I_BaseType(osg::Referenced);
	I_Constructor0(____DelaunayTriangulator,
	               "",
	               "");
	I_ConstructorWithDefaults2(IN, osg::Vec3Array *, points, , IN, osg::Vec3Array *, normals, 0,
	                           ____DelaunayTriangulator__osg_Vec3Array_P1__osg_Vec3Array_P1,
	                           "",
	                           "");
	I_ConstructorWithDefaults2(IN, const osgUtil::DelaunayTriangulator &, copy, , IN, const osg::CopyOp &, copyop, osg::CopyOp::SHALLOW_COPY,
	                           ____DelaunayTriangulator__C5_DelaunayTriangulator_R1__C5_osg_CopyOp_R1,
	                           "",
	                           "");
	I_Method0(const osg::Vec3Array *, getInputPointArray,
	          Properties::NON_VIRTUAL,
	          __C5_osg_Vec3Array_P1__getInputPointArray,
	          "Get the const input point array. ",
	          "");
	I_Method0(osg::Vec3Array *, getInputPointArray,
	          Properties::NON_VIRTUAL,
	          __osg_Vec3Array_P1__getInputPointArray,
	          "Get the input point array. ",
	          "");
	I_Method1(void, setInputPointArray, IN, osg::Vec3Array *, points,
	          Properties::NON_VIRTUAL,
	          __void__setInputPointArray__osg_Vec3Array_P1,
	          "Set the input point array. ",
	          "");
	I_Method1(void, addInputConstraint, IN, osgUtil::DelaunayConstraint *, dc,
	          Properties::NON_VIRTUAL,
	          __void__addInputConstraint__DelaunayConstraint_P1,
	          "Add an input constraint loop. ",
	          "the edges of the loop will constrain the triangulation. if remove!=0, the internal triangles of the constraint will be removed; the user may the replace the constraint line with an equivalent geometry. GWM July 2005 ");
	I_Method0(const osg::Vec3Array *, getOutputNormalArray,
	          Properties::NON_VIRTUAL,
	          __C5_osg_Vec3Array_P1__getOutputNormalArray,
	          "Get the const output normal array (optional). ",
	          "");
	I_Method0(osg::Vec3Array *, getOutputNormalArray,
	          Properties::NON_VIRTUAL,
	          __osg_Vec3Array_P1__getOutputNormalArray,
	          "Get the output normal array (optional). ",
	          "");
	I_Method1(void, setOutputNormalArray, IN, osg::Vec3Array *, normals,
	          Properties::NON_VIRTUAL,
	          __void__setOutputNormalArray__osg_Vec3Array_P1,
	          "Set the output normal array (optional). ",
	          "");
	I_Method0(bool, triangulate,
	          Properties::NON_VIRTUAL,
	          __bool__triangulate,
	          "Start triangulation. ",
	          "");
	I_Method0(const osg::DrawElementsUInt *, getTriangles,
	          Properties::NON_VIRTUAL,
	          __C5_osg_DrawElementsUInt_P1__getTriangles,
	          "Get the generated primitive (call triangulate() first). ",
	          "");
	I_Method0(osg::DrawElementsUInt *, getTriangles,
	          Properties::NON_VIRTUAL,
	          __osg_DrawElementsUInt_P1__getTriangles,
	          "Get the generated primitive (call triangulate() first). ",
	          "");
	I_Method1(void, removeInternalTriangles, IN, osgUtil::DelaunayConstraint *, constraint,
	          Properties::NON_VIRTUAL,
	          __void__removeInternalTriangles__DelaunayConstraint_P1,
	          "remove the triangles internal to the constraint loops. ",
	          "(Line strips cannot remove any internal triangles). ");
	I_SimpleProperty(osg::Vec3Array *, InputPointArray, 
	                 __osg_Vec3Array_P1__getInputPointArray, 
	                 __void__setInputPointArray__osg_Vec3Array_P1);
	I_SimpleProperty(osg::Vec3Array *, OutputNormalArray, 
	                 __osg_Vec3Array_P1__getOutputNormalArray, 
	                 __void__setOutputNormalArray__osg_Vec3Array_P1);
	I_SimpleProperty(osg::DrawElementsUInt *, Triangles, 
	                 __osg_DrawElementsUInt_P1__getTriangles, 
	                 0);
END_REFLECTOR

BEGIN_VALUE_REFLECTOR(osg::ref_ptr< osgUtil::DelaunayConstraint >)
	I_Constructor0(____ref_ptr,
	               "",
	               "");
	I_Constructor1(IN, osgUtil::DelaunayConstraint *, ptr,
	               Properties::NON_EXPLICIT,
	               ____ref_ptr__T_P1,
	               "",
	               "");
	I_Constructor1(IN, const osg::ref_ptr< osgUtil::DelaunayConstraint > &, rp,
	               Properties::NON_EXPLICIT,
	               ____ref_ptr__C5_ref_ptr_R1,
	               "",
	               "");
	I_Method0(osgUtil::DelaunayConstraint *, get,
	          Properties::NON_VIRTUAL,
	          __T_P1__get,
	          "",
	          "");
	I_Method0(bool, valid,
	          Properties::NON_VIRTUAL,
	          __bool__valid,
	          "",
	          "");
	I_Method0(osgUtil::DelaunayConstraint *, release,
	          Properties::NON_VIRTUAL,
	          __T_P1__release,
	          "",
	          "");
	I_Method1(void, swap, IN, osg::ref_ptr< osgUtil::DelaunayConstraint > &, rp,
	          Properties::NON_VIRTUAL,
	          __void__swap__ref_ptr_R1,
	          "",
	          "");
	I_SimpleProperty(osgUtil::DelaunayConstraint *, , 
	                 __T_P1__get, 
	                 0);
END_REFLECTOR

STD_VECTOR_REFLECTOR(std::vector< osg::ref_ptr< osgUtil::DelaunayConstraint > >);

