# Microsoft Developer Studio Project File - Name="osgPlugin lwo" - Package Owner=<4>
# Microsoft Developer Studio Generated Build File, Format Version 6.00
# ** DO NOT EDIT **

# TARGTYPE "Win32 (x86) Dynamic-Link Library" 0x0102

CFG=osgPlugin lwo - Win32 Release
!MESSAGE This is not a valid makefile. To build this project using NMAKE,
!MESSAGE use the Export Makefile command and run
!MESSAGE 
!MESSAGE NMAKE /f "lwo.mak".
!MESSAGE 
!MESSAGE You can specify a configuration when running NMAKE
!MESSAGE by defining the macro CFG on the command line. For example:
!MESSAGE 
!MESSAGE NMAKE /f "lwo.mak" CFG="osgPlugin lwo - Win32 Release"
!MESSAGE 
!MESSAGE Possible choices for configuration are:
!MESSAGE 
!MESSAGE "osgPlugin lwo - Win32 Release" (based on "Win32 (x86) Dynamic-Link Library")
!MESSAGE "osgPlugin lwo - Win32 Debug" (based on "Win32 (x86) Dynamic-Link Library")
!MESSAGE 

# Begin Project
# PROP AllowPerConfigDependencies 0
# PROP Scc_ProjName ""
# PROP Scc_LocalPath ""
CPP=cl.exe
MTL=midl.exe
RSC=rc.exe

!IF  "$(CFG)" == "osgPlugin lwo - Win32 Release"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 0
# PROP BASE Output_Dir "Release"
# PROP BASE Intermediate_Dir "Release"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 0
# PROP Output_Dir "../../../lib"
# PROP Intermediate_Dir "Release"
# PROP Ignore_Export_Lib 0
# PROP Target_Dir ""
F90=df.exe
# ADD BASE CPP /nologo /MT /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D "_MBCS" /D "_USRDLL" /YX /FD /c
# ADD CPP /nologo /MD /W3 /GR /GX /O2 /I "../../../include" /I "../../../../OpenThreads/include" /I "../../../../Producer/include" /I "../../../../3rdParty/include" /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D "_MBCS" /D "_USRDLL" /YX /FD /Zm200 /c
# ADD BASE MTL /nologo /D "NDEBUG" /mktyplib203 /win32
# ADD MTL /nologo /D "NDEBUG" /mktyplib203 /win32
# ADD BASE RSC /l 0x809 /d "NDEBUG"
# ADD RSC /l 0x809 /d "NDEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /dll /machine:I386
# ADD LINK32 OpenThreadsWin32.lib glu32.lib /nologo /dll /pdb:none /machine:I386 /nodefaultlib:"LIBC" /out:"../../../bin/osgdb_lwo.dll" /libpath:"../../../lib" /libpath:"../../../../OpenThreads/lib/win32" /libpath:"../../../../Producer/lib" /libpath:"../../../../3rdParty/lib"
# SUBTRACT LINK32 /nodefaultlib

!ELSEIF  "$(CFG)" == "osgPlugin lwo - Win32 Debug"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 1
# PROP BASE Output_Dir "Debug"
# PROP BASE Intermediate_Dir "Debug"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 1
# PROP Output_Dir "../../../lib"
# PROP Intermediate_Dir "Debug"
# PROP Ignore_Export_Lib 0
# PROP Target_Dir ""
F90=df.exe
# ADD BASE CPP /nologo /MTd /W3 /Gm /GX /ZI /Od /D "WIN32" /D "_DEBUG" /D "_WINDOWS" /D "_MBCS" /D "_USRDLL" /YX /FD /GZ /c
# ADD CPP /nologo /MDd /W3 /Gm /vmg /vd0 /GR /GX /Zi /Od /I "../../../include" /I "../../../../OpenThreads/include" /I "../../../../Producer/include" /I "../../../../3rdParty/include" /D "_WINDOWS" /D "_MBCS" /D "_USRDLL" /D "WIN32" /D "_DEBUG" /YX /FD /GZ /Zm200 /c
# ADD BASE MTL /nologo /D "_DEBUG" /mktyplib203 /win32
# ADD MTL /nologo /D "_DEBUG" /mktyplib203 /win32
# ADD BASE RSC /l 0x809 /d "_DEBUG"
# ADD RSC /l 0x809 /d "_DEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /dll /debug /machine:I386 /pdbtype:sept
# ADD LINK32 OpenThreadsWin32d.lib glu32.lib /nologo /dll /debug /machine:I386 /nodefaultlib:"LIBC" /out:"../../../bin/osgdb_lwod.dll" /pdbtype:sept /libpath:"../../../lib" /libpath:"../../../../OpenThreads/lib/win32" /libpath:"../../../../Producer/lib" /libpath:"../../../../3rdParty/lib"
# SUBTRACT LINK32 /pdb:none

