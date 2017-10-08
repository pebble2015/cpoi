// Generated from /POI/java/org/apache/poi/hssf/record/HeaderFooterRecord.java
#include <org/apache/poi/hssf/record/HeaderFooterRecord.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/lang/Integer.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/lang/System.hpp>
#include <java/util/Arrays.hpp>
#include <java/util/Locale.hpp>
#include <org/apache/poi/hssf/record/Record.hpp>
#include <org/apache/poi/hssf/record/RecordInputStream.hpp>
#include <org/apache/poi/util/HexDump.hpp>
#include <org/apache/poi/util/LittleEndianOutput.hpp>
#include <Array.hpp>

template<typename T, typename U>
static T java_cast(U* u)
{
    if(!u) return static_cast<T>(nullptr);
    auto t = dynamic_cast<T>(u);
    if(!t) throw new ::java::lang::ClassCastException();
    return t;
}

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::hssf::record::HeaderFooterRecord::HeaderFooterRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::record::HeaderFooterRecord::HeaderFooterRecord(::int8_tArray* data) 
    : HeaderFooterRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(data);
}

poi::hssf::record::HeaderFooterRecord::HeaderFooterRecord(RecordInputStream* in) 
    : HeaderFooterRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

int8_tArray*& poi::hssf::record::HeaderFooterRecord::BLANK_GUID()
{
    clinit();
    return BLANK_GUID_;
}
int8_tArray* poi::hssf::record::HeaderFooterRecord::BLANK_GUID_;

constexpr int16_t poi::hssf::record::HeaderFooterRecord::sid;

void poi::hssf::record::HeaderFooterRecord::ctor(::int8_tArray* data)
{
    super::ctor();
    _rawData = data;
}

void poi::hssf::record::HeaderFooterRecord::ctor(RecordInputStream* in)
{
    super::ctor();
    _rawData = npc(in)->readRemainder();
}

void poi::hssf::record::HeaderFooterRecord::serialize(::poi::util::LittleEndianOutput* out)
{
    npc(out)->write(_rawData);
}

int32_t poi::hssf::record::HeaderFooterRecord::getDataSize()
{
    return npc(_rawData)->length;
}

int16_t poi::hssf::record::HeaderFooterRecord::getSid()
{
    return sid;
}

int8_tArray* poi::hssf::record::HeaderFooterRecord::getGuid()
{
    auto guid = new ::int8_tArray(int32_t(16));
    ::java::lang::System::arraycopy(_rawData, 12, guid, 0, npc(guid)->length);
    return guid;
}

bool poi::hssf::record::HeaderFooterRecord::isCurrentSheet()
{
    return ::java::util::Arrays::equals(getGuid(), BLANK_GUID_);
}

java::lang::String* poi::hssf::record::HeaderFooterRecord::toString()
{
    auto sb = new ::java::lang::StringBuffer();
    npc(npc(npc(sb)->append(u"["_j))->append(u"HEADERFOOTER"_j))->append(u"] (0x"_j);
    npc(sb)->append(::java::lang::StringBuilder().append(npc(::java::lang::Integer::toHexString(sid))->toUpperCase(::java::util::Locale::ROOT()))->append(u")\n"_j)->toString());
    npc(npc(npc(sb)->append(u"  rawData="_j))->append(::poi::util::HexDump::toHex(_rawData)))->append(u"\n"_j);
    npc(npc(npc(sb)->append(u"[/"_j))->append(u"HEADERFOOTER"_j))->append(u"]\n"_j);
    return npc(sb)->toString();
}

poi::hssf::record::HeaderFooterRecord* poi::hssf::record::HeaderFooterRecord::clone()
{
    return java_cast< HeaderFooterRecord* >(cloneViaReserialise());
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::record::HeaderFooterRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.HeaderFooterRecord", 45);
    return c;
}

void poi::hssf::record::HeaderFooterRecord::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        BLANK_GUID_ = new ::int8_tArray(int32_t(16));
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

int32_t poi::hssf::record::HeaderFooterRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

int8_tArray* poi::hssf::record::HeaderFooterRecord::serialize()
{
    return super::serialize();
}

java::lang::Class* poi::hssf::record::HeaderFooterRecord::getClass0()
{
    return class_();
}

