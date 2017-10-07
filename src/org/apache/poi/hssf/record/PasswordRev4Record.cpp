// Generated from /POI/java/org/apache/poi/hssf/record/PasswordRev4Record.java
#include <org/apache/poi/hssf/record/PasswordRev4Record.hpp>

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

org::apache::poi::hssf::record::PasswordRev4Record::PasswordRev4Record(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::record::PasswordRev4Record::PasswordRev4Record(int32_t pw) 
    : PasswordRev4Record(*static_cast< ::default_init_tag* >(0))
{
    ctor(pw);
}

org::apache::poi::hssf::record::PasswordRev4Record::PasswordRev4Record(RecordInputStream* in) 
    : PasswordRev4Record(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int16_t org::apache::poi::hssf::record::PasswordRev4Record::sid;

void org::apache::poi::hssf::record::PasswordRev4Record::ctor(int32_t pw)
{
    super::ctor();
    field_1_password = pw;
}

void org::apache::poi::hssf::record::PasswordRev4Record::ctor(RecordInputStream* in)
{
    super::ctor();
    field_1_password = npc(in)->readShort();
}

void org::apache::poi::hssf::record::PasswordRev4Record::setPassword(int16_t pw)
{
    field_1_password = pw;
}

java::lang::String* org::apache::poi::hssf::record::PasswordRev4Record::toString()
{
    auto buffer = new ::java::lang::StringBuffer();
    npc(buffer)->append(u"[PROT4REVPASSWORD]\n"_j);
    npc(npc(npc(buffer)->append(u"    .password = "_j))->append(::org::apache::poi::util::HexDump::shortToHex(field_1_password)))->append(u"\n"_j);
    npc(buffer)->append(u"[/PROT4REVPASSWORD]\n"_j);
    return npc(buffer)->toString();
}

void org::apache::poi::hssf::record::PasswordRev4Record::serialize(::org::apache::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeShort(field_1_password);
}

int32_t org::apache::poi::hssf::record::PasswordRev4Record::getDataSize()
{
    return 2;
}

int16_t org::apache::poi::hssf::record::PasswordRev4Record::getSid()
{
    return sid;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::record::PasswordRev4Record::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.PasswordRev4Record", 45);
    return c;
}

int32_t org::apache::poi::hssf::record::PasswordRev4Record::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

int8_tArray* org::apache::poi::hssf::record::PasswordRev4Record::serialize()
{
    return super::serialize();
}

java::lang::Class* org::apache::poi::hssf::record::PasswordRev4Record::getClass0()
{
    return class_();
}