!ENDIF 

# Begin Target

# Name "osgPlugin lwo - Win32 Release"
# Name "osgPlugin lwo - Win32 Debug"
# Begin Group "Source Files"

# PROP Default_Filter "cpp;c;cxx;rc;def;r;odl;idl;hpj;bat"
# Begin Source File

SOURCE=..\..\..\src\osgPlugins\lwo\Block.cpp
# End Source File
# Begin Source File

SOURCE=..\..\..\src\osgPlugins\lwo\Clip.cpp
# End Source File
# Begin Source File

SOURCE=..\..\..\src\osgPlugins\lwo\Converter.cpp
# End Source File
# Begin Source File

SOURCE=..\..\..\src\osgPlugins\lwo\Object.cpp
# End Source File
# Begin Source File

SOURCE=..\..\..\src\osgPlugins\lwo\old_lw.cpp
# End Source File
# Begin Source File

SOURCE=..\..\..\src\osgPlugins\lwo\old_Lwo2.cpp
# End Source File
# Begin Source File

SOURCE=..\..\..\src\osgPlugins\lwo\old_Lwo2Layer.cpp
# End Source File
# Begin Source File

SOURCE=..\..\..\src\osgPlugins\lwo\Polygon.cpp
# End Source File
# Begin Source File

SOURCE=..\..\..\src\osgPlugins\lwo\ReaderWriterLWO.cpp
# End Source File
# Begin Source File

SOURCE=..\..\..\src\osgPlugins\lwo\Surface.cpp
# End Source File
# Begin Source File

SOURCE=..\..\..\src\osgPlugins\lwo\Tessellator.cpp
# End Source File
# Begin Source File

SOURCE=..\..\..\src\osgPlugins\lwo\Unit.cpp
# End Source File
# Begin Source File

SOURCE=..\..\..\src\osgPlugins\lwo\VertexMap.cpp
# End Source File
# End Group
# Begin Group "Header Files"

# PROP Default_Filter ""
# Begin Source File

SOURCE=..\..\..\Src\osgPlugins\lwo\Block.h
# End Source File
# Begin Source File

SOURCE=..\..\..\Src\osgPlugins\lwo\Clip.h
# End Source File
# Begin Source File

SOURCE=..\..\..\Src\osgPlugins\lwo\Converter.h
# End Source File
# Begin Source File

SOURCE=..\..\..\Src\osgPlugins\lwo\iffparser.h
# End Source File
# Begin Source File

SOURCE=..\..\..\Src\osgPlugins\lwo\Layer.h
# End Source File
# Begin Source File

SOURCE=..\..\..\Src\osgPlugins\lwo\lwo2chunks.h
# End Source File
# Begin Source File

SOURCE=..\..\..\Src\osgPlugins\lwo\lwo2parser.h
# End Source File
# Begin Source File

SOURCE=..\..\..\Src\osgPlugins\lwo\lwo2read.h
# End Source File
# Begin Source File

SOURCE=..\..\..\Src\osgPlugins\lwo\lwo2types.h
# End Source File
# Begin Source File

SOURCE=..\..\..\Src\osgPlugins\lwo\Object.h
# End Source File
# Begin Source File

SOURCE=..\..\..\Src\osgPlugins\lwo\old_lw.h
# End Source File
# Begin Source File

SOURCE=..\..\..\Src\osgPlugins\lwo\old_Lwo2.h
# End Source File
# Begin Source File

SOURCE=..\..\..\Src\osgPlugins\lwo\old_Lwo2Layer.h
# End Source File
# Begin Source File

SOURCE=..\..\..\Src\osgPlugins\lwo\Polygon.h
# End Source File
# Begin Source File

SOURCE=..\..\..\Src\osgPlugins\lwo\Surface.h
# End Source File
# Begin Source File

SOURCE=..\..\..\Src\osgPlugins\lwo\Tessellator.h
# End Source File
# Begin Source File

SOURCE=..\..\..\Src\osgPlugins\lwo\Unit.h
# End Source File
# Begin Source File

SOURCE=..\..\..\Src\osgPlugins\lwo\VertexMap.h
# End Source File
# End Group
# End Target
# Begin Group "Header Files No. 1"

# PROP Default_Filter "h;hpp;hxx;hm;inl"
# End Group
# Begin Group "Resource Files"

# PROP Default_Filter ""
# End Group
# End Project
