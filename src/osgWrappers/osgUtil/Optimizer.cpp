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

#include <osg/.svn/text-base/Billboard.svn-base>
#include <osg/.svn/text-base/Drawable.svn-base>
#include <osg/.svn/text-base/Node.svn-base>
#include <osg/.svn/text-base/Object.svn-base>
#include <osg/.svn/text-base/PagedLOD.svn-base>
#include <osg/.svn/text-base/StateAttribute.svn-base>
#include <osg/Geode>
#include <osg/ProxyNode>
#include <osg/StateSet>
#include <osg/Transform>
#include <osgUtil/.svn/text-base/Optimizer.svn-base>
#include <osgUtil/Optimizer>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

BEGIN_OBJECT_REFLECTOR(osgUtil::BaseOptimizerVisitor)
	I_BaseType(osg::NodeVisitor);
	I_BaseType(osg::NodeVisitor);
	I_Constructor2(IN, osgUtil::Optimizer *, optimizer, IN, unsigned int, operation,
	               ____BaseOptimizerVisitor__Optimizer_P1__unsigned_int,
	               "",
	               "");
	I_Method1(bool, isOperationPermissibleForObject, IN, const osg::StateSet *, object,
	          Properties::NON_VIRTUAL,
	          __bool__isOperationPermissibleForObject__C5_osg_StateSet_P1,
	          "",
	          "");
	I_Method1(bool, isOperationPermissibleForObject, IN, const osg::StateAttribute *, object,
	          Properties::NON_VIRTUAL,
	          __bool__isOperationPermissibleForObject__C5_osg_StateAttribute_P1,
	          "",
	          "");
	I_Method1(bool, isOperationPermissibleForObject, IN, const osg::Drawable *, object,
	          Properties::NON_VIRTUAL,
	          __bool__isOperationPermissibleForObject__C5_osg_Drawable_P1,
	          "",
	          "");
	I_Method1(bool, isOperationPermissibleForObject, IN, const osg::Node *, object,
	          Properties::NON_VIRTUAL,
	          __bool__isOperationPermissibleForObject__C5_osg_Node_P1,
	          "",
	          "");
	I_Constructor2(IN, osgUtil::Optimizer *, optimizer, IN, unsigned int, operation,
	               ____BaseOptimizerVisitor__Optimizer_P1__unsigned_int,
	               "",
	               "");
	I_Method1(bool, isOperationPermissibleForObject, IN, const osg::StateSet *, object,
	          Properties::NON_VIRTUAL,
	          __bool__isOperationPermissibleForObject__C5_osg_StateSet_P1,
	          "",
	          "");
	I_Method1(bool, isOperationPermissibleForObject, IN, const osg::StateAttribute *, object,
	          Properties::NON_VIRTUAL,
	          __bool__isOperationPermissibleForObject__C5_osg_StateAttribute_P1,
	          "",
	          "");
	I_Method1(bool, isOperationPermissibleForObject, IN, const osg::Drawable *, object,
	          Properties::NON_VIRTUAL,
	          __bool__isOperationPermissibleForObject__C5_osg_Drawable_P1,
	          "",
	          "");
	I_Method1(bool, isOperationPermissibleForObject, IN, const osg::Node *, object,
	          Properties::NON_VIRTUAL,
	          __bool__isOperationPermissibleForObject__C5_osg_Node_P1,
	          "",
	          "");
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osgUtil::BaseOptimizerVisitor)
	I_BaseType(osg::NodeVisitor);
	I_BaseType(osg::NodeVisitor);
	I_Constructor2(IN, osgUtil::Optimizer *, optimizer, IN, unsigned int, operation,
	               ____BaseOptimizerVisitor__Optimizer_P1__unsigned_int,
	               "",
	               "");
	I_Method1(bool, isOperationPermissibleForObject, IN, const osg::StateSet *, object,
	          Properties::NON_VIRTUAL,
	          __bool__isOperationPermissibleForObject__C5_osg_StateSet_P1,
	          "",
	          "");
	I_Method1(bool, isOperationPermissibleForObject, IN, const osg::StateAttribute *, object,
	          Properties::NON_VIRTUAL,
	          __bool__isOperationPermissibleForObject__C5_osg_StateAttribute_P1,
	          "",
	          "");
	I_Method1(bool, isOperationPermissibleForObject, IN, const osg::Drawable *, object,
	          Properties::NON_VIRTUAL,
	          __bool__isOperationPermissibleForObject__C5_osg_Drawable_P1,
	          "",
	          "");
	I_Method1(bool, isOperationPermissibleForObject, IN, const osg::Node *, object,
	          Properties::NON_VIRTUAL,
	          __bool__isOperationPermissibleForObject__C5_osg_Node_P1,
	          "",
	          "");
	I_Constructor2(IN, osgUtil::Optimizer *, optimizer, IN, unsigned int, operation,
	               ____BaseOptimizerVisitor__Optimizer_P1__unsigned_int,
	               "",
	               "");
	I_Method1(bool, isOperationPermissibleForObject, IN, const osg::StateSet *, object,
	          Properties::NON_VIRTUAL,
	          __bool__isOperationPermissibleForObject__C5_osg_StateSet_P1,
	          "",
	          "");
	I_Method1(bool, isOperationPermissibleForObject, IN, const osg::StateAttribute *, object,
	          Properties::NON_VIRTUAL,
	          __bool__isOperationPermissibleForObject__C5_osg_StateAttribute_P1,
	          "",
	          "");
	I_Method1(bool, isOperationPermissibleForObject, IN, const osg::Drawable *, object,
	          Properties::NON_VIRTUAL,
	          __bool__isOperationPermissibleForObject__C5_osg_Drawable_P1,
	          "",
	          "");
	I_Method1(bool, isOperationPermissibleForObject, IN, const osg::Node *, object,
	          Properties::NON_VIRTUAL,
	          __bool__isOperationPermissibleForObject__C5_osg_Node_P1,
	          "",
	          "");
