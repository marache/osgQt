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
#include <osg/CoordinateSystemNode>
#include <osg/Image>
#include <osg/Matrixd>
#include <osg/Node>
#include <osg/State>
#include <osg/StateSet>
#include <osg/Vec4>
#include <osgDB/Archive>
#include <osgTerrain/DataSet>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

TYPE_NAME_ALIAS(std::map< unsigned int COMMA  osgTerrain::DataSet::CompositeDestination * >, osgTerrain::DataSet::Row);

TYPE_NAME_ALIAS(std::map< unsigned int COMMA  osgTerrain::DataSet::Row >, osgTerrain::DataSet::Level);

TYPE_NAME_ALIAS(std::map< unsigned int COMMA  osgTerrain::DataSet::Level >, osgTerrain::DataSet::QuadMap);

BEGIN_ENUM_REFLECTOR(osgTerrain::DataSet::CompositeType)
	I_EnumLabel(osgTerrain::DataSet::GROUP);
	I_EnumLabel(osgTerrain::DataSet::LOD);
	I_EnumLabel(osgTerrain::DataSet::PAGED_LOD);
END_REFLECTOR

BEGIN_ENUM_REFLECTOR(osgTerrain::DataSet::DatabaseType)
	I_EnumLabel(osgTerrain::DataSet::LOD_DATABASE);
	I_EnumLabel(osgTerrain::DataSet::PagedLOD_DATABASE);
END_REFLECTOR

BEGIN_ENUM_REFLECTOR(osgTerrain::DataSet::GeometryType)
	I_EnumLabel(osgTerrain::DataSet::HEIGHT_FIELD);
	I_EnumLabel(osgTerrain::DataSet::POLYGONAL);
END_REFLECTOR

BEGIN_ENUM_REFLECTOR(osgTerrain::DataSet::TextureType)
	I_EnumLabel(osgTerrain::DataSet::RGB_24);
	I_EnumLabel(osgTerrain::DataSet::RGBA);
	I_EnumLabel(osgTerrain::DataSet::RGB_16);
	I_EnumLabel(osgTerrain::DataSet::RGBA_16);
	I_EnumLabel(osgTerrain::DataSet::COMPRESSED_TEXTURE);
	I_EnumLabel(osgTerrain::DataSet::COMPRESSED_RGBA_TEXTURE);
END_REFLECTOR

