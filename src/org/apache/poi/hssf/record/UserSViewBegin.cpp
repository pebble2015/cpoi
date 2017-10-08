// Generated from /POI/java/org/apache/poi/hssf/record/UserSViewBegin.java
#include <org/apache/poi/hssf/record/UserSViewBegin.hpp>

#include <java/lang/Integer.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/lang/System.hpp>
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

poi::hssf::record::UserSViewBegin::UserSViewBegin(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::record::UserSViewBegin::UserSViewBegin(::int8_tArray* data) 
    : UserSViewBegin(*static_cast< ::default_init_tag* >(0))
{
    ctor(data);
}

poi::hssf::record::UserSViewBegin::UserSViewBegin(RecordInputStream* in) 
    : UserSViewBegin(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int16_t poi::hssf::record::UserSViewBegin::sid;

void poi::hssf::record::UserSViewBegin::ctor(::int8_tArray* data)
{
    super::ctor();
    _rawData = data;
}

void poi::hssf::record::UserSViewBegin::ctor(RecordInputStream* in)
{
    super::ctor();
    _rawData = npc(in)->readRemainder();
}

void poi::hssf::record::UserSViewBegin::serialize(::poi::util::LittleEndianOutput* out)
{
    npc(out)->write(_rawData);
}

int32_t poi::hssf::record::UserSViewBegin::getDataSize()
{
    return npc(_rawData)->length;
}

int16_t poi::hssf::record::UserSViewBegin::getSid()
{
    return sid;
}

int8_tArray* poi::hssf::record::UserSViewBegin::getGuid()
{
    auto guid = new ::int8_tArray(int32_t(16));
    ::java::lang::System::arraycopy(_rawData, 0, guid, 0, npc(guid)->length);
    return guid;
}

java::lang::String* poi::hssf::record::UserSViewBegin::toString()
{
    auto sb = new ::java::lang::StringBuffer();
    npc(npc(npc(sb)->append(u"["_j))->append(u"USERSVIEWBEGIN"_j))->append(u"] (0x"_j);
    npc(sb)->append(::java::lang::StringBuilder().append(npc(::java::lang::Integer::toHexString(sid))->toUpperCase(::java::util::Locale::ROOT()))->append(u")\n"_j)->toString());
    npc(npc(npc(sb)->append(u"  rawData="_j))->append(::poi::util::HexDump::toHex(_rawData)))->append(u"\n"_j);
    npc(npc(npc(sb)->append(u"[/"_j))->append(u"USERSVIEWBEGIN"_j))->append(u"]\n"_j);
    return npc(sb)->toString();
}

java::lang::Object* poi::hssf::record::UserSViewBegin::clone()
{
    return cloneViaReserialise();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::record::UserSViewBegin::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.UserSViewBegin", 41);
    return c;
}

int32_t poi::hssf::record::UserSViewBegin::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

int8_tArray* poi::hssf::record::UserSViewBegin::serialize()
{
    return super::serialize();
}

java::lang::Class* poi::hssf::record::UserSViewBegin::getClass0()
{
    return class_();
}

