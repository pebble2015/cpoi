// Generated from /POI/java/org/apache/poi/hssf/record/BoundSheetRecord.java
#include <org/apache/poi/hssf/record/BoundSheetRecord_1.hpp>

#include <java/lang/NullPointerException.hpp>
#include <org/apache/poi/hssf/record/BoundSheetRecord.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::hssf::record::BoundSheetRecord_1::BoundSheetRecord_1()
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
    ctor();
}

int32_t poi::hssf::record::BoundSheetRecord_1::compare(BoundSheetRecord* bsr1, BoundSheetRecord* bsr2)
{
    return npc(bsr1)->getPositionOfBof() - npc(bsr2)->getPositionOfBof();
}

int32_t poi::hssf::record::BoundSheetRecord_1::compare(::java::lang::Object* o1, ::java::lang::Object* o2)
{ 
    return compare(dynamic_cast< BoundSheetRecord* >(o1), dynamic_cast< BoundSheetRecord* >(o2));
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::record::BoundSheetRecord_1::class_()
{
    static ::java::lang::Class* c = ::class_(u"", 0);
    return c;
}

bool poi::hssf::record::BoundSheetRecord_1::equals(::java::lang::Object* obj)
{
    return Object::equals(obj);
}

java::lang::Class* poi::hssf::record::BoundSheetRecord_1::getClass0()
{
    return class_();
}

