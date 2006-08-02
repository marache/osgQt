// ***************************************************************************
//
//   Generated automatically by genwrapper.
//   Please DO NOT EDIT this file!
//
// ***************************************************************************

#include <osgIntrospection/ReflectionMacros>
#include <osgIntrospection/TypedMethodInfo>
#include <osgIntrospection/Attributes>

#include <osg/BoundingBox>
#include <osg/CopyOp>
#include <osg/Drawable>
#include <osg/Object>
#include <osg/PrimitiveSet>
#include <osg/Quat>
#include <osg/State>
#include <osg/Vec3>
#include <osg/Vec4>
#include <osgText/Font>
#include <osgText/String>
#include <osgText/Text>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

TYPE_NAME_ALIAS(std::map< osg::ref_ptr< osgText::Font::GlyphTexture > COMMA  osgText::Text::GlyphQuads >, osgText::Text::TextureGlyphQuadMap);

BEGIN_ENUM_REFLECTOR(osgText::Text::CharacterSizeMode)
	I_EnumLabel(osgText::Text::OBJECT_COORDS);
	I_EnumLabel(osgText::Text::SCREEN_COORDS);
	I_EnumLabel(osgText::Text::OBJECT_COORDS_WITH_MAXIMUM_SCREEN_SIZE_CAPPED_BY_FONT_HEIGHT);
END_REFLECTOR

BEGIN_ENUM_REFLECTOR(osgText::Text::AlignmentType)
	I_EnumLabel(osgText::Text::LEFT_TOP);
	I_EnumLabel(osgText::Text::LEFT_CENTER);
	I_EnumLabel(osgText::Text::LEFT_BOTTOM);
	I_EnumLabel(osgText::Text::CENTER_TOP);
	I_EnumLabel(osgText::Text::CENTER_CENTER);
	I_EnumLabel(osgText::Text::CENTER_BOTTOM);
	I_EnumLabel(osgText::Text::RIGHT_TOP);
	I_EnumLabel(osgText::Text::RIGHT_CENTER);
	I_EnumLabel(osgText::Text::RIGHT_BOTTOM);
	I_EnumLabel(osgText::Text::LEFT_BASE_LINE);
	I_EnumLabel(osgText::Text::CENTER_BASE_LINE);
	I_EnumLabel(osgText::Text::RIGHT_BASE_LINE);
	I_EnumLabel(osgText::Text::LEFT_BOTTOM_BASE_LINE);
	I_EnumLabel(osgText::Text::CENTER_BOTTOM_BASE_LINE);
	I_EnumLabel(osgText::Text::RIGHT_BOTTOM_BASE_LINE);
	I_EnumLabel(osgText::Text::BASE_LINE);
END_REFLECTOR

BEGIN_ENUM_REFLECTOR(osgText::Text::AxisAlignment)
	I_EnumLabel(osgText::Text::XY_PLANE);
	I_EnumLabel(osgText::Text::REVERSED_XY_PLANE);
	I_EnumLabel(osgText::Text::XZ_PLANE);
	I_EnumLabel(osgText::Text::REVERSED_XZ_PLANE);
	I_EnumLabel(osgText::Text::YZ_PLANE);
	I_EnumLabel(osgText::Text::REVERSED_YZ_PLANE);
	I_EnumLabel(osgText::Text::SCREEN);
END_REFLECTOR

BEGIN_ENUM_REFLECTOR(osgText::Text::Layout)
	I_EnumLabel(osgText::Text::LEFT_TO_RIGHT);
	I_EnumLabel(osgText::Text::RIGHT_TO_LEFT);
	I_EnumLabel(osgText::Text::VERTICAL);
END_REFLECTOR

BEGIN_ENUM_REFLECTOR(osgText::Text::DrawModeMask)
	I_EnumLabel(osgText::Text::TEXT);
	I_EnumLabel(osgText::Text::BOUNDINGBOX);
	I_EnumLabel(osgText::Text::ALIGNMENT);
END_REFLECTOR

