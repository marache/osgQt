/* -*-c++-*- OpenSceneGraph - Copyright (C) 1998-2003 Robert Osfield 
 *
 * This application is open source and may be redistributed and/or modified   
 * freely and without restriction, both in commericial and non commericial applications,
 * as long as this copyright notice is maintained.
 * 
 * This application is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
*/

#include <osg/ArgumentParser>
#include <osg/ApplicationUsage>

#include <osgDB/Archive>
#include <osgDB/ReadFile>
#include <osgDB/WriteFile>


  #include <iostream>
    #include <streambuf>
    #include <locale>
    #include <cstdio>

template<typename _CharT, typename _Traits = std::char_traits<_CharT> >
class proxy_basic_streambuf : public std::basic_streambuf<_CharT, _Traits>
{
   public:
   
      typedef _CharT 					char_type;
      typedef _Traits 					traits_type;
      typedef typename traits_type::int_type 		int_type;
      typedef typename traits_type::pos_type 		pos_type;
      typedef typename traits_type::off_type 		off_type;
  
      proxy_basic_streambuf(unsigned int numChars):
        _numChars(numChars) {}
   
      /// Destructor deallocates no buffer space.
      virtual ~proxy_basic_streambuf()  {}

      unsigned int _numChars;

    protected:

      virtual int_type overflow (int_type __c = traits_type::eof())
      {
        if (_numChars==0)
        {
            putchar('E');
            return traits_type::eof();
        }
      
 	 if (__c == traits_type::eof()) return '\n'; traits_type::not_eof(__c);
         //putchar('');
         --_numChars;
         return putchar(__c);
      }
};

typedef proxy_basic_streambuf<char> proxy_streambuf;

int main( int argc, char **argv )
{
    std::ifstream fin("GNUmakefile");
    std::istream& ins = fin;

    proxy_streambuf mystreambuf(100);
    std::cout.rdbuf(&mystreambuf);
    
    while (!fin.eof())
    {
        std::cout.put(fin.get());
    }
    std::cout<<"Exiting normally "<<std::endl;
    
    std::cout.rdbuf(0);

/*
    // use an ArgumentParser object to manage the program arguments.
    osg::ArgumentParser arguments(&argc,argv);
    
    // set up the usage document, in case we need to print out how to use this program.
    arguments.getApplicationUsage()->setApplicationName(arguments.getApplicationName());
    arguments.getApplicationUsage()->setDescription(arguments.getApplicationName()+" is the standard OpenSceneGraph example which loads and visualises 3d models.");
    arguments.getApplicationUsage()->setCommandLineUsage(arguments.getApplicationName()+" [options] filename ...");
        
    // create DataSet.
    osgDB::Archive::Status status;

    // if user request help write it out to cout.
    if (arguments.read("-h") || arguments.read("--help"))
    {
        arguments.getApplicationUsage()->write(std::cout);
        return 1;
    }

    std::string archiveFilename;
    while (arguments.read("-a",archiveFilename) || arguments.read("--archive",archiveFilename))
    {
    }

    bool insert = false;
    while (arguments.read("-i") || arguments.read("--insert"))
    {
        insert = true;
    }
    
    bool extract = false;
    while (arguments.read("-e") || arguments.read("--extract"))
    {
        extract = true;
    }
    
    bool list = false;    
    while (arguments.read("-l") || arguments.read("--list"))
    {
        list = true;
    }

    typedef std::vector<std::string> FileNameList;
    FileNameList files;
    for(int pos=1;pos<arguments.argc();++pos)
    {
        if (!arguments.isOption(pos))
        {
            files.push_back(arguments[pos]);
        }
    }
    
    // any option left unread are converted into errors to write out later.
    arguments.reportRemainingOptionsAsUnrecognized();

    // report any errors if they have occured when parsing the program aguments.
    if (arguments.errors())
    {
        arguments.writeErrorMessages(std::cout);
        return 1;
    }
    
    if (archiveFilename.empty())
    {
        std::cout<<"Please specify an archive name using --archive filename"<<std::endl;
        return 1;
    }

    if (!insert && !extract && !list)
    {
        std::cout<<"Please specify an operation on the archive, either --insert, --extract or --list"<<std::endl;
        return 1;
    }
    
    if (insert && extract)
    {
        std::cout<<"Cannot insert and extract files from the archive at one time, please use either --insert or --extract."<<std::endl;
        return 1;
    }

    osgDB::Archive archive;

    if (insert)
    {
        osgDB::Archive archive;
        archive.create(archiveFilename);
        
        for (FileNameList::iterator itr=files.begin();
            itr!=files.end();
            ++itr)
        {
            osg::ref_ptr<osg::Object> obj = osgDB::readObjectFile(*itr);
            if (obj.valid())
            {
                archive.writeObject(*obj, *itr);
            }
        }
    }
    else 
    {
        archive.open(archiveFilename,osgDB::Archive::READ);
        
        if (extract)
        {
            for (FileNameList::iterator itr=files.begin();
                itr!=files.end();
                ++itr)
            {
                osgDB::ReaderWriter::ReadResult result = archive.readObject(*itr);                
                osg::ref_ptr<osg::Object> obj = result.getObject();
                if (obj.valid())
                {
                    if (obj.valid()) osgDB::writeObjectFile(*obj, *itr);
                }
            }
        }
    }

    if (list)
    {        
        std::cout<<"List of files in archive:"<<std::endl;
        const osgDB::Archive::FileNamePositionMap& indexMap = archive.getFileNamePositionMap();
        for(osgDB::Archive::FileNamePositionMap::const_iterator itr=indexMap.begin();
            itr!=indexMap.end();
            ++itr)
        {
            std::cout<<"    "<<itr->first<<"\t"<<itr->second<<std::endl;
        }

    }
    
*/    
    return 0;
}

