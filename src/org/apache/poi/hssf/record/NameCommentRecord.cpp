// Generated from /POI/java/org/apache/poi/hssf/record/NameCommentRecord.java
#include <org/apache/poi/hssf/record/NameCommentRecord.hpp>

#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <org/apache/poi/hssf/record/RecordInputStream.hpp>
#include <org/apache/poi/util/HexDump.hpp>
#include <org/apache/poi/util/LittleEndianInput.hpp>
#include <org/apache/poi/util/LittleEndianOutput.hpp>
#include <org/apache/poi/util/StringUtil.hpp>
#include <Array.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::hssf::record::NameCommentRecord::NameCommentRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::record::NameCommentRecord::NameCommentRecord(::java::lang::String* name, ::java::lang::String* comment) 
    : NameCommentRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(name,comment);
}

org::apache::poi::hssf::record::NameCommentRecord::NameCommentRecord(RecordInputStream* ris) 
    : NameCommentRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(ris);
}

constexpr int16_t org::apache::poi::hssf::record::NameCommentRecord::sid;

void org::apache::poi::hssf::record::NameCommentRecord::ctor(::java::lang::String* name, ::java::lang::String* comment)
{
    super::ctor();
    field_1_record_type = 0;
    field_2_frt_cell_ref_flag = 0;
    field_3_reserved = 0;
    field_6_name_text = name;
    field_7_comment_text = comment;
}

void org::apache::poi::hssf::record::NameCommentRecord::serialize(::org::apache::poi::util::LittleEndianOutput* out)
{
    auto const field_4_name_length = npc(field_6_name_text)->length();
    auto const field_5_comment_length = npc(field_7_comment_text)->length();
    npc(out)->writeShort(field_1_record_type);
    npc(out)->writeShort(field_2_frt_cell_ref_flag);
    npc(out)->writeLong(field_3_reserved);
    npc(out)->writeShort(field_4_name_length);
    npc(out)->writeShort(field_5_comment_length);
    auto isNameMultiByte = ::org::apache::poi::util::StringUtil::hasMultibyte(field_6_name_text);
    npc(out)->writeByte(isNameMultiByte ? int32_t(1) : int32_t(0));
    if(isNameMultiByte) {
        ::org::apache::poi::util::StringUtil::putUnicodeLE(field_6_name_text, out);
    } else {
        ::org::apache::poi::util::StringUtil::putCompressedUnicode(field_6_name_text, out);
    }
    auto isCommentMultiByte = ::org::apache::poi::util::StringUtil::hasMultibyte(field_7_comment_text);
    npc(out)->writeByte(isCommentMultiByte ? int32_t(1) : int32_t(0));
    if(isCommentMultiByte) {
        ::org::apache::poi::util::StringUtil::putUnicodeLE(field_7_comment_text, out);
    } else {
        ::org::apache::poi::util::StringUtil::putCompressedUnicode(field_7_comment_text, out);
    }
}

int32_t org::apache::poi::hssf::record::NameCommentRecord::getDataSize()
{
    return int32_t(18) + (::org::apache::poi::util::StringUtil::hasMultibyte(field_6_name_text) ? npc(field_6_name_text)->length() * int32_t(2) : npc(field_6_name_text)->length()) + (::org::apache::poi::util::StringUtil::hasMultibyte(field_7_comment_text) ? npc(field_7_comment_text)->length() * int32_t(2) : npc(field_7_comment_text)->length());
}

void org::apache::poi::hssf::record::NameCommentRecord::ctor(RecordInputStream* ris)
{
    super::ctor();
    ::org::apache::poi::util::LittleEndianInput* const in = ris;
    field_1_record_type = npc(in)->readShort();
    field_2_frt_cell_ref_flag = npc(in)->readShort();
    field_3_reserved = npc(in)->readLong();
    int32_t const field_4_name_length = npc(in)->readShort();
    int32_t const field_5_comment_length = npc(in)->readShort();
    if(npc(in)->readByte() == 0) {
        field_6_name_text = ::org::apache::poi::util::StringUtil::readCompressedUnicode(in, field_4_name_length);
    } else {
        field_6_name_text = ::org::apache::poi::util::StringUtil::readUnicodeLE(in, field_4_name_length);
    }
    if(npc(in)->readByte() == 0) {
        field_7_comment_text = ::org::apache::poi::util::StringUtil::readCompressedUnicode(in, field_5_comment_length);
    } else {
        field_7_comment_text = ::org::apache::poi::util::StringUtil::readUnicodeLE(in, field_5_comment_length);
    }
}

int16_t org::apache::poi::hssf::record::NameCommentRecord::getSid()
{
    return sid;
}

java::lang::String* org::apache::poi::hssf::record::NameCommentRecord::toString()
{
    auto const sb = new ::java::lang::StringBuffer();
    npc(sb)->append(u"[NAMECMT]\n"_j);
    npc(npc(npc(sb)->append(u"    .record type            = "_j))->append(::org::apache::poi::util::HexDump::shortToHex(field_1_record_type)))->append(u"\n"_j);
    npc(npc(npc(sb)->append(u"    .frt cell ref flag      = "_j))->append(::org::apache::poi::util::HexDump::byteToHex(field_2_frt_cell_ref_flag)))->append(u"\n"_j);
    npc(npc(npc(sb)->append(u"    .reserved               = "_j))->append(field_3_reserved))->append(u"\n"_j);
    npc(npc(npc(sb)->append(u"    .name length            = "_j))->append(npc(field_6_name_text)->length()))->append(u"\n"_j);
    npc(npc(npc(sb)->append(u"    .comment length         = "_j))->append(npc(field_7_comment_text)->length()))->append(u"\n"_j);
    npc(npc(npc(sb)->append(u"    .name                   = "_j))->append(field_6_name_text))->append(u"\n"_j);
    npc(npc(npc(sb)->append(u"    .comment                = "_j))->append(field_7_comment_text))->append(u"\n"_j);
    npc(sb)->append(u"[/NAMECMT]\n"_j);
    return npc(sb)->toString();
}

java::lang::String* org::apache::poi::hssf::record::NameCommentRecord::getNameText()
{
    return field_6_name_text;
}

void org::apache::poi::hssf::record::NameCommentRecord::setNameText(::java::lang::String* newName)
{
    field_6_name_text = newName;
}

java::lang::String* org::apache::poi::hssf::record::NameCommentRecord::getCommentText()
{
    return field_7_comment_text;
}

void org::apache::poi::hssf::record::NameCommentRecord::setCommentText(::java::lang::String* comment)
{
    field_7_comment_text = comment;
}

int16_t org::apache::poi::hssf::record::NameCommentRecord::getRecordType()
{
    return field_1_record_type;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::record::NameCommentRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.NameCommentRecord", 44);
    return c;
}

int32_t org::apache::poi::hssf::record::NameCommentRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

int8_tArray* org::apache::poi::hssf::record::NameCommentRecord::serialize()
{
    return super::serialize();
}

java::lang::Class* org::apache::poi::hssf::record::NameCommentRecord::getClass0()
{
    return class_();
}

