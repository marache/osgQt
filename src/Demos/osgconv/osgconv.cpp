#include <stdio.h>
#include <osg/Group>
#include <osg/Notify>
#include <osg/Vec3>

#include <osgDB/Registry>
#include <osgDB/ReadFile>
#include <osgDB/WriteFile>

#include "OrientationConverter.h"

typedef std::vector<std::string> FileNameList;

static bool do_convert = false;


static void usage( const char *prog, const char *msg )
{
    osg::notify(osg::NOTICE)<< std::endl;
    osg::notify(osg::NOTICE) << msg << std::endl;
    osg::notify(osg::NOTICE)<< std::endl;
    osg::notify(osg::NOTICE)<<"usage:"<< std::endl;
    osg::notify(osg::NOTICE)<<"    " << prog << " [options] infile1 [infile2 ...] outfile"<< std::endl;
    osg::notify(osg::NOTICE)<< std::endl;
    osg::notify(osg::NOTICE)<<"options:"<< std::endl;
    osg::notify(osg::NOTICE)<<"    -l libraryName     - load plugin of name libraryName"<< std::endl;
    osg::notify(osg::NOTICE)<<"                         i.e. -l osgdb_pfb"<< std::endl;
    osg::notify(osg::NOTICE)<<"                         Useful for loading reader/writers which can load"<< std::endl;
    osg::notify(osg::NOTICE)<<"                         other file formats in addition to its extension."<< std::endl;
    osg::notify(osg::NOTICE)<<"    -e extensionName   - load reader/wrter plugin for file extension"<< std::endl;
    osg::notify(osg::NOTICE)<<"                         i.e. -e pfb"<< std::endl;
    osg::notify(osg::NOTICE)<<"                         Useful short hand for specifying full library name as"<< std::endl;
    osg::notify(osg::NOTICE)<<"                         done with -l above, as it automatically expands to the"<< std::endl;
    osg::notify(osg::NOTICE)<<"                         full library name appropriate for each platform."<< std::endl;
    osg::notify(osg::NOTICE)<<"    -o orientation     - Convert geometry from input files to output files."<< std::endl;
    osg::notify(osg::NOTICE)<<
                              "                         Format of orientation argument must be the following:\n"
			      "\n"
                              "                             X1,Y1,Z1-X2,Y2,Z2\n"
			      "\n"
                              "                         where X1,Y1,Z1 represent the UP vector in the input\n"
			      "                         files and X2,Y2,Z2 represent the UP vector of the\n"
			      "                         output file.  For example, to convert a model built\n"
			      "                         in a Y-Up coordinate system to a model with a Z-up\n"
			      "                         coordinate system, the argument looks like\n"
			      "\n"
			      "                             0,1,0-0,0,1"
			      "\n"
			      << std::endl;
    osg::notify(osg::NOTICE)<<"    -t translation     - Convert spatial position of output files.  Format of\n"
                              "                         translation argument must be the following :\n"
			      "\n"
			      "                             X,Y,Z\n"
			      "\n"
			      "                         where X, Y, and Z represent the coordinates of the\n"
			      "                         absolute position in world space\n"
			      << std::endl;
    osg::notify(osg::NOTICE)<<"    -s scale           - Scale size of model.  Scale argument must be the \n"
                              "                         following :\n"
			      "\n"
			      "                             SX,SY,SZ\n"
			      "\n"
			      "                         where SX, SY, and SZ represent the scale factors\n"
			      "                         Caution: Scaling will be done in destination orientation\n"
			      << std::endl;
}

