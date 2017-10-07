// Generated from /POI/java/org/apache/poi/hssf/record/EscherAggregate.java
#include <org/apache/poi/hssf/record/EscherAggregate_serialize_2.hpp>

#include <java/lang/Integer.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/util/List.hpp>
#include <org/apache/poi/ddf/EscherClientDataRecord.hpp>
#include <org/apache/poi/ddf/EscherRecord.hpp>
#include <org/apache/poi/ddf/EscherTextboxRecord.hpp>
#include <org/apache/poi/hssf/record/EscherAggregate.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::hssf::record::EscherAggregate_serialize_2::EscherAggregate_serialize_2(EscherAggregate *EscherAggregate_this, ::java::util::List* spEndingOffsets, ::java::util::List* shapes)
    : super(*static_cast< ::default_init_tag* >(0))
    , EscherAggregate_this(EscherAggregate_this)
    , spEndingOffsets(spEndingOffsets)
    , shapes(shapes)
{
    clinit();
    ctor();
}

void org::apache::poi::hssf::record::EscherAggregate_serialize_2::beforeRecordSerialize(int32_t offset, int16_t recordId, ::org::apache::poi::ddf::EscherRecord* record)
{
}

void org::apache::poi::hssf::record::EscherAggregate_serialize_2::afterRecordSerialize(int32_t offset, int16_t recordId, int32_t size, ::org::apache::poi::ddf::EscherRecord* record)
{
    if(recordId == ::org::apache::poi::ddf::EscherClientDataRecord::RECORD_ID || recordId == ::org::apache::poi::ddf::EscherTextboxRecord::RECORD_ID) {
        npc(spEndingOffsets)->add(::java::lang::Integer::valueOf(offset));
        npc(shapes)->add(static_cast< ::java::lang::Object* >(record));
    }
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::record::EscherAggregate_serialize_2::class_()
{
    static ::java::lang::Class* c = ::class_(u"", 0);
    return c;
}

java::lang::Class* org::apache::poi::hssf::record::EscherAggregate_serialize_2::getClass0()
{
    return class_();
}