BEGIN_ENUM_REFLECTOR(osgTerrain::DataSet::MipMappingMode)
	I_EnumLabel(osgTerrain::DataSet::NO_MIP_MAPPING);
	I_EnumLabel(osgTerrain::DataSet::MIP_MAPPING_HARDWARE);
	I_EnumLabel(osgTerrain::DataSet::MIP_MAPPING_IMAGERY);
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osgTerrain::DataSet)
	I_BaseType(osg::Referenced);
	I_Method1(void, insertTileToQuadMap, IN, osgTerrain::DataSet::CompositeDestination *, tile);
	I_Method3(osgTerrain::DataSet::DestinationTile *, getTile, IN, unsigned int, level, IN, unsigned int, X, IN, unsigned int, Y);
	I_Method3(osgTerrain::DataSet::CompositeDestination *, getComposite, IN, unsigned int, level, IN, unsigned int, X, IN, unsigned int, Y);
	I_Method2(osgTerrain::DataSet::Row &, getRow, IN, unsigned int, level, IN, unsigned int, Y);
	I_Constructor0();
	I_Method1(void, addSource, IN, osgTerrain::DataSet::Source *, source);
	I_Method1(void, addSource, IN, osgTerrain::DataSet::CompositeSource *, composite);
	I_Method0(void, loadSources);
	I_Method1(void, setMaximumTileImageSize, IN, unsigned int, size);
	I_Method0(unsigned int, getMaximumTileImageSize);
	I_Method1(void, setMaximumTileTerrainSize, IN, unsigned int, size);
	I_Method0(unsigned int, getMaximumTileTerrainSize);
	I_Method1(void, setMaximumVisibleDistanceOfTopLevel, IN, float, d);
	I_Method0(float, getMaximumVisibleDistanceOfTopLevel);
	I_Method1(void, setRadiusToMaxVisibleDistanceRatio, IN, float, ratio);
	I_Method0(float, getRadiusToMaxVisibleDistanceRatio);
	I_Method1(void, setVerticalScale, IN, float, verticalScale);
	I_Method0(float, getVerticalScale);
	I_Method1(void, setSkirtRatio, IN, float, skirtRatio);
	I_Method0(float, getSkirtRatio);
	I_Method1(void, setDefaultColor, IN, const osg::Vec4 &, defaultColor);
	I_Method0(const osg::Vec4 &, getDefaultColor);
	I_Method1(void, setDestinationCoordinateSystem, IN, const std::string &, wellKnownText);
	I_Method1(void, setDestinationCoordinateSystem, IN, osg::CoordinateSystemNode *, cs);
	I_Method0(osg::CoordinateSystemNode *, getDestinationCoordinateSystem);
	I_Method1(void, setIntermediateCoordinateSystem, IN, const std::string &, wellKnownText);
	I_Method1(void, setIntermediateCoordinateSystem, IN, osg::CoordinateSystemNode *, cs);
	I_Method0(osg::CoordinateSystemNode *, getIntermediateCoordinateSystem);
	I_Method1(void, setConvertFromGeographicToGeocentric, IN, bool, flag);
	I_Method0(bool, getConvertFromGeographicToGeocentric);
	I_Method1(void, setEllipsoidModel, IN, osg::EllipsoidModel *, et);
	I_Method0(osg::EllipsoidModel *, getEllipsoidModel);
	I_Method0(const osg::EllipsoidModel *, getEllipsoidModel);
	I_Method0(bool, mapLatLongsToXYZ);
	I_Method1(void, setDestinationExtents, IN, const osg::BoundingBox &, extents);
	I_Method1(void, setDestinationGeoTransform, IN, const osg::Matrixd &, geoTransform);
	I_Method1(void, setArchiveName, IN, const std::string &, filename);
	I_Method0(const std::string &, getArchiveName);
	I_Method1(void, setArchive, IN, osgDB::Archive *, archive);
	I_Method0(osgDB::Archive *, getArchive);
	I_Method1(void, setDestinationName, IN, const std::string &, filename);
	I_Method1(void, setDirectory, IN, const std::string &, directory);
	I_Method0(const std::string &, getDirectory);
	I_Method1(void, setDestinationTileBaseName, IN, const std::string &, basename);
	I_Method0(const std::string &, getDestinationTileBaseName);
	I_Method1(void, setDestinationTileExtension, IN, const std::string &, extension);
	I_Method0(const std::string &, getDestinationTileExtension);
	I_Method1(void, setDestinationImageExtension, IN, const std::string &, extension);
	I_Method0(const std::string &, getDestinationImageExtension);
	I_Method1(void, setDatabaseType, IN, osgTerrain::DataSet::DatabaseType, type);
	I_Method0(osgTerrain::DataSet::DatabaseType, getDatabaseType);
	I_Method1(void, setGeometryType, IN, osgTerrain::DataSet::GeometryType, type);
	I_Method0(osgTerrain::DataSet::GeometryType, getGeometryType);
	I_Method1(void, setTextureType, IN, osgTerrain::DataSet::TextureType, type);
	I_Method0(osgTerrain::DataSet::TextureType, getTextureType);
	I_Method1(void, setMaxAnisotropy, IN, float, d);
	I_Method0(float, getMaxAnisotropy);
	I_Method1(void, setMipMappingMode, IN, osgTerrain::DataSet::MipMappingMode, mipMappingMode);
	I_Method0(osgTerrain::DataSet::MipMappingMode, getMipMappingMode);
	I_Method1(void, setUseLocalTileTransform, IN, bool, flag);
	I_Method0(bool, getUseLocalTileTransform);
	I_Method1(void, setDecorateGeneratedSceneGraphWithCoordinateSystemNode, IN, bool, flag);
	I_Method0(bool, getDecorateGeneratedSceneGraphWithCoordinateSystemNode);
	I_Method1(void, setDecorateGeneratedSceneGraphWithMultiTextureControl, IN, bool, flag);
	I_Method0(bool, getDecorateGeneratedSceneGraphWithMultiTextureControl);
	I_Method0(unsigned int, getNumOfTextureLevels);
	I_Method1(void, setCommentString, IN, const std::string &, comment);
	I_Method0(const std::string &, getCommentString);
	I_Method1(void, setWriteNodeBeforeSimplification, IN, bool, flag);
	I_Method0(bool, getWriteNodeBeforeSimplification);
	I_Method9(osgTerrain::DataSet::CompositeDestination *, createDestinationGraph, IN, osgTerrain::DataSet::CompositeDestination *, parent, IN, osg::CoordinateSystemNode *, cs, IN, const osg::BoundingBox &, extents, IN, unsigned int, maxImageSize, IN, unsigned int, maxTerrainSize, IN, unsigned int, currentLevel, IN, unsigned int, currentX, IN, unsigned int, currentY, IN, unsigned int, maxNumLevels);
	I_Method1(void, computeDestinationGraphFromSources, IN, unsigned int, numLevels);
	I_Method0(void, updateSourcesForDestinationGraphNeeds);
	I_Method0(void, populateDestinationGraphFromSources);
	I_Method1(void, createDestination, IN, unsigned int, numLevels);
	I_Method0(void, buildDestination);
	I_Method0(void, writeDestination);
	I_Method0(osg::Node *, getDestinationRootNode);
	I_Method2(void, _writeNodeFile, IN, const osg::Node &, node, IN, const std::string &, filename);
	I_Method2(void, _writeImageFile, IN, const osg::Image &, image, IN, const std::string &, filename);
	I_Method1(void, setState, IN, osg::State *, state);
	I_Method0(osg::State *, getState);
	I_Property(osgDB::Archive *, Archive);
	I_Property(const std::string &, ArchiveName);
	I_Property(const std::string &, CommentString);
	I_Property(bool, ConvertFromGeographicToGeocentric);
	I_Property(osgTerrain::DataSet::DatabaseType, DatabaseType);
	I_Property(bool, DecorateGeneratedSceneGraphWithCoordinateSystemNode);
	I_Property(bool, DecorateGeneratedSceneGraphWithMultiTextureControl);
	I_Property(const osg::Vec4 &, DefaultColor);
	I_Property(osg::CoordinateSystemNode *, DestinationCoordinateSystem);
	I_WriteOnlyProperty(const osg::BoundingBox &, DestinationExtents);
	I_WriteOnlyProperty(const osg::Matrixd &, DestinationGeoTransform);
	I_Property(const std::string &, DestinationImageExtension);
	I_WriteOnlyProperty(const std::string &, DestinationName);
	I_ReadOnlyProperty(osg::Node *, DestinationRootNode);
	I_Property(const std::string &, DestinationTileBaseName);
	I_Property(const std::string &, DestinationTileExtension);
	I_Property(const std::string &, Directory);
	I_Property(osg::EllipsoidModel *, EllipsoidModel);
	I_Property(osgTerrain::DataSet::GeometryType, GeometryType);
	I_Property(osg::CoordinateSystemNode *, IntermediateCoordinateSystem);
	I_Property(float, MaxAnisotropy);
	I_Property(unsigned int, MaximumTileImageSize);
	I_Property(unsigned int, MaximumTileTerrainSize);
	I_Property(float, MaximumVisibleDistanceOfTopLevel);
	I_Property(osgTerrain::DataSet::MipMappingMode, MipMappingMode);
	I_Property(float, RadiusToMaxVisibleDistanceRatio);
	I_Property(float, SkirtRatio);
	I_Property(osg::State *, State);
	I_Property(osgTerrain::DataSet::TextureType, TextureType);
	I_Property(bool, UseLocalTileTransform);
	I_Property(float, VerticalScale);
	I_Property(bool, WriteNodeBeforeSimplification);
