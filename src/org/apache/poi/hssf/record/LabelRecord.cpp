// Generated from /POI/java/org/apache/poi/hssf/record/LabelRecord.java
#include <org/apache/poi/hssf/record/LabelRecord.hpp>

#include <java/lang/Class.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <java/lang/StringBuilder.hpp>
#include <org/apache/poi/hssf/record/RecordInputStream.hpp>
#include <org/apache/poi/util/HexDump.hpp>
#include <org/apache/poi/util/POILogFactory.hpp>
#include <org/apache/poi/util/POILogger.hpp>
#include <org/apache/poi/util/RecordFormatException.hpp>
#include <Array.hpp>
#include <ObjectArray.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::hssf::record::LabelRecord::LabelRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::record::LabelRecord::LabelRecord() 
    : LabelRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::hssf::record::LabelRecord::LabelRecord(RecordInputStream* in) 
    : LabelRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

poi::util::POILogger*& poi::hssf::record::LabelRecord::logger()
{
    clinit();
    return logger_;
}
poi::util::POILogger* poi::hssf::record::LabelRecord::logger_;

constexpr int16_t poi::hssf::record::LabelRecord::sid;

void poi::hssf::record::LabelRecord::ctor()
{
    super::ctor();
}

void poi::hssf::record::LabelRecord::ctor(RecordInputStream* in)
{
    super::ctor();
    field_1_row = npc(in)->readUShort();
    field_2_column = npc(in)->readShort();
    field_3_xf_index = npc(in)->readShort();
    field_4_string_len = npc(in)->readShort();
    field_5_unicode_flag = npc(in)->readByte();
    if(field_4_string_len > 0) {
        if(isUnCompressedUnicode()) {
            field_6_value = npc(in)->readUnicodeLEString(field_4_string_len);
        } else {
            field_6_value = npc(in)->readCompressedUnicode(field_4_string_len);
        }
    } else {
        field_6_value = u""_j;
    }
    if(npc(in)->remaining() > 0) {
        npc(logger_)->log(::poi::util::POILogger::INFO, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(::java::lang::StringBuilder().append(u"LabelRecord data remains: "_j)->append(npc(in)->remaining())
            ->append(u" : "_j)
            ->append(::poi::util::HexDump::toHex(npc(in)->readRemainder()))->toString())}));
    }
}

int32_t poi::hssf::record::LabelRecord::getRow()
{
    return field_1_row;
}

int16_t poi::hssf::record::LabelRecord::getColumn()
{
    return field_2_column;
}

int16_t poi::hssf::record::LabelRecord::getXFIndex()
{
    return field_3_xf_index;
}

int16_t poi::hssf::record::LabelRecord::getStringLength()
{
    return field_4_string_len;
}

bool poi::hssf::record::LabelRecord::isUnCompressedUnicode()
{
    return (field_5_unicode_flag & int32_t(1)) != 0;
}

java::lang::String* poi::hssf::record::LabelRecord::getValue()
{
    return field_6_value;
}

int32_t poi::hssf::record::LabelRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    throw new ::poi::util::RecordFormatException(u"Label Records are supported READ ONLY...convert to LabelSST"_j);
}

int32_t poi::hssf::record::LabelRecord::getRecordSize()
{
    throw new ::poi::util::RecordFormatException(u"Label Records are supported READ ONLY...convert to LabelSST"_j);
}

int16_t poi::hssf::record::LabelRecord::getSid()
{
    return sid;
}

java::lang::String* poi::hssf::record::LabelRecord::toString()
{
    auto sb = new ::java::lang::StringBuffer();
    npc(sb)->append(u"[LABEL]\n"_j);
    npc(npc(npc(sb)->append(u"    .row       = "_j))->append(::poi::util::HexDump::shortToHex(getRow())))->append(u"\n"_j);
    npc(npc(npc(sb)->append(u"    .column    = "_j))->append(::poi::util::HexDump::shortToHex(getColumn())))->append(u"\n"_j);
    npc(npc(npc(sb)->append(u"    .xfindex   = "_j))->append(::poi::util::HexDump::shortToHex(getXFIndex())))->append(u"\n"_j);
    npc(npc(npc(sb)->append(u"    .string_len= "_j))->append(::poi::util::HexDump::shortToHex(field_4_string_len)))->append(u"\n"_j);
    npc(npc(npc(sb)->append(u"    .unicode_flag= "_j))->append(::poi::util::HexDump::byteToHex(field_5_unicode_flag)))->append(u"\n"_j);
    npc(npc(npc(sb)->append(u"    .value       = "_j))->append(getValue()))->append(u"\n"_j);
    npc(sb)->append(u"[/LABEL]\n"_j);
    return npc(sb)->toString();
}

void poi::hssf::record::LabelRecord::setColumn(int16_t col)
{
}

void poi::hssf::record::LabelRecord::setRow(int32_t row)
{
}

void poi::hssf::record::LabelRecord::setXFIndex(int16_t xf)
{
}

poi::hssf::record::LabelRecord* poi::hssf::record::LabelRecord::clone()
{
    auto rec = new LabelRecord();
    npc(rec)->field_1_row = field_1_row;
    npc(rec)->field_2_column = field_2_column;
    npc(rec)->field_3_xf_index = field_3_xf_index;
    npc(rec)->field_4_string_len = field_4_string_len;
    npc(rec)->field_5_unicode_flag = field_5_unicode_flag;
    npc(rec)->field_6_value = field_6_value;
    return rec;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::record::LabelRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.LabelRecord", 38);
    return c;
}

void poi::hssf::record::LabelRecord::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        logger_ = ::poi::util::POILogFactory::getLogger(static_cast< ::java::lang::Class* >(LabelRecord::class_()));
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

int8_tArray* poi::hssf::record::LabelRecord::serialize()
{
    return super::serialize();
}

java::lang::Class* poi::hssf::record::LabelRecord::getClass0()
{
    return class_();
}