END_REFLECTOR

BEGIN_ENUM_REFLECTOR(osgUtil::Optimizer::OptimizationOptions)
	I_EnumLabel(osgUtil::Optimizer::FLATTEN_STATIC_TRANSFORMS);
	I_EnumLabel(osgUtil::Optimizer::REMOVE_REDUNDANT_NODES);
	I_EnumLabel(osgUtil::Optimizer::REMOVE_LOADED_PROXY_NODES);
	I_EnumLabel(osgUtil::Optimizer::COMBINE_ADJACENT_LODS);
	I_EnumLabel(osgUtil::Optimizer::SHARE_DUPLICATE_STATE);
	I_EnumLabel(osgUtil::Optimizer::MERGE_GEOMETRY);
	I_EnumLabel(osgUtil::Optimizer::CHECK_GEOMETRY);
	I_EnumLabel(osgUtil::Optimizer::SPATIALIZE_GROUPS);
	I_EnumLabel(osgUtil::Optimizer::COPY_SHARED_NODES);
	I_EnumLabel(osgUtil::Optimizer::TRISTRIP_GEOMETRY);
	I_EnumLabel(osgUtil::Optimizer::TESSELLATE_GEOMETRY);
	I_EnumLabel(osgUtil::Optimizer::OPTIMIZE_TEXTURE_SETTINGS);
	I_EnumLabel(osgUtil::Optimizer::MERGE_GEODES);
	I_EnumLabel(osgUtil::Optimizer::FLATTEN_BILLBOARDS);
	I_EnumLabel(osgUtil::Optimizer::TEXTURE_ATLAS_BUILDER);
	I_EnumLabel(osgUtil::Optimizer::STATIC_OBJECT_DETECTION);
	I_EnumLabel(osgUtil::Optimizer::DEFAULT_OPTIMIZATIONS);
	I_EnumLabel(osgUtil::Optimizer::ALL_OPTIMIZATIONS);
END_REFLECTOR

