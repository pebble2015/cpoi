// Generated from /POI/java/org/apache/poi/hssf/record/EndSubRecord.java
#include <org/apache/poi/hssf/record/EndSubRecord.hpp>

#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <java/lang/StringBuilder.hpp>
#include <org/apache/poi/util/LittleEndianOutput.hpp>
#include <org/apache/poi/util/RecordFormatException.hpp>
#include <Array.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::hssf::record::EndSubRecord::EndSubRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::record::EndSubRecord::EndSubRecord() 
    : EndSubRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::hssf::record::EndSubRecord::EndSubRecord(::org::apache::poi::util::LittleEndianInput* in, int32_t size) 
    : EndSubRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in,size);
}

constexpr int16_t org::apache::poi::hssf::record::EndSubRecord::sid;

constexpr int32_t org::apache::poi::hssf::record::EndSubRecord::ENCODED_SIZE;

void org::apache::poi::hssf::record::EndSubRecord::ctor()
{
    super::ctor();
}

void org::apache::poi::hssf::record::EndSubRecord::ctor(::org::apache::poi::util::LittleEndianInput* in, int32_t size)
{
    super::ctor();
    if((size & int32_t(255)) != ENCODED_SIZE) {
        throw new ::org::apache::poi::util::RecordFormatException(::java::lang::StringBuilder().append(u"Unexpected size ("_j)->append(size)
            ->append(u")"_j)->toString());
    }
}

bool org::apache::poi::hssf::record::EndSubRecord::isTerminating()
{
    return true;
}

java::lang::String* org::apache::poi::hssf::record::EndSubRecord::toString()
{
    auto buffer = new ::java::lang::StringBuffer();
    npc(buffer)->append(u"[ftEnd]\n"_j);
    npc(buffer)->append(u"[/ftEnd]\n"_j);
    return npc(buffer)->toString();
}

void org::apache::poi::hssf::record::EndSubRecord::serialize(::org::apache::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeShort(sid);
    npc(out)->writeShort(ENCODED_SIZE);
}

int32_t org::apache::poi::hssf::record::EndSubRecord::getDataSize()
{
    return ENCODED_SIZE;
}

int16_t org::apache::poi::hssf::record::EndSubRecord::getSid()
{
    return sid;
}

org::apache::poi::hssf::record::EndSubRecord* org::apache::poi::hssf::record::EndSubRecord::clone()
{
    auto rec = new EndSubRecord();
    return rec;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::record::EndSubRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.EndSubRecord", 39);
    return c;
}

int8_tArray* org::apache::poi::hssf::record::EndSubRecord::serialize()
{
    return super::serialize();
}

java::lang::Class* org::apache::poi::hssf::record::EndSubRecord::getClass0()
{
    return class_();
}