static bool 
parse_args( int argc, char **argv, FileNameList &fileNames, OrientationConverter &oc )
{
    int nexti;

    for(int i = 1; i < argc; i=nexti )
    {
        nexti = i+1;

        if (argv[i][0]=='-')
        {
  	    for( unsigned int j = 1; j < strlen( argv[i] ); j++ )
	    {
                switch(argv[i][j])
                {
                    case('e'):
                        if (nexti<argc)
                        {
                            std::string libName = osgDB::Registry::instance()->createLibraryNameForExt(argv[nexti++]);
                            osgDB::Registry::instance()->loadLibrary(libName);
                        }
			else
			{
			    usage( argv[0], "Extension option requires an argument." );
			    return false;
			}
                        break;

                    case('l'):
                        if (nexti<argc)
                        {
                            osgDB::Registry::instance()->loadLibrary(argv[nexti++]);
                        }
			else
			{
			    usage( argv[0], "Library option requires an argument." );
			    return false;
			}
                        break;

		    case 'o' :
		        if( nexti < argc )
			{
			    osg::Vec3 from, to;
			    if( sscanf( argv[nexti++], "%f,%f,%f-%f,%f,%f",
			    	&from[0], &from[1], &from[2],
			    	&to[0], &to[1], &to[2]  )
				!= 6 )
			    {
			        usage( argv[0], "Orientation argument format incorrect." );
				return false;
			    }
			    oc.setRotation( from, to );
			    do_convert = true;
			}
			else
			{
			    usage( argv[0], "Orientation conversion option requires an argument." );
			    return false;
			}
		        break;

		    case 't' :
		        if( nexti < argc )
			{
			    osg::Vec3 trans(0,0,0);
			    if( sscanf( argv[nexti++], "%f,%f,%f",
			    	&trans[0], &trans[1], &trans[2] ) != 3 )
			    {
			        usage( argv[0], "Translation argument format incorrect." );
				return false;
			    }
			    oc.setTranslation( trans );
			    do_convert = true;
			}
			else
			{
			    usage( argv[0], "Translation conversion option requires an argument." );
			    return false;
			}
		        break;

		    case 's' :
		        if( nexti < argc )
			{
			    osg::Vec3 scale(0,0,0);
			    if( sscanf( argv[nexti++], "%f,%f,%f",
			    	&scale[0], &scale[1], &scale[2] ) != 3 )
			    {
			        usage( argv[0], "Scale argument format incorrect." );
				return false;
			    }
			    oc.setScale( scale );
			    do_convert = true;
			}
			else
			{
			    usage( argv[0], "Scale conversion option requires an argument." );
			    return false;
			}
		        break;

		    default :
		        std::string a = "Invalid option " ;
			a += "'"; 
			a += argv[i][j] ;
			a += "'.";
		        usage( argv[0], a.c_str() );
			return false;
			break;
                }
	    }
        } else
        {
            fileNames.push_back(argv[i]);
        }
    }

    if (fileNames.empty())
    {
	usage( argv[0], "No files specified." );
        return false;
    }
    return true;
}

int main( int argc, char **argv )
{
    FileNameList fileNames;
    OrientationConverter oc;

    if( parse_args( argc, argv, fileNames, oc ) == false )
        return -1;

    if (fileNames.size()==1)
    {
        osg::Node* root = osgDB::readNodeFile(fileNames.front());

	if( do_convert )
	    oc.convert( *root );

        if (root)
        {
            osgDB::writeNodeFile(*root,"converted.osg");
            osg::notify(osg::NOTICE)<<"Data written to 'converted.osg'."<< std::endl;
        }
        else
        {
            osg::notify(osg::NOTICE)<<"Error no data loaded."<< std::endl;
            return 1;
        }
    }
    else
    {
        std::string fileNameOut = fileNames.back();
        fileNames.pop_back();

        osg::Group* group = new osg::Group();
        for(FileNameList::iterator itr=fileNames.begin();
            itr<fileNames.end();
            ++itr)
        {
            osg::Node* child = osgDB::readNodeFile(*itr);
            if (child)
            {
                group->addChild(child);
            }
        }
	if( do_convert )
	    oc.convert(*group);

        if (group->getNumChildren()==0)
        {

            osg::notify(osg::NOTICE)<<"Error no data loaded."<< std::endl;
            return 1;
        }
        else if (group->getNumChildren()==1)
        {
            osgDB::writeNodeFile(*(group->getChild(0)),fileNameOut);
        }
        else
        {
            osgDB::writeNodeFile(*group,fileNameOut);
        }
    }

    return 0;
}