BEGIN_VALUE_REFLECTOR(osgUtil::Optimizer)
	I_Constructor0(____Optimizer,
	               "",
	               "");
	I_Method0(void, reset,
	          Properties::NON_VIRTUAL,
	          __void__reset,
	          "Reset internal data to initial state - the getPermissibleOptionsMap is cleared. ",
	          "");
	I_Method1(void, optimize, IN, osg::Node *, node,
	          Properties::NON_VIRTUAL,
	          __void__optimize__osg_Node_P1,
	          "Traverse the node and its subgraph with a series of optimization visitors, specified by the OptimizationOptions. ",
	          "");
	I_Method2(void, optimize, IN, osg::Node *, node, IN, unsigned int, options,
	          Properties::VIRTUAL,
	          __void__optimize__osg_Node_P1__unsigned_int,
	          "Traverse the node and its subgraph with a series of optimization visitors, specified by the OptimizationOptions. ",
	          "");
	I_Method1(void, setIsOperationPermissibleForObjectCallback, IN, osgUtil::Optimizer::IsOperationPermissibleForObjectCallback *, callback,
	          Properties::NON_VIRTUAL,
	          __void__setIsOperationPermissibleForObjectCallback__IsOperationPermissibleForObjectCallback_P1,
	          "Set the callback for customizing what operations are permitted on objects in the scene graph. ",
	          "");
	I_Method0(osgUtil::Optimizer::IsOperationPermissibleForObjectCallback *, getIsOperationPermissibleForObjectCallback,
	          Properties::NON_VIRTUAL,
	          __IsOperationPermissibleForObjectCallback_P1__getIsOperationPermissibleForObjectCallback,
	          "Get the callback for customizing what operations are permitted on objects in the scene graph. ",
	          "");
	I_Method0(const osgUtil::Optimizer::IsOperationPermissibleForObjectCallback *, getIsOperationPermissibleForObjectCallback,
	          Properties::NON_VIRTUAL,
	          __C5_IsOperationPermissibleForObjectCallback_P1__getIsOperationPermissibleForObjectCallback,
	          "Get the callback for customizing what operations are permitted on objects in the scene graph. ",
	          "");
	I_Method2(void, setPermissibleOptimizationsForObject, IN, const osg::Object *, object, IN, unsigned int, options,
	          Properties::NON_VIRTUAL,
	          __void__setPermissibleOptimizationsForObject__C5_osg_Object_P1__unsigned_int,
	          "",
	          "");
	I_Method1(unsigned int, getPermissibleOptimizationsForObject, IN, const osg::Object *, object,
	          Properties::NON_VIRTUAL,
	          __unsigned_int__getPermissibleOptimizationsForObject__C5_osg_Object_P1,
	          "",
	          "");
	I_Method2(bool, isOperationPermissibleForObject, IN, const osg::StateSet *, object, IN, unsigned int, option,
	          Properties::NON_VIRTUAL,
	          __bool__isOperationPermissibleForObject__C5_osg_StateSet_P1__unsigned_int,
	          "",
	          "");
	I_Method2(bool, isOperationPermissibleForObject, IN, const osg::StateAttribute *, object, IN, unsigned int, option,
	          Properties::NON_VIRTUAL,
	          __bool__isOperationPermissibleForObject__C5_osg_StateAttribute_P1__unsigned_int,
	          "",
	          "");
	I_Method2(bool, isOperationPermissibleForObject, IN, const osg::Drawable *, object, IN, unsigned int, option,
	          Properties::NON_VIRTUAL,
	          __bool__isOperationPermissibleForObject__C5_osg_Drawable_P1__unsigned_int,
	          "",
	          "");
	I_Method2(bool, isOperationPermissibleForObject, IN, const osg::Node *, object, IN, unsigned int, option,
	          Properties::NON_VIRTUAL,
	          __bool__isOperationPermissibleForObject__C5_osg_Node_P1__unsigned_int,
	          "",
	          "");
	I_Method2(bool, isOperationPermissibleForObjectImplementation, IN, const osg::StateSet *, stateset, IN, unsigned int, option,
	          Properties::NON_VIRTUAL,
	          __bool__isOperationPermissibleForObjectImplementation__C5_osg_StateSet_P1__unsigned_int,
	          "",
	          "");
	I_Method2(bool, isOperationPermissibleForObjectImplementation, IN, const osg::StateAttribute *, attribute, IN, unsigned int, option,
	          Properties::NON_VIRTUAL,
	          __bool__isOperationPermissibleForObjectImplementation__C5_osg_StateAttribute_P1__unsigned_int,
	          "",
	          "");
	I_Method2(bool, isOperationPermissibleForObjectImplementation, IN, const osg::Drawable *, drawable, IN, unsigned int, option,
	          Properties::NON_VIRTUAL,
	          __bool__isOperationPermissibleForObjectImplementation__C5_osg_Drawable_P1__unsigned_int,
	          "",
	          "");
	I_Method2(bool, isOperationPermissibleForObjectImplementation, IN, const osg::Node *, node, IN, unsigned int, option,
	          Properties::NON_VIRTUAL,
	          __bool__isOperationPermissibleForObjectImplementation__C5_osg_Node_P1__unsigned_int,
	          "",
	          "");
	I_Constructor0(____Optimizer,
	               "",
	               "");
	I_Method0(void, reset,
	          Properties::NON_VIRTUAL,
	          __void__reset,
	          "Reset internal data to initial state - the getPermissibleOptionsMap is cleared. ",
	          "");
	I_Method1(void, optimize, IN, osg::Node *, node,
	          Properties::NON_VIRTUAL,
	          __void__optimize__osg_Node_P1,
	          "Traverse the node and its subgraph with a series of optimization visitors, specified by the OptimizationOptions. ",
	          "");
	I_Method2(void, optimize, IN, osg::Node *, node, IN, unsigned int, options,
	          Properties::VIRTUAL,
	          __void__optimize__osg_Node_P1__unsigned_int,
	          "Traverse the node and its subgraph with a series of optimization visitors, specified by the OptimizationOptions. ",
	          "");
	I_Method1(void, setIsOperationPermissibleForObjectCallback, IN, osgUtil::Optimizer::IsOperationPermissibleForObjectCallback *, callback,
	          Properties::NON_VIRTUAL,
	          __void__setIsOperationPermissibleForObjectCallback__IsOperationPermissibleForObjectCallback_P1,
	          "Set the callback for customizing what operations are permitted on objects in the scene graph. ",
	          "");
	I_Method0(osgUtil::Optimizer::IsOperationPermissibleForObjectCallback *, getIsOperationPermissibleForObjectCallback,
	          Properties::NON_VIRTUAL,
	          __IsOperationPermissibleForObjectCallback_P1__getIsOperationPermissibleForObjectCallback,
	          "Get the callback for customizing what operations are permitted on objects in the scene graph. ",
	          "");
	I_Method0(const osgUtil::Optimizer::IsOperationPermissibleForObjectCallback *, getIsOperationPermissibleForObjectCallback,
	          Properties::NON_VIRTUAL,
	          __C5_IsOperationPermissibleForObjectCallback_P1__getIsOperationPermissibleForObjectCallback,
	          "Get the callback for customizing what operations are permitted on objects in the scene graph. ",
	          "");
	I_Method2(void, setPermissibleOptimizationsForObject, IN, const osg::Object *, object, IN, unsigned int, options,
	          Properties::NON_VIRTUAL,
	          __void__setPermissibleOptimizationsForObject__C5_osg_Object_P1__unsigned_int,
	          "",
	          "");
	I_Method1(unsigned int, getPermissibleOptimizationsForObject, IN, const osg::Object *, object,
	          Properties::NON_VIRTUAL,
	          __unsigned_int__getPermissibleOptimizationsForObject__C5_osg_Object_P1,
	          "",
	          "");
	I_Method2(bool, isOperationPermissibleForObject, IN, const osg::StateSet *, object, IN, unsigned int, option,
	          Properties::NON_VIRTUAL,
	          __bool__isOperationPermissibleForObject__C5_osg_StateSet_P1__unsigned_int,
	          "",
	          "");
	I_Method2(bool, isOperationPermissibleForObject, IN, const osg::StateAttribute *, object, IN, unsigned int, option,
	          Properties::NON_VIRTUAL,
	          __bool__isOperationPermissibleForObject__C5_osg_StateAttribute_P1__unsigned_int,
	          "",
	          "");
	I_Method2(bool, isOperationPermissibleForObject, IN, const osg::Drawable *, object, IN, unsigned int, option,
	          Properties::NON_VIRTUAL,
	          __bool__isOperationPermissibleForObject__C5_osg_Drawable_P1__unsigned_int,
	          "",
	          "");
	I_Method2(bool, isOperationPermissibleForObject, IN, const osg::Node *, object, IN, unsigned int, option,
	          Properties::NON_VIRTUAL,
	          __bool__isOperationPermissibleForObject__C5_osg_Node_P1__unsigned_int,
	          "",
	          "");
	I_Method2(bool, isOperationPermissibleForObjectImplementation, IN, const osg::StateSet *, stateset, IN, unsigned int, option,
	          Properties::NON_VIRTUAL,
	          __bool__isOperationPermissibleForObjectImplementation__C5_osg_StateSet_P1__unsigned_int,
	          "",
	          "");
	I_Method2(bool, isOperationPermissibleForObjectImplementation, IN, const osg::StateAttribute *, attribute, IN, unsigned int, option,
	          Properties::NON_VIRTUAL,
	          __bool__isOperationPermissibleForObjectImplementation__C5_osg_StateAttribute_P1__unsigned_int,
	          "",
	          "");
	I_Method2(bool, isOperationPermissibleForObjectImplementation, IN, const osg::Drawable *, drawable, IN, unsigned int, option,
	          Properties::NON_VIRTUAL,
	          __bool__isOperationPermissibleForObjectImplementation__C5_osg_Drawable_P1__unsigned_int,
	          "",
	          "");
	I_Method2(bool, isOperationPermissibleForObjectImplementation, IN, const osg::Node *, node, IN, unsigned int, option,
	          Properties::NON_VIRTUAL,
	          __bool__isOperationPermissibleForObjectImplementation__C5_osg_Node_P1__unsigned_int,
	          "",
	          "");
	I_SimpleProperty(osgUtil::Optimizer::IsOperationPermissibleForObjectCallback *, IsOperationPermissibleForObjectCallback, 
	                 __IsOperationPermissibleForObjectCallback_P1__getIsOperationPermissibleForObjectCallback, 
	                 __void__setIsOperationPermissibleForObjectCallback__IsOperationPermissibleForObjectCallback_P1);
	I_IndexedProperty(unsigned int, PermissibleOptimizationsForObject, 
	                  __unsigned_int__getPermissibleOptimizationsForObject__C5_osg_Object_P1, 
	                  __void__setPermissibleOptimizationsForObject__C5_osg_Object_P1__unsigned_int, 
	                  0);
