// Generated from /POI/java/org/apache/poi/hssf/record/PasswordRecord.java
#include <org/apache/poi/hssf/record/PasswordRecord.hpp>

#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
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

poi::hssf::record::PasswordRecord::PasswordRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::record::PasswordRecord::PasswordRecord(int32_t password) 
    : PasswordRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(password);
}

poi::hssf::record::PasswordRecord::PasswordRecord(RecordInputStream* in) 
    : PasswordRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int16_t poi::hssf::record::PasswordRecord::sid;

void poi::hssf::record::PasswordRecord::ctor(int32_t password)
{
    super::ctor();
    field_1_password = password;
}

void poi::hssf::record::PasswordRecord::ctor(RecordInputStream* in)
{
    super::ctor();
    field_1_password = npc(in)->readShort();
}

void poi::hssf::record::PasswordRecord::setPassword(int32_t password)
{
    field_1_password = password;
}

int32_t poi::hssf::record::PasswordRecord::getPassword()
{
    return field_1_password;
}

java::lang::String* poi::hssf::record::PasswordRecord::toString()
{
    auto buffer = new ::java::lang::StringBuffer();
    npc(buffer)->append(u"[PASSWORD]\n"_j);
    npc(npc(npc(buffer)->append(u"    .password = "_j))->append(::poi::util::HexDump::shortToHex(field_1_password)))->append(u"\n"_j);
    npc(buffer)->append(u"[/PASSWORD]\n"_j);
    return npc(buffer)->toString();
}

void poi::hssf::record::PasswordRecord::serialize(::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeShort(field_1_password);
}

int32_t poi::hssf::record::PasswordRecord::getDataSize()
{
    return 2;
}

int16_t poi::hssf::record::PasswordRecord::getSid()
{
    return sid;
}

java::lang::Object* poi::hssf::record::PasswordRecord::clone()
{
    return new PasswordRecord(field_1_password);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::record::PasswordRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.PasswordRecord", 41);
    return c;
}

int32_t poi::hssf::record::PasswordRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

int8_tArray* poi::hssf::record::PasswordRecord::serialize()
{
    return super::serialize();
}

java::lang::Class* poi::hssf::record::PasswordRecord::getClass0()
{
    return class_();
}

