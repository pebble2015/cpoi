// Generated from /POI/java/org/apache/poi/hssf/record/DSFRecord.java
#include <org/apache/poi/hssf/record/DSFRecord.hpp>

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

poi::hssf::record::DSFRecord::DSFRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::record::DSFRecord::DSFRecord(int32_t options) 
    : DSFRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(options);
}

poi::hssf::record::DSFRecord::DSFRecord(bool isBiff5BookStreamPresent) 
    : DSFRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(isBiff5BookStreamPresent);
}

poi::hssf::record::DSFRecord::DSFRecord(RecordInputStream* in) 
    : DSFRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int16_t poi::hssf::record::DSFRecord::sid;

poi::util::BitField*& poi::hssf::record::DSFRecord::biff5BookStreamFlag()
{
    clinit();
    return biff5BookStreamFlag_;
}
poi::util::BitField* poi::hssf::record::DSFRecord::biff5BookStreamFlag_;

void poi::hssf::record::DSFRecord::ctor(int32_t options)
{
    super::ctor();
    _options = options;
}

void poi::hssf::record::DSFRecord::ctor(bool isBiff5BookStreamPresent)
{
    ctor(int32_t(0));
    _options = npc(biff5BookStreamFlag_)->setBoolean(0, isBiff5BookStreamPresent);
}

void poi::hssf::record::DSFRecord::ctor(RecordInputStream* in)
{
    ctor(static_cast< int32_t >(npc(in)->readShort()));
}

bool poi::hssf::record::DSFRecord::isBiff5BookStreamPresent()
{
    return npc(biff5BookStreamFlag_)->isSet(_options);
}

java::lang::String* poi::hssf::record::DSFRecord::toString()
{
    auto buffer = new ::java::lang::StringBuffer();
    npc(buffer)->append(u"[DSF]\n"_j);
    npc(npc(npc(buffer)->append(u"    .options = "_j))->append(::poi::util::HexDump::shortToHex(_options)))->append(u"\n"_j);
    npc(buffer)->append(u"[/DSF]\n"_j);
    return npc(buffer)->toString();
}

void poi::hssf::record::DSFRecord::serialize(::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeShort(_options);
}

int32_t poi::hssf::record::DSFRecord::getDataSize()
{
    return 2;
}

int16_t poi::hssf::record::DSFRecord::getSid()
{
    return sid;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::record::DSFRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.DSFRecord", 36);
    return c;
}

void poi::hssf::record::DSFRecord::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        biff5BookStreamFlag_ = ::poi::util::BitFieldFactory::getInstance(1);
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

int32_t poi::hssf::record::DSFRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

int8_tArray* poi::hssf::record::DSFRecord::serialize()
{
    return super::serialize();
}

java::lang::Class* poi::hssf::record::DSFRecord::getClass0()
{
    return class_();
}