END_REFLECTOR

TYPE_NAME_ALIAS(std::vector< osg::ref_ptr< osgTerrain::DataSet::DestinationTile > >, osgTerrain::DataSet::CompositeDestination::TileList);

TYPE_NAME_ALIAS(std::vector< osg::ref_ptr< osgTerrain::DataSet::CompositeDestination > >, osgTerrain::DataSet::CompositeDestination::ChildList);

BEGIN_OBJECT_REFLECTOR(osgTerrain::DataSet::CompositeDestination)
	I_BaseType(osg::Referenced);
	I_BaseType(osgTerrain::DataSet::SpatialProperties);
	I_Constructor0();
	I_Constructor2(IN, osg::CoordinateSystemNode *, cs, IN, const osg::BoundingBox &, extents);
	I_Method0(void, computeNeighboursFromQuadMap);
	I_Method1(void, addRequiredResolutions, IN, osgTerrain::DataSet::CompositeSource *, sourceGraph);
	I_Method1(void, readFrom, IN, osgTerrain::DataSet::CompositeSource *, sourceGraph);
	I_Method0(void, equalizeBoundaries);
	I_Method0(osg::Node *, createScene);
	I_Method0(bool, areSubTilesComplete);
	I_Method0(std::string, getSubTileName);
	I_Method0(osg::Node *, createPagedLODScene);
	I_Method0(osg::Node *, createSubTileScene);
	I_Method0(void, unrefSubTileData);
	I_Method0(void, unrefLocalData);
	I_Method1(void, setSubTilesGenerated, IN, bool, generated);
	I_Method0(bool, getSubTilesGenerated);
	I_ReadOnlyProperty(std::string, SubTileName);
	I_Property(bool, SubTilesGenerated);
