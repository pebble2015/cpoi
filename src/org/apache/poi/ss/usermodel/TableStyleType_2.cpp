// Generated from /POI/java/org/apache/poi/ss/usermodel/TableStyleType.java
#include <org/apache/poi/ss/usermodel/TableStyleType_2.hpp>

#include <java/lang/Math.hpp>
#include <java/lang/NullPointerException.hpp>
#include <org/apache/poi/ss/usermodel/Cell.hpp>
#include <org/apache/poi/ss/usermodel/DifferentialStyleProvider.hpp>
#include <org/apache/poi/ss/usermodel/Table.hpp>
#include <org/apache/poi/ss/usermodel/TableStyle.hpp>
#include <org/apache/poi/ss/usermodel/TableStyleInfo.hpp>
#include <org/apache/poi/ss/util/CellRangeAddress.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::ss::usermodel::TableStyleType_2::TableStyleType_2(::java::lang::String* name, int ordinal)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
    ctor(name, ordinal);
}

poi::ss::util::CellRangeAddressBase* poi::ss::usermodel::TableStyleType_2::getRange(Table* table, Cell* cell)
{
    auto info = npc(table)->getStyle();
    if(!npc(info)->isShowColumnStripes())
        return nullptr;

    auto c1Style = npc(npc(info)->getStyle())->getStyle(firstColumnStripe);
    auto c2Style = npc(npc(info)->getStyle())->getStyle(secondColumnStripe);
    auto c1Stripe = c1Style == nullptr ? int32_t(1) : ::java::lang::Math::max(int32_t(1), npc(c1Style)->getStripeSize());
    auto c2Stripe = c2Style == nullptr ? int32_t(1) : ::java::lang::Math::max(int32_t(1), npc(c2Style)->getStripeSize());
    auto firstStart = npc(table)->getStartColIndex();
    auto secondStart = firstStart + c1Stripe;
    auto c = npc(cell)->getColumnIndex();
    while (true) {
        if(firstStart > c)
            break;

        if(c >= firstStart && c <= secondStart - int32_t(1))
            return new ::poi::ss::util::CellRangeAddress(npc(table)->getStartRowIndex(), npc(table)->getEndRowIndex(), firstStart, secondStart - int32_t(1));

        firstStart = secondStart + c2Stripe;
        secondStart = firstStart + c1Stripe;
    }
    return nullptr;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::usermodel::TableStyleType_2::class_()
{
    static ::java::lang::Class* c = ::class_(u"", 0);
    return c;
}

java::lang::Class* poi::ss::usermodel::TableStyleType_2::getClass0()
{
    return class_();
}

