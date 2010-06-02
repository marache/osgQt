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
#include <osg/Drawable>
#include <osg/Node>
#include <osg/Plane>
#include <osg/Polytope>
#include <osgUtil/IntersectionVisitor>
#include <osgUtil/PlaneIntersector>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

#include <osg/observer_ptr>
        
TYPE_NAME_ALIAS(std::vector< osgUtil::PlaneIntersector::Intersection >, osgUtil::PlaneIntersector::Intersections)

BEGIN_OBJECT_REFLECTOR(osgUtil::PlaneIntersector)
	I_DeclaringFile("osgUtil/PlaneIntersector");
	I_BaseType(osgUtil::Intersector);
	I_ConstructorWithDefaults2(IN, const osg::Plane &, plane, , IN, const osg::Polytope &, boundingPolytope, osg::Polytope(),
	                           ____PlaneIntersector__C5_osg_Plane_R1__C5_osg_Polytope_R1,
	                           "Construct a PolytopeIntersector using speified polytope in MODEL coordinates. ",
	                           "");
	I_ConstructorWithDefaults3(IN, osgUtil::Intersector::CoordinateFrame, cf, , IN, const osg::Plane &, plane, , IN, const osg::Polytope &, boundingPolytope, osg::Polytope(),
	                           ____PlaneIntersector__CoordinateFrame__C5_osg_Plane_R1__C5_osg_Polytope_R1,
	                           "Construct a PolytopeIntersector using speified polytope in specified coordinate frame. ",
	                           "");
	I_Method1(void, insertIntersection, IN, const osgUtil::PlaneIntersector::Intersection &, intersection,
	          Properties::NON_VIRTUAL,
	          __void__insertIntersection__C5_Intersection_R1,
	          "",
	          "");
	I_Method0(osgUtil::PlaneIntersector::Intersections &, getIntersections,
	          Properties::NON_VIRTUAL,
	          __Intersections_R1__getIntersections,
	          "",
	          "");
	I_Method1(void, setRecordHeightsAsAttributes, IN, bool, flag,
	          Properties::NON_VIRTUAL,
	          __void__setRecordHeightsAsAttributes__bool,
	          "",
	          "");
	I_Method0(bool, getRecordHeightsAsAttributes,
	          Properties::NON_VIRTUAL,
	          __bool__getRecordHeightsAsAttributes,
	          "",
	          "");
	I_Method1(void, setEllipsoidModel, IN, osg::EllipsoidModel *, em,
	          Properties::NON_VIRTUAL,
	          __void__setEllipsoidModel__osg_EllipsoidModel_P1,
	          "",
	          "");
	I_Method0(const osg::EllipsoidModel *, getEllipsoidModel,
	          Properties::NON_VIRTUAL,
	          __C5_osg_EllipsoidModel_P1__getEllipsoidModel,
	          "",
	          "");
	I_Method1(osgUtil::Intersector *, clone, IN, osgUtil::IntersectionVisitor &, iv,
	          Properties::VIRTUAL,
	          __Intersector_P1__clone__osgUtil_IntersectionVisitor_R1,
	          "",
	          "");
	I_Method1(bool, enter, IN, const osg::Node &, node,
	          Properties::VIRTUAL,
	          __bool__enter__C5_osg_Node_R1,
	          "",
	          "");
	I_Method0(void, leave,
	          Properties::VIRTUAL,
	          __void__leave,
	          "",
	          "");
	I_Method2(void, intersect, IN, osgUtil::IntersectionVisitor &, iv, IN, osg::Drawable *, drawable,
	          Properties::VIRTUAL,
	          __void__intersect__osgUtil_IntersectionVisitor_R1__osg_Drawable_P1,
	          "",
	          "");
	I_Method0(void, reset,
	          Properties::VIRTUAL,
	          __void__reset,
	          "",
	          "");
	I_Method0(bool, containsIntersections,
	          Properties::VIRTUAL,
	          __bool__containsIntersections,
	          "",
	          "");
	I_SimpleProperty(osg::EllipsoidModel *, EllipsoidModel, 
	                 0, 
	                 __void__setEllipsoidModel__osg_EllipsoidModel_P1);
	I_SimpleProperty(osgUtil::PlaneIntersector::Intersections &, Intersections, 
	                 __Intersections_R1__getIntersections, 
	                 0);
	I_SimpleProperty(bool, RecordHeightsAsAttributes, 
	                 __bool__getRecordHeightsAsAttributes, 
	                 __void__setRecordHeightsAsAttributes__bool);
END_REFLECTOR

TYPE_NAME_ALIAS(std::vector< osg::Vec3d >, osgUtil::PlaneIntersector::Intersection::Polyline)

TYPE_NAME_ALIAS(std::vector< double >, osgUtil::PlaneIntersector::Intersection::Attributes)

BEGIN_VALUE_REFLECTOR(osgUtil::PlaneIntersector::Intersection)
	I_DeclaringFile("osgUtil/PlaneIntersector");
	I_Constructor0(____Intersection,
	               "",
	               "");
	I_PublicMemberProperty(osg::NodePath, nodePath);
	I_PublicMemberProperty(osg::ref_ptr< osg::RefMatrix >, matrix);
	I_PublicMemberProperty(osg::ref_ptr< osg::Drawable >, drawable);
	I_PublicMemberProperty(osgUtil::PlaneIntersector::Intersection::Polyline, polyline);
	I_PublicMemberProperty(osgUtil::PlaneIntersector::Intersection::Attributes, attributes);
END_REFLECTOR

STD_VECTOR_REFLECTOR(std::vector< osgUtil::PlaneIntersector::Intersection >)