END_REFLECTOR

TYPE_NAME_ALIAS(std::vector< osg::ref_ptr< osgTerrain::DataSet::Source > >, osgTerrain::DataSet::CompositeSource::SourceList);

TYPE_NAME_ALIAS(std::vector< osg::ref_ptr< osgTerrain::DataSet::CompositeSource > >, osgTerrain::DataSet::CompositeSource::ChildList);

TYPE_NAME_ALIAS(osgTerrain::DataSet::CompositeSource::base_source_iterator< osgTerrain::DataSet::CompositeSource::DefaultSourceAdvancer >, osgTerrain::DataSet::CompositeSource::source_iterator);

TYPE_NAME_ALIAS(osgTerrain::DataSet::CompositeSource::base_source_iterator< osgTerrain::DataSet::CompositeSource::LODSourceAdvancer >, osgTerrain::DataSet::CompositeSource::source_lod_iterator);

BEGIN_OBJECT_REFLECTOR(osgTerrain::DataSet::CompositeSource)
	I_BaseType(osg::Referenced);
	I_BaseType(osgTerrain::DataSet::SpatialProperties);
	I_ConstructorWithDefaults1(IN, osgTerrain::DataSet::CompositeType, type, osgTerrain::DataSet::GROUP);
	I_Method1(void, setType, IN, osgTerrain::DataSet::CompositeType, type);
	I_Method0(osgTerrain::DataSet::CompositeType, getType);
	I_Method0(void, setSortValueFromSourceDataResolution);
	I_Method0(void, sort);
	I_Property(osgTerrain::DataSet::CompositeType, Type);
END_REFLECTOR

BEGIN_VALUE_REFLECTOR(osgTerrain::DataSet::CompositeSource::DefaultSourceAdvancer)
	I_Constructor0();
	I_Method2(bool, isActive, IN, const osgTerrain::DataSet::CompositeSource &, x, IN, int, x);
	I_Method2(bool, advanceToNextSource, IN, const osgTerrain::DataSet::CompositeSource &, composite, IN, int &, index);
END_REFLECTOR

BEGIN_ENUM_REFLECTOR(osgTerrain::DataSet::CompositeSource::iterator::IteratorMode)
	I_EnumLabel(osgTerrain::DataSet::CompositeSource::iterator::ACTIVE);
	I_EnumLabel(osgTerrain::DataSet::CompositeSource::iterator::ALL);
END_REFLECTOR

BEGIN_VALUE_REFLECTOR(osgTerrain::DataSet::CompositeSource::iterator)
	I_ConstructorWithDefaults2(IN, osgTerrain::DataSet::CompositeSource *, composite, 0, IN, osgTerrain::DataSet::CompositeSource::iterator::IteratorMode, mode, osgTerrain::DataSet::CompositeSource::iterator::ALL);
	I_Constructor1(IN, const osgTerrain::DataSet::CompositeSource::iterator &, rhs);
	I_Method0(bool, valid);
	I_Method0(bool, advance);
END_REFLECTOR

BEGIN_VALUE_REFLECTOR(osgTerrain::DataSet::CompositeSource::LODSourceAdvancer)
	I_ConstructorWithDefaults1(IN, float, targetResolution, 0.0f);
	I_Method2(bool, advanceToNextSource, IN, const osgTerrain::DataSet::CompositeSource &, composite, IN, int &, index);
END_REFLECTOR

TYPE_NAME_ALIAS(std::vector< osg::ref_ptr< osg::Image > >, osgTerrain::DataSet::DestinationData::ImageList);

TYPE_NAME_ALIAS(std::vector< osg::ref_ptr< osg::Node > >, osgTerrain::DataSet::DestinationData::ModelList);

BEGIN_OBJECT_REFLECTOR(osgTerrain::DataSet::DestinationData)
	I_BaseType(osg::Referenced);
	I_Constructor1(IN, osgTerrain::DataSet *, dataSet);
END_REFLECTOR

TYPE_NAME_ALIAS(std::vector< osg::Vec2 >, osgTerrain::DataSet::DestinationTile::HeightDeltaList);

