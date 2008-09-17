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

#include <osg/CopyOp>
#include <osg/Image>
#include <osg/Object>
#include <osgWidget/Types>
#include <osgWidget/Widget>
#include <osgWidget/Window>
#include <osgWidget/WindowManager>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

BEGIN_OBJECT_REFLECTOR(osgWidget::NotifyWidget)
	I_DeclaringFile("osgWidget/Widget");
	I_BaseType(osgWidget::Widget);
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
	I_ConstructorWithDefaults3(IN, const std::string &, n, "", IN, osgWidget::point_type, w, 0.0f, IN, osgWidget::point_type, h, 0.0f,
	                           ____NotifyWidget__C5_std_string_R1__point_type__point_type,
	                           "",
	                           "");
	I_Constructor2(IN, const osgWidget::NotifyWidget &, widget, IN, const osg::CopyOp &, co,
	               ____NotifyWidget__C5_NotifyWidget_R1__C5_osg_CopyOp_R1,
	               "",
	               "");
	I_Method1(bool, focus, IN, const osgWidget::WindowManager *, x,
	          Properties::NON_VIRTUAL,
	          __bool__focus__C5_WindowManager_P1,
	          "",
	          "");
	I_Method1(bool, unfocus, IN, const osgWidget::WindowManager *, x,
	          Properties::NON_VIRTUAL,
	          __bool__unfocus__C5_WindowManager_P1,
	          "",
	          "");
	I_Method3(bool, mouseEnter, IN, double, x, IN, double, x, IN, const osgWidget::WindowManager *, x,
	          Properties::NON_VIRTUAL,
	          __bool__mouseEnter__double__double__C5_WindowManager_P1,
	          "",
	          "");
	I_Method3(bool, mouseOver, IN, double, x, IN, double, x, IN, const osgWidget::WindowManager *, x,
	          Properties::NON_VIRTUAL,
	          __bool__mouseOver__double__double__C5_WindowManager_P1,
	          "",
	          "");
	I_Method3(bool, mouseLeave, IN, double, x, IN, double, x, IN, const osgWidget::WindowManager *, x,
	          Properties::NON_VIRTUAL,
	          __bool__mouseLeave__double__double__C5_WindowManager_P1,
	          "",
	          "");
	I_Method3(bool, mouseDrag, IN, double, x, IN, double, x, IN, const osgWidget::WindowManager *, x,
	          Properties::NON_VIRTUAL,
	          __bool__mouseDrag__double__double__C5_WindowManager_P1,
	          "",
	          "");
	I_Method3(bool, mousePush, IN, double, x, IN, double, x, IN, const osgWidget::WindowManager *, x,
	          Properties::NON_VIRTUAL,
	          __bool__mousePush__double__double__C5_WindowManager_P1,
	          "",
	          "");
	I_Method3(bool, mouseRelease, IN, double, x, IN, double, x, IN, const osgWidget::WindowManager *, x,
	          Properties::NON_VIRTUAL,
	          __bool__mouseRelease__double__double__C5_WindowManager_P1,
	          "",
	          "");
	I_Method3(bool, mouseScroll, IN, double, x, IN, double, x, IN, const osgWidget::WindowManager *, x,
	          Properties::NON_VIRTUAL,
	          __bool__mouseScroll__double__double__C5_WindowManager_P1,
	          "",
	          "");
	I_Method3(bool, keyPress, IN, int, x, IN, int, x, IN, const osgWidget::WindowManager *, x,
	          Properties::NON_VIRTUAL,
	          __bool__keyPress__int__int__C5_WindowManager_P1,
	          "",
	          "");
	I_Method3(bool, keyRelease, IN, int, x, IN, int, x, IN, const osgWidget::WindowManager *, x,
	          Properties::NON_VIRTUAL,
	          __bool__keyRelease__int__int__C5_WindowManager_P1,
	          "",
	          "");
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osgWidget::NullWidget)
	I_DeclaringFile("osgWidget/Widget");
	I_BaseType(osgWidget::Widget);
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
	I_ConstructorWithDefaults3(IN, const std::string &, n, "", IN, osgWidget::point_type, w, 0.0f, IN, osgWidget::point_type, h, 0.0f,
	                           ____NullWidget__C5_std_string_R1__point_type__point_type,
	                           "",
	                           "");
	I_Constructor2(IN, const osgWidget::NullWidget &, widget, IN, const osg::CopyOp &, co,
	               ____NullWidget__C5_NullWidget_R1__C5_osg_CopyOp_R1,
	               "",
	               "");
	I_Method1(bool, focus, IN, const osgWidget::WindowManager *, x,
	          Properties::NON_VIRTUAL,
	          __bool__focus__C5_WindowManager_P1,
	          "",
	          "");
	I_Method1(bool, unfocus, IN, const osgWidget::WindowManager *, x,
	          Properties::NON_VIRTUAL,
	          __bool__unfocus__C5_WindowManager_P1,
	          "",
	          "");
	I_Method3(bool, mouseEnter, IN, double, x, IN, double, x, IN, const osgWidget::WindowManager *, x,
	          Properties::NON_VIRTUAL,
	          __bool__mouseEnter__double__double__C5_WindowManager_P1,
	          "",
	          "");
	I_Method3(bool, mouseOver, IN, double, x, IN, double, x, IN, const osgWidget::WindowManager *, x,
	          Properties::NON_VIRTUAL,
	          __bool__mouseOver__double__double__C5_WindowManager_P1,
	          "",
	          "");
	I_Method3(bool, mouseLeave, IN, double, x, IN, double, x, IN, const osgWidget::WindowManager *, x,
	          Properties::NON_VIRTUAL,
	          __bool__mouseLeave__double__double__C5_WindowManager_P1,
	          "",
	          "");
	I_Method3(bool, mouseDrag, IN, double, x, IN, double, x, IN, const osgWidget::WindowManager *, x,
	          Properties::NON_VIRTUAL,
	          __bool__mouseDrag__double__double__C5_WindowManager_P1,
	          "",
	          "");
	I_Method3(bool, mousePush, IN, double, x, IN, double, x, IN, const osgWidget::WindowManager *, x,
	          Properties::NON_VIRTUAL,
	          __bool__mousePush__double__double__C5_WindowManager_P1,
	          "",
	          "");
	I_Method3(bool, mouseRelease, IN, double, x, IN, double, x, IN, const osgWidget::WindowManager *, x,
	          Properties::NON_VIRTUAL,
	          __bool__mouseRelease__double__double__C5_WindowManager_P1,
	          "",
	          "");
	I_Method3(bool, mouseScroll, IN, double, x, IN, double, x, IN, const osgWidget::WindowManager *, x,
	          Properties::NON_VIRTUAL,
	          __bool__mouseScroll__double__double__C5_WindowManager_P1,
	          "",
	          "");
	I_Method3(bool, keyPress, IN, int, x, IN, int, x, IN, const osgWidget::WindowManager *, x,
	          Properties::NON_VIRTUAL,
	          __bool__keyPress__int__int__C5_WindowManager_P1,
	          "",
	          "");
	I_Method3(bool, keyRelease, IN, int, x, IN, int, x, IN, const osgWidget::WindowManager *, x,
	          Properties::NON_VIRTUAL,
	          __bool__keyRelease__int__int__C5_WindowManager_P1,
	          "",
	          "");
