// Generated from /POI/java/org/apache/poi/hssf/record/WindowProtectRecord.java
#include <org/apache/poi/hssf/record/WindowProtectRecord.hpp>

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

poi::hssf::record::WindowProtectRecord::WindowProtectRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::record::WindowProtectRecord::WindowProtectRecord(int32_t options) 
    : WindowProtectRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(options);
}

poi::hssf::record::WindowProtectRecord::WindowProtectRecord(RecordInputStream* in) 
    : WindowProtectRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

poi::hssf::record::WindowProtectRecord::WindowProtectRecord(bool protect) 
    : WindowProtectRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(protect);
}

constexpr int16_t poi::hssf::record::WindowProtectRecord::sid;

poi::util::BitField*& poi::hssf::record::WindowProtectRecord::settingsProtectedFlag()
{
    clinit();
    return settingsProtectedFlag_;
}
poi::util::BitField* poi::hssf::record::WindowProtectRecord::settingsProtectedFlag_;

void poi::hssf::record::WindowProtectRecord::ctor(int32_t options)
{
    super::ctor();
    _options = options;
}

void poi::hssf::record::WindowProtectRecord::ctor(RecordInputStream* in)
{
    ctor(npc(in)->readUShort());
}

void poi::hssf::record::WindowProtectRecord::ctor(bool protect)
{
    ctor(int32_t(0));
    setProtect(protect);
}

void poi::hssf::record::WindowProtectRecord::setProtect(bool protect)
{
    _options = npc(settingsProtectedFlag_)->setBoolean(_options, protect);
}

bool poi::hssf::record::WindowProtectRecord::getProtect()
{
    return npc(settingsProtectedFlag_)->isSet(_options);
}

java::lang::String* poi::hssf::record::WindowProtectRecord::toString()
{
    auto buffer = new ::java::lang::StringBuffer();
    npc(buffer)->append(u"[WINDOWPROTECT]\n"_j);
    npc(npc(npc(buffer)->append(u"    .options = "_j))->append(::poi::util::HexDump::shortToHex(_options)))->append(u"\n"_j);
    npc(buffer)->append(u"[/WINDOWPROTECT]\n"_j);
    return npc(buffer)->toString();
}

void poi::hssf::record::WindowProtectRecord::serialize(::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeShort(_options);
}

int32_t poi::hssf::record::WindowProtectRecord::getDataSize()
{
    return 2;
}

int16_t poi::hssf::record::WindowProtectRecord::getSid()
{
    return sid;
}

java::lang::Object* poi::hssf::record::WindowProtectRecord::clone()
{
    return new WindowProtectRecord(_options);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::record::WindowProtectRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.WindowProtectRecord", 46);
    return c;
}

void poi::hssf::record::WindowProtectRecord::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        settingsProtectedFlag_ = ::poi::util::BitFieldFactory::getInstance(1);
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

int32_t poi::hssf::record::WindowProtectRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

int8_tArray* poi::hssf::record::WindowProtectRecord::serialize()
{
    return super::serialize();
}

java::lang::Class* poi::hssf::record::WindowProtectRecord::getClass0()
{
    return class_();
}

