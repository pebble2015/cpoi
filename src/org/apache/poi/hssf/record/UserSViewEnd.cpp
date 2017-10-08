// Generated from /POI/java/org/apache/poi/hssf/record/UserSViewEnd.java
#include <org/apache/poi/hssf/record/UserSViewEnd.hpp>

#include <java/lang/Integer.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/util/Locale.hpp>
#include <org/apache/poi/hssf/record/Record.hpp>
#include <org/apache/poi/hssf/record/RecordInputStream.hpp>
#include <org/apache/poi/util/HexDump.hpp>
#include <org/apache/poi/util/LittleEndianOutput.hpp>
#include <Array.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::hssf::record::UserSViewEnd::UserSViewEnd(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::record::UserSViewEnd::UserSViewEnd(::int8_tArray* data) 
    : UserSViewEnd(*static_cast< ::default_init_tag* >(0))
{
    ctor(data);
}

poi::hssf::record::UserSViewEnd::UserSViewEnd(RecordInputStream* in) 
    : UserSViewEnd(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int16_t poi::hssf::record::UserSViewEnd::sid;

void poi::hssf::record::UserSViewEnd::ctor(::int8_tArray* data)
{
    super::ctor();
    _rawData = data;
}

void poi::hssf::record::UserSViewEnd::ctor(RecordInputStream* in)
{
    super::ctor();
    _rawData = npc(in)->readRemainder();
}

void poi::hssf::record::UserSViewEnd::serialize(::poi::util::LittleEndianOutput* out)
{
    npc(out)->write(_rawData);
}

int32_t poi::hssf::record::UserSViewEnd::getDataSize()
{
    return npc(_rawData)->length;
}

int16_t poi::hssf::record::UserSViewEnd::getSid()
{
    return sid;
}

java::lang::String* poi::hssf::record::UserSViewEnd::toString()
{
    auto sb = new ::java::lang::StringBuffer();
    npc(npc(npc(sb)->append(u"["_j))->append(u"USERSVIEWEND"_j))->append(u"] (0x"_j);
    npc(sb)->append(::java::lang::StringBuilder().append(npc(::java::lang::Integer::toHexString(sid))->toUpperCase(::java::util::Locale::ROOT()))->append(u")\n"_j)->toString());
    npc(npc(npc(sb)->append(u"  rawData="_j))->append(::poi::util::HexDump::toHex(_rawData)))->append(u"\n"_j);
    npc(npc(npc(sb)->append(u"[/"_j))->append(u"USERSVIEWEND"_j))->append(u"]\n"_j);
    return npc(sb)->toString();
}

java::lang::Object* poi::hssf::record::UserSViewEnd::clone()
{
    return cloneViaReserialise();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::record::UserSViewEnd::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.UserSViewEnd", 39);
    return c;
}

int32_t poi::hssf::record::UserSViewEnd::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

int8_tArray* poi::hssf::record::UserSViewEnd::serialize()
{
    return super::serialize();
}

java::lang::Class* poi::hssf::record::UserSViewEnd::getClass0()
{
    return class_();
}

