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
#include <osg/ArgumentParser>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

TYPE_NAME_ALIAS(std::map< std::string COMMA  osg::ArgumentParser::ErrorSeverity >, osg::ArgumentParser::ErrorMessageMap)

BEGIN_ENUM_REFLECTOR(osg::ArgumentParser::ErrorSeverity)
	I_DeclaringFile("osg/ArgumentParser");
	I_EnumLabel(osg::ArgumentParser::BENIGN);
	I_EnumLabel(osg::ArgumentParser::CRITICAL);
END_REFLECTOR

BEGIN_VALUE_REFLECTOR(osg::ArgumentParser)
	I_DeclaringFile("osg/ArgumentParser");
	I_Constructor2(IN, int *, argc, IN, char **, argv,
	               ____ArgumentParser__int_P1__char_P1P1,
	               "",
	               "");
	I_Method1(void, setApplicationUsage, IN, osg::ApplicationUsage *, usage,
	          Properties::NON_VIRTUAL,
	          __void__setApplicationUsage__ApplicationUsage_P1,
	          "",
	          "");
	I_Method0(osg::ApplicationUsage *, getApplicationUsage,
	          Properties::NON_VIRTUAL,
	          __ApplicationUsage_P1__getApplicationUsage,
	          "",
	          "");
	I_Method0(const osg::ApplicationUsage *, getApplicationUsage,
	          Properties::NON_VIRTUAL,
	          __C5_ApplicationUsage_P1__getApplicationUsage,
	          "",
	          "");
	I_Method0(int &, argc,
	          Properties::NON_VIRTUAL,
	          __int_R1__argc,
	          "Return the argument count. ",
	          "");
	I_Method0(char **, argv,
	          Properties::NON_VIRTUAL,
	          __char_P1P1__argv,
	          "Return the argument array. ",
	          "");
	I_Method0(std::string, getApplicationName,
	          Properties::NON_VIRTUAL,
	          __std_string__getApplicationName,
	          "Return the application name, as specified by argv[0]. ",
	          "");
	I_Method1(int, find, IN, const std::string &, str,
	          Properties::NON_VIRTUAL,
	          __int__find__C5_std_string_R1,
	          "Return the position of an occurrence of a string in the argument list. ",
	          "Return -1 if no string is found. ");
	I_Method1(bool, isOption, IN, int, pos,
	          Properties::NON_VIRTUAL,
	          __bool__isOption__int,
	          "Return true if the specified parameter is an option in the form of -option or --option. ",
	          "");
	I_Method1(bool, isString, IN, int, pos,
	          Properties::NON_VIRTUAL,
	          __bool__isString__int,
	          "Return true if the specified parameter is a string not in the form of an option. ",
	          "");
	I_Method1(bool, isNumber, IN, int, pos,
	          Properties::NON_VIRTUAL,
	          __bool__isNumber__int,
	          "Return true if the specified parameter is a number. ",
	          "");
	I_Method0(bool, containsOptions,
	          Properties::NON_VIRTUAL,
	          __bool__containsOptions,
	          "",
	          "");
	I_MethodWithDefaults2(void, remove, IN, int, pos, , IN, int, num, 1,
	                      Properties::NON_VIRTUAL,
	                      __void__remove__int__int,
	                      "Remove one or more arguments from the argv argument list, and decrement the argc respectively. ",
	                      "");
	I_Method2(bool, match, IN, int, pos, IN, const std::string &, str,
	          Properties::NON_VIRTUAL,
	          __bool__match__int__C5_std_string_R1,
	          "Return true if the specified argument matches the given string. ",
	          "");
	I_Method1(bool, read, IN, const std::string &, str,
	          Properties::NON_VIRTUAL,
	          __bool__read__C5_std_string_R1,
	          "Search for an occurrence of a string in the argument list. ",
	          "If found, remove that occurrence and return true. Otherwise, return false. ");
	I_Method2(bool, read, IN, const std::string &, str, IN, osg::ArgumentParser::Parameter, value1,
	          Properties::NON_VIRTUAL,
	          __bool__read__C5_std_string_R1__Parameter,
	          "",
	          "");
	I_Method3(bool, read, IN, const std::string &, str, IN, osg::ArgumentParser::Parameter, value1, IN, osg::ArgumentParser::Parameter, value2,
	          Properties::NON_VIRTUAL,
	          __bool__read__C5_std_string_R1__Parameter__Parameter,
	          "",
	          "");
	I_Method4(bool, read, IN, const std::string &, str, IN, osg::ArgumentParser::Parameter, value1, IN, osg::ArgumentParser::Parameter, value2, IN, osg::ArgumentParser::Parameter, value3,
	          Properties::NON_VIRTUAL,
	          __bool__read__C5_std_string_R1__Parameter__Parameter__Parameter,
	          "",
	          "");
	I_Method5(bool, read, IN, const std::string &, str, IN, osg::ArgumentParser::Parameter, value1, IN, osg::ArgumentParser::Parameter, value2, IN, osg::ArgumentParser::Parameter, value3, IN, osg::ArgumentParser::Parameter, value4,
	          Properties::NON_VIRTUAL,
	          __bool__read__C5_std_string_R1__Parameter__Parameter__Parameter__Parameter,
	          "",
	          "");
	I_Method6(bool, read, IN, const std::string &, str, IN, osg::ArgumentParser::Parameter, value1, IN, osg::ArgumentParser::Parameter, value2, IN, osg::ArgumentParser::Parameter, value3, IN, osg::ArgumentParser::Parameter, value4, IN, osg::ArgumentParser::Parameter, value5,
	          Properties::NON_VIRTUAL,
	          __bool__read__C5_std_string_R1__Parameter__Parameter__Parameter__Parameter__Parameter,
	          "",
	          "");
	I_Method7(bool, read, IN, const std::string &, str, IN, osg::ArgumentParser::Parameter, value1, IN, osg::ArgumentParser::Parameter, value2, IN, osg::ArgumentParser::Parameter, value3, IN, osg::ArgumentParser::Parameter, value4, IN, osg::ArgumentParser::Parameter, value5, IN, osg::ArgumentParser::Parameter, value6,
	          Properties::NON_VIRTUAL,
	          __bool__read__C5_std_string_R1__Parameter__Parameter__Parameter__Parameter__Parameter__Parameter,
	          "",
	          "");
	I_Method8(bool, read, IN, const std::string &, str, IN, osg::ArgumentParser::Parameter, value1, IN, osg::ArgumentParser::Parameter, value2, IN, osg::ArgumentParser::Parameter, value3, IN, osg::ArgumentParser::Parameter, value4, IN, osg::ArgumentParser::Parameter, value5, IN, osg::ArgumentParser::Parameter, value6, IN, osg::ArgumentParser::Parameter, value7,
	          Properties::NON_VIRTUAL,
	          __bool__read__C5_std_string_R1__Parameter__Parameter__Parameter__Parameter__Parameter__Parameter__Parameter,
	          "",
	          "");
	I_Method9(bool, read, IN, const std::string &, str, IN, osg::ArgumentParser::Parameter, value1, IN, osg::ArgumentParser::Parameter, value2, IN, osg::ArgumentParser::Parameter, value3, IN, osg::ArgumentParser::Parameter, value4, IN, osg::ArgumentParser::Parameter, value5, IN, osg::ArgumentParser::Parameter, value6, IN, osg::ArgumentParser::Parameter, value7, IN, osg::ArgumentParser::Parameter, value8,
	          Properties::NON_VIRTUAL,
	          __bool__read__C5_std_string_R1__Parameter__Parameter__Parameter__Parameter__Parameter__Parameter__Parameter__Parameter,
	          "",
	          "");
	I_Method2(bool, read, IN, int, pos, IN, const std::string &, str,
	          Properties::NON_VIRTUAL,
	          __bool__read__int__C5_std_string_R1,
	          "If the argument value at the specified position matches the given string, and subsequent parameters are also matched, then set the parameter values, remove the arguments from the list, and return true. ",
	          "Otherwise, return false. ");
	I_Method3(bool, read, IN, int, pos, IN, const std::string &, str, IN, osg::ArgumentParser::Parameter, value1,
	          Properties::NON_VIRTUAL,
	          __bool__read__int__C5_std_string_R1__Parameter,
	          "",
	          "");
	I_Method4(bool, read, IN, int, pos, IN, const std::string &, str, IN, osg::ArgumentParser::Parameter, value1, IN, osg::ArgumentParser::Parameter, value2,
	          Properties::NON_VIRTUAL,
	          __bool__read__int__C5_std_string_R1__Parameter__Parameter,
	          "",
	          "");
	I_Method5(bool, read, IN, int, pos, IN, const std::string &, str, IN, osg::ArgumentParser::Parameter, value1, IN, osg::ArgumentParser::Parameter, value2, IN, osg::ArgumentParser::Parameter, value3,
	          Properties::NON_VIRTUAL,
	          __bool__read__int__C5_std_string_R1__Parameter__Parameter__Parameter,
	          "",
	          "");
	I_Method6(bool, read, IN, int, pos, IN, const std::string &, str, IN, osg::ArgumentParser::Parameter, value1, IN, osg::ArgumentParser::Parameter, value2, IN, osg::ArgumentParser::Parameter, value3, IN, osg::ArgumentParser::Parameter, value4,
	          Properties::NON_VIRTUAL,
	          __bool__read__int__C5_std_string_R1__Parameter__Parameter__Parameter__Parameter,
	          "",
	          "");
	I_Method7(bool, read, IN, int, pos, IN, const std::string &, str, IN, osg::ArgumentParser::Parameter, value1, IN, osg::ArgumentParser::Parameter, value2, IN, osg::ArgumentParser::Parameter, value3, IN, osg::ArgumentParser::Parameter, value4, IN, osg::ArgumentParser::Parameter, value5,
	          Properties::NON_VIRTUAL,
	          __bool__read__int__C5_std_string_R1__Parameter__Parameter__Parameter__Parameter__Parameter,
	          "",
	          "");
	I_Method8(bool, read, IN, int, pos, IN, const std::string &, str, IN, osg::ArgumentParser::Parameter, value1, IN, osg::ArgumentParser::Parameter, value2, IN, osg::ArgumentParser::Parameter, value3, IN, osg::ArgumentParser::Parameter, value4, IN, osg::ArgumentParser::Parameter, value5, IN, osg::ArgumentParser::Parameter, value6,
	          Properties::NON_VIRTUAL,
	          __bool__read__int__C5_std_string_R1__Parameter__Parameter__Parameter__Parameter__Parameter__Parameter,
	          "",
	          "");
	I_Method9(bool, read, IN, int, pos, IN, const std::string &, str, IN, osg::ArgumentParser::Parameter, value1, IN, osg::ArgumentParser::Parameter, value2, IN, osg::ArgumentParser::Parameter, value3, IN, osg::ArgumentParser::Parameter, value4, IN, osg::ArgumentParser::Parameter, value5, IN, osg::ArgumentParser::Parameter, value6, IN, osg::ArgumentParser::Parameter, value7,
	          Properties::NON_VIRTUAL,
	          __bool__read__int__C5_std_string_R1__Parameter__Parameter__Parameter__Parameter__Parameter__Parameter__Parameter,
	          "",
	          "");
	I_Method10(bool, read, IN, int, pos, IN, const std::string &, str, IN, osg::ArgumentParser::Parameter, value1, IN, osg::ArgumentParser::Parameter, value2, IN, osg::ArgumentParser::Parameter, value3, IN, osg::ArgumentParser::Parameter, value4, IN, osg::ArgumentParser::Parameter, value5, IN, osg::ArgumentParser::Parameter, value6, IN, osg::ArgumentParser::Parameter, value7, IN, osg::ArgumentParser::Parameter, value8,
	           Properties::NON_VIRTUAL,
	           __bool__read__int__C5_std_string_R1__Parameter__Parameter__Parameter__Parameter__Parameter__Parameter__Parameter__Parameter,
	           "",
	           "");
	I_MethodWithDefaults1(bool, errors, IN, osg::ArgumentParser::ErrorSeverity, severity, osg::ArgumentParser::BENIGN,
	                      Properties::NON_VIRTUAL,
	                      __bool__errors__ErrorSeverity,
	                      "Return the error flag, true if an error has occurred when reading arguments. ",
	                      "");
	I_MethodWithDefaults2(void, reportError, IN, const std::string &, message, , IN, osg::ArgumentParser::ErrorSeverity, severity, osg::ArgumentParser::CRITICAL,
	                      Properties::NON_VIRTUAL,
	                      __void__reportError__C5_std_string_R1__ErrorSeverity,
	                      "Report an error message by adding to the ErrorMessageMap. ",
	                      "");
	I_MethodWithDefaults1(void, reportRemainingOptionsAsUnrecognized, IN, osg::ArgumentParser::ErrorSeverity, severity, osg::ArgumentParser::BENIGN,
	                      Properties::NON_VIRTUAL,
	                      __void__reportRemainingOptionsAsUnrecognized__ErrorSeverity,
	                      "For each remaining option, report it as unrecognized. ",
	                      "");
	I_Method0(osg::ArgumentParser::ErrorMessageMap &, getErrorMessageMap,
	          Properties::NON_VIRTUAL,
	          __ErrorMessageMap_R1__getErrorMessageMap,
	          "Return the error message, if any has occurred. ",
	          "");
	I_Method0(const osg::ArgumentParser::ErrorMessageMap &, getErrorMessageMap,
	          Properties::NON_VIRTUAL,
	          __C5_ErrorMessageMap_R1__getErrorMessageMap,
	          "Return the error message, if any has occurred. ",
	          "");
	I_MethodWithDefaults2(void, writeErrorMessages, IN, std::ostream &, output, , IN, osg::ArgumentParser::ErrorSeverity, sevrity, osg::ArgumentParser::BENIGN,
	                      Properties::NON_VIRTUAL,
	                      __void__writeErrorMessages__std_ostream_R1__ErrorSeverity,
	                      "Write error messages to the given ostream, if at or above the given severity. ",
	                      "");
	I_StaticMethod1(bool, isOption, IN, const char *, str,
	                __bool__isOption__C5_char_P1_S,
	                "Return true if the specified string is an option in the form -option or --option. ",
	                "");
	I_StaticMethod1(bool, isString, IN, const char *, str,
	                __bool__isString__C5_char_P1_S,
	                "Return true if string is non-NULL and not an option in the form -option or --option. ",
	                "");
	I_StaticMethod1(bool, isNumber, IN, const char *, str,
	                __bool__isNumber__C5_char_P1_S,
	                "Return true if specified parameter is a number. ",
	                "");
	I_StaticMethod1(bool, isBool, IN, const char *, str,
	                __bool__isBool__C5_char_P1_S,
	                "Return true if specified parameter is a bool. ",
	                "");
	I_SimpleProperty(std::string, ApplicationName, 
	                 __std_string__getApplicationName, 
	                 0);
	I_SimpleProperty(osg::ApplicationUsage *, ApplicationUsage, 
	                 __ApplicationUsage_P1__getApplicationUsage, 
	                 __void__setApplicationUsage__ApplicationUsage_P1);
	I_SimpleProperty(osg::ArgumentParser::ErrorMessageMap &, ErrorMessageMap, 
	                 __ErrorMessageMap_R1__getErrorMessageMap, 
	                 0);
