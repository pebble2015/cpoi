// Generated from /POI/java/org/apache/poi/hssf/record/InterfaceEndRecord.java
#include <org/apache/poi/hssf/record/InterfaceEndRecord.hpp>

#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <org/apache/poi/hssf/record/InterfaceHdrRecord.hpp>
#include <org/apache/poi/hssf/record/RecordInputStream.hpp>
#include <org/apache/poi/util/RecordFormatException.hpp>
#include <Array.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::hssf::record::InterfaceEndRecord::InterfaceEndRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::record::InterfaceEndRecord::InterfaceEndRecord() 
    : InterfaceEndRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

constexpr int16_t poi::hssf::record::InterfaceEndRecord::sid;

poi::hssf::record::InterfaceEndRecord*& poi::hssf::record::InterfaceEndRecord::instance()
{
    clinit();
    return instance_;
}
poi::hssf::record::InterfaceEndRecord* poi::hssf::record::InterfaceEndRecord::instance_;

void poi::hssf::record::InterfaceEndRecord::ctor()
{
    super::ctor();
}

poi::hssf::record::Record* poi::hssf::record::InterfaceEndRecord::create(RecordInputStream* in)
{
    clinit();
    switch (npc(in)->remaining()) {
    case int32_t(0):
        return instance_;
    case int32_t(2):
        return new InterfaceHdrRecord(in);
    }

    throw new ::poi::util::RecordFormatException(::java::lang::StringBuilder().append(u"Invalid record data size: "_j)->append(npc(in)->remaining())->toString());
}

java::lang::String* poi::hssf::record::InterfaceEndRecord::toString()
{
    return u"[INTERFACEEND/]\n"_j;
}

void poi::hssf::record::InterfaceEndRecord::serialize(::poi::util::LittleEndianOutput* out)
{
}

int32_t poi::hssf::record::InterfaceEndRecord::getDataSize()
{
    return 0;
}

int16_t poi::hssf::record::InterfaceEndRecord::getSid()
{
    return sid;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::record::InterfaceEndRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.InterfaceEndRecord", 45);
    return c;
}

void poi::hssf::record::InterfaceEndRecord::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        instance_ = new InterfaceEndRecord();
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

int32_t poi::hssf::record::InterfaceEndRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

int8_tArray* poi::hssf::record::InterfaceEndRecord::serialize()
{
    return super::serialize();
}

java::lang::Class* poi::hssf::record::InterfaceEndRecord::getClass0()
{
    return class_();
}

