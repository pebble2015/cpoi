// Generated from /POI/java/org/apache/poi/hssf/record/EOFRecord.java
#include <org/apache/poi/hssf/record/EOFRecord.hpp>

#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <Array.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::hssf::record::EOFRecord::EOFRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::record::EOFRecord::EOFRecord() 
    : EOFRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::hssf::record::EOFRecord::EOFRecord(RecordInputStream* in) 
    : EOFRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int16_t org::apache::poi::hssf::record::EOFRecord::sid;

constexpr int32_t org::apache::poi::hssf::record::EOFRecord::ENCODED_SIZE;

org::apache::poi::hssf::record::EOFRecord*& org::apache::poi::hssf::record::EOFRecord::instance()
{
    clinit();
    return instance_;
}
org::apache::poi::hssf::record::EOFRecord* org::apache::poi::hssf::record::EOFRecord::instance_;

void org::apache::poi::hssf::record::EOFRecord::ctor()
{
    super::ctor();
}

void org::apache::poi::hssf::record::EOFRecord::ctor(RecordInputStream* in)
{
    super::ctor();
}

java::lang::String* org::apache::poi::hssf::record::EOFRecord::toString()
{
    auto buffer = new ::java::lang::StringBuffer();
    npc(buffer)->append(u"[EOF]\n"_j);
    npc(buffer)->append(u"[/EOF]\n"_j);
    return npc(buffer)->toString();
}

void org::apache::poi::hssf::record::EOFRecord::serialize(::org::apache::poi::util::LittleEndianOutput* out)
{
}

int32_t org::apache::poi::hssf::record::EOFRecord::getDataSize()
{
    return ENCODED_SIZE - int32_t(4);
}

int16_t org::apache::poi::hssf::record::EOFRecord::getSid()
{
    return sid;
}

org::apache::poi::hssf::record::EOFRecord* org::apache::poi::hssf::record::EOFRecord::clone()
{
    return instance_;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::record::EOFRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.EOFRecord", 36);
    return c;
}

void org::apache::poi::hssf::record::EOFRecord::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        instance_ = new EOFRecord();
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

int32_t org::apache::poi::hssf::record::EOFRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

int8_tArray* org::apache::poi::hssf::record::EOFRecord::serialize()
{
    return super::serialize();
}

java::lang::Class* org::apache::poi::hssf::record::EOFRecord::getClass0()
{
    return class_();
}