BEGIN_ENUM_REFLECTOR(osgTerrain::DataSet::DestinationTile::Position)
	I_EnumLabel(osgTerrain::DataSet::DestinationTile::LEFT);
	I_EnumLabel(osgTerrain::DataSet::DestinationTile::LEFT_BELOW);
	I_EnumLabel(osgTerrain::DataSet::DestinationTile::BELOW);
	I_EnumLabel(osgTerrain::DataSet::DestinationTile::BELOW_RIGHT);
	I_EnumLabel(osgTerrain::DataSet::DestinationTile::RIGHT);
	I_EnumLabel(osgTerrain::DataSet::DestinationTile::RIGHT_ABOVE);
	I_EnumLabel(osgTerrain::DataSet::DestinationTile::ABOVE);
	I_EnumLabel(osgTerrain::DataSet::DestinationTile::ABOVE_LEFT);
	I_EnumLabel(osgTerrain::DataSet::DestinationTile::NUMBER_OF_POSITIONS);
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osgTerrain::DataSet::DestinationTile)
	I_BaseType(osg::Referenced);
	I_BaseType(osgTerrain::DataSet::SpatialProperties);
	I_Constructor0();
	I_Method0(void, computeNeighboursFromQuadMap);
	I_Method8(void, setNeighbours, IN, osgTerrain::DataSet::DestinationTile *, left, IN, osgTerrain::DataSet::DestinationTile *, left_below, IN, osgTerrain::DataSet::DestinationTile *, below, IN, osgTerrain::DataSet::DestinationTile *, below_right, IN, osgTerrain::DataSet::DestinationTile *, right, IN, osgTerrain::DataSet::DestinationTile *, right_above, IN, osgTerrain::DataSet::DestinationTile *, above, IN, osgTerrain::DataSet::DestinationTile *, above_left);
	I_Method0(void, checkNeighbouringTiles);
	I_Method2(void, setMaximumImagerySize, IN, unsigned int, maxNumColumns, IN, unsigned int, maxNumRows);
	I_Method2(void, setMaximumTerrainSize, IN, unsigned int, maxNumColumns, IN, unsigned int, maxNumRows);
	I_Method1(void, computeMaximumSourceResolution, IN, osgTerrain::DataSet::CompositeSource *, sourceGraph);
	I_Method5(bool, computeImageResolution, IN, unsigned int, layer, IN, unsigned int &, numColumns, IN, unsigned int &, numRows, IN, double &, resX, IN, double &, resY);
	I_Method4(bool, computeTerrainResolution, IN, unsigned int &, numColumns, IN, unsigned int &, numRows, IN, double &, resX, IN, double &, resY);
	I_Method0(void, allocate);
	I_Method1(void, addRequiredResolutions, IN, osgTerrain::DataSet::CompositeSource *, sourceGraph);
	I_Method1(void, readFrom, IN, osgTerrain::DataSet::CompositeSource *, sourceGraph);
	I_Method0(void, allocateEdgeNormals);
	I_Method1(void, equalizeCorner, IN, osgTerrain::DataSet::DestinationTile::Position, position);
	I_Method1(void, equalizeEdge, IN, osgTerrain::DataSet::DestinationTile::Position, position);
	I_Method0(void, equalizeBoundaries);
	I_Method1(void, setTileComplete, IN, bool, complete);
	I_Method0(bool, getTileComplete);
	I_Method0(void, optimizeResolution);
	I_Method0(osg::Node *, createScene);
	I_Method0(osg::StateSet *, createStateSet);
	I_Method0(osg::Node *, createHeightField);
	I_Method0(osg::Node *, createPolygonal);
	I_Method0(void, unrefData);
	I_Method1(osgTerrain::DataSet::DestinationTile::ImageData &, getImageData, IN, unsigned int, layer);
	I_Property(bool, TileComplete);
END_REFLECTOR

BEGIN_VALUE_REFLECTOR(osgTerrain::DataSet::DestinationTile::ImageData)
	I_Constructor0();
END_REFLECTOR

TYPE_NAME_ALIAS(std::vector< osgTerrain::DataSet::Source::ResolutionPair >, osgTerrain::DataSet::Source::ResolutionList);

BEGIN_ENUM_REFLECTOR(osgTerrain::DataSet::Source::Type)
	I_EnumLabel(osgTerrain::DataSet::Source::IMAGE);
	I_EnumLabel(osgTerrain::DataSet::Source::HEIGHT_FIELD);
	I_EnumLabel(osgTerrain::DataSet::Source::MODEL);
END_REFLECTOR

