// Generated from /POI/java/org/apache/poi/hssf/model/InternalSheet.java
#include <org/apache/poi/hssf/model/InternalSheet_spillAggregate_1.hpp>

#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/util/List.hpp>
#include <org/apache/poi/hssf/record/Record.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::hssf::model::InternalSheet_spillAggregate_1::InternalSheet_spillAggregate_1(::java::util::List* recs)
    : super(*static_cast< ::default_init_tag* >(0))
    , recs(recs)
{
    clinit();
    ctor();
}

void poi::hssf::model::InternalSheet_spillAggregate_1::visitRecord(::poi::hssf::record::Record* r)
{
    npc(recs)->add(static_cast< ::java::lang::Object* >(r));
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::model::InternalSheet_spillAggregate_1::class_()
{
    static ::java::lang::Class* c = ::class_(u"", 0);
    return c;
}

java::lang::Class* poi::hssf::model::InternalSheet_spillAggregate_1::getClass0()
{
    return class_();
}

