// Generated from /POI/java/org/apache/poi/hssf/dev/BiffDrawingToXml.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/dev/fwd-POI.hpp>
#include <org/apache/poi/hssf/usermodel/fwd-POI.hpp>
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

class poi::hssf::dev::BiffDrawingToXml
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    static ::java::lang::String* SHEET_NAME_PARAM_;
    static ::java::lang::String* SHEET_INDEXES_PARAM_;
    static ::java::lang::String* EXCLUDE_WORKBOOK_RECORDS_;
    static int32_t getAttributeIndex(::java::lang::String* attribute, ::java::lang::StringArray* params);
    static bool isExcludeWorkbookRecords(::java::lang::StringArray* params);
    static ::java::util::List* getIndexesByName(::java::lang::StringArray* params, ::poi::hssf::usermodel::HSSFWorkbook* workbook);
    static ::java::util::List* getIndexesByIdArray_(::java::lang::StringArray* params);
    static ::java::util::List* getSheetsIndexes(::java::lang::StringArray* params, ::poi::hssf::usermodel::HSSFWorkbook* workbook);
    static ::java::lang::String* getInputFileName(::java::lang::StringArray* params);
    static ::java::lang::String* getOutputFileName(::java::lang::String* input);

public:
    static void main(::java::lang::StringArray* params) /* throws(IOException) */;
    static void writeToFile(::java::io::OutputStream* fos, ::java::io::InputStream* xlsWorkbook, bool excludeWorkbookRecords, ::java::lang::StringArray* params) /* throws(IOException) */;

    // Generated
    BiffDrawingToXml();
protected:
    BiffDrawingToXml(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    static ::java::lang::String*& SHEET_NAME_PARAM();
    static ::java::lang::String*& SHEET_INDEXES_PARAM();
    static ::java::lang::String*& EXCLUDE_WORKBOOK_RECORDS();
    virtual ::java::lang::Class* getClass0();
};
