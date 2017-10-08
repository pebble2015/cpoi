// Generated from /POI/java/org/apache/poi/ss/formula/function/FunctionMetadataReader.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <java/util/regex/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/function/fwd-POI.hpp>
#include <java/lang/Object.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace io
    {
typedef ::SubArray< ::java::io::Serializable, ::java::lang::ObjectArray > SerializableArray;
    } // io

    namespace lang
    {
typedef ::SubArray< ::java::lang::CharSequence, ObjectArray > CharSequenceArray;
typedef ::SubArray< ::java::lang::Comparable, ObjectArray > ComparableArray;
typedef ::SubArray< ::java::lang::String, ObjectArray, ::java::io::SerializableArray, ComparableArray, CharSequenceArray > StringArray;
    } // lang
} // java

struct default_init_tag;

class poi::ss::formula::function::FunctionMetadataReader final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    static ::java::lang::String* METADATA_FILE_NAME_;
    static ::java::lang::String* ELLIPSIS_;
    static ::java::util::regex::Pattern* TAB_DELIM_PATTERN_;
    static ::java::util::regex::Pattern* SPACE_DELIM_PATTERN_;
    static ::int8_tArray* EMPTY_BYTE_ARRAY_;
    static ::java::lang::StringArray* DIGIT_ENDING_FUNCTION_NAMES_;
    static ::java::util::Set* DIGIT_ENDING_FUNCTION_NAMES_SET_;

public:
    static FunctionMetadataRegistry* createRegistry();

private:
    static void processLine(FunctionDataBuilder* fdb, ::java::lang::String* line);
    static int8_t parseReturnTypeCode(::java::lang::String* code);
    static ::int8_tArray* parseOperandTypeCodes(::java::lang::String* codes);
    static bool isDash(::java::lang::String* codes);
    static int8_t parseOperandTypeCode(::java::lang::String* code);
    static void validateFunctionName(::java::lang::String* functionName);
    static int32_t parseInt(::java::lang::String* valStr);

    // Generated

public:
    FunctionMetadataReader();
protected:
    FunctionMetadataReader(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    static ::java::lang::String*& METADATA_FILE_NAME();
    static ::java::lang::String*& ELLIPSIS();
    static ::java::util::regex::Pattern*& TAB_DELIM_PATTERN();
    static ::java::util::regex::Pattern*& SPACE_DELIM_PATTERN();
    static ::int8_tArray*& EMPTY_BYTE_ARRAY();
    static ::java::lang::StringArray*& DIGIT_ENDING_FUNCTION_NAMES();
    static ::java::util::Set*& DIGIT_ENDING_FUNCTION_NAMES_SET();
    virtual ::java::lang::Class* getClass0();
};
