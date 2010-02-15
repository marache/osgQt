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

#include <osg/Observer>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

BEGIN_VALUE_REFLECTOR(osg::Observer)
	I_DeclaringFile("osg/Observer");
	I_Constructor0(____Observer,
	               "",
	               "");
	I_Method1(bool, objectUnreferenced, IN, void *, x,
	          Properties::VIRTUAL,
	          __bool__objectUnreferenced__void_P1,
	          "objectUnreferenced(void*) is called when the observed object's referenced count goes to zero, indicating that the object will be deleted unless a new reference is made to it. ",
	          "If you wish to prevent deletion of the object then it's reference count should be incremented such as via taking a ref_ptr<> to it, if no refernce is taken by any of the observers of the object then the object will be deleted, and objectDeleted will in turn be called. return true if the Observer wishes to removed from the oberseved objects observer set. ");
	I_Method1(void, objectDeleted, IN, void *, x,
	          Properties::VIRTUAL,
	          __void__objectDeleted__void_P1,
	          "objectDeleted is called when the observed object is about to be deleted. ",
	          "The observer will be automatically removed from the observerd objects observer set so there is no need for the objectDeleted implementation to call removeObserver() on the observed object. ");
END_REFLECTOR

