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

#include <osg/Image>
#include <osg/Node>
#include <osg/Object>
#include <osg/Shape>
#include <osgDB/Archive>
#include <osgDB/ReaderWriter>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

TYPE_NAME_ALIAS(std::vector< std::string >, osgDB::Archive::FileNameList);

BEGIN_ABSTRACT_OBJECT_REFLECTOR(osgDB::Archive)
	I_BaseType(osgDB::ReaderWriter);
	I_Constructor0();
	I_Method0(const char *, libraryName);
	I_Method0(const char *, className);
	I_Method1(bool, acceptsExtension, IN, const std::string &, x);
	I_Method0(void, close);
	I_Method1(bool, fileExists, IN, const std::string &, filename);
	I_Method0(std::string, getMasterFileName);
	I_Method1(bool, getFileNames, IN, osgDB::Archive::FileNameList &, fileNameList);
	I_MethodWithDefaults2(osgDB::ReaderWriter::ReadResult, readObject, IN, const std::string &, x, , IN, const osgDB::ReaderWriter::Options *, x, NULL);
	I_MethodWithDefaults2(osgDB::ReaderWriter::ReadResult, readImage, IN, const std::string &, x, , IN, const osgDB::ReaderWriter::Options *, x, NULL);
	I_MethodWithDefaults2(osgDB::ReaderWriter::ReadResult, readHeightField, IN, const std::string &, x, , IN, const osgDB::ReaderWriter::Options *, x, NULL);
	I_MethodWithDefaults2(osgDB::ReaderWriter::ReadResult, readNode, IN, const std::string &, x, , IN, const osgDB::ReaderWriter::Options *, x, NULL);
	I_MethodWithDefaults3(osgDB::ReaderWriter::WriteResult, writeObject, IN, const osg::Object &, x, , IN, const std::string &, x, , IN, const osgDB::ReaderWriter::Options *, x, NULL);
	I_MethodWithDefaults3(osgDB::ReaderWriter::WriteResult, writeImage, IN, const osg::Image &, x, , IN, const std::string &, x, , IN, const osgDB::ReaderWriter::Options *, x, NULL);
	I_MethodWithDefaults3(osgDB::ReaderWriter::WriteResult, writeHeightField, IN, const osg::HeightField &, x, , IN, const std::string &, x, , IN, const osgDB::ReaderWriter::Options *, x, NULL);
	I_MethodWithDefaults3(osgDB::ReaderWriter::WriteResult, writeNode, IN, const osg::Node &, x, , IN, const std::string &, x, , IN, const osgDB::ReaderWriter::Options *, x, NULL);
	I_ReadOnlyProperty(std::string, MasterFileName);
END_REFLECTOR

