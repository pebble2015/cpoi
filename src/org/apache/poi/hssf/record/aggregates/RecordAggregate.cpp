// Generated from /POI/java/org/apache/poi/hssf/record/aggregates/RecordAggregate.java
#include <org/apache/poi/hssf/record/aggregates/RecordAggregate.hpp>

#include <java/lang/NullPointerException.hpp>
#include <org/apache/poi/hssf/record/aggregates/RecordAggregate_RecordSizingVisitor.hpp>
#include <org/apache/poi/hssf/record/aggregates/RecordAggregate_SerializingRecordVisitor.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::hssf::record::aggregates::RecordAggregate::RecordAggregate(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::record::aggregates::RecordAggregate::RecordAggregate()
    : RecordAggregate(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

int32_t poi::hssf::record::aggregates::RecordAggregate::serialize(int32_t offset, ::int8_tArray* data)
{
    auto srv = new RecordAggregate_SerializingRecordVisitor(data, offset);
    visitContainedRecords(srv);
    return npc(srv)->countBytesWritten();
}

int32_t poi::hssf::record::aggregates::RecordAggregate::getRecordSize()
{
    auto rsv = new RecordAggregate_RecordSizingVisitor();
    visitContainedRecords(rsv);
    return npc(rsv)->getTotalSize();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::record::aggregates::RecordAggregate::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.aggregates.RecordAggregate", 53);
    return c;
}

java::lang::Class* poi::hssf::record::aggregates::RecordAggregate::getClass0()
{
    return class_();
}