END_REFLECTOR

BEGIN_ENUM_REFLECTOR(osgUtil::Optimizer::OptimizationOptions)
	I_EnumLabel(osgUtil::Optimizer::FLATTEN_STATIC_TRANSFORMS);
	I_EnumLabel(osgUtil::Optimizer::REMOVE_REDUNDANT_NODES);
	I_EnumLabel(osgUtil::Optimizer::REMOVE_LOADED_PROXY_NODES);
	I_EnumLabel(osgUtil::Optimizer::COMBINE_ADJACENT_LODS);
	I_EnumLabel(osgUtil::Optimizer::SHARE_DUPLICATE_STATE);
	I_EnumLabel(osgUtil::Optimizer::MERGE_GEOMETRY);
	I_EnumLabel(osgUtil::Optimizer::CHECK_GEOMETRY);
	I_EnumLabel(osgUtil::Optimizer::SPATIALIZE_GROUPS);
	I_EnumLabel(osgUtil::Optimizer::COPY_SHARED_NODES);
	I_EnumLabel(osgUtil::Optimizer::TRISTRIP_GEOMETRY);
	I_EnumLabel(osgUtil::Optimizer::TESSELLATE_GEOMETRY);
	I_EnumLabel(osgUtil::Optimizer::OPTIMIZE_TEXTURE_SETTINGS);
	I_EnumLabel(osgUtil::Optimizer::MERGE_GEODES);
	I_EnumLabel(osgUtil::Optimizer::FLATTEN_BILLBOARDS);
	I_EnumLabel(osgUtil::Optimizer::TEXTURE_ATLAS_BUILDER);
	I_EnumLabel(osgUtil::Optimizer::STATIC_OBJECT_DETECTION);
	I_EnumLabel(osgUtil::Optimizer::DEFAULT_OPTIMIZATIONS);
	I_EnumLabel(osgUtil::Optimizer::ALL_OPTIMIZATIONS);
