// Generated from /POI/java/org/apache/poi/hssf/record/aggregates/RecordAggregate.java
#include <org/apache/poi/hssf/record/aggregates/RecordAggregate_RecordSizingVisitor.hpp>

#include <java/lang/NullPointerException.hpp>
#include <org/apache/poi/hssf/record/Record.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::hssf::record::aggregates::RecordAggregate_RecordSizingVisitor::RecordAggregate_RecordSizingVisitor(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::record::aggregates::RecordAggregate_RecordSizingVisitor::RecordAggregate_RecordSizingVisitor() 
    : RecordAggregate_RecordSizingVisitor(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void org::apache::poi::hssf::record::aggregates::RecordAggregate_RecordSizingVisitor::ctor()
{
    super::ctor();
    _totalSize = 0;
}

int32_t org::apache::poi::hssf::record::aggregates::RecordAggregate_RecordSizingVisitor::getTotalSize()
{
    return _totalSize;
}

void org::apache::poi::hssf::record::aggregates::RecordAggregate_RecordSizingVisitor::visitRecord(::org::apache::poi::hssf::record::Record* r)
{
    _totalSize += npc(r)->getRecordSize();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::record::aggregates::RecordAggregate_RecordSizingVisitor::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.aggregates.RecordAggregate.RecordSizingVisitor", 73);
    return c;
}

java::lang::Class* org::apache::poi::hssf::record::aggregates::RecordAggregate_RecordSizingVisitor::getClass0()
{
    return class_();
}

