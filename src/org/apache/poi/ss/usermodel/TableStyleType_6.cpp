// Generated from /POI/java/org/apache/poi/ss/usermodel/TableStyleType.java
#include <org/apache/poi/ss/usermodel/TableStyleType_6.hpp>

#include <java/lang/NullPointerException.hpp>
#include <org/apache/poi/ss/usermodel/Table.hpp>
#include <org/apache/poi/ss/usermodel/TableStyleInfo.hpp>
#include <org/apache/poi/ss/util/CellRangeAddress.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::ss::usermodel::TableStyleType_6::TableStyleType_6(::java::lang::String* name, int ordinal)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
    ctor(name, ordinal);
}

poi::ss::util::CellRangeAddressBase* poi::ss::usermodel::TableStyleType_6::getRange(Table* table, Cell* cell)
{
    if(!npc(npc(table)->getStyle())->isShowLastColumn())
        return nullptr;

    return new ::poi::ss::util::CellRangeAddress(npc(table)->getStartRowIndex(), npc(table)->getEndRowIndex(), npc(table)->getEndColIndex(), npc(table)->getEndColIndex());
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::usermodel::TableStyleType_6::class_()
{
    static ::java::lang::Class* c = ::class_(u"", 0);
    return c;
}

java::lang::Class* poi::ss::usermodel::TableStyleType_6::getClass0()
{
    return class_();
}