BEGIN_ENUM_REFLECTOR(osgText::Text::BackdropType)
	I_EnumLabel(osgText::Text::DROP_SHADOW_BOTTOM_RIGHT);
	I_EnumLabel(osgText::Text::DROP_SHADOW_CENTER_RIGHT);
	I_EnumLabel(osgText::Text::DROP_SHADOW_TOP_RIGHT);
	I_EnumLabel(osgText::Text::DROP_SHADOW_BOTTOM_CENTER);
	I_EnumLabel(osgText::Text::DROP_SHADOW_TOP_CENTER);
	I_EnumLabel(osgText::Text::DROP_SHADOW_BOTTOM_LEFT);
	I_EnumLabel(osgText::Text::DROP_SHADOW_CENTER_LEFT);
	I_EnumLabel(osgText::Text::DROP_SHADOW_TOP_LEFT);
	I_EnumLabel(osgText::Text::OUTLINE);
	I_EnumLabel(osgText::Text::NONE);
END_REFLECTOR

BEGIN_ENUM_REFLECTOR(osgText::Text::BackdropImplementation)
	I_EnumLabel(osgText::Text::POLYGON_OFFSET);
	I_EnumLabel(osgText::Text::NO_DEPTH_BUFFER);
	I_EnumLabel(osgText::Text::DEPTH_RANGE);
	I_EnumLabel(osgText::Text::STENCIL_BUFFER);
END_REFLECTOR

