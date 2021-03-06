// Generated from /POI/java/org/apache/poi/hssf/record/ProtectRecord.java
#include <org/apache/poi/hssf/record/ProtectRecord.hpp>

#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <org/apache/poi/hssf/record/RecordInputStream.hpp>
#include <org/apache/poi/util/BitField.hpp>
#include <org/apache/poi/util/BitFieldFactory.hpp>
#include <org/apache/poi/util/HexDump.hpp>
#include <org/apache/poi/util/LittleEndianOutput.hpp>
#include <Array.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::hssf::record::ProtectRecord::ProtectRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::record::ProtectRecord::ProtectRecord(int32_t options) 
    : ProtectRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(options);
}

poi::hssf::record::ProtectRecord::ProtectRecord(bool isProtected) 
    : ProtectRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(isProtected);
}

poi::hssf::record::ProtectRecord::ProtectRecord(RecordInputStream* in) 
    : ProtectRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int16_t poi::hssf::record::ProtectRecord::sid;

poi::util::BitField*& poi::hssf::record::ProtectRecord::protectFlag()
{
    clinit();
    return protectFlag_;
}
poi::util::BitField* poi::hssf::record::ProtectRecord::protectFlag_;

void poi::hssf::record::ProtectRecord::ctor(int32_t options)
{
    super::ctor();
    _options = options;
}

void poi::hssf::record::ProtectRecord::ctor(bool isProtected)
{
    ctor(int32_t(0));
    setProtect(isProtected);
}

void poi::hssf::record::ProtectRecord::ctor(RecordInputStream* in)
{
    ctor(static_cast< int32_t >(npc(in)->readShort()));
}

void poi::hssf::record::ProtectRecord::setProtect(bool protect)
{
    _options = npc(protectFlag_)->setBoolean(_options, protect);
}

bool poi::hssf::record::ProtectRecord::getProtect()
{
    return npc(protectFlag_)->isSet(_options);
}

java::lang::String* poi::hssf::record::ProtectRecord::toString()
{
    auto buffer = new ::java::lang::StringBuffer();
    npc(buffer)->append(u"[PROTECT]\n"_j);
    npc(npc(npc(buffer)->append(u"    .options = "_j))->append(::poi::util::HexDump::shortToHex(_options)))->append(u"\n"_j);
    npc(buffer)->append(u"[/PROTECT]\n"_j);
    return npc(buffer)->toString();
}

void poi::hssf::record::ProtectRecord::serialize(::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeShort(_options);
}

int32_t poi::hssf::record::ProtectRecord::getDataSize()
{
    return 2;
}

int16_t poi::hssf::record::ProtectRecord::getSid()
{
    return sid;
}

java::lang::Object* poi::hssf::record::ProtectRecord::clone()
{
    return new ProtectRecord(_options);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::record::ProtectRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.ProtectRecord", 40);
    return c;
}

void poi::hssf::record::ProtectRecord::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        protectFlag_ = ::poi::util::BitFieldFactory::getInstance(1);
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

int32_t poi::hssf::record::ProtectRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

int8_tArray* poi::hssf::record::ProtectRecord::serialize()
{
    return super::serialize();
}

java::lang::Class* poi::hssf::record::ProtectRecord::getClass0()
{
    return class_();
}