BEGIN_ENUM_REFLECTOR(osgTerrain::DataSet::Source::ParameterPolicy)
	I_EnumLabel(osgTerrain::DataSet::Source::PREFER_CONFIG_SETTINGS);
	I_EnumLabel(osgTerrain::DataSet::Source::PREFER_CONFIG_SETTINGS_BUT_SCALE_BY_FILE_RESOLUTION);
	I_EnumLabel(osgTerrain::DataSet::Source::PREFER_FILE_SETTINGS);
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osgTerrain::DataSet::Source)
	I_BaseType(osg::Referenced);
	I_BaseType(osgTerrain::DataSet::SpatialProperties);
	I_Constructor0();
	I_Constructor2(IN, osgTerrain::DataSet::Source::Type, type, IN, const std::string &, filename);
	I_Method1(void, setSortValue, IN, double, s);
	I_Method0(double, getSortValue);
	I_Method0(void, setSortValueFromSourceDataResolution);
	I_Method1(void, setType, IN, osgTerrain::DataSet::Source::Type, type);
	I_Method0(osgTerrain::DataSet::Source::Type, getType);
	I_Method1(void, setFileName, IN, const std::string &, filename);
	I_Method0(const std::string &, getFileName);
	I_Method1(void, setTemporaryFile, IN, bool, temporaryFile);
	I_Method0(bool, getTemporaryFile);
	I_Method1(void, setGdalDataSet, IN, GDALDataset *, gdalDataSet);
	I_Method0(GDALDataset *, getGdalDataSet);
	I_Method1(void, setCoordinateSystemPolicy, IN, osgTerrain::DataSet::Source::ParameterPolicy, policy);
	I_Method0(osgTerrain::DataSet::Source::ParameterPolicy, getCoordinateSystemPolicy);
	I_Method1(void, setCoordinateSystem, IN, const std::string &, wellKnownText);
	I_Method1(void, setCoordinateSystem, IN, osg::CoordinateSystemNode *, cs);
	I_Method0(osg::CoordinateSystemNode *, getCoordinateSystem);
	I_Method1(void, setGeoTransformPolicy, IN, osgTerrain::DataSet::Source::ParameterPolicy, policy);
	I_Method0(osgTerrain::DataSet::Source::ParameterPolicy, getGeoTransformPolicy);
	I_Method1(void, setGeoTransform, IN, osg::Matrixd &, transform);
	I_Method0(osg::Matrixd &, getGeoTransform);
	I_Method4(void, setGeoTransformFromRange, IN, double, xMin, IN, double, xMax, IN, double, yMin, IN, double, yMax);
	I_Method0(void, assignCoordinateSystemAndGeoTransformAccordingToParameterPolicy);
	I_Method1(void, setMinLevel, IN, unsigned int, minLevel);
	I_Method1(void, setMaxLevel, IN, unsigned int, maxLevel);
	I_Method2(void, setMinMaxLevel, IN, unsigned int, minLevel, IN, unsigned int, maxLevel);
	I_Method0(unsigned int, getMinLevel);
	I_Method0(unsigned int, getMaxLevel);
	I_Method1(void, setLayer, IN, unsigned int, layer);
	I_Method0(unsigned int, getLayer);
	I_Method1(void, setSourceData, IN, osgTerrain::DataSet::SourceData *, data);
	I_Method0(osgTerrain::DataSet::SourceData *, getSourceData);
	I_Method1(bool, intersects, IN, const osgTerrain::DataSet::SpatialProperties &, sp);
	I_Method0(void, loadSourceData);
	I_Method1(bool, needReproject, IN, const osg::CoordinateSystemNode *, cs);
	I_Method3(bool, needReproject, IN, const osg::CoordinateSystemNode *, cs, IN, double, minResolution, IN, double, maxResolution);
	I_MethodWithDefaults3(osgTerrain::DataSet::Source *, doReproject, IN, const std::string &, filename, , IN, osg::CoordinateSystemNode *, cs, , IN, double, targetResolution, 0.0);
	I_Method0(void, buildOverviews);
	I_Method2(void, addRequiredResolution, IN, double, resX, IN, double, resY);
	I_Method1(void, setRequiredResolutions, IN, osgTerrain::DataSet::Source::ResolutionList &, resolutions);
	I_Method0(osgTerrain::DataSet::Source::ResolutionList &, getRequiredResolutions);
	I_Method0(const osgTerrain::DataSet::Source::ResolutionList &, getRequiredResolutions);
	I_Method0(void, consolodateRequiredResolutions);
	I_Property(osg::CoordinateSystemNode *, CoordinateSystem);
	I_Property(osgTerrain::DataSet::Source::ParameterPolicy, CoordinateSystemPolicy);
	I_Property(const std::string &, FileName);
	I_Property(GDALDataset *, GdalDataSet);
	I_Property(osg::Matrixd &, GeoTransform);
	I_Property(osgTerrain::DataSet::Source::ParameterPolicy, GeoTransformPolicy);
	I_Property(unsigned int, Layer);
	I_Property(unsigned int, MaxLevel);
	I_Property(unsigned int, MinLevel);
	I_Property(osgTerrain::DataSet::Source::ResolutionList &, RequiredResolutions);
	I_Property(double, SortValue);
	I_Property(osgTerrain::DataSet::SourceData *, SourceData);
	I_Property(bool, TemporaryFile);
	I_Property(osgTerrain::DataSet::Source::Type, Type);
