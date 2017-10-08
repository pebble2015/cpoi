// Generated from /POI/java/org/apache/poi/hssf/record/HeaderFooterBase.java
#include <org/apache/poi/hssf/record/HeaderFooterBase.hpp>

#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
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

poi::hssf::record::HeaderFooterBase::HeaderFooterBase(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::record::HeaderFooterBase::HeaderFooterBase(::java::lang::String* text) 
    : HeaderFooterBase(*static_cast< ::default_init_tag* >(0))
{
    ctor(text);
}

poi::hssf::record::HeaderFooterBase::HeaderFooterBase(RecordInputStream* in) 
    : HeaderFooterBase(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

void poi::hssf::record::HeaderFooterBase::ctor(::java::lang::String* text)
{
    super::ctor();
    setText(text);
}

void poi::hssf::record::HeaderFooterBase::ctor(RecordInputStream* in)
{
    super::ctor();
    if(npc(in)->remaining() > 0) {
        int32_t field_1_footer_len = npc(in)->readShort();
        if(field_1_footer_len == 0) {
            field_3_text = u""_j;
            if(npc(in)->remaining() == 0) {
                return;
            }
        }
        field_2_hasMultibyte = npc(in)->readByte() != 0;
        if(field_2_hasMultibyte) {
            field_3_text = npc(in)->readUnicodeLEString(field_1_footer_len);
        } else {
            field_3_text = npc(in)->readCompressedUnicode(field_1_footer_len);
        }
    } else {
        field_3_text = u""_j;
    }
}

void poi::hssf::record::HeaderFooterBase::setText(::java::lang::String* text)
{
    if(text == nullptr) {
        throw new ::java::lang::IllegalArgumentException(u"text must not be null"_j);
    }
    field_2_hasMultibyte = ::poi::util::StringUtil::hasMultibyte(text);
    field_3_text = text;
    if(getDataSize() > RecordInputStream::MAX_RECORD_DATA_SIZE) {
        throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(u"Header/Footer string too long (limit is "_j)->append(RecordInputStream::MAX_RECORD_DATA_SIZE)
            ->append(u" bytes)"_j)->toString());
    }
}

int32_t poi::hssf::record::HeaderFooterBase::getTextLength()
{
    return npc(field_3_text)->length();
}

java::lang::String* poi::hssf::record::HeaderFooterBase::getText()
{
    return field_3_text;
}

void poi::hssf::record::HeaderFooterBase::serialize(::poi::util::LittleEndianOutput* out)
{
    if(getTextLength() > 0) {
        npc(out)->writeShort(getTextLength());
        npc(out)->writeByte(field_2_hasMultibyte ? int32_t(1) : int32_t(0));
        if(field_2_hasMultibyte) {
            ::poi::util::StringUtil::putUnicodeLE(field_3_text, out);
        } else {
            ::poi::util::StringUtil::putCompressedUnicode(field_3_text, out);
        }
    }
}

int32_t poi::hssf::record::HeaderFooterBase::getDataSize()
{
    if(getTextLength() < 1) {
        return 0;
    }
    return int32_t(3) + getTextLength() * (field_2_hasMultibyte ? int32_t(2) : int32_t(1));
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::record::HeaderFooterBase::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.HeaderFooterBase", 43);
    return c;
}

int32_t poi::hssf::record::HeaderFooterBase::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

int8_tArray* poi::hssf::record::HeaderFooterBase::serialize()
{
    return super::serialize();
}

java::lang::Class* poi::hssf::record::HeaderFooterBase::getClass0()
{
    return class_();
}

