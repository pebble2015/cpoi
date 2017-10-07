// Generated from /POI/java/org/apache/poi/ss/usermodel/TableStyleType.java
#include <org/apache/poi/ss/usermodel/TableStyleType_9.hpp>

#include <java/lang/NullPointerException.hpp>
#include <org/apache/poi/ss/usermodel/Table.hpp>
#include <org/apache/poi/ss/util/CellRangeAddress.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::ss::usermodel::TableStyleType_9::TableStyleType_9(::java::lang::String* name, int ordinal)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
    ctor(name, ordinal);
}

org::apache::poi::ss::util::CellRangeAddressBase* org::apache::poi::ss::usermodel::TableStyleType_9::getRange(Table* table, Cell* cell)
{
    if(npc(table)->getTotalsRowCount() < 1)
        return nullptr;

    return new ::org::apache::poi::ss::util::CellRangeAddress(npc(table)->getEndRowIndex() - npc(table)->getTotalsRowCount() + int32_t(1), npc(table)->getEndRowIndex(), npc(table)->getStartColIndex(), npc(table)->getEndColIndex());
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::usermodel::TableStyleType_9::class_()
{
    static ::java::lang::Class* c = ::class_(u"", 0);
    return c;
}

java::lang::Class* org::apache::poi::ss::usermodel::TableStyleType_9::getClass0()
{
    return class_();
}

