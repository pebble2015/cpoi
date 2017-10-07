// Generated from /POI/java/org/apache/poi/ss/usermodel/TableStyleType.java

#pragma once

#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/fwd-POI.hpp>
#include <org/apache/poi/ss/util/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/TableStyleType.hpp>

struct default_init_tag;

class org::apache::poi::ss::usermodel::TableStyleType_10 final
    : public TableStyleType
{

public:
    typedef TableStyleType super;

public: /* package */
    ::org::apache::poi::ss::util::CellRangeAddressBase* getRange(Table* table, Cell* cell) override;

    // Generated

public:
    TableStyleType_10(::java::lang::String* name, int ordinal);
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class TableStyleType;
    friend class TableStyleType_1;
    friend class TableStyleType_2;
    friend class TableStyleType_3;
    friend class TableStyleType_4;
    friend class TableStyleType_5;
    friend class TableStyleType_6;
    friend class TableStyleType_7;
    friend class TableStyleType_8;
    friend class TableStyleType_9;
    friend class TableStyleType_11;
    friend class TableStyleType_12;
    friend class TableStyleType_13;
};
