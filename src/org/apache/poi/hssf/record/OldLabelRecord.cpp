// Generated from /POI/java/org/apache/poi/hssf/record/OldLabelRecord.java
#include <org/apache/poi/hssf/record/OldLabelRecord.hpp>

#include <java/lang/Class.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <org/apache/poi/hssf/record/CodepageRecord.hpp>
#include <org/apache/poi/hssf/record/OldStringRecord.hpp>
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

org::apache::poi::hssf::record::OldLabelRecord::OldLabelRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::record::OldLabelRecord::OldLabelRecord(RecordInputStream* in) 
    : OldLabelRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

org::apache::poi::util::POILogger*& org::apache::poi::hssf::record::OldLabelRecord::logger()
{
    clinit();
    return logger_;
}
org::apache::poi::util::POILogger* org::apache::poi::hssf::record::OldLabelRecord::logger_;

constexpr int16_t org::apache::poi::hssf::record::OldLabelRecord::biff2_sid;

constexpr int16_t org::apache::poi::hssf::record::OldLabelRecord::biff345_sid;

void org::apache::poi::hssf::record::OldLabelRecord::ctor(RecordInputStream* in)
{
    super::ctor(in, npc(in)->getSid() == biff2_sid);
    if(isBiff2()) {
        field_4_string_len = static_cast< int16_t >(npc(in)->readUByte());
    } else {
        field_4_string_len = npc(in)->readShort();
    }
    field_5_bytes = new ::int8_tArray(field_4_string_len);
    npc(in)->read(field_5_bytes, 0, field_4_string_len);
    if(npc(in)->remaining() > 0) {
        npc(logger_)->log(::org::apache::poi::util::POILogger::INFO, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(::java::lang::StringBuilder().append(u"LabelRecord data remains: "_j)->append(npc(in)->remaining())
            ->append(u" : "_j)
            ->append(::org::apache::poi::util::HexDump::toHex(npc(in)->readRemainder()))->toString())}));
    }
}

void org::apache::poi::hssf::record::OldLabelRecord::setCodePage(CodepageRecord* codepage)
{
    this->codepage = codepage;
}

int16_t org::apache::poi::hssf::record::OldLabelRecord::getStringLength()
{
    return field_4_string_len;
}

java::lang::String* org::apache::poi::hssf::record::OldLabelRecord::getValue()
{
    return OldStringRecord::getString(field_5_bytes, codepage);
}

int32_t org::apache::poi::hssf::record::OldLabelRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    throw new ::org::apache::poi::util::RecordFormatException(u"Old Label Records are supported READ ONLY"_j);
}

int32_t org::apache::poi::hssf::record::OldLabelRecord::getRecordSize()
{
    throw new ::org::apache::poi::util::RecordFormatException(u"Old Label Records are supported READ ONLY"_j);
}

void org::apache::poi::hssf::record::OldLabelRecord::appendValueText(::java::lang::StringBuilder* sb)
{
    npc(npc(npc(sb)->append(u"    .string_len= "_j))->append(::org::apache::poi::util::HexDump::shortToHex(field_4_string_len)))->append(u"\n"_j);
    npc(npc(npc(sb)->append(u"    .value       = "_j))->append(getValue()))->append(u"\n"_j);
}

java::lang::String* org::apache::poi::hssf::record::OldLabelRecord::getRecordName()
{
    return u"OLD LABEL"_j;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::record::OldLabelRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.OldLabelRecord", 41);
    return c;
}

void org::apache::poi::hssf::record::OldLabelRecord::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        logger_ = ::org::apache::poi::util::POILogFactory::getLogger(static_cast< ::java::lang::Class* >(OldLabelRecord::class_()));
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* org::apache::poi::hssf::record::OldLabelRecord::getClass0()
{
    return class_();
}