END_REFLECTOR

BEGIN_VALUE_REFLECTOR(osgTerrain::DataSet::Source::ResolutionPair)
	I_Constructor0();
	I_Constructor2(IN, double, x, IN, double, y);
END_REFLECTOR

TYPE_NAME_ALIAS(std::map< const osg::CoordinateSystemNode * COMMA  osgTerrain::DataSet::SpatialProperties >, osgTerrain::DataSet::SourceData::SpatialPropertiesMap);

BEGIN_OBJECT_REFLECTOR(osgTerrain::DataSet::SourceData)
	I_BaseType(osg::Referenced);
	I_BaseType(osgTerrain::DataSet::SpatialProperties);
	I_ConstructorWithDefaults1(IN, osgTerrain::DataSet::Source *, source, 0);
	I_Method1(osg::BoundingBox, getExtents, IN, const osg::CoordinateSystemNode *, cs);
	I_Method1(const osgTerrain::DataSet::SpatialProperties &, computeSpatialProperties, IN, const osg::CoordinateSystemNode *, cs);
	I_Method1(bool, intersects, IN, const osgTerrain::DataSet::SpatialProperties &, sp);
	I_Method1(void, read, IN, osgTerrain::DataSet::DestinationData &, destination);
	I_Method1(void, readImage, IN, osgTerrain::DataSet::DestinationData &, destination);
	I_Method1(void, readHeightField, IN, osgTerrain::DataSet::DestinationData &, destination);
	I_Method1(void, readModels, IN, osgTerrain::DataSet::DestinationData &, destination);
END_REFLECTOR

BEGIN_VALUE_REFLECTOR(osgTerrain::DataSet::SpatialProperties)
	I_Constructor0();
	I_Constructor1(IN, const osgTerrain::DataSet::SpatialProperties &, sp);
	I_Constructor2(IN, osg::CoordinateSystemNode *, cs, IN, const osg::BoundingBox &, extents);
	I_Method1(osgTerrain::DataSet::SpatialProperties &, assignSpatialProperties, IN, const osgTerrain::DataSet::SpatialProperties &, sp);
	I_Method0(void, computeExtents);
END_REFLECTOR

BEGIN_VALUE_REFLECTOR(osg::ref_ptr< osg::Image >)
	I_Constructor0();
	I_Constructor1(IN, osg::Image *, t);
	I_Constructor1(IN, const osg::ref_ptr< osg::Image > &, rp);
	I_Method0(bool, valid);
	I_Method0(osg::Image *, get);
	I_Method0(const osg::Image *, get);
	I_Method0(osg::Image *, take);
	I_Method0(osg::Image *, release);
	I_ReadOnlyProperty(osg::Image *, );
END_REFLECTOR

BEGIN_VALUE_REFLECTOR(osg::ref_ptr< osgTerrain::DataSet::CompositeDestination >)
	I_Constructor0();
	I_Constructor1(IN, osgTerrain::DataSet::CompositeDestination *, t);
	I_Constructor1(IN, const osg::ref_ptr< osgTerrain::DataSet::CompositeDestination > &, rp);
	I_Method0(bool, valid);
	I_Method0(osgTerrain::DataSet::CompositeDestination *, get);
	I_Method0(const osgTerrain::DataSet::CompositeDestination *, get);
	I_Method0(osgTerrain::DataSet::CompositeDestination *, take);
	I_Method0(osgTerrain::DataSet::CompositeDestination *, release);
	I_ReadOnlyProperty(osgTerrain::DataSet::CompositeDestination *, );
END_REFLECTOR

BEGIN_VALUE_REFLECTOR(osg::ref_ptr< osgTerrain::DataSet::CompositeSource >)
	I_Constructor0();
	I_Constructor1(IN, osgTerrain::DataSet::CompositeSource *, t);
	I_Constructor1(IN, const osg::ref_ptr< osgTerrain::DataSet::CompositeSource > &, rp);
	I_Method0(bool, valid);
	I_Method0(osgTerrain::DataSet::CompositeSource *, get);
	I_Method0(const osgTerrain::DataSet::CompositeSource *, get);
	I_Method0(osgTerrain::DataSet::CompositeSource *, take);
	I_Method0(osgTerrain::DataSet::CompositeSource *, release);
	I_ReadOnlyProperty(osgTerrain::DataSet::CompositeSource *, );
