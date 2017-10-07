// Generated from /POI/java/org/apache/poi/hssf/record/aggregates/ValueRecordsAggregate.java
#include <org/apache/poi/hssf/record/aggregates/ValueRecordsAggregate_ValueIterator.hpp>

#include <java/io/Serializable.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/Cloneable.hpp>
#include <java/lang/IndexOutOfBoundsException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <org/apache/poi/hssf/record/CellValueRecordInterface.hpp>
#include <org/apache/poi/hssf/record/aggregates/ValueRecordsAggregate.hpp>
#include <SubArray.hpp>
#include <ObjectArray.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace io
    {
typedef ::SubArray< ::java::io::Serializable, ::java::lang::ObjectArray > SerializableArray;
    } // io

    namespace lang
    {
typedef ::SubArray< ::java::lang::Cloneable, ObjectArray > CloneableArray;
    } // lang
} // java

namespace org
{
    namespace apache
    {
        namespace poi
        {
            namespace hssf
            {
                namespace record
                {
typedef ::SubArray< ::org::apache::poi::hssf::record::CellValueRecordInterface, ::java::lang::ObjectArray > CellValueRecordInterfaceArray;
typedef ::SubArray< ::org::apache::poi::hssf::record::CellValueRecordInterfaceArray, ::java::lang::CloneableArray, ::java::io::SerializableArray > CellValueRecordInterfaceArrayArray;
                } // record
            } // hssf
        } // poi
    } // apache
} // org

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::hssf::record::aggregates::ValueRecordsAggregate_ValueIterator::ValueRecordsAggregate_ValueIterator(ValueRecordsAggregate *ValueRecordsAggregate_this, const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
    , ValueRecordsAggregate_this(ValueRecordsAggregate_this)
{
    clinit();
}

org::apache::poi::hssf::record::aggregates::ValueRecordsAggregate_ValueIterator::ValueRecordsAggregate_ValueIterator(ValueRecordsAggregate *ValueRecordsAggregate_this) 
    : ValueRecordsAggregate_ValueIterator(ValueRecordsAggregate_this, *static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void org::apache::poi::hssf::record::aggregates::ValueRecordsAggregate_ValueIterator::init()
{
    curRowIndex = int32_t(0);
    curColIndex = -int32_t(1);
    nextRowIndex = int32_t(0);
    nextColIndex = -int32_t(1);
}

void org::apache::poi::hssf::record::aggregates::ValueRecordsAggregate_ValueIterator::ctor()
{
    super::ctor();
    init();
    getNextPos();
}

void org::apache::poi::hssf::record::aggregates::ValueRecordsAggregate_ValueIterator::getNextPos()
{
    if(nextRowIndex >= npc(ValueRecordsAggregate_this->records)->length)
        return;

    while (nextRowIndex < npc(ValueRecordsAggregate_this->records)->length) {
        ++nextColIndex;
        if((*ValueRecordsAggregate_this->records)[nextRowIndex] == nullptr || nextColIndex >= npc((*ValueRecordsAggregate_this->records)[nextRowIndex])->length) {
            ++nextRowIndex;
            nextColIndex = -int32_t(1);
            continue;
        }
        if((*(*ValueRecordsAggregate_this->records)[nextRowIndex])[nextColIndex] != nullptr)
            return;

    }
}

bool org::apache::poi::hssf::record::aggregates::ValueRecordsAggregate_ValueIterator::hasNext()
{
    return nextRowIndex < npc(ValueRecordsAggregate_this->records)->length;
}

org::apache::poi::hssf::record::CellValueRecordInterface* org::apache::poi::hssf::record::aggregates::ValueRecordsAggregate_ValueIterator::next()
{
    if(!hasNext())
        throw new ::java::lang::IndexOutOfBoundsException(u"iterator has no next"_j);

    curRowIndex = nextRowIndex;
    curColIndex = nextColIndex;
    auto const ret = (*(*ValueRecordsAggregate_this->records)[curRowIndex])[curColIndex];
    getNextPos();
    return ret;
}

void org::apache::poi::hssf::record::aggregates::ValueRecordsAggregate_ValueIterator::remove()
{
    (*ValueRecordsAggregate_this->records)[curRowIndex]->set(curColIndex, nullptr);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::record::aggregates::ValueRecordsAggregate_ValueIterator::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.aggregates.ValueRecordsAggregate.ValueIterator", 73);
    return c;
}

java::lang::Class* org::apache::poi::hssf::record::aggregates::ValueRecordsAggregate_ValueIterator::getClass0()
{
    return class_();
}

