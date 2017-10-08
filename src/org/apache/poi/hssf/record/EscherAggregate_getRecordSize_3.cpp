// Generated from /POI/java/org/apache/poi/hssf/record/EscherAggregate.java
#include <org/apache/poi/hssf/record/EscherAggregate_getRecordSize_3.hpp>

#include <java/lang/Integer.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/util/List.hpp>
#include <org/apache/poi/ddf/EscherClientDataRecord.hpp>
#include <org/apache/poi/ddf/EscherTextboxRecord.hpp>
#include <org/apache/poi/hssf/record/EscherAggregate.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::hssf::record::EscherAggregate_getRecordSize_3::EscherAggregate_getRecordSize_3(EscherAggregate *EscherAggregate_this, ::java::util::List* spEndingOffsets)
    : super(*static_cast< ::default_init_tag* >(0))
    , EscherAggregate_this(EscherAggregate_this)
    , spEndingOffsets(spEndingOffsets)
{
    clinit();
    ctor();
}

void poi::hssf::record::EscherAggregate_getRecordSize_3::beforeRecordSerialize(int32_t offset, int16_t recordId, ::poi::ddf::EscherRecord* record)
{
}

void poi::hssf::record::EscherAggregate_getRecordSize_3::afterRecordSerialize(int32_t offset, int16_t recordId, int32_t size, ::poi::ddf::EscherRecord* record)
{
    if(recordId == ::poi::ddf::EscherClientDataRecord::RECORD_ID || recordId == ::poi::ddf::EscherTextboxRecord::RECORD_ID) {
        npc(spEndingOffsets)->add(::java::lang::Integer::valueOf(offset));
    }
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::record::EscherAggregate_getRecordSize_3::class_()
{
    static ::java::lang::Class* c = ::class_(u"", 0);
    return c;
}

java::lang::Class* poi::hssf::record::EscherAggregate_getRecordSize_3::getClass0()
{
    return class_();
}

