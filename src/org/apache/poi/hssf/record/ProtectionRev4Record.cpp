// Generated from /POI/java/org/apache/poi/hssf/record/ProtectionRev4Record.java
#include <org/apache/poi/hssf/record/ProtectionRev4Record.hpp>

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

poi::hssf::record::ProtectionRev4Record::ProtectionRev4Record(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::record::ProtectionRev4Record::ProtectionRev4Record(int32_t options) 
    : ProtectionRev4Record(*static_cast< ::default_init_tag* >(0))
{
    ctor(options);
}

poi::hssf::record::ProtectionRev4Record::ProtectionRev4Record(bool protect) 
    : ProtectionRev4Record(*static_cast< ::default_init_tag* >(0))
{
    ctor(protect);
}

poi::hssf::record::ProtectionRev4Record::ProtectionRev4Record(RecordInputStream* in) 
    : ProtectionRev4Record(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int16_t poi::hssf::record::ProtectionRev4Record::sid;

poi::util::BitField*& poi::hssf::record::ProtectionRev4Record::protectedFlag()
{
    clinit();
    return protectedFlag_;
}
poi::util::BitField* poi::hssf::record::ProtectionRev4Record::protectedFlag_;

void poi::hssf::record::ProtectionRev4Record::ctor(int32_t options)
{
    super::ctor();
    _options = options;
}

void poi::hssf::record::ProtectionRev4Record::ctor(bool protect)
{
    ctor(int32_t(0));
    setProtect(protect);
}

void poi::hssf::record::ProtectionRev4Record::ctor(RecordInputStream* in)
{
    ctor(npc(in)->readUShort());
}

void poi::hssf::record::ProtectionRev4Record::setProtect(bool protect)
{
    _options = npc(protectedFlag_)->setBoolean(_options, protect);
}

bool poi::hssf::record::ProtectionRev4Record::getProtect()
{
    return npc(protectedFlag_)->isSet(_options);
}

java::lang::String* poi::hssf::record::ProtectionRev4Record::toString()
{
    auto buffer = new ::java::lang::StringBuffer();
    npc(buffer)->append(u"[PROT4REV]\n"_j);
    npc(npc(npc(buffer)->append(u"    .options = "_j))->append(::poi::util::HexDump::shortToHex(_options)))->append(u"\n"_j);
    npc(buffer)->append(u"[/PROT4REV]\n"_j);
    return npc(buffer)->toString();
}

void poi::hssf::record::ProtectionRev4Record::serialize(::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeShort(_options);
}

int32_t poi::hssf::record::ProtectionRev4Record::getDataSize()
{
    return 2;
}

int16_t poi::hssf::record::ProtectionRev4Record::getSid()
{
    return sid;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::record::ProtectionRev4Record::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.ProtectionRev4Record", 47);
    return c;
}

void poi::hssf::record::ProtectionRev4Record::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        protectedFlag_ = ::poi::util::BitFieldFactory::getInstance(1);
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

int32_t poi::hssf::record::ProtectionRev4Record::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

int8_tArray* poi::hssf::record::ProtectionRev4Record::serialize()
{
    return super::serialize();
}

java::lang::Class* poi::hssf::record::ProtectionRev4Record::getClass0()
{
    return class_();
}

