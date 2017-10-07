// Generated from /POI/java/org/apache/poi/hssf/record/StringRecord.java
#include <org/apache/poi/hssf/record/StringRecord.hpp>

#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <org/apache/poi/hssf/record/RecordInputStream.hpp>
#include <org/apache/poi/hssf/record/cont/ContinuableRecordOutput.hpp>
#include <org/apache/poi/util/StringUtil.hpp>
#include <Array.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::hssf::record::StringRecord::StringRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::record::StringRecord::StringRecord() 
    : StringRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::hssf::record::StringRecord::StringRecord(RecordInputStream* in) 
    : StringRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int16_t org::apache::poi::hssf::record::StringRecord::sid;

void org::apache::poi::hssf::record::StringRecord::ctor()
{
    super::ctor();
}

void org::apache::poi::hssf::record::StringRecord::ctor(RecordInputStream* in)
{
    super::ctor();
    auto field_1_string_length = npc(in)->readUShort();
    _is16bitUnicode = npc(in)->readByte() != 0;
    if(_is16bitUnicode) {
        _text = npc(in)->readUnicodeLEString(field_1_string_length);
    } else {
        _text = npc(in)->readCompressedUnicode(field_1_string_length);
    }
}

void org::apache::poi::hssf::record::StringRecord::serialize(::org::apache::poi::hssf::record::cont::ContinuableRecordOutput* out)
{
    npc(out)->writeShort(npc(_text)->length());
    npc(out)->writeStringData(_text);
}

int16_t org::apache::poi::hssf::record::StringRecord::getSid()
{
    return sid;
}

java::lang::String* org::apache::poi::hssf::record::StringRecord::getString()
{
    return _text;
}

void org::apache::poi::hssf::record::StringRecord::setString(::java::lang::String* string)
{
    _text = string;
    _is16bitUnicode = ::org::apache::poi::util::StringUtil::hasMultibyte(string);
}

java::lang::String* org::apache::poi::hssf::record::StringRecord::toString()
{
    auto buffer = new ::java::lang::StringBuffer();
    npc(buffer)->append(u"[STRING]\n"_j);
    npc(npc(npc(buffer)->append(u"    .string            = "_j))->append(_text))->append(u"\n"_j);
    npc(buffer)->append(u"[/STRING]\n"_j);
    return npc(buffer)->toString();
}

java::lang::Object* org::apache::poi::hssf::record::StringRecord::clone()
{
    auto rec = new StringRecord();
    npc(rec)->_is16bitUnicode = _is16bitUnicode;
    npc(rec)->_text = _text;
    return rec;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::record::StringRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.StringRecord", 39);
    return c;
}

int32_t org::apache::poi::hssf::record::StringRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

int8_tArray* org::apache::poi::hssf::record::StringRecord::serialize()
{
    return super::serialize();
}

java::lang::Class* org::apache::poi::hssf::record::StringRecord::getClass0()
{
    return class_();
}