END_REFLECTOR

BEGIN_VALUE_REFLECTOR(osg::ref_ptr< osgTerrain::DataSet::DestinationTile >)
	I_Constructor0();
	I_Constructor1(IN, osgTerrain::DataSet::DestinationTile *, t);
	I_Constructor1(IN, const osg::ref_ptr< osgTerrain::DataSet::DestinationTile > &, rp);
	I_Method0(bool, valid);
	I_Method0(osgTerrain::DataSet::DestinationTile *, get);
	I_Method0(const osgTerrain::DataSet::DestinationTile *, get);
	I_Method0(osgTerrain::DataSet::DestinationTile *, take);
	I_Method0(osgTerrain::DataSet::DestinationTile *, release);
	I_ReadOnlyProperty(osgTerrain::DataSet::DestinationTile *, );
END_REFLECTOR

BEGIN_VALUE_REFLECTOR(osg::ref_ptr< osgTerrain::DataSet::Source >)
	I_Constructor0();
	I_Constructor1(IN, osgTerrain::DataSet::Source *, t);
	I_Constructor1(IN, const osg::ref_ptr< osgTerrain::DataSet::Source > &, rp);
	I_Method0(bool, valid);
	I_Method0(osgTerrain::DataSet::Source *, get);
	I_Method0(const osgTerrain::DataSet::Source *, get);
	I_Method0(osgTerrain::DataSet::Source *, take);
	I_Method0(osgTerrain::DataSet::Source *, release);
	I_ReadOnlyProperty(osgTerrain::DataSet::Source *, );
END_REFLECTOR

BEGIN_VALUE_REFLECTOR(osgTerrain::DataSet::CompositeSource::base_source_iterator< osgTerrain::DataSet::CompositeSource::DefaultSourceAdvancer >)
	I_ConstructorWithDefaults2(IN, osgTerrain::DataSet::CompositeSource *, composite, 0, IN, osgTerrain::DataSet::CompositeSource::DefaultSourceAdvancer, advancer, osgTerrain::DataSet::CompositeSource::DefaultSourceAdvancer());
	I_Constructor1(IN, const osgTerrain::DataSet::CompositeSource::base_source_iterator< osgTerrain::DataSet::CompositeSource::DefaultSourceAdvancer > &, rhs);
	I_Method0(bool, valid);
	I_Method0(bool, advance);
END_REFLECTOR

BEGIN_VALUE_REFLECTOR(osgTerrain::DataSet::CompositeSource::base_source_iterator< osgTerrain::DataSet::CompositeSource::LODSourceAdvancer >)
	I_ConstructorWithDefaults2(IN, osgTerrain::DataSet::CompositeSource *, composite, 0, IN, osgTerrain::DataSet::CompositeSource::LODSourceAdvancer, advancer, osgTerrain::DataSet::CompositeSource::LODSourceAdvancer());
	I_Constructor1(IN, const osgTerrain::DataSet::CompositeSource::base_source_iterator< osgTerrain::DataSet::CompositeSource::LODSourceAdvancer > &, rhs);
	I_Method0(bool, valid);
	I_Method0(bool, advance);
END_REFLECTOR

STD_MAP_REFLECTOR(std::map< const osg::CoordinateSystemNode * COMMA  osgTerrain::DataSet::SpatialProperties >);

STD_MAP_REFLECTOR(std::map< unsigned int COMMA  osgTerrain::DataSet::CompositeDestination * >);

STD_MAP_REFLECTOR(std::map< unsigned int COMMA  osgTerrain::DataSet::Level >);

STD_MAP_REFLECTOR(std::map< unsigned int COMMA  osgTerrain::DataSet::Row >);

STD_VECTOR_REFLECTOR(std::vector< osg::Vec2 >);

STD_VECTOR_REFLECTOR(std::vector< osg::ref_ptr< osg::Image > >);

STD_VECTOR_REFLECTOR(std::vector< osg::ref_ptr< osgTerrain::DataSet::CompositeDestination > >);

STD_VECTOR_REFLECTOR(std::vector< osg::ref_ptr< osgTerrain::DataSet::CompositeSource > >);

STD_VECTOR_REFLECTOR(std::vector< osg::ref_ptr< osgTerrain::DataSet::DestinationTile > >);

STD_VECTOR_REFLECTOR(std::vector< osg::ref_ptr< osgTerrain::DataSet::Source > >);

STD_VECTOR_REFLECTOR(std::vector< osgTerrain::DataSet::Source::ResolutionPair >);

