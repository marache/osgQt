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

#include <osg/ApplicationUsage>
#include <osg/Matrixd>
#include <osg/Node>
#include <osgGA/GUIActionAdapter>
#include <osgGA/GUIEventAdapter>
#include <osgGA/TerrainManipulator>
#include <osgUtil/SceneView>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

BEGIN_ENUM_REFLECTOR(osgGA::TerrainManipulator::RotationMode)
	I_EnumLabel(osgGA::TerrainManipulator::ELEVATION_AZIM_ROLL);
	I_EnumLabel(osgGA::TerrainManipulator::ELEVATION_AZIM);
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osgGA::TerrainManipulator)
	I_BaseType(osgGA::MatrixManipulator);
	I_Constructor0();
	I_Method0(const char *, className);
	I_Method1(void, setRotationMode, IN, osgGA::TerrainManipulator::RotationMode, mode);
	I_Method0(osgGA::TerrainManipulator::RotationMode, getRotationMode);
	I_Method1(void, setByMatrix, IN, const osg::Matrixd &, matrix);
	I_Method1(void, setByInverseMatrix, IN, const osg::Matrixd &, matrix);
	I_Method0(osg::Matrixd, getMatrix);
	I_Method0(osg::Matrixd, getInverseMatrix);
	I_Method0(osgUtil::SceneView::FusionDistanceMode, getFusionDistanceMode);
	I_Method0(float, getFusionDistanceValue);
	I_Method1(void, setNode, IN, osg::Node *, x);
	I_Method0(const osg::Node *, getNode);
	I_Method0(osg::Node *, getNode);
	I_Method2(void, home, IN, const osgGA::GUIEventAdapter &, ea, IN, osgGA::GUIActionAdapter &, us);
	I_Method2(void, init, IN, const osgGA::GUIEventAdapter &, ea, IN, osgGA::GUIActionAdapter &, us);
	I_Method2(bool, handle, IN, const osgGA::GUIEventAdapter &, ea, IN, osgGA::GUIActionAdapter &, us);
	I_Method1(void, getUsage, IN, osg::ApplicationUsage &, usage);
	I_WriteOnlyProperty(const osg::Matrixd &, ByInverseMatrix);
	I_WriteOnlyProperty(const osg::Matrixd &, ByMatrix);
	I_ReadOnlyProperty(osgUtil::SceneView::FusionDistanceMode, FusionDistanceMode);
	I_ReadOnlyProperty(float, FusionDistanceValue);
	I_ReadOnlyProperty(osg::Matrixd, InverseMatrix);
	I_ReadOnlyProperty(osg::Matrixd, Matrix);
	I_Property(osg::Node *, Node);
	I_Property(osgGA::TerrainManipulator::RotationMode, RotationMode);
END_REFLECTOR

