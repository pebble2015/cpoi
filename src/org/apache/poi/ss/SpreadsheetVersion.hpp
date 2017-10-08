// Generated from /POI/java/org/apache/poi/ss/SpreadsheetVersion.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/fwd-POI.hpp>
#include <java/lang/Enum.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace io
    {
typedef ::SubArray< ::java::io::Serializable, ::java::lang::ObjectArray > SerializableArray;
    } // io

    namespace lang
    {
typedef ::SubArray< ::java::lang::Comparable, ObjectArray > ComparableArray;
typedef ::SubArray< ::java::lang::Enum, ObjectArray, ComparableArray, ::java::io::SerializableArray > EnumArray;
    } // lang
} // java

namespace poi
{
    namespace ss
    {
typedef ::SubArray< ::poi::ss::SpreadsheetVersion, ::java::lang::EnumArray > SpreadsheetVersionArray;
    } // ss
} // poi

struct default_init_tag;

class poi::ss::SpreadsheetVersion final
    : public ::java::lang::Enum
{

public:
    typedef ::java::lang::Enum super;

public: /* package */
    static SpreadsheetVersion *EXCEL97;
    static SpreadsheetVersion *EXCEL2007;

private:
    int32_t _maxRows {  };
    int32_t _maxColumns {  };
    int32_t _maxFunctionArgs {  };
    int32_t _maxCondFormats {  };
    int32_t _maxCellStyles {  };
    int32_t _maxTextLength {  };
protected:
    void ctor(::java::lang::String* name, int ordinal, int32_t maxRows, int32_t maxColumns, int32_t maxFunctionArgs, int32_t maxCondFormats, int32_t maxCellStyles, int32_t maxText);

public:
    int32_t getMaxRows();
    int32_t getLastRowIndex();
    int32_t getMaxColumns();
    int32_t getLastColumnIndex();
    int32_t getMaxFunctionArgs();
    int32_t getMaxConditionalFormats();
    int32_t getMaxCellStyles();
    ::java::lang::String* getLastColumnName();
    int32_t getMaxTextLength();

    // Generated

private:
    SpreadsheetVersion(::java::lang::String* name, int ordinal, int32_t maxRows, int32_t maxColumns, int32_t maxFunctionArgs, int32_t maxCondFormats, int32_t maxCellStyles, int32_t maxText);
protected:
    SpreadsheetVersion(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static SpreadsheetVersion* valueOf(::java::lang::String* a0);
    static SpreadsheetVersionArray* values();

private:
    virtual ::java::lang::Class* getClass0();
};
