// Generated from /POI/java/org/apache/poi/hssf/record/aggregates/ColumnInfoRecordsAggregate.java
#include <org/apache/poi/hssf/record/aggregates/ColumnInfoRecordsAggregate_CIRComparator.hpp>

#include <java/lang/NullPointerException.hpp>
#include <org/apache/poi/hssf/record/ColumnInfoRecord.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::hssf::record::aggregates::ColumnInfoRecordsAggregate_CIRComparator::ColumnInfoRecordsAggregate_CIRComparator(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::record::aggregates::ColumnInfoRecordsAggregate_CIRComparator::ColumnInfoRecordsAggregate_CIRComparator() 
    : ColumnInfoRecordsAggregate_CIRComparator(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

java::util::Comparator*& org::apache::poi::hssf::record::aggregates::ColumnInfoRecordsAggregate_CIRComparator::instance()
{
    clinit();
    return instance_;
}
java::util::Comparator* org::apache::poi::hssf::record::aggregates::ColumnInfoRecordsAggregate_CIRComparator::instance_;

void org::apache::poi::hssf::record::aggregates::ColumnInfoRecordsAggregate_CIRComparator::ctor()
{
    super::ctor();
}

int32_t org::apache::poi::hssf::record::aggregates::ColumnInfoRecordsAggregate_CIRComparator::compare(::org::apache::poi::hssf::record::ColumnInfoRecord* a, ::org::apache::poi::hssf::record::ColumnInfoRecord* b)
{
    return compareColInfos(a, b);
}

int32_t org::apache::poi::hssf::record::aggregates::ColumnInfoRecordsAggregate_CIRComparator::compare(::java::lang::Object* o1, ::java::lang::Object* o2)
{ 
    return compare(dynamic_cast< ::org::apache::poi::hssf::record::ColumnInfoRecord* >(o1), dynamic_cast< ::org::apache::poi::hssf::record::ColumnInfoRecord* >(o2));
}

int32_t org::apache::poi::hssf::record::aggregates::ColumnInfoRecordsAggregate_CIRComparator::compareColInfos(::org::apache::poi::hssf::record::ColumnInfoRecord* a, ::org::apache::poi::hssf::record::ColumnInfoRecord* b)
{
    clinit();
    return npc(a)->getFirstColumn() - npc(b)->getFirstColumn();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::record::aggregates::ColumnInfoRecordsAggregate_CIRComparator::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.aggregates.ColumnInfoRecordsAggregate.CIRComparator", 78);
    return c;
}

void org::apache::poi::hssf::record::aggregates::ColumnInfoRecordsAggregate_CIRComparator::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        instance_ = new ColumnInfoRecordsAggregate_CIRComparator();
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

bool org::apache::poi::hssf::record::aggregates::ColumnInfoRecordsAggregate_CIRComparator::equals(::java::lang::Object* obj)
{
    return Object::equals(obj);
}

java::lang::Class* org::apache::poi::hssf::record::aggregates::ColumnInfoRecordsAggregate_CIRComparator::getClass0()
{
    return class_();
}

