// Generated from /POI/java/org/apache/poi/hssf/record/EscherAggregate.java
#include <org/apache/poi/hssf/record/EscherAggregate_createAggregate_1.hpp>

#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/util/List.hpp>
#include <org/apache/poi/ddf/EscherClientDataRecord.hpp>
#include <org/apache/poi/ddf/EscherRecord.hpp>
#include <org/apache/poi/ddf/EscherTextboxRecord.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::hssf::record::EscherAggregate_createAggregate_1::EscherAggregate_createAggregate_1(::java::util::List* shapeRecords)
    : super(*static_cast< ::default_init_tag* >(0))
    , shapeRecords(shapeRecords)
{
    clinit();
    ctor();
}

org::apache::poi::ddf::EscherRecord* org::apache::poi::hssf::record::EscherAggregate_createAggregate_1::createRecord(::int8_tArray* data, int32_t offset)
{
    auto r = super::createRecord(data, offset);
    if(npc(r)->getRecordId() == ::org::apache::poi::ddf::EscherClientDataRecord::RECORD_ID || npc(r)->getRecordId() == ::org::apache::poi::ddf::EscherTextboxRecord::RECORD_ID) {
        npc(shapeRecords)->add(static_cast< ::java::lang::Object* >(r));
    }
    return r;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::record::EscherAggregate_createAggregate_1::class_()
{
    static ::java::lang::Class* c = ::class_(u"", 0);
    return c;
}

java::lang::Class* org::apache::poi::hssf::record::EscherAggregate_createAggregate_1::getClass0()
{
    return class_();
}