END_REFLECTOR

BEGIN_ENUM_REFLECTOR(osgWidget::Widget::Corner)
	I_DeclaringFile("osgWidget/Widget");
	I_EnumLabel(osgWidget::Widget::LOWER_LEFT);
	I_EnumLabel(osgWidget::Widget::LOWER_RIGHT);
	I_EnumLabel(osgWidget::Widget::UPPER_RIGHT);
	I_EnumLabel(osgWidget::Widget::UPPER_LEFT);
	I_EnumLabel(osgWidget::Widget::LL);
	I_EnumLabel(osgWidget::Widget::LR);
	I_EnumLabel(osgWidget::Widget::UR);
	I_EnumLabel(osgWidget::Widget::UL);
	I_EnumLabel(osgWidget::Widget::ALL_CORNERS);
END_REFLECTOR

BEGIN_ENUM_REFLECTOR(osgWidget::Widget::Layer)
	I_DeclaringFile("osgWidget/Widget");
	I_EnumLabel(osgWidget::Widget::LAYER_TOP);
	I_EnumLabel(osgWidget::Widget::LAYER_HIGH);
	I_EnumLabel(osgWidget::Widget::LAYER_MIDDLE);
	I_EnumLabel(osgWidget::Widget::LAYER_LOW);
	I_EnumLabel(osgWidget::Widget::LAYER_BG);
END_REFLECTOR

BEGIN_ENUM_REFLECTOR(osgWidget::Widget::VerticalAlignment)
	I_DeclaringFile("osgWidget/Widget");
	I_EnumLabel(osgWidget::Widget::VA_CENTER);
	I_EnumLabel(osgWidget::Widget::VA_TOP);
	I_EnumLabel(osgWidget::Widget::VA_BOTTOM);
END_REFLECTOR

BEGIN_ENUM_REFLECTOR(osgWidget::Widget::HorizontalAlignment)
	I_DeclaringFile("osgWidget/Widget");
	I_EnumLabel(osgWidget::Widget::HA_CENTER);
	I_EnumLabel(osgWidget::Widget::HA_LEFT);
	I_EnumLabel(osgWidget::Widget::HA_RIGHT);
END_REFLECTOR

