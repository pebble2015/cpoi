// Generated from /POI/java/org/apache/poi/hssf/record/aggregates/RecordAggregate.java
#include <org/apache/poi/hssf/record/aggregates/RecordAggregate_PositionTrackingVisitor.hpp>

#include <java/lang/NullPointerException.hpp>
#include <org/apache/poi/hssf/record/Record.hpp>
#include <org/apache/poi/hssf/record/aggregates/RecordAggregate_RecordVisitor.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::hssf::record::aggregates::RecordAggregate_PositionTrackingVisitor::RecordAggregate_PositionTrackingVisitor(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::record::aggregates::RecordAggregate_PositionTrackingVisitor::RecordAggregate_PositionTrackingVisitor(RecordAggregate_RecordVisitor* rv, int32_t initialPosition) 
    : RecordAggregate_PositionTrackingVisitor(*static_cast< ::default_init_tag* >(0))
{
    ctor(rv,initialPosition);
}

void org::apache::poi::hssf::record::aggregates::RecordAggregate_PositionTrackingVisitor::ctor(RecordAggregate_RecordVisitor* rv, int32_t initialPosition)
{
    super::ctor();
    _rv = rv;
    _position = initialPosition;
}

void org::apache::poi::hssf::record::aggregates::RecordAggregate_PositionTrackingVisitor::visitRecord(::org::apache::poi::hssf::record::Record* r)
{
    _position += npc(r)->getRecordSize();
    npc(_rv)->visitRecord(r);
}

void org::apache::poi::hssf::record::aggregates::RecordAggregate_PositionTrackingVisitor::setPosition(int32_t position)
{
    _position = position;
}

int32_t org::apache::poi::hssf::record::aggregates::RecordAggregate_PositionTrackingVisitor::getPosition()
{
    return _position;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::record::aggregates::RecordAggregate_PositionTrackingVisitor::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.aggregates.RecordAggregate.PositionTrackingVisitor", 77);
    return c;
}

java::lang::Class* org::apache::poi::hssf::record::aggregates::RecordAggregate_PositionTrackingVisitor::getClass0()
{
    return class_();
}

