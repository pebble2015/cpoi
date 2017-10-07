// Generated from /POI/java/org/apache/poi/hssf/record/StandardRecord.java
#include <org/apache/poi/hssf/record/StandardRecord.hpp>

#include <java/lang/Class.hpp>
#include <java/lang/IllegalStateException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <org/apache/poi/util/LittleEndianByteArrayOutputStream.hpp>
#include <Array.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::hssf::record::StandardRecord::StandardRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::record::StandardRecord::StandardRecord()
    : StandardRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

int32_t org::apache::poi::hssf::record::StandardRecord::getRecordSize()
{
    return int32_t(4) + getDataSize();
}

int32_t org::apache::poi::hssf::record::StandardRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    auto dataSize = getDataSize();
    auto recSize = int32_t(4) + dataSize;
    auto out = new ::org::apache::poi::util::LittleEndianByteArrayOutputStream(data, offset, recSize);
    npc(out)->writeShort(static_cast< int32_t >(getSid()));
    npc(out)->writeShort(dataSize);
    serialize(out);
    if(npc(out)->getWriteIndex() - offset != recSize) {
        throw new ::java::lang::IllegalStateException(::java::lang::StringBuilder().append(u"Error in serialization of ("_j)->append(npc(getClass())->getName())
            ->append(u"): "_j)
            ->append(u"Incorrect number of bytes written - expected "_j)
            ->append(recSize)
            ->append(u" but got "_j)
            ->append((npc(out)->getWriteIndex() - offset))->toString());
    }
    return recSize;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::record::StandardRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.StandardRecord", 41);
    return c;
}

int8_tArray* org::apache::poi::hssf::record::StandardRecord::serialize()
{
    return super::serialize();
}

java::lang::Class* org::apache::poi::hssf::record::StandardRecord::getClass0()
{
    return class_();
}