END_REFLECTOR

BEGIN_VALUE_REFLECTOR(osgUtil::Optimizer)
	I_Constructor0(____Optimizer,
	               "",
	               "");
	I_Method0(void, reset,
	          Properties::NON_VIRTUAL,
	          __void__reset,
	          "Reset internal data to initial state - the getPermissibleOptionsMap is cleared. ",
	          "");
	I_Method1(void, optimize, IN, osg::Node *, node,
	          Properties::NON_VIRTUAL,
	          __void__optimize__osg_Node_P1,
	          "Traverse the node and its subgraph with a series of optimization visitors, specified by the OptimizationOptions. ",
	          "");
	I_Method2(void, optimize, IN, osg::Node *, node, IN, unsigned int, options,
	          Properties::VIRTUAL,
	          __void__optimize__osg_Node_P1__unsigned_int,
	          "Traverse the node and its subgraph with a series of optimization visitors, specified by the OptimizationOptions. ",
	          "");
	I_Method1(void, setIsOperationPermissibleForObjectCallback, IN, osgUtil::Optimizer::IsOperationPermissibleForObjectCallback *, callback,
	          Properties::NON_VIRTUAL,
	          __void__setIsOperationPermissibleForObjectCallback__IsOperationPermissibleForObjectCallback_P1,
	          "Set the callback for customizing what operations are permitted on objects in the scene graph. ",
	          "");
	I_Method0(osgUtil::Optimizer::IsOperationPermissibleForObjectCallback *, getIsOperationPermissibleForObjectCallback,
	          Properties::NON_VIRTUAL,
	          __IsOperationPermissibleForObjectCallback_P1__getIsOperationPermissibleForObjectCallback,
	          "Get the callback for customizing what operations are permitted on objects in the scene graph. ",
	          "");
	I_Method0(const osgUtil::Optimizer::IsOperationPermissibleForObjectCallback *, getIsOperationPermissibleForObjectCallback,
	          Properties::NON_VIRTUAL,
	          __C5_IsOperationPermissibleForObjectCallback_P1__getIsOperationPermissibleForObjectCallback,
	          "Get the callback for customizing what operations are permitted on objects in the scene graph. ",
	          "");
	I_Method2(void, setPermissibleOptimizationsForObject, IN, const osg::Object *, object, IN, unsigned int, options,
	          Properties::NON_VIRTUAL,
	          __void__setPermissibleOptimizationsForObject__C5_osg_Object_P1__unsigned_int,
	          "",
	          "");
	I_Method1(unsigned int, getPermissibleOptimizationsForObject, IN, const osg::Object *, object,
	          Properties::NON_VIRTUAL,
	          __unsigned_int__getPermissibleOptimizationsForObject__C5_osg_Object_P1,
	          "",
	          "");
	I_Method2(bool, isOperationPermissibleForObject, IN, const osg::StateSet *, object, IN, unsigned int, option,
	          Properties::NON_VIRTUAL,
	          __bool__isOperationPermissibleForObject__C5_osg_StateSet_P1__unsigned_int,
	          "",
	          "");
	I_Method2(bool, isOperationPermissibleForObject, IN, const osg::StateAttribute *, object, IN, unsigned int, option,
	          Properties::NON_VIRTUAL,
	          __bool__isOperationPermissibleForObject__C5_osg_StateAttribute_P1__unsigned_int,
	          "",
	          "");
	I_Method2(bool, isOperationPermissibleForObject, IN, const osg::Drawable *, object, IN, unsigned int, option,
	          Properties::NON_VIRTUAL,
	          __bool__isOperationPermissibleForObject__C5_osg_Drawable_P1__unsigned_int,
	          "",
	          "");
	I_Method2(bool, isOperationPermissibleForObject, IN, const osg::Node *, object, IN, unsigned int, option,
	          Properties::NON_VIRTUAL,
	          __bool__isOperationPermissibleForObject__C5_osg_Node_P1__unsigned_int,
	          "",
	          "");
	I_Method2(bool, isOperationPermissibleForObjectImplementation, IN, const osg::StateSet *, stateset, IN, unsigned int, option,
	          Properties::NON_VIRTUAL,
	          __bool__isOperationPermissibleForObjectImplementation__C5_osg_StateSet_P1__unsigned_int,
	          "",
	          "");
	I_Method2(bool, isOperationPermissibleForObjectImplementation, IN, const osg::StateAttribute *, attribute, IN, unsigned int, option,
	          Properties::NON_VIRTUAL,
	          __bool__isOperationPermissibleForObjectImplementation__C5_osg_StateAttribute_P1__unsigned_int,
	          "",
	          "");
	I_Method2(bool, isOperationPermissibleForObjectImplementation, IN, const osg::Drawable *, drawable, IN, unsigned int, option,
	          Properties::NON_VIRTUAL,
	          __bool__isOperationPermissibleForObjectImplementation__C5_osg_Drawable_P1__unsigned_int,
	          "",
	          "");
	I_Method2(bool, isOperationPermissibleForObjectImplementation, IN, const osg::Node *, node, IN, unsigned int, option,
	          Properties::NON_VIRTUAL,
	          __bool__isOperationPermissibleForObjectImplementation__C5_osg_Node_P1__unsigned_int,
	          "",
	          "");
	I_Constructor0(____Optimizer,
	               "",
	               "");
	I_Method0(void, reset,
	          Properties::NON_VIRTUAL,
	          __void__reset,
	          "Reset internal data to initial state - the getPermissibleOptionsMap is cleared. ",
	          "");
	I_Method1(void, optimize, IN, osg::Node *, node,
	          Properties::NON_VIRTUAL,
	          __void__optimize__osg_Node_P1,
	          "Traverse the node and its subgraph with a series of optimization visitors, specified by the OptimizationOptions. ",
	          "");
	I_Method2(void, optimize, IN, osg::Node *, node, IN, unsigned int, options,
	          Properties::VIRTUAL,
	          __void__optimize__osg_Node_P1__unsigned_int,
	          "Traverse the node and its subgraph with a series of optimization visitors, specified by the OptimizationOptions. ",
	          "");
	I_Method1(void, setIsOperationPermissibleForObjectCallback, IN, osgUtil::Optimizer::IsOperationPermissibleForObjectCallback *, callback,
	          Properties::NON_VIRTUAL,
	          __void__setIsOperationPermissibleForObjectCallback__IsOperationPermissibleForObjectCallback_P1,
	          "Set the callback for customizing what operations are permitted on objects in the scene graph. ",
	          "");
	I_Method0(osgUtil::Optimizer::IsOperationPermissibleForObjectCallback *, getIsOperationPermissibleForObjectCallback,
	          Properties::NON_VIRTUAL,
	          __IsOperationPermissibleForObjectCallback_P1__getIsOperationPermissibleForObjectCallback,
	          "Get the callback for customizing what operations are permitted on objects in the scene graph. ",
	          "");
	I_Method0(const osgUtil::Optimizer::IsOperationPermissibleForObjectCallback *, getIsOperationPermissibleForObjectCallback,
	          Properties::NON_VIRTUAL,
	          __C5_IsOperationPermissibleForObjectCallback_P1__getIsOperationPermissibleForObjectCallback,
	          "Get the callback for customizing what operations are permitted on objects in the scene graph. ",
	          "");
	I_Method2(void, setPermissibleOptimizationsForObject, IN, const osg::Object *, object, IN, unsigned int, options,
	          Properties::NON_VIRTUAL,
	          __void__setPermissibleOptimizationsForObject__C5_osg_Object_P1__unsigned_int,
	          "",
	          "");
	I_Method1(unsigned int, getPermissibleOptimizationsForObject, IN, const osg::Object *, object,
	          Properties::NON_VIRTUAL,
	          __unsigned_int__getPermissibleOptimizationsForObject__C5_osg_Object_P1,
	          "",
	          "");
	I_Method2(bool, isOperationPermissibleForObject, IN, const osg::StateSet *, object, IN, unsigned int, option,
	          Properties::NON_VIRTUAL,
	          __bool__isOperationPermissibleForObject__C5_osg_StateSet_P1__unsigned_int,
	          "",
	          "");
	I_Method2(bool, isOperationPermissibleForObject, IN, const osg::StateAttribute *, object, IN, unsigned int, option,
	          Properties::NON_VIRTUAL,
	          __bool__isOperationPermissibleForObject__C5_osg_StateAttribute_P1__unsigned_int,
	          "",
	          "");
	I_Method2(bool, isOperationPermissibleForObject, IN, const osg::Drawable *, object, IN, unsigned int, option,
	          Properties::NON_VIRTUAL,
	          __bool__isOperationPermissibleForObject__C5_osg_Drawable_P1__unsigned_int,
	          "",
	          "");
	I_Method2(bool, isOperationPermissibleForObject, IN, const osg::Node *, object, IN, unsigned int, option,
	          Properties::NON_VIRTUAL,
	          __bool__isOperationPermissibleForObject__C5_osg_Node_P1__unsigned_int,
	          "",
	          "");
	I_Method2(bool, isOperationPermissibleForObjectImplementation, IN, const osg::StateSet *, stateset, IN, unsigned int, option,
	          Properties::NON_VIRTUAL,
	          __bool__isOperationPermissibleForObjectImplementation__C5_osg_StateSet_P1__unsigned_int,
	          "",
	          "");
	I_Method2(bool, isOperationPermissibleForObjectImplementation, IN, const osg::StateAttribute *, attribute, IN, unsigned int, option,
	          Properties::NON_VIRTUAL,
	          __bool__isOperationPermissibleForObjectImplementation__C5_osg_StateAttribute_P1__unsigned_int,
	          "",
	          "");
	I_Method2(bool, isOperationPermissibleForObjectImplementation, IN, const osg::Drawable *, drawable, IN, unsigned int, option,
	          Properties::NON_VIRTUAL,
	          __bool__isOperationPermissibleForObjectImplementation__C5_osg_Drawable_P1__unsigned_int,
	          "",
	          "");
	I_Method2(bool, isOperationPermissibleForObjectImplementation, IN, const osg::Node *, node, IN, unsigned int, option,
	          Properties::NON_VIRTUAL,
	          __bool__isOperationPermissibleForObjectImplementation__C5_osg_Node_P1__unsigned_int,
	          "",
	          "");
	I_SimpleProperty(osgUtil::Optimizer::IsOperationPermissibleForObjectCallback *, IsOperationPermissibleForObjectCallback, 
	                 __IsOperationPermissibleForObjectCallback_P1__getIsOperationPermissibleForObjectCallback, 
	                 __void__setIsOperationPermissibleForObjectCallback__IsOperationPermissibleForObjectCallback_P1);
	I_IndexedProperty(unsigned int, PermissibleOptimizationsForObject, 
	                  __unsigned_int__getPermissibleOptimizationsForObject__C5_osg_Object_P1, 
	                  __void__setPermissibleOptimizationsForObject__C5_osg_Object_P1__unsigned_int, 
	                  0);
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osgUtil::Optimizer::FlattenStaticTransformsVisitor)
	I_BaseType(osgUtil::BaseOptimizerVisitor);
	I_BaseType(osgUtil::BaseOptimizerVisitor);
	I_ConstructorWithDefaults1(IN, osgUtil::Optimizer *, optimizer, 0,
	                           Properties::NON_EXPLICIT,
	                           ____FlattenStaticTransformsVisitor__Optimizer_P1,
	                           "",
	                           "");
	I_Method1(void, apply, IN, osg::Node &, geode,
	          Properties::VIRTUAL,
	          __void__apply__osg_Node_R1,
	          "",
	          "");
	I_Method1(void, apply, IN, osg::Geode &, geode,
	          Properties::VIRTUAL,
	          __void__apply__osg_Geode_R1,
	          "",
	          "");
	I_Method1(void, apply, IN, osg::Billboard &, geode,
	          Properties::VIRTUAL,
	          __void__apply__osg_Billboard_R1,
	          "",
	          "");
	I_Method1(void, apply, IN, osg::ProxyNode &, node,
	          Properties::VIRTUAL,
	          __void__apply__osg_ProxyNode_R1,
	          "",
	          "");
	I_Method1(void, apply, IN, osg::PagedLOD &, node,
	          Properties::VIRTUAL,
	          __void__apply__osg_PagedLOD_R1,
	          "",
	          "");
	I_Method1(void, apply, IN, osg::Transform &, transform,
	          Properties::VIRTUAL,
	          __void__apply__osg_Transform_R1,
	          "",
	          "");
	I_Method1(bool, removeTransforms, IN, osg::Node *, nodeWeCannotRemove,
	          Properties::NON_VIRTUAL,
	          __bool__removeTransforms__osg_Node_P1,
	          "",
	          "");
	I_ConstructorWithDefaults1(IN, osgUtil::Optimizer *, optimizer, 0,
	                           Properties::NON_EXPLICIT,
	                           ____FlattenStaticTransformsVisitor__Optimizer_P1,
	                           "",
	                           "");
	I_Method1(void, apply, IN, osg::Node &, geode,
	          Properties::VIRTUAL,
	          __void__apply__osg_Node_R1,
	          "",
	          "");
	I_Method1(void, apply, IN, osg::Geode &, geode,
	          Properties::VIRTUAL,
	          __void__apply__osg_Geode_R1,
	          "",
	          "");
	I_Method1(void, apply, IN, osg::Billboard &, geode,
	          Properties::VIRTUAL,
	          __void__apply__osg_Billboard_R1,
	          "",
	          "");
	I_Method1(void, apply, IN, osg::ProxyNode &, node,
	          Properties::VIRTUAL,
	          __void__apply__osg_ProxyNode_R1,
	          "",
	          "");
	I_Method1(void, apply, IN, osg::PagedLOD &, node,
	          Properties::VIRTUAL,
	          __void__apply__osg_PagedLOD_R1,
	          "",
	          "");
	I_Method1(void, apply, IN, osg::Transform &, transform,
	          Properties::VIRTUAL,
	          __void__apply__osg_Transform_R1,
	          "",
	          "");
	I_Method1(bool, removeTransforms, IN, osg::Node *, nodeWeCannotRemove,
	          Properties::NON_VIRTUAL,
	          __bool__removeTransforms__osg_Node_P1,
	          "",
	          "");
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osgUtil::Optimizer::FlattenStaticTransformsVisitor)
	I_BaseType(osgUtil::BaseOptimizerVisitor);
	I_BaseType(osgUtil::BaseOptimizerVisitor);
	I_ConstructorWithDefaults1(IN, osgUtil::Optimizer *, optimizer, 0,
	                           Properties::NON_EXPLICIT,
	                           ____FlattenStaticTransformsVisitor__Optimizer_P1,
	                           "",
	                           "");
	I_Method1(void, apply, IN, osg::Node &, geode,
	          Properties::VIRTUAL,
	          __void__apply__osg_Node_R1,
	          "",
	          "");
	I_Method1(void, apply, IN, osg::Geode &, geode,
	          Properties::VIRTUAL,
	          __void__apply__osg_Geode_R1,
	          "",
	          "");
	I_Method1(void, apply, IN, osg::Billboard &, geode,
	          Properties::VIRTUAL,
	          __void__apply__osg_Billboard_R1,
	          "",
	          "");
	I_Method1(void, apply, IN, osg::ProxyNode &, node,
	          Properties::VIRTUAL,
	          __void__apply__osg_ProxyNode_R1,
	          "",
	          "");
	I_Method1(void, apply, IN, osg::PagedLOD &, node,
	          Properties::VIRTUAL,
	          __void__apply__osg_PagedLOD_R1,
	          "",
	          "");
	I_Method1(void, apply, IN, osg::Transform &, transform,
	          Properties::VIRTUAL,
	          __void__apply__osg_Transform_R1,
	          "",
	          "");
	I_Method1(bool, removeTransforms, IN, osg::Node *, nodeWeCannotRemove,
	          Properties::NON_VIRTUAL,
	          __bool__removeTransforms__osg_Node_P1,
	          "",
	          "");
	I_ConstructorWithDefaults1(IN, osgUtil::Optimizer *, optimizer, 0,
	                           Properties::NON_EXPLICIT,
	                           ____FlattenStaticTransformsVisitor__Optimizer_P1,
	                           "",
	                           "");
	I_Method1(void, apply, IN, osg::Node &, geode,
	          Properties::VIRTUAL,
	          __void__apply__osg_Node_R1,
	          "",
	          "");
	I_Method1(void, apply, IN, osg::Geode &, geode,
	          Properties::VIRTUAL,
	          __void__apply__osg_Geode_R1,
	          "",
	          "");
	I_Method1(void, apply, IN, osg::Billboard &, geode,
	          Properties::VIRTUAL,
	          __void__apply__osg_Billboard_R1,
	          "",
	          "");
	I_Method1(void, apply, IN, osg::ProxyNode &, node,
	          Properties::VIRTUAL,
	          __void__apply__osg_ProxyNode_R1,
	          "",
	          "");
	I_Method1(void, apply, IN, osg::PagedLOD &, node,
	          Properties::VIRTUAL,
	          __void__apply__osg_PagedLOD_R1,
	          "",
	          "");
	I_Method1(void, apply, IN, osg::Transform &, transform,
	          Properties::VIRTUAL,
	          __void__apply__osg_Transform_R1,
	          "",
	          "");
	I_Method1(bool, removeTransforms, IN, osg::Node *, nodeWeCannotRemove,
	          Properties::NON_VIRTUAL,
	          __bool__removeTransforms__osg_Node_P1,
	          "",
	          "");
END_REFLECTOR

