#include "osg/BlendFunc"

#include "osgDB/Registry"
#include "osgDB/Input"
#include "osgDB/Output"

using namespace osg;
using namespace osgDB;

// forward declare functions to use later.
bool BlendFunc_readLocalData(Object& obj, Input& fr);
bool BlendFunc_writeLocalData(const Object& obj, Output& fw);

bool BlendFunc_matchModeStr(const char* str,int& mode);
const char* BlendFunc_getModeStr(int value);

// register the read and write functions with the osgDB::Registry.

RegisterDotOsgWrapperProxy g_TransparencyProxy
(
    new osg::BlendFunc,
    "Transparency",
    "Object StateAttribute Transparency",
    &BlendFunc_readLocalData,
    &BlendFunc_writeLocalData
);

RegisterDotOsgWrapperProxy g_BlendFuncProxy
(
    new osg::BlendFunc,
    "BlendFunc",
    "Object StateAttribute BlendFunc",
    &BlendFunc_readLocalData,
    &BlendFunc_writeLocalData
);

bool BlendFunc_readLocalData(Object& obj, Input& fr)
{
    bool iteratorAdvanced = false;

    BlendFunc& transparency = static_cast<BlendFunc&>(obj);

    int mode;
    if (fr[0].matchWord("source") && BlendFunc_matchModeStr(fr[1].getStr(),mode))
    {
        transparency.setSource(mode);
        fr+=2;
        iteratorAdvanced = true;
    }

    if (fr[0].matchWord("destination") && BlendFunc_matchModeStr(fr[1].getStr(),mode))
    {
        transparency.setDestination(mode);
        fr+=2;
        iteratorAdvanced = true;
    }
    
    return iteratorAdvanced;
}

bool BlendFunc_writeLocalData(const Object& obj, Output& fw)
{
    const BlendFunc& transparency = static_cast<const BlendFunc&>(obj);

    fw.indent() << "source " << BlendFunc_getModeStr(transparency.getSource()) << std::endl;
    fw.indent() << "destination " << BlendFunc_getModeStr(transparency.getDestination()) << std::endl;

    return true;
}



bool BlendFunc_matchModeStr(const char* str,int& mode)
{
    if (strcmp(str,"DST_ALPHA")==0)                 mode = BlendFunc::DST_ALPHA;
    else if (strcmp(str,"DST_COLOR")==0)            mode = BlendFunc::DST_COLOR;
    else if (strcmp(str,"ONE")==0)                  mode = BlendFunc::ONE;
    else if (strcmp(str,"ONE_MINUS_DST_ALPHA")==0)  mode = BlendFunc::ONE_MINUS_DST_ALPHA;
    else if (strcmp(str,"ONE_MINUS_DST_COLOR")==0)  mode = BlendFunc::ONE_MINUS_DST_COLOR;
    else if (strcmp(str,"ONE_MINUS_SRC_ALPHA")==0)  mode = BlendFunc::ONE_MINUS_SRC_ALPHA;
    else if (strcmp(str,"ONE_MINUS_SRC_COLOR")==0)  mode = BlendFunc::ONE_MINUS_SRC_COLOR;
    else if (strcmp(str,"SRC_ALPHA")==0)            mode = BlendFunc::SRC_ALPHA;
    else if (strcmp(str,"SRC_ALPHA_SATURATE")==0)   mode = BlendFunc::SRC_ALPHA_SATURATE;
    else if (strcmp(str,"SRC_COLOR")==0)            mode = BlendFunc::SRC_COLOR;
    else if (strcmp(str,"ZERO")==0)                 mode = BlendFunc::ZERO;
    else return false;
    return true;

}

const char* BlendFunc_getModeStr(int value)
{
    switch(value)
    {
        case(BlendFunc::DST_ALPHA) :             return "DST_ALPHA";
        case(BlendFunc::DST_COLOR) :             return "DST_COLOR";
        case(BlendFunc::ONE) :                   return "ONE";
        case(BlendFunc::ONE_MINUS_DST_ALPHA) :   return "ONE_MINUS_DST_ALPHA";
        case(BlendFunc::ONE_MINUS_DST_COLOR) :   return "ONE_MINUS_DST_COLOR";
        case(BlendFunc::ONE_MINUS_SRC_ALPHA) :   return "ONE_MINUS_SRC_ALPHA";
        case(BlendFunc::ONE_MINUS_SRC_COLOR) :   return "ONE_MINUS_SRC_COLOR";
        case(BlendFunc::SRC_ALPHA)  :            return "SRC_ALPHA";
        case(BlendFunc::SRC_ALPHA_SATURATE) :    return "SRC_ALPHA_SATURATE";
        case(BlendFunc::SRC_COLOR) :             return "SRC_COLOR";
        case(BlendFunc::ZERO) :                  return "ZERO";
    }

    return NULL;
}
