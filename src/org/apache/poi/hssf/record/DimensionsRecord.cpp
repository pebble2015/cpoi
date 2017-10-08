// Generated from /POI/java/org/apache/poi/hssf/record/DimensionsRecord.java
#include <org/apache/poi/hssf/record/DimensionsRecord.hpp>

#include <java/lang/Class.hpp>
#include <java/lang/Integer.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <org/apache/poi/hssf/record/RecordInputStream.hpp>
#include <org/apache/poi/util/LittleEndianOutput.hpp>
#include <org/apache/poi/util/POILogFactory.hpp>
#include <org/apache/poi/util/POILogger.hpp>
#include <Array.hpp>
#include <ObjectArray.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::hssf::record::DimensionsRecord::DimensionsRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::record::DimensionsRecord::DimensionsRecord() 
    : DimensionsRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::hssf::record::DimensionsRecord::DimensionsRecord(RecordInputStream* in) 
    : DimensionsRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

poi::util::POILogger*& poi::hssf::record::DimensionsRecord::logger()
{
    clinit();
    return logger_;
}
poi::util::POILogger* poi::hssf::record::DimensionsRecord::logger_;

constexpr int16_t poi::hssf::record::DimensionsRecord::sid;

void poi::hssf::record::DimensionsRecord::ctor()
{
    super::ctor();
}

void poi::hssf::record::DimensionsRecord::ctor(RecordInputStream* in)
{
    super::ctor();
    field_1_first_row = npc(in)->readInt();
    field_2_last_row = npc(in)->readInt();
    field_3_first_col = npc(in)->readShort();
    field_4_last_col = npc(in)->readShort();
    field_5_zero = npc(in)->readShort();
    if(npc(in)->available() == 2) {
        npc(logger_)->log(::poi::util::POILogger::INFO, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(u"DimensionsRecord has extra 2 bytes."_j)}));
        npc(in)->readShort();
    }
}

void poi::hssf::record::DimensionsRecord::setFirstRow(int32_t row)
{
    field_1_first_row = row;
}

void poi::hssf::record::DimensionsRecord::setLastRow(int32_t row)
{
    field_2_last_row = row;
}

void poi::hssf::record::DimensionsRecord::setFirstCol(int16_t col)
{
    field_3_first_col = col;
}

void poi::hssf::record::DimensionsRecord::setLastCol(int16_t col)
{
    field_4_last_col = col;
}

int32_t poi::hssf::record::DimensionsRecord::getFirstRow()
{
    return field_1_first_row;
}

int32_t poi::hssf::record::DimensionsRecord::getLastRow()
{
    return field_2_last_row;
}

int16_t poi::hssf::record::DimensionsRecord::getFirstCol()
{
    return field_3_first_col;
}

int16_t poi::hssf::record::DimensionsRecord::getLastCol()
{
    return field_4_last_col;
}

java::lang::String* poi::hssf::record::DimensionsRecord::toString()
{
    auto buffer = new ::java::lang::StringBuffer();
    npc(buffer)->append(u"[DIMENSIONS]\n"_j);
    npc(npc(npc(buffer)->append(u"    .firstrow       = "_j))->append(::java::lang::Integer::toHexString(getFirstRow())))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"    .lastrow        = "_j))->append(::java::lang::Integer::toHexString(getLastRow())))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"    .firstcol       = "_j))->append(::java::lang::Integer::toHexString(getFirstCol())))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"    .lastcol        = "_j))->append(::java::lang::Integer::toHexString(getLastCol())))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"    .zero           = "_j))->append(::java::lang::Integer::toHexString(field_5_zero)))->append(u"\n"_j);
    npc(buffer)->append(u"[/DIMENSIONS]\n"_j);
    return npc(buffer)->toString();
}

void poi::hssf::record::DimensionsRecord::serialize(::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeInt(getFirstRow());
    npc(out)->writeInt(getLastRow());
    npc(out)->writeShort(getFirstCol());
    npc(out)->writeShort(getLastCol());
    npc(out)->writeShort(static_cast< int16_t >(int32_t(0)));
}

int32_t poi::hssf::record::DimensionsRecord::getDataSize()
{
    return 14;
}

int16_t poi::hssf::record::DimensionsRecord::getSid()
{
    return sid;
}

poi::hssf::record::DimensionsRecord* poi::hssf::record::DimensionsRecord::clone()
{
    auto rec = new DimensionsRecord();
    npc(rec)->field_1_first_row = field_1_first_row;
    npc(rec)->field_2_last_row = field_2_last_row;
    npc(rec)->field_3_first_col = field_3_first_col;
    npc(rec)->field_4_last_col = field_4_last_col;
    npc(rec)->field_5_zero = field_5_zero;
    return rec;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::record::DimensionsRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.DimensionsRecord", 43);
    return c;
}

void poi::hssf::record::DimensionsRecord::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        logger_ = ::poi::util::POILogFactory::getLogger(static_cast< ::java::lang::Class* >(DimensionsRecord::class_()));
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

int32_t poi::hssf::record::DimensionsRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

int8_tArray* poi::hssf::record::DimensionsRecord::serialize()
{
    return super::serialize();
}

java::lang::Class* poi::hssf::record::DimensionsRecord::getClass0()
{
    return class_();
}

