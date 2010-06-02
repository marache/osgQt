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

#include <osg/Billboard>
#include <osg/Geode>
#include <osg/Group>
#include <osg/LOD>
#include <osg/LightSource>
#include <osg/Node>
#include <osg/OccluderNode>
#include <osg/Projection>
#include <osg/Switch>
#include <osg/Transform>
#include <osgGA/EventQueue>
#include <osgGA/EventVisitor>
#include <osgGA/GUIActionAdapter>
#include <osgGA/GUIEventAdapter>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

#include <osg/observer_ptr>
        
TYPE_NAME_ALIAS(std::list< osg::ref_ptr< osgGA::GUIEventAdapter > >, osgGA::EventVisitor::EventList)

BEGIN_OBJECT_REFLECTOR(osgGA::EventVisitor)
	I_DeclaringFile("osgGA/EventVisitor");
	I_BaseType(osg::NodeVisitor);
	I_Constructor0(____EventVisitor,
	               "",
	               "");
	I_Method0(const char *, libraryName,
	          Properties::VIRTUAL,
	          __C5_char_P1__libraryName,
	          "return the library name/namespapce of the visitor's. ",
	          "Should be defined by derived classes. ");
	I_Method0(const char *, className,
	          Properties::VIRTUAL,
	          __C5_char_P1__className,
	          "return the name of the visitor's class type. ",
	          "Should be defined by derived classes. ");
	I_Method1(void, setActionAdapter, IN, osgGA::GUIActionAdapter *, actionAdapter,
	          Properties::NON_VIRTUAL,
	          __void__setActionAdapter__osgGA_GUIActionAdapter_P1,
	          "",
	          "");
	I_Method0(osgGA::GUIActionAdapter *, getActionAdapter,
	          Properties::NON_VIRTUAL,
	          __osgGA_GUIActionAdapter_P1__getActionAdapter,
	          "",
	          "");
	I_Method0(const osgGA::GUIActionAdapter *, getActionAdapter,
	          Properties::NON_VIRTUAL,
	          __C5_osgGA_GUIActionAdapter_P1__getActionAdapter,
	          "",
	          "");
	I_Method1(void, addEvent, IN, osgGA::GUIEventAdapter *, event,
	          Properties::NON_VIRTUAL,
	          __void__addEvent__GUIEventAdapter_P1,
	          "",
	          "");
	I_Method1(void, removeEvent, IN, osgGA::GUIEventAdapter *, event,
	          Properties::NON_VIRTUAL,
	          __void__removeEvent__GUIEventAdapter_P1,
	          "",
	          "");
	I_Method1(void, setEventHandled, IN, bool, handled,
	          Properties::NON_VIRTUAL,
	          __void__setEventHandled__bool,
	          "",
	          "");
	I_Method0(bool, getEventHandled,
	          Properties::NON_VIRTUAL,
	          __bool__getEventHandled,
	          "",
	          "");
	I_Method1(void, setEvents, IN, const osgGA::EventQueue::Events &, events,
	          Properties::NON_VIRTUAL,
	          __void__setEvents__C5_EventQueue_Events_R1,
	          "",
	          "");
	I_Method0(osgGA::EventQueue::Events &, getEvents,
	          Properties::NON_VIRTUAL,
	          __EventQueue_Events_R1__getEvents,
	          "",
	          "");
	I_Method0(const osgGA::EventQueue::Events &, getEvents,
	          Properties::NON_VIRTUAL,
	          __C5_EventQueue_Events_R1__getEvents,
	          "",
	          "");
	I_Method0(void, reset,
	          Properties::VIRTUAL,
	          __void__reset,
	          "Method to call to reset visitor. ",
	          "Useful if your visitor accumulates state during a traversal, and you plan to reuse the visitor. To flush that state for the next traversal: call reset() prior to each traversal. ");
	I_Method1(void, apply, IN, osg::Node &, node,
	          Properties::VIRTUAL,
	          __void__apply__osg_Node_R1,
	          "During traversal each type of node calls its callbacks and its children traversed. ",
	          "");
	I_Method1(void, apply, IN, osg::Geode &, node,
	          Properties::VIRTUAL,
	          __void__apply__osg_Geode_R1,
	          "",
	          "");
	I_Method1(void, apply, IN, osg::Billboard &, node,
	          Properties::VIRTUAL,
	          __void__apply__osg_Billboard_R1,
	          "",
	          "");
	I_Method1(void, apply, IN, osg::LightSource &, node,
	          Properties::VIRTUAL,
	          __void__apply__osg_LightSource_R1,
	          "",
	          "");
	I_Method1(void, apply, IN, osg::Group &, node,
	          Properties::VIRTUAL,
	          __void__apply__osg_Group_R1,
	          "",
	          "");
	I_Method1(void, apply, IN, osg::Transform &, node,
	          Properties::VIRTUAL,
	          __void__apply__osg_Transform_R1,
	          "",
	          "");
	I_Method1(void, apply, IN, osg::Projection &, node,
	          Properties::VIRTUAL,
	          __void__apply__osg_Projection_R1,
	          "",
	          "");
	I_Method1(void, apply, IN, osg::Switch &, node,
	          Properties::VIRTUAL,
	          __void__apply__osg_Switch_R1,
	          "",
	          "");
	I_Method1(void, apply, IN, osg::LOD &, node,
	          Properties::VIRTUAL,
	          __void__apply__osg_LOD_R1,
	          "",
	          "");
	I_Method1(void, apply, IN, osg::OccluderNode &, node,
	          Properties::VIRTUAL,
	          __void__apply__osg_OccluderNode_R1,
	          "",
	          "");
	I_ProtectedMethod1(void, handle_callbacks, IN, osg::StateSet *, stateset,
	                   Properties::NON_VIRTUAL,
	                   Properties::NON_CONST,
	                   __void__handle_callbacks__osg_StateSet_P1,
	                   "",
	                   "");
	I_ProtectedMethod1(void, handle_callbacks_and_traverse, IN, osg::Node &, node,
	                   Properties::NON_VIRTUAL,
	                   Properties::NON_CONST,
	                   __void__handle_callbacks_and_traverse__osg_Node_R1,
	                   "",
	                   "");
	I_ProtectedMethod1(void, handle_geode_callbacks, IN, osg::Geode &, node,
	                   Properties::NON_VIRTUAL,
	                   Properties::NON_CONST,
	                   __void__handle_geode_callbacks__osg_Geode_R1,
	                   "",
	                   "");
	I_ProtectedMethod1(void, traverseGeode, IN, osg::Geode &, geode,
	                   Properties::NON_VIRTUAL,
	                   Properties::NON_CONST,
	                   __void__traverseGeode__osg_Geode_R1,
	                   "",
	                   "");
	I_SimpleProperty(osgGA::GUIActionAdapter *, ActionAdapter, 
	                 __osgGA_GUIActionAdapter_P1__getActionAdapter, 
	                 __void__setActionAdapter__osgGA_GUIActionAdapter_P1);
	I_SimpleProperty(bool, EventHandled, 
	                 __bool__getEventHandled, 
	                 __void__setEventHandled__bool);
	I_SimpleProperty(const osgGA::EventQueue::Events &, Events, 
	                 __C5_EventQueue_Events_R1__getEvents, 
	                 __void__setEvents__C5_EventQueue_Events_R1);
END_REFLECTOR

