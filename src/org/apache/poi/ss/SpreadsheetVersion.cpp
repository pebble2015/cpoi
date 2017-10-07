// Generated from /POI/java/org/apache/poi/ss/SpreadsheetVersion.java
#include <org/apache/poi/ss/SpreadsheetVersion.hpp>

#include <java/io/Serializable.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/Enum.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/Integer.hpp>
#include <java/lang/String.hpp>
#include <org/apache/poi/ss/util/CellReference.hpp>
#include <SubArray.hpp>
#include <ObjectArray.hpp>

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

namespace org
{
    namespace apache
    {
        namespace poi
        {
            namespace ss
            {
typedef ::SubArray< ::org::apache::poi::ss::SpreadsheetVersion, ::java::lang::EnumArray > SpreadsheetVersionArray;
            } // ss
        } // poi
    } // apache
} // org

org::apache::poi::ss::SpreadsheetVersion::SpreadsheetVersion(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::SpreadsheetVersion::SpreadsheetVersion(::java::lang::String* name, int ordinal, int32_t maxRows, int32_t maxColumns, int32_t maxFunctionArgs, int32_t maxCondFormats, int32_t maxCellStyles, int32_t maxText) 
    : SpreadsheetVersion(*static_cast< ::default_init_tag* >(0))
{
    ctor(name, ordinal, maxRows,maxColumns,maxFunctionArgs,maxCondFormats,maxCellStyles,maxText);
}

org::apache::poi::ss::SpreadsheetVersion* org::apache::poi::ss::SpreadsheetVersion::EXCEL97 = new ::org::apache::poi::ss::SpreadsheetVersion(u"EXCEL97"_j, 0, int32_t(65536), int32_t(256), int32_t(30), int32_t(3), int32_t(4000), int32_t(32767));
org::apache::poi::ss::SpreadsheetVersion* org::apache::poi::ss::SpreadsheetVersion::EXCEL2007 = new ::org::apache::poi::ss::SpreadsheetVersion(u"EXCEL2007"_j, 1, int32_t(1048576), int32_t(16384), int32_t(255), ::java::lang::Integer::MAX_VALUE, int32_t(64000), int32_t(32767));
void org::apache::poi::ss::SpreadsheetVersion::ctor(::java::lang::String* name, int ordinal, int32_t maxRows, int32_t maxColumns, int32_t maxFunctionArgs, int32_t maxCondFormats, int32_t maxCellStyles, int32_t maxText)
{
    super::ctor(name, ordinal);
    _maxRows = maxRows;
    _maxColumns = maxColumns;
    _maxFunctionArgs = maxFunctionArgs;
    _maxCondFormats = maxCondFormats;
    _maxCellStyles = maxCellStyles;
    _maxTextLength = maxText;
}

int32_t org::apache::poi::ss::SpreadsheetVersion::getMaxRows()
{
    return _maxRows;
}

int32_t org::apache::poi::ss::SpreadsheetVersion::getLastRowIndex()
{
    return _maxRows - int32_t(1);
}

int32_t org::apache::poi::ss::SpreadsheetVersion::getMaxColumns()
{
    return _maxColumns;
}

int32_t org::apache::poi::ss::SpreadsheetVersion::getLastColumnIndex()
{
    return _maxColumns - int32_t(1);
}

int32_t org::apache::poi::ss::SpreadsheetVersion::getMaxFunctionArgs()
{
    return _maxFunctionArgs;
}

int32_t org::apache::poi::ss::SpreadsheetVersion::getMaxConditionalFormats()
{
    return _maxCondFormats;
}

int32_t org::apache::poi::ss::SpreadsheetVersion::getMaxCellStyles()
{
    return _maxCellStyles;
}

java::lang::String* org::apache::poi::ss::SpreadsheetVersion::getLastColumnName()
{
    return ::org::apache::poi::ss::util::CellReference::convertNumToColString(getLastColumnIndex());
}

int32_t org::apache::poi::ss::SpreadsheetVersion::getMaxTextLength()
{
    return _maxTextLength;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::SpreadsheetVersion::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.SpreadsheetVersion", 36);
    return c;
}

org::apache::poi::ss::SpreadsheetVersion* org::apache::poi::ss::SpreadsheetVersion::valueOf(::java::lang::String* a0)
{
    if(EXCEL2007->toString()->equals(a0))
        return EXCEL2007;
    if(EXCEL97->toString()->equals(a0))
        return EXCEL97;
    throw new ::java::lang::IllegalArgumentException(a0);
}

org::apache::poi::ss::SpreadsheetVersionArray* org::apache::poi::ss::SpreadsheetVersion::values()
{
    return new org::apache::poi::ss::SpreadsheetVersionArray({
        EXCEL2007,
        EXCEL97,
    });
}

java::lang::Class* org::apache::poi::ss::SpreadsheetVersion::getClass0()
{
    return class_();
}

