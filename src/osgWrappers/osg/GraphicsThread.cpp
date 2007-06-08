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

#include <osg/GraphicsThread>
#include <osg/Object>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

BEGIN_ENUM_REFLECTOR(osg::BarrierOperation::PreBlockOp)
	I_DeclaringFile("osg/GraphicsThread");
	I_EnumLabel(osg::BarrierOperation::NO_OPERATION);
	I_EnumLabel(osg::BarrierOperation::GL_FLUSH);
	I_EnumLabel(osg::BarrierOperation::GL_FINISH);
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osg::BarrierOperation)
	I_DeclaringFile("osg/GraphicsThread");
	I_BaseType(osg::Operation);
	I_BaseType(OpenThreads::Barrier);
	I_ConstructorWithDefaults2(IN, int, numThreads, , IN, osg::BarrierOperation::PreBlockOp, op, osg::BarrierOperation::NO_OPERATION,
	                           ____BarrierOperation__int__PreBlockOp,
	                           "",
	                           "");
	I_Method0(void, release,
	          Properties::VIRTUAL,
	          __void__release,
	          "Release the barrier, now. ",
	          "");
	I_PublicMemberProperty(osg::BarrierOperation::PreBlockOp, _preBlockOp);
END_REFLECTOR

BEGIN_ABSTRACT_OBJECT_REFLECTOR(osg::Operation)
	I_DeclaringFile("osg/GraphicsThread");
	I_VirtualBaseType(osg::Referenced);
	I_Constructor2(IN, const std::string &, name, IN, bool, keep,
	               ____Operation__C5_std_string_R1__bool,
	               "",
	               "");
	I_Method1(void, setName, IN, const std::string &, name,
	          Properties::NON_VIRTUAL,
	          __void__setName__C5_std_string_R1,
	          "Set the human readable name of the operation. ",
	          "");
	I_Method0(const std::string &, getName,
	          Properties::NON_VIRTUAL,
	          __C5_std_string_R1__getName,
	          "Get the human readable name of the operation. ",
	          "");
	I_Method1(void, setKeep, IN, bool, keep,
	          Properties::NON_VIRTUAL,
	          __void__setKeep__bool,
	          "Set whether the operation should be kept once its been applied. ",
	          "");
	I_Method0(bool, getKeep,
	          Properties::NON_VIRTUAL,
	          __bool__getKeep,
	          "Get whether the operation should be kept once its been applied. ",
	          "");
	I_Method0(void, release,
	          Properties::VIRTUAL,
	          __void__release,
	          "if this operation is a barrier then release it. ",
	          "");
	I_SimpleProperty(bool, Keep, 
	                 __bool__getKeep, 
	                 __void__setKeep__bool);
	I_SimpleProperty(const std::string &, Name, 
	                 __C5_std_string_R1__getName, 
	                 __void__setName__C5_std_string_R1);
	I_PublicMemberProperty(std::string, _name);
	I_PublicMemberProperty(bool, _keep);
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osg::OperationsThread)
	I_DeclaringFile("osg/GraphicsThread");
	I_BaseType(osg::Referenced);
	I_BaseType(OpenThreads::Thread);
	I_Constructor0(____OperationsThread,
	               "",
	               "");
	I_Method1(void, setParent, IN, osg::Object *, parent,
	          Properties::NON_VIRTUAL,
	          __void__setParent__Object_P1,
	          "",
	          "");
	I_Method0(osg::Object *, getParent,
	          Properties::NON_VIRTUAL,
	          __Object_P1__getParent,
	          "",
	          "");
	I_Method0(const osg::Object *, getParent,
	          Properties::NON_VIRTUAL,
	          __C5_Object_P1__getParent,
	          "",
	          "");
	I_MethodWithDefaults2(void, add, IN, osg::Operation *, operation, , IN, bool, waitForCompletion, false,
	                      Properties::NON_VIRTUAL,
	                      __void__add__Operation_P1__bool,
	                      "Add operation to end of OperationQueue, this will be executed by the graphics thread once this operation gets to the head of the queue. ",
	                      "");
	I_Method1(void, remove, IN, osg::Operation *, operation,
	          Properties::NON_VIRTUAL,
	          __void__remove__Operation_P1,
	          "Remove operation from OperationQueue. ",
	          "");
	I_Method1(void, remove, IN, const std::string &, name,
	          Properties::NON_VIRTUAL,
	          __void__remove__C5_std_string_R1,
	          "Remove named operation from OperationQueue. ",
	          "");
	I_Method0(void, removeAllOperations,
	          Properties::NON_VIRTUAL,
	          __void__removeAllOperations,
	          "Remove all operations from OperationQueue. ",
	          "");
	I_Method0(osg::ref_ptr< osg::Operation >, getCurrentOperation,
	          Properties::NON_VIRTUAL,
	          __osg_ref_ptrT1_Operation___getCurrentOperation,
	          "Get the operation currently being run. ",
	          "");
	I_Method0(void, run,
	          Properties::VIRTUAL,
	          __void__run,
	          "Run does the graphics thread run loop. ",
	          "");
	I_Method1(void, setDone, IN, bool, done,
	          Properties::NON_VIRTUAL,
	          __void__setDone__bool,
	          "",
	          "");
	I_Method0(bool, getDone,
	          Properties::NON_VIRTUAL,
	          __bool__getDone,
	          "",
	          "");
	I_Method0(int, cancel,
	          Properties::VIRTUAL,
	          __int__cancel,
	          "Cancel this graphics thread. ",
	          "");
	I_SimpleProperty(osg::ref_ptr< osg::Operation >, CurrentOperation, 
	                 __osg_ref_ptrT1_Operation___getCurrentOperation, 
	                 0);
	I_SimpleProperty(bool, Done, 
	                 __bool__getDone, 
	                 __void__setDone__bool);
	I_SimpleProperty(osg::Object *, Parent, 
	                 __Object_P1__getParent, 
	                 __void__setParent__Object_P1);
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osg::RefBlock)
	I_DeclaringFile("osg/GraphicsThread");
	I_VirtualBaseType(osg::Referenced);
	I_BaseType(OpenThreads::Block);
	I_Constructor0(____RefBlock,
	               "",
	               "");
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osg::ReleaseContext_Block_MakeCurrentOperation)
	I_DeclaringFile("osg/GraphicsThread");
	I_BaseType(osg::Operation);
	I_BaseType(osg::RefBlock);
	I_Constructor0(____ReleaseContext_Block_MakeCurrentOperation,
	               "",
	               "");
	I_Method0(void, release,
	          Properties::VIRTUAL,
	          __void__release,
	          "if this operation is a barrier then release it. ",
	          "");
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osg::SwapBuffersOperation)
	I_DeclaringFile("osg/GraphicsThread");
	I_BaseType(osg::Operation);
	I_Constructor0(____SwapBuffersOperation,
	               "",
	               "");
END_REFLECTOR