BEGIN_ENUM_REFLECTOR(osgText::Text::ColorGradientMode)
	I_EnumLabel(osgText::Text::SOLID);
	I_EnumLabel(osgText::Text::PER_CHARACTER);
	I_EnumLabel(osgText::Text::OVERALL);
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osgText::Text)
	I_BaseType(osg::Drawable);
	I_Constructor0();
	I_ConstructorWithDefaults2(IN, const osgText::Text &, text, , IN, const osg::CopyOp &, copyop, osg::CopyOp::SHALLOW_COPY);
	I_Method0(osg::Object *, cloneType);
	I_Method1(osg::Object *, clone, IN, const osg::CopyOp &, copyop);
	I_Method1(bool, isSameKindAs, IN, const osg::Object *, obj);
	I_Method0(const char *, className);
	I_Method0(const char *, libraryName);
	I_MethodWithDefaults1(void, setFont, IN, osgText::Font *, font, 0);
	I_Method1(void, setFont, IN, const std::string &, fontfile);
	I_Method0(const osgText::Font *, getFont);
	I_Method2(void, setFontResolution, IN, unsigned int, width, IN, unsigned int, height);
	I_Method0(unsigned int, getFontWidth);
	I_Method0(unsigned int, getFontHeight);
	I_Method1(void, setText, IN, const osgText::String &, text);
	I_Method1(void, setText, IN, const std::string &, text);
	I_Method2(void, setText, IN, const std::string &, text, IN, osgText::String::Encoding, encoding);
	I_Method1(void, setText, IN, const wchar_t *, text);
	I_Method0(osgText::String &, getText);
	I_Method0(const osgText::String &, getText);
	I_Method0(void, update);
	I_MethodWithDefaults2(void, setCharacterSize, IN, float, height, , IN, float, aspectRatio, 1.0f);
	I_Method0(float, getCharacterHeight);
	I_Method0(float, getCharacterAspectRatio);
	I_Method1(void, setCharacterSizeMode, IN, osgText::Text::CharacterSizeMode, mode);
	I_Method0(osgText::Text::CharacterSizeMode, getCharacterSizeMode);
	I_Method1(void, setMaximumWidth, IN, float, maximumWidth);
	I_Method0(float, getMaximumWidth);
	I_Method1(void, setMaximumHeight, IN, float, maximumHeight);
	I_Method0(float, getMaximumHeight);
	I_Method1(void, setPosition, IN, const osg::Vec3 &, pos);
	I_Method0(const osg::Vec3 &, getPosition);
	I_Method1(void, setAlignment, IN, osgText::Text::AlignmentType, alignment);
	I_Method0(osgText::Text::AlignmentType, getAlignment);
	I_Method1(void, setAxisAlignment, IN, osgText::Text::AxisAlignment, axis);
	I_Method1(void, setRotation, IN, const osg::Quat &, quat);
	I_Method0(const osg::Quat &, getRotation);
	I_Method1(void, setAutoRotateToScreen, IN, bool, autoRotateToScreen);
	I_Method0(bool, getAutoRotateToScreen);
	I_Method1(void, setLayout, IN, osgText::Text::Layout, layout);
	I_Method0(osgText::Text::Layout, getLayout);
	I_Method1(void, setColor, IN, const osg::Vec4 &, color);
	I_Method0(const osg::Vec4 &, getColor);
	I_Method1(void, setDrawMode, IN, unsigned int, mode);
	I_Method0(unsigned int, getDrawMode);
	I_Method1(void, setBackdropType, IN, osgText::Text::BackdropType, type);
	I_Method0(osgText::Text::BackdropType, getBackdropType);
	I_MethodWithDefaults1(void, setBackdropOffset, IN, float, offset, 0.07f);
	I_Method2(void, setBackdropOffset, IN, float, horizontal, IN, float, vertical);
	I_Method0(float, getBackdropHorizontalOffet);
	I_Method0(float, getBackdropVerticalOffset);
	I_Method1(void, setBackdropColor, IN, const osg::Vec4 &, color);
	I_Method0(const osg::Vec4 &, getBackdropColor);
	I_Method1(void, setBackdropImplementation, IN, osgText::Text::BackdropImplementation, implementation);
	I_Method0(osgText::Text::BackdropImplementation, getBackdropImplementation);
	I_Method1(void, setColorGradientMode, IN, osgText::Text::ColorGradientMode, mode);
	I_Method0(osgText::Text::ColorGradientMode, getColorGradientMode);
	I_Method4(void, setColorGradientCorners, IN, const osg::Vec4 &, topLeft, IN, const osg::Vec4 &, bottomLeft, IN, const osg::Vec4 &, bottomRight, IN, const osg::Vec4 &, topRight);
	I_Method0(const osg::Vec4 &, getColorGradientTopLeft);
	I_Method0(const osg::Vec4 &, getColorGradientBottomLeft);
	I_Method0(const osg::Vec4 &, getColorGradientBottomRight);
	I_Method0(const osg::Vec4 &, getColorGradientTopRight);
	I_Method1(void, setKerningType, IN, osgText::KerningType, kerningType);
	I_Method0(osgText::KerningType, getKerningType);
	I_Method0(unsigned int, getLineCount);
	I_Method1(void, drawImplementation, IN, osg::State &, state);
	I_Method1(bool, supports, IN, const osg::Drawable::AttributeFunctor &, x);
	I_Method1(bool, supports, IN, const osg::Drawable::ConstAttributeFunctor &, x);
	I_Method1(void, accept, IN, osg::Drawable::ConstAttributeFunctor &, af);
	I_Method1(bool, supports, IN, const osg::PrimitiveFunctor &, x);
	I_Method1(void, accept, IN, osg::PrimitiveFunctor &, pf);
	I_MethodWithDefaults1(void, releaseGLObjects, IN, osg::State *, state, 0);
	I_Method1(const osgText::Text::GlyphQuads *, getGlyphQuads, IN, osgText::Font::GlyphTexture *, texture);
	I_Method0(const osgText::Text::TextureGlyphQuadMap &, getTextureGlyphQuadMap);
	I_Method0(osg::BoundingBox, computeBound);
	I_Property(osgText::Text::AlignmentType, Alignment);
	I_Property(bool, AutoRotateToScreen);
	I_WriteOnlyProperty(osgText::Text::AxisAlignment, AxisAlignment);
	I_Property(const osg::Vec4 &, BackdropColor);
	I_ReadOnlyProperty(float, BackdropHorizontalOffet);
	I_Property(osgText::Text::BackdropImplementation, BackdropImplementation);
	I_WriteOnlyProperty(float, BackdropOffset);
	I_Property(osgText::Text::BackdropType, BackdropType);
	I_ReadOnlyProperty(float, BackdropVerticalOffset);
	I_ReadOnlyProperty(float, CharacterAspectRatio);
	I_ReadOnlyProperty(float, CharacterHeight);
	I_Property(osgText::Text::CharacterSizeMode, CharacterSizeMode);
	I_Property(const osg::Vec4 &, Color);
	I_ReadOnlyProperty(const osg::Vec4 &, ColorGradientBottomLeft);
	I_ReadOnlyProperty(const osg::Vec4 &, ColorGradientBottomRight);
	I_Property(osgText::Text::ColorGradientMode, ColorGradientMode);
	I_ReadOnlyProperty(const osg::Vec4 &, ColorGradientTopLeft);
	I_ReadOnlyProperty(const osg::Vec4 &, ColorGradientTopRight);
	I_Property(unsigned int, DrawMode);
	I_WriteOnlyProperty(osgText::Font *, Font);
	I_ReadOnlyProperty(unsigned int, FontHeight);
	I_ReadOnlyProperty(unsigned int, FontWidth);
	I_Property(osgText::KerningType, KerningType);
	I_Property(osgText::Text::Layout, Layout);
	I_ReadOnlyProperty(unsigned int, LineCount);
	I_Property(float, MaximumHeight);
	I_Property(float, MaximumWidth);
	I_Property(const osg::Vec3 &, Position);
	I_Property(const osg::Quat &, Rotation);
	I_Property(const osgText::String &, Text);
	I_ReadOnlyProperty(const osgText::Text::TextureGlyphQuadMap &, TextureGlyphQuadMap);
