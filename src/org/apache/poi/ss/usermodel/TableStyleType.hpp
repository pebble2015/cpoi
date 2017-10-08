// Generated from /POI/java/org/apache/poi/ss/usermodel/TableStyleType.java

#pragma once

#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/fwd-POI.hpp>
#include <org/apache/poi/ss/util/fwd-POI.hpp>
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
        namespace usermodel
        {
typedef ::SubArray< ::poi::ss::usermodel::TableStyleType, ::java::lang::EnumArray > TableStyleTypeArray;
        } // usermodel
    } // ss
} // poi

struct default_init_tag;

class poi::ss::usermodel::TableStyleType
    : public ::java::lang::Enum
{

public:
    typedef ::java::lang::Enum super;

public: /* package */
    static TableStyleType *wholeTable;
    static TableStyleType *pageFieldLabels;
    static TableStyleType *pageFieldValues;
    static TableStyleType *firstColumnStripe;
    static TableStyleType *secondColumnStripe;
    static TableStyleType *firstRowStripe;
    static TableStyleType *secondRowStripe;
    static TableStyleType *lastColumn;
    static TableStyleType *firstColumn;
    static TableStyleType *headerRow;
    static TableStyleType *totalRow;
    static TableStyleType *firstHeaderCell;
    static TableStyleType *lastHeaderCell;
    static TableStyleType *firstTotalCell;
    static TableStyleType *lastTotalCell;
    static TableStyleType *firstSubtotalColumn;
    static TableStyleType *secondSubtotalColumn;
    static TableStyleType *thirdSubtotalColumn;
    static TableStyleType *blankRow;
    static TableStyleType *firstSubtotalRow;
    static TableStyleType *secondSubtotalRow;
    static TableStyleType *thirdSubtotalRow;
    static TableStyleType *firstColumnSubheading;
    static TableStyleType *secondColumnSubheading;
    static TableStyleType *thirdColumnSubheading;
    static TableStyleType *firstRowSubheading;
    static TableStyleType *secondRowSubheading;
    static TableStyleType *thirdRowSubheading;

public:
    virtual ::poi::ss::util::CellRangeAddressBase* appliesTo(Table* table, Cell* cell);

public: /* package */
    virtual ::poi::ss::util::CellRangeAddressBase* getRange(Table* table, Cell* cell);

    // Generated

public:
    TableStyleType(::java::lang::String* name, int ordinal);
protected:
    TableStyleType(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static TableStyleType* valueOf(::java::lang::String* a0);
    static TableStyleTypeArray* values();

private:
    virtual ::java::lang::Class* getClass0();
    friend class TableStyleType_1;
    friend class TableStyleType_2;
    friend class TableStyleType_3;
    friend class TableStyleType_4;
    friend class TableStyleType_5;
    friend class TableStyleType_6;
    friend class TableStyleType_7;
    friend class TableStyleType_8;
    friend class TableStyleType_9;
    friend class TableStyleType_10;
    friend class TableStyleType_11;
    friend class TableStyleType_12;
    friend class TableStyleType_13;
};
