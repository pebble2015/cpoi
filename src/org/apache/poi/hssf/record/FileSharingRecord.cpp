// Generated from /POI/java/org/apache/poi/hssf/record/FileSharingRecord.java
#include <org/apache/poi/hssf/record/FileSharingRecord.hpp>

#include <java/lang/Integer.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <org/apache/poi/hssf/record/RecordInputStream.hpp>
#include <org/apache/poi/util/LittleEndianOutput.hpp>
#include <org/apache/poi/util/StringUtil.hpp>
#include <Array.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::hssf::record::FileSharingRecord::FileSharingRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::record::FileSharingRecord::FileSharingRecord() 
    : FileSharingRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::hssf::record::FileSharingRecord::FileSharingRecord(RecordInputStream* in) 
    : FileSharingRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int16_t org::apache::poi::hssf::record::FileSharingRecord::sid;

void org::apache::poi::hssf::record::FileSharingRecord::ctor()
{
    super::ctor();
}

void org::apache::poi::hssf::record::FileSharingRecord::ctor(RecordInputStream* in)
{
    super::ctor();
    field_1_readonly = npc(in)->readShort();
    field_2_password = npc(in)->readShort();
    int32_t nameLen = npc(in)->readShort();
    if(nameLen > 0) {
        field_3_username_unicode_options = npc(in)->readByte();
        field_3_username_value = npc(in)->readCompressedUnicode(nameLen);
    } else {
        field_3_username_value = u""_j;
    }
}

void org::apache::poi::hssf::record::FileSharingRecord::setReadOnly(int16_t readonly)
{
    field_1_readonly = readonly;
}

int16_t org::apache::poi::hssf::record::FileSharingRecord::getReadOnly()
{
    return field_1_readonly;
}

void org::apache::poi::hssf::record::FileSharingRecord::setPassword(int16_t password)
{
    field_2_password = password;
}

int16_t org::apache::poi::hssf::record::FileSharingRecord::getPassword()
{
    return field_2_password;
}

java::lang::String* org::apache::poi::hssf::record::FileSharingRecord::getUsername()
{
    return field_3_username_value;
}

void org::apache::poi::hssf::record::FileSharingRecord::setUsername(::java::lang::String* username)
{
    field_3_username_value = username;
}

java::lang::String* org::apache::poi::hssf::record::FileSharingRecord::toString()
{
    auto buffer = new ::java::lang::StringBuffer();
    npc(buffer)->append(u"[FILESHARING]\n"_j);
    npc(npc(npc(buffer)->append(u"    .readonly       = "_j))->append(getReadOnly() == 1 ? u"true"_j : u"false"_j))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"    .password       = "_j))->append(::java::lang::Integer::toHexString(getPassword())))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"    .username       = "_j))->append(getUsername()))->append(u"\n"_j);
    npc(buffer)->append(u"[/FILESHARING]\n"_j);
    return npc(buffer)->toString();
}

void org::apache::poi::hssf::record::FileSharingRecord::serialize(::org::apache::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeShort(getReadOnly());
    npc(out)->writeShort(getPassword());
    npc(out)->writeShort(npc(field_3_username_value)->length());
    if(npc(field_3_username_value)->length() > 0) {
        npc(out)->writeByte(field_3_username_unicode_options);
        ::org::apache::poi::util::StringUtil::putCompressedUnicode(getUsername(), out);
    }
}

int32_t org::apache::poi::hssf::record::FileSharingRecord::getDataSize()
{
    auto nameLen = npc(field_3_username_value)->length();
    if(nameLen < 1) {
        return 6;
    }
    return int32_t(7) + nameLen;
}

int16_t org::apache::poi::hssf::record::FileSharingRecord::getSid()
{
    return sid;
}

org::apache::poi::hssf::record::FileSharingRecord* org::apache::poi::hssf::record::FileSharingRecord::clone()
{
    auto clone = new FileSharingRecord();
    npc(clone)->setReadOnly(field_1_readonly);
    npc(clone)->setPassword(field_2_password);
    npc(clone)->setUsername(field_3_username_value);
    return clone;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::record::FileSharingRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.FileSharingRecord", 44);
    return c;
}

int32_t org::apache::poi::hssf::record::FileSharingRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

int8_tArray* org::apache::poi::hssf::record::FileSharingRecord::serialize()
{
    return super::serialize();
}

java::lang::Class* org::apache::poi::hssf::record::FileSharingRecord::getClass0()
{
    return class_();
}

