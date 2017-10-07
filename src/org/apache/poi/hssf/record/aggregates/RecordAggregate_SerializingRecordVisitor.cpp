// Generated from /POI/java/org/apache/poi/hssf/record/aggregates/RecordAggregate.java
#include <org/apache/poi/hssf/record/aggregates/RecordAggregate_SerializingRecordVisitor.hpp>

#include <java/lang/NullPointerException.hpp>
#include <org/apache/poi/hssf/record/Record.hpp>
#include <Array.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::hssf::record::aggregates::RecordAggregate_SerializingRecordVisitor::RecordAggregate_SerializingRecordVisitor(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::record::aggregates::RecordAggregate_SerializingRecordVisitor::RecordAggregate_SerializingRecordVisitor(::int8_tArray* data, int32_t startOffset) 
    : RecordAggregate_SerializingRecordVisitor(*static_cast< ::default_init_tag* >(0))
{
    ctor(data,startOffset);
}

void org::apache::poi::hssf::record::aggregates::RecordAggregate_SerializingRecordVisitor::ctor(::int8_tArray* data, int32_t startOffset)
{
    super::ctor();
    _data = data;
    _startOffset = startOffset;
    _countBytesWritten = 0;
}

int32_t org::apache::poi::hssf::record::aggregates::RecordAggregate_SerializingRecordVisitor::countBytesWritten()
{
    return _countBytesWritten;
}

void org::apache::poi::hssf::record::aggregates::RecordAggregate_SerializingRecordVisitor::visitRecord(::org::apache::poi::hssf::record::Record* r)
{
    auto currentOffset = _startOffset + _countBytesWritten;
    _countBytesWritten += npc(r)->serialize(currentOffset, _data);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::record::aggregates::RecordAggregate_SerializingRecordVisitor::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.aggregates.RecordAggregate.SerializingRecordVisitor", 78);
    return c;
}

java::lang::Class* org::apache::poi::hssf::record::aggregates::RecordAggregate_SerializingRecordVisitor::getClass0()
{
    return class_();
}