BEGIN_ENUM_REFLECTOR(osgWidget::Widget::CoordinateMode)
	I_DeclaringFile("osgWidget/Widget");
	I_EnumLabel(osgWidget::Widget::CM_ABSOLUTE);
	I_EnumLabel(osgWidget::Widget::CM_RELATIVE);
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osgWidget::Widget)
	I_DeclaringFile("osgWidget/Widget");
	I_BaseType(osg::Geometry);
	I_BaseType(osgWidget::EventInterface);
	I_BaseType(osgWidget::StyleInterface);
	I_ConstructorWithDefaults3(IN, const std::string &, x, "", IN, osgWidget::point_type, x, 0.0f, IN, osgWidget::point_type, x, 0.0f,
	                           ____Widget__C5_std_string_R1__point_type__point_type,
	                           "",
	                           "");
	I_Constructor2(IN, const osgWidget::Widget &, x, IN, const osg::CopyOp &, x,
	               ____Widget__C5_Widget_R1__C5_osg_CopyOp_R1,
	               "",
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
	I_Method1(void, parented, IN, osgWidget::Window *, x,
	          Properties::VIRTUAL,
	          __void__parented__Window_P1,
	          "",
	          "");
	I_Method1(void, unparented, IN, osgWidget::Window *, x,
	          Properties::VIRTUAL,
	          __void__unparented__Window_P1,
	          "",
	          "");
	I_Method1(void, managed, IN, osgWidget::WindowManager *, x,
	          Properties::VIRTUAL,
	          __void__managed__WindowManager_P1,
	          "",
	          "");
	I_Method1(void, unmanaged, IN, osgWidget::WindowManager *, x,
	          Properties::VIRTUAL,
	          __void__unmanaged__WindowManager_P1,
	          "",
	          "");
	I_Method0(void, positioned,
	          Properties::VIRTUAL,
	          __void__positioned,
	          "",
	          "");
	I_MethodWithDefaults5(void, setDimensions, IN, osgWidget::point_type, x, -1.0f, IN, osgWidget::point_type, x, -1.0f, IN, osgWidget::point_type, x, -1.0f, IN, osgWidget::point_type, x, -1.0f, IN, osgWidget::point_type, x, -1.0f,
	                      Properties::NON_VIRTUAL,
	                      __void__setDimensions__point_type__point_type__point_type__point_type__point_type,
	                      "",
	                      "");
	I_Method1(void, setPadding, IN, osgWidget::point_type, x,
	          Properties::NON_VIRTUAL,
	          __void__setPadding__point_type,
	          "",
	          "");
	I_MethodWithDefaults5(void, setColor, IN, osgWidget::color_type, x, , IN, osgWidget::color_type, x, , IN, osgWidget::color_type, x, , IN, osgWidget::color_type, x, , IN, osgWidget::Widget::Corner, x, osgWidget::Widget::ALL_CORNERS,
	                      Properties::NON_VIRTUAL,
	                      __void__setColor__color_type__color_type__color_type__color_type__Corner,
	                      "",
	                      "");
	I_MethodWithDefaults5(void, addColor, IN, osgWidget::color_type, x, , IN, osgWidget::color_type, x, , IN, osgWidget::color_type, x, , IN, osgWidget::color_type, x, , IN, osgWidget::Widget::Corner, x, osgWidget::Widget::ALL_CORNERS,
	                      Properties::NON_VIRTUAL,
	                      __void__addColor__color_type__color_type__color_type__color_type__Corner,
	                      "",
	                      "");
	I_MethodWithDefaults3(void, setTexCoord, IN, osgWidget::texcoord_type, x, , IN, osgWidget::texcoord_type, x, , IN, osgWidget::Widget::Corner, x, osgWidget::Widget::ALL_CORNERS,
	                      Properties::NON_VIRTUAL,
	                      __void__setTexCoord__texcoord_type__texcoord_type__Corner,
	                      "",
	                      "");
	I_Method4(void, setTexCoordRegion, IN, osgWidget::point_type, x, IN, osgWidget::point_type, x, IN, osgWidget::point_type, x, IN, osgWidget::point_type, x,
	          Properties::NON_VIRTUAL,
	          __void__setTexCoordRegion__point_type__point_type__point_type__point_type,
	          "",
	          "");
	I_Method0(void, setTexCoordWrapHorizontal,
	          Properties::NON_VIRTUAL,
	          __void__setTexCoordWrapHorizontal,
	          "",
	          "");
	I_Method0(void, setTexCoordWrapVertical,
	          Properties::NON_VIRTUAL,
	          __void__setTexCoordWrapVertical,
	          "",
	          "");
	I_MethodWithDefaults2(bool, setImage, IN, osg::Image *, x, , IN, bool, x, false,
	                      Properties::NON_VIRTUAL,
	                      __bool__setImage__osg_Image_P1__bool,
	                      "",
	                      "");
	I_MethodWithDefaults2(bool, setImage, IN, const std::string &, x, , IN, bool, x, false,
	                      Properties::NON_VIRTUAL,
	                      __bool__setImage__C5_std_string_R1__bool,
	                      "",
	                      "");
	I_Method1(void, addX, IN, osgWidget::point_type, x,
	          Properties::NON_VIRTUAL,
	          __void__addX__point_type,
	          "",
	          "");
	I_Method1(void, addY, IN, osgWidget::point_type, x,
	          Properties::NON_VIRTUAL,
	          __void__addY__point_type,
	          "",
	          "");
	I_Method1(void, addWidth, IN, osgWidget::point_type, x,
	          Properties::NON_VIRTUAL,
	          __void__addWidth__point_type,
	          "",
	          "");
	I_Method1(void, addHeight, IN, osgWidget::point_type, x,
	          Properties::NON_VIRTUAL,
	          __void__addHeight__point_type,
	          "",
	          "");
	I_Method2(void, addOrigin, IN, osgWidget::point_type, x, IN, osgWidget::point_type, x,
	          Properties::NON_VIRTUAL,
	          __void__addOrigin__point_type__point_type,
	          "",
	          "");
	I_Method2(void, addSize, IN, osgWidget::point_type, x, IN, osgWidget::point_type, x,
	          Properties::NON_VIRTUAL,
	          __void__addSize__point_type__point_type,
	          "",
	          "");
	I_Method0(osgWidget::point_type, getWidth,
	          Properties::NON_VIRTUAL,
	          __point_type__getWidth,
	          "",
	          "");
	I_Method0(osgWidget::point_type, getHeight,
	          Properties::NON_VIRTUAL,
	          __point_type__getHeight,
	          "",
	          "");
	I_Method0(osgWidget::point_type, getX,
	          Properties::NON_VIRTUAL,
	          __point_type__getX,
	          "",
	          "");
	I_Method0(osgWidget::point_type, getY,
	          Properties::NON_VIRTUAL,
	          __point_type__getY,
	          "",
	          "");
	I_Method0(osgWidget::point_type, getZ,
	          Properties::NON_VIRTUAL,
	          __point_type__getZ,
	          "",
	          "");
	I_Method0(osgWidget::point_type, getPadHorizontal,
	          Properties::NON_VIRTUAL,
	          __point_type__getPadHorizontal,
	          "",
	          "");
	I_Method0(osgWidget::point_type, getPadVertical,
	          Properties::NON_VIRTUAL,
	          __point_type__getPadVertical,
	          "",
	          "");
	I_MethodWithDefaults1(const osgWidget::Point &, getPoint, IN, osgWidget::Widget::Corner, x, osgWidget::Widget::ALL_CORNERS,
	                      Properties::NON_VIRTUAL,
	                      __C5_Point_R1__getPoint__Corner,
	                      "",
	                      "");
	I_MethodWithDefaults1(const osgWidget::Color &, getColor, IN, osgWidget::Widget::Corner, x, osgWidget::Widget::ALL_CORNERS,
	                      Properties::NON_VIRTUAL,
	                      __C5_Color_R1__getColor__Corner,
	                      "",
	                      "");
	I_MethodWithDefaults1(const osgWidget::TexCoord &, getTexCoord, IN, osgWidget::Widget::Corner, x, osgWidget::Widget::ALL_CORNERS,
	                      Properties::NON_VIRTUAL,
	                      __C5_TexCoord_R1__getTexCoord__Corner,
	                      "",
	                      "");
	I_Method1(osgWidget::Widget::Corner, convertCorner, IN, osgWidget::Widget::Corner, x,
	          Properties::NON_VIRTUAL,
	          __Corner__convertCorner__Corner,
	          "",
	          "");
	I_Method2(osgWidget::Color, getImageColorAtXY, IN, osgWidget::point_type, x, IN, osgWidget::point_type, y,
	          Properties::NON_VIRTUAL,
	          __Color__getImageColorAtXY__point_type__point_type,
	          "",
	          "");
	I_Method2(osgWidget::XYCoord, localXY, IN, double, x, IN, double, x,
	          Properties::NON_VIRTUAL,
	          __XYCoord__localXY__double__double,
	          "",
	          "");
	I_Method0(bool, isPaddingUniform,
	          Properties::NON_VIRTUAL,
	          __bool__isPaddingUniform,
	          "",
	          "");
	I_Method0(bool, isManaged,
	          Properties::NON_VIRTUAL,
	          __bool__isManaged,
	          "",
	          "");
	I_Method0(bool, isStyled,
	          Properties::NON_VIRTUAL,
	          __bool__isStyled,
	          "",
	          "");
	I_MethodWithDefaults2(void, setDimensions, IN, const osgWidget::Quad &, q, , IN, osgWidget::point_type, z, -1.0f,
	                      Properties::NON_VIRTUAL,
	                      __void__setDimensions__C5_Quad_R1__point_type,
	                      "",
	                      "");
	I_Method1(void, setX, IN, osgWidget::point_type, x,
	          Properties::NON_VIRTUAL,
	          __void__setX__point_type,
	          "",
	          "");
	I_Method1(void, setY, IN, osgWidget::point_type, y,
	          Properties::NON_VIRTUAL,
	          __void__setY__point_type,
	          "",
	          "");
	I_Method1(void, setZ, IN, osgWidget::point_type, z,
	          Properties::NON_VIRTUAL,
	          __void__setZ__point_type,
	          "",
	          "");
	I_Method1(void, setWidth, IN, osgWidget::point_type, w,
	          Properties::NON_VIRTUAL,
	          __void__setWidth__point_type,
	          "",
	          "");
	I_Method1(void, setHeight, IN, osgWidget::point_type, h,
	          Properties::NON_VIRTUAL,
	          __void__setHeight__point_type,
	          "",
	          "");
	I_Method2(void, setOrigin, IN, osgWidget::point_type, x, IN, osgWidget::point_type, y,
	          Properties::NON_VIRTUAL,
	          __void__setOrigin__point_type__point_type,
	          "",
	          "");
	I_Method1(void, setOrigin, IN, const osgWidget::XYCoord &, xy,
	          Properties::NON_VIRTUAL,
	          __void__setOrigin__C5_XYCoord_R1,
	          "",
	          "");
	I_Method2(void, setSize, IN, osgWidget::point_type, w, IN, osgWidget::point_type, h,
	          Properties::NON_VIRTUAL,
	          __void__setSize__point_type__point_type,
	          "",
	          "");
	I_Method1(void, setSize, IN, const osgWidget::XYCoord &, xy,
	          Properties::NON_VIRTUAL,
	          __void__setSize__C5_XYCoord_R1,
	          "",
	          "");
	I_MethodWithDefaults2(void, setColor, IN, const osgWidget::Color &, col, , IN, osgWidget::Widget::Corner, p, osgWidget::Widget::ALL_CORNERS,
	                      Properties::NON_VIRTUAL,
	                      __void__setColor__C5_Color_R1__Corner,
	                      "",
	                      "");
	I_MethodWithDefaults2(void, setTexCoord, IN, const osgWidget::XYCoord &, xy, , IN, osgWidget::Widget::Corner, p, osgWidget::Widget::ALL_CORNERS,
	                      Properties::NON_VIRTUAL,
	                      __void__setTexCoord__C5_XYCoord_R1__Corner,
	                      "",
	                      "");
	I_Method3(void, setTexCoordRegion, IN, const osgWidget::XYCoord &, xy, IN, osgWidget::point_type, w, IN, osgWidget::point_type, h,
	          Properties::NON_VIRTUAL,
	          __void__setTexCoordRegion__C5_XYCoord_R1__point_type__point_type,
	          "",
	          "");
	I_MethodWithDefaults2(void, addColor, IN, const osgWidget::Color &, col, , IN, osgWidget::Widget::Corner, p, osgWidget::Widget::ALL_CORNERS,
	                      Properties::NON_VIRTUAL,
	                      __void__addColor__C5_Color_R1__Corner,
	                      "",
	                      "");
	I_Method1(void, addOrigin, IN, const osgWidget::XYCoord &, xy,
	          Properties::NON_VIRTUAL,
	          __void__addOrigin__C5_XYCoord_R1,
	          "",
	          "");
	I_Method1(void, addSize, IN, const osgWidget::XYCoord &, xy,
	          Properties::NON_VIRTUAL,
	          __void__addSize__C5_XYCoord_R1,
	          "",
	          "");
	I_Method2(void, setMinimumSize, IN, osgWidget::point_type, width, IN, osgWidget::point_type, height,
	          Properties::NON_VIRTUAL,
	          __void__setMinimumSize__point_type__point_type,
	          "",
	          "");
	I_Method1(void, setMinimumSize, IN, const osgWidget::XYCoord &, xy,
	          Properties::NON_VIRTUAL,
	          __void__setMinimumSize__C5_XYCoord_R1,
	          "",
	          "");
	I_MethodWithDefaults2(void, setLayer, IN, osgWidget::Widget::Layer, l, , IN, unsigned int, offset, 0,
	                      Properties::NON_VIRTUAL,
	                      __void__setLayer__Layer__unsigned_int,
	                      "",
	                      "");
	I_Method1(void, setPadLeft, IN, osgWidget::point_type, p,
	          Properties::NON_VIRTUAL,
	          __void__setPadLeft__point_type,
	          "",
	          "");
	I_Method1(void, setPadRight, IN, osgWidget::point_type, p,
	          Properties::NON_VIRTUAL,
	          __void__setPadRight__point_type,
	          "",
	          "");
	I_Method1(void, setPadTop, IN, osgWidget::point_type, p,
	          Properties::NON_VIRTUAL,
	          __void__setPadTop__point_type,
	          "",
	          "");
	I_Method1(void, setPadBottom, IN, osgWidget::point_type, p,
	          Properties::NON_VIRTUAL,
	          __void__setPadBottom__point_type,
	          "",
	          "");
	I_Method1(void, setAlignHorizontal, IN, osgWidget::Widget::HorizontalAlignment, h,
	          Properties::NON_VIRTUAL,
	          __void__setAlignHorizontal__HorizontalAlignment,
	          "",
	          "");
	I_Method1(void, setAlignVertical, IN, osgWidget::Widget::VerticalAlignment, v,
	          Properties::NON_VIRTUAL,
	          __void__setAlignVertical__VerticalAlignment,
	          "",
	          "");
	I_Method1(void, setCoordinateMode, IN, osgWidget::Widget::CoordinateMode, cm,
	          Properties::NON_VIRTUAL,
	          __void__setCoordinateMode__CoordinateMode,
	          "",
	          "");
	I_Method1(void, setCanFill, IN, bool, f,
	          Properties::NON_VIRTUAL,
	          __void__setCanFill__bool,
	          "",
	          "");
	I_Method1(void, setCanClone, IN, bool, c,
	          Properties::NON_VIRTUAL,
	          __void__setCanClone__bool,
	          "",
	          "");
	I_Method0(osgWidget::WindowManager *, getWindowManager,
	          Properties::NON_VIRTUAL,
	          __WindowManager_P1__getWindowManager,
	          "",
	          "");
	I_Method0(const osgWidget::WindowManager *, getWindowManager,
	          Properties::NON_VIRTUAL,
	          __C5_WindowManager_P1__getWindowManager,
	          "",
	          "");
	I_Method0(osgWidget::Window *, getParent,
	          Properties::NON_VIRTUAL,
	          __Window_P1__getParent,
	          "",
	          "");
	I_Method0(const osgWidget::Window *, getParent,
	          Properties::NON_VIRTUAL,
	          __C5_Window_P1__getParent,
	          "",
	          "");
	I_Method0(unsigned int, getIndex,
	          Properties::NON_VIRTUAL,
	          __unsigned_int__getIndex,
	          "",
	          "");
	I_Method0(osgWidget::XYCoord, getOrigin,
	          Properties::NON_VIRTUAL,
	          __XYCoord__getOrigin,
	          "",
	          "");
	I_Method1(osgWidget::Color, getImageColorAtXY, IN, const osgWidget::XYCoord &, xy,
	          Properties::NON_VIRTUAL,
	          __Color__getImageColorAtXY__C5_XYCoord_R1,
	          "",
	          "");
	I_Method2(osgWidget::Color, getImageColorAtPointerXY, IN, double, x, IN, double, y,
	          Properties::NON_VIRTUAL,
	          __Color__getImageColorAtPointerXY__double__double,
	          "",
	          "");
	I_Method0(osgWidget::Point, getPosition,
	          Properties::NON_VIRTUAL,
	          __Point__getPosition,
	          "",
	          "");
	I_Method0(osgWidget::XYCoord, getSize,
	          Properties::NON_VIRTUAL,
	          __XYCoord__getSize,
	          "",
	          "");
	I_Method0(osgWidget::Quad, getDimensions,
	          Properties::NON_VIRTUAL,
	          __Quad__getDimensions,
	          "",
	          "");
	I_Method0(osgWidget::point_type, getPadLeft,
	          Properties::NON_VIRTUAL,
	          __point_type__getPadLeft,
	          "",
	          "");
	I_Method0(osgWidget::point_type, getPadRight,
	          Properties::NON_VIRTUAL,
	          __point_type__getPadRight,
	          "",
	          "");
	I_Method0(osgWidget::point_type, getPadTop,
	          Properties::NON_VIRTUAL,
	          __point_type__getPadTop,
	          "",
	          "");
	I_Method0(osgWidget::point_type, getPadBottom,
	          Properties::NON_VIRTUAL,
	          __point_type__getPadBottom,
	          "",
	          "");
	I_Method0(osgWidget::Widget::HorizontalAlignment, getAlignHorizontal,
	          Properties::NON_VIRTUAL,
	          __HorizontalAlignment__getAlignHorizontal,
	          "",
	          "");
	I_Method0(osgWidget::Widget::VerticalAlignment, getAlignVertical,
	          Properties::NON_VIRTUAL,
	          __VerticalAlignment__getAlignVertical,
	          "",
	          "");
	I_Method0(osgWidget::Widget::CoordinateMode, getCoordinateMode,
	          Properties::NON_VIRTUAL,
	          __CoordinateMode__getCoordinateMode,
	          "",
	          "");
	I_Method0(bool, canFill,
	          Properties::NON_VIRTUAL,
	          __bool__canFill,
	          "",
	          "");
	I_Method0(bool, canClone,
	          Properties::NON_VIRTUAL,
	          __bool__canClone,
	          "",
	          "");
	I_Method0(osgWidget::point_type, getFillAsNumeric,
	          Properties::NON_VIRTUAL,
	          __point_type__getFillAsNumeric,
	          "",
	          "");
	I_Method0(osgWidget::point_type, getWidthTotal,
	          Properties::NON_VIRTUAL,
	          __point_type__getWidthTotal,
	          "",
	          "");
	I_Method0(osgWidget::point_type, getHeightTotal,
	          Properties::NON_VIRTUAL,
	          __point_type__getHeightTotal,
	          "",
	          "");
	I_Method0(osgWidget::point_type, getMinWidth,
	          Properties::NON_VIRTUAL,
	          __point_type__getMinWidth,
	          "",
	          "");
	I_Method0(osgWidget::point_type, getMinHeight,
	          Properties::NON_VIRTUAL,
	          __point_type__getMinHeight,
	          "",
	          "");
	I_Method0(osgWidget::point_type, getMinWidthTotal,
	          Properties::NON_VIRTUAL,
	          __point_type__getMinWidthTotal,
	          "",
	          "");
	I_Method0(osgWidget::point_type, getMinHeightTotal,
	          Properties::NON_VIRTUAL,
	          __point_type__getMinHeightTotal,
	          "",
	          "");
	I_Method0(unsigned int, getLayer,
	          Properties::NON_VIRTUAL,
	          __unsigned_int__getLayer,
	          "",
	          "");
	I_ProtectedMethod1(osgWidget::point_type, _calculateZ, IN, unsigned, int,
	                   Properties::NON_VIRTUAL,
	                   Properties::CONST,
	                   __point_type___calculateZ__unsigned,
	                   "",
	                   "");
	I_ProtectedMethod0(osgWidget::PointArray *, _verts,
	                   Properties::NON_VIRTUAL,
	                   Properties::NON_CONST,
	                   __PointArray_P1___verts,
	                   "",
	                   "");
	I_ProtectedMethod0(const osgWidget::PointArray *, _verts,
	                   Properties::NON_VIRTUAL,
	                   Properties::CONST,
	                   __C5_PointArray_P1___verts,
	                   "",
	                   "");
	I_ProtectedMethod0(osgWidget::ColorArray *, _cols,
	                   Properties::NON_VIRTUAL,
	                   Properties::NON_CONST,
	                   __ColorArray_P1___cols,
	                   "",
	                   "");
	I_ProtectedMethod0(const osgWidget::ColorArray *, _cols,
	                   Properties::NON_VIRTUAL,
	                   Properties::CONST,
	                   __C5_ColorArray_P1___cols,
	                   "",
	                   "");
	I_ProtectedMethod0(osgWidget::TexCoordArray *, _texs,
	                   Properties::NON_VIRTUAL,
	                   Properties::NON_CONST,
	                   __TexCoordArray_P1___texs,
	                   "",
	                   "");
	I_ProtectedMethod0(const osgWidget::TexCoordArray *, _texs,
	                   Properties::NON_VIRTUAL,
	                   Properties::CONST,
	                   __C5_TexCoordArray_P1___texs,
	                   "",
	                   "");
	I_ProtectedMethod0(osg::Texture2D *, _texture,
	                   Properties::NON_VIRTUAL,
	                   Properties::NON_CONST,
	                   __osg_Texture2D_P1___texture,
	                   "",
	                   "");
	I_ProtectedMethod0(const osg::Texture2D *, _texture,
	                   Properties::NON_VIRTUAL,
	                   Properties::CONST,
	                   __C5_osg_Texture2D_P1___texture,
	                   "",
	                   "");
	I_ProtectedMethod0(osg::Image *, _image,
	                   Properties::NON_VIRTUAL,
	                   Properties::NON_CONST,
	                   __osg_Image_P1___image,
	                   "",
	                   "");
	I_ProtectedMethod0(const osg::Image *, _image,
	                   Properties::NON_VIRTUAL,
	                   Properties::CONST,
	                   __C5_osg_Image_P1___image,
	                   "",
	                   "");
	I_ProtectedMethod0(osgWidget::WindowManager *, _getWindowManager,
	                   Properties::NON_VIRTUAL,
	                   Properties::CONST,
	                   __WindowManager_P1___getWindowManager,
	                   "",
	                   "");
	I_ProtectedMethod0(osg::Image *, _getImage,
	                   Properties::NON_VIRTUAL,
	                   Properties::CONST,
	                   __osg_Image_P1___getImage,
	                   "",
	                   "");
	I_SimpleProperty(osgWidget::Widget::HorizontalAlignment, AlignHorizontal, 
	                 __HorizontalAlignment__getAlignHorizontal, 
	                 __void__setAlignHorizontal__HorizontalAlignment);
	I_SimpleProperty(osgWidget::Widget::VerticalAlignment, AlignVertical, 
	                 __VerticalAlignment__getAlignVertical, 
	                 __void__setAlignVertical__VerticalAlignment);
	I_SimpleProperty(bool, CanClone, 
	                 0, 
	                 __void__setCanClone__bool);
	I_SimpleProperty(bool, CanFill, 
	                 0, 
	                 __void__setCanFill__bool);
	I_SimpleProperty(osgWidget::Widget::CoordinateMode, CoordinateMode, 
	                 __CoordinateMode__getCoordinateMode, 
	                 __void__setCoordinateMode__CoordinateMode);
	I_SimpleProperty(osgWidget::Quad, Dimensions, 
	                 __Quad__getDimensions, 
	                 0);
	I_SimpleProperty(osgWidget::point_type, FillAsNumeric, 
	                 __point_type__getFillAsNumeric, 
	                 0);
	I_SimpleProperty(osgWidget::point_type, Height, 
	                 __point_type__getHeight, 
	                 __void__setHeight__point_type);
	I_SimpleProperty(osgWidget::point_type, HeightTotal, 
	                 __point_type__getHeightTotal, 
	                 0);
	I_SimpleProperty(unsigned int, Index, 
	                 __unsigned_int__getIndex, 
	                 0);
	I_SimpleProperty(unsigned int, Layer, 
	                 __unsigned_int__getLayer, 
	                 0);
	I_SimpleProperty(osgWidget::point_type, MinHeight, 
	                 __point_type__getMinHeight, 
	                 0);
	I_SimpleProperty(osgWidget::point_type, MinHeightTotal, 
	                 __point_type__getMinHeightTotal, 
	                 0);
	I_SimpleProperty(osgWidget::point_type, MinWidth, 
	                 __point_type__getMinWidth, 
	                 0);
	I_SimpleProperty(osgWidget::point_type, MinWidthTotal, 
	                 __point_type__getMinWidthTotal, 
	                 0);
	I_SimpleProperty(const osgWidget::XYCoord &, MinimumSize, 
	                 0, 
	                 __void__setMinimumSize__C5_XYCoord_R1);
	I_SimpleProperty(osgWidget::XYCoord, Origin, 
	                 __XYCoord__getOrigin, 
	                 __void__setOrigin__C5_XYCoord_R1);
	I_SimpleProperty(osgWidget::point_type, PadBottom, 
	                 __point_type__getPadBottom, 
	                 __void__setPadBottom__point_type);
	I_SimpleProperty(osgWidget::point_type, PadHorizontal, 
	                 __point_type__getPadHorizontal, 
	                 0);
	I_SimpleProperty(osgWidget::point_type, PadLeft, 
	                 __point_type__getPadLeft, 
	                 __void__setPadLeft__point_type);
	I_SimpleProperty(osgWidget::point_type, PadRight, 
	                 __point_type__getPadRight, 
	                 __void__setPadRight__point_type);
	I_SimpleProperty(osgWidget::point_type, PadTop, 
	                 __point_type__getPadTop, 
	                 __void__setPadTop__point_type);
	I_SimpleProperty(osgWidget::point_type, PadVertical, 
	                 __point_type__getPadVertical, 
	                 0);
	I_SimpleProperty(osgWidget::point_type, Padding, 
	                 0, 
	                 __void__setPadding__point_type);
	I_SimpleProperty(osgWidget::Window *, Parent, 
	                 __Window_P1__getParent, 
	                 0);
	I_SimpleProperty(osgWidget::Point, Position, 
	                 __Point__getPosition, 
	                 0);
	I_SimpleProperty(osgWidget::XYCoord, Size, 
	                 __XYCoord__getSize, 
	                 __void__setSize__C5_XYCoord_R1);
	I_SimpleProperty(osgWidget::point_type, Width, 
	                 __point_type__getWidth, 
	                 __void__setWidth__point_type);
	I_SimpleProperty(osgWidget::point_type, WidthTotal, 
	                 __point_type__getWidthTotal, 
	                 0);
	I_SimpleProperty(osgWidget::WindowManager *, WindowManager, 
	                 __WindowManager_P1__getWindowManager, 
	                 0);
	I_SimpleProperty(osgWidget::point_type, X, 
	                 __point_type__getX, 
	                 __void__setX__point_type);
	I_SimpleProperty(osgWidget::point_type, Y, 
	                 __point_type__getY, 
	                 __void__setY__point_type);
	I_SimpleProperty(osgWidget::point_type, Z, 
	                 __point_type__getZ, 
	                 __void__setZ__point_type);
END_REFLECTOR

TYPE_NAME_ALIAS(std::list< osg::observer_ptr< osgWidget::Widget > >, osgWidget::WidgetList)

BEGIN_OBJECT_REFLECTOR(osg::observer_ptr< osgWidget::Widget >)
	I_DeclaringFile("osg/observer_ptr");
	I_BaseType(osg::Observer);
	I_Constructor0(____observer_ptr,
	               "",
	               "");
	I_Constructor1(IN, osgWidget::Widget *, t,
	               Properties::NON_EXPLICIT,
	               ____observer_ptr__T_P1,
	               "",
	               "");
	I_Constructor1(IN, const osg::observer_ptr< osgWidget::Widget > &, rp,
	               Properties::NON_EXPLICIT,
	               ____observer_ptr__C5_observer_ptr_R1,
	               "",
	               "");
	I_Method1(void, objectDeleted, IN, void *, x,
	          Properties::VIRTUAL,
	          __void__objectDeleted__void_P1,
	          "",
	          "");
	I_Method0(osgWidget::Widget *, get,
	          Properties::NON_VIRTUAL,
	          __T_P1__get,
	          "",
	          "");
	I_Method0(bool, valid,
	          Properties::NON_VIRTUAL,
	          __bool__valid,
	          "",
	          "");
	I_SimpleProperty(osgWidget::Widget *, , 
	                 __T_P1__get, 
	                 0);
END_REFLECTOR

STD_LIST_REFLECTOR(std::list< osg::observer_ptr< osgWidget::Widget > >)