END_REFLECTOR

BEGIN_ENUM_REFLECTOR(osg::ArgumentParser::Parameter::ParameterType)
	I_DeclaringFile("osg/ArgumentParser");
	I_EnumLabel(osg::ArgumentParser::Parameter::BOOL_PARAMETER);
	I_EnumLabel(osg::ArgumentParser::Parameter::FLOAT_PARAMETER);
	I_EnumLabel(osg::ArgumentParser::Parameter::DOUBLE_PARAMETER);
	I_EnumLabel(osg::ArgumentParser::Parameter::INT_PARAMETER);
	I_EnumLabel(osg::ArgumentParser::Parameter::UNSIGNED_INT_PARAMETER);
	I_EnumLabel(osg::ArgumentParser::Parameter::STRING_PARAMETER);
END_REFLECTOR

BEGIN_VALUE_REFLECTOR(osg::ArgumentParser::Parameter)
	I_DeclaringFile("osg/ArgumentParser");
	I_Constructor1(IN, bool &, value,
	               Properties::NON_EXPLICIT,
	               ____Parameter__bool_R1,
	               "",
	               "");
	I_Constructor1(IN, float &, value,
	               Properties::NON_EXPLICIT,
	               ____Parameter__float_R1,
	               "",
	               "");
	I_Constructor1(IN, double &, value,
	               Properties::NON_EXPLICIT,
	               ____Parameter__double_R1,
	               "",
	               "");
	I_Constructor1(IN, int &, value,
	               Properties::NON_EXPLICIT,
	               ____Parameter__int_R1,
	               "",
	               "");
	I_Constructor1(IN, unsigned int &, value,
	               Properties::NON_EXPLICIT,
	               ____Parameter__unsigned_int_R1,
	               "",
	               "");
	I_Constructor1(IN, std::string &, value,
	               Properties::NON_EXPLICIT,
	               ____Parameter__std_string_R1,
	               "",
	               "");
	I_Constructor1(IN, const osg::ArgumentParser::Parameter &, param,
	               Properties::NON_EXPLICIT,
	               ____Parameter__C5_Parameter_R1,
	               "",
	               "");
	I_Method1(bool, valid, IN, const char *, str,
	          Properties::NON_VIRTUAL,
	          __bool__valid__C5_char_P1,
	          "",
	          "");
	I_Method1(bool, assign, IN, const char *, str,
	          Properties::NON_VIRTUAL,
	          __bool__assign__C5_char_P1,
	          "",
	          "");
END_REFLECTOR

STD_MAP_REFLECTOR(std::map< std::string COMMA  osg::ArgumentParser::ErrorSeverity >)

