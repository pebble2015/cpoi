// Generated from /POI/java/org/apache/poi/hssf/model/InternalSheet.java
#include <org/apache/poi/hssf/model/InternalSheet_RecordCloner.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/lang/CloneNotSupportedException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/Throwable.hpp>
#include <java/util/List.hpp>
#include <org/apache/poi/hssf/record/Record.hpp>
#include <org/apache/poi/util/RecordFormatException.hpp>

template<typename T, typename U>
static T java_cast(U* u)
{
    if(!u) return static_cast<T>(nullptr);
    auto t = dynamic_cast<T>(u);
    if(!t) throw new ::java::lang::ClassCastException();
    return t;
}

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::hssf::model::InternalSheet_RecordCloner::InternalSheet_RecordCloner(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::model::InternalSheet_RecordCloner::InternalSheet_RecordCloner(::java::util::List* destList) 
    : InternalSheet_RecordCloner(*static_cast< ::default_init_tag* >(0))
{
    ctor(destList);
}

void poi::hssf::model::InternalSheet_RecordCloner::ctor(::java::util::List* destList)
{
    super::ctor();
    _destList = destList;
}

void poi::hssf::model::InternalSheet_RecordCloner::visitRecord(::poi::hssf::record::Record* r)
{
    try {
        npc(_destList)->add(static_cast< ::java::lang::Object* >(java_cast< ::poi::hssf::record::Record* >(npc(r)->clone())));
    } catch (::java::lang::CloneNotSupportedException* e) {
        throw new ::poi::util::RecordFormatException(static_cast< ::java::lang::Throwable* >(e));
    }
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::model::InternalSheet_RecordCloner::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.model.InternalSheet.RecordCloner", 52);
    return c;
}

java::lang::Class* poi::hssf::model::InternalSheet_RecordCloner::getClass0()
{
    return class_();
}