END_REFLECTOR

TYPE_NAME_ALIAS(std::vector< osgText::Font::Glyph * >, osgText::Text::GlyphQuads::Glyphs);

TYPE_NAME_ALIAS(std::vector< unsigned int >, osgText::Text::GlyphQuads::LineNumbers);

TYPE_NAME_ALIAS(std::vector< osg::Vec2 >, osgText::Text::GlyphQuads::Coords2);

TYPE_NAME_ALIAS(std::vector< osg::Vec3 >, osgText::Text::GlyphQuads::Coords3);

TYPE_NAME_ALIAS(std::vector< osg::Vec2 >, osgText::Text::GlyphQuads::TexCoords);

TYPE_NAME_ALIAS(std::vector< osg::Vec4 >, osgText::Text::GlyphQuads::ColorCoords);

BEGIN_VALUE_REFLECTOR(osgText::Text::GlyphQuads)
	I_Constructor0();
	I_Method0(osgText::Text::GlyphQuads::Glyphs, getGlyphs);
	I_Method0(const osgText::Text::GlyphQuads::Glyphs, getGlyphs);
	I_Method0(osgText::Text::GlyphQuads::Coords2 &, getCoords);
	I_Method0(const osgText::Text::GlyphQuads::Coords2 &, getCoords);
	I_Method1(osgText::Text::GlyphQuads::Coords3 &, getTransformedCoords, IN, unsigned int, contexID);
	I_Method1(const osgText::Text::GlyphQuads::Coords3 &, getTransformedCoords, IN, unsigned int, contexID);
	I_Method0(osgText::Text::GlyphQuads::TexCoords &, getTexCoords);
	I_Method0(const osgText::Text::GlyphQuads::TexCoords &, getTexCoords);
	I_Method0(osgText::Text::GlyphQuads::LineNumbers &, getLineNumbers);
	I_Method0(const osgText::Text::GlyphQuads::LineNumbers &, getLineNumbers);
	I_ReadOnlyProperty(osgText::Text::GlyphQuads::Coords2 &, Coords);
	I_ReadOnlyProperty(osgText::Text::GlyphQuads::Glyphs, Glyphs);
	I_ReadOnlyProperty(osgText::Text::GlyphQuads::LineNumbers &, LineNumbers);
	I_ReadOnlyProperty(osgText::Text::GlyphQuads::TexCoords &, TexCoords);
END_REFLECTOR

BEGIN_VALUE_REFLECTOR(osg::ref_ptr< osgText::Font::GlyphTexture >)
	I_Constructor0();
	I_Constructor1(IN, osgText::Font::GlyphTexture *, ptr);
	I_Constructor1(IN, const osg::ref_ptr< osgText::Font::GlyphTexture > &, rp);
	I_Method0(osgText::Font::GlyphTexture *, get);
	I_Method0(bool, valid);
	I_Method0(osgText::Font::GlyphTexture *, release);
	I_Method1(void, swap, IN, osg::ref_ptr< osgText::Font::GlyphTexture > &, rp);
	I_ReadOnlyProperty(osgText::Font::GlyphTexture *, );
END_REFLECTOR

STD_MAP_REFLECTOR(std::map< osg::ref_ptr< osgText::Font::GlyphTexture > COMMA  osgText::Text::GlyphQuads >);

STD_VECTOR_REFLECTOR(std::vector< osgText::Font::Glyph * >);

