// Generated from /POI/java/org/apache/poi/hssf/record/DrawingRecord.java
#include <org/apache/poi/hssf/record/DrawingRecord.hpp>

#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <org/apache/poi/hssf/record/RecordInputStream.hpp>
#include <org/apache/poi/util/LittleEndianOutput.hpp>
#include <Array.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::hssf::record::DrawingRecord::DrawingRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::record::DrawingRecord::DrawingRecord() 
    : DrawingRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::hssf::record::DrawingRecord::DrawingRecord(RecordInputStream* in) 
    : DrawingRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int16_t poi::hssf::record::DrawingRecord::sid;

int8_tArray*& poi::hssf::record::DrawingRecord::EMPTY_BYTE_ARRAY()
{
    clinit();
    return EMPTY_BYTE_ARRAY_;
}
int8_tArray* poi::hssf::record::DrawingRecord::EMPTY_BYTE_ARRAY_;

void poi::hssf::record::DrawingRecord::ctor()
{
    super::ctor();
    recordData = EMPTY_BYTE_ARRAY_;
}

void poi::hssf::record::DrawingRecord::ctor(RecordInputStream* in)
{
    super::ctor();
    recordData = npc(in)->readRemainder();
}

void poi::hssf::record::DrawingRecord::processContinueRecord(::int8_tArray* record)
{
    contd = record;
}

void poi::hssf::record::DrawingRecord::serialize(::poi::util::LittleEndianOutput* out)
{
    npc(out)->write(recordData);
}

int32_t poi::hssf::record::DrawingRecord::getDataSize()
{
    return npc(recordData)->length;
}

int16_t poi::hssf::record::DrawingRecord::getSid()
{
    return sid;
}

int8_tArray* poi::hssf::record::DrawingRecord::getRecordData()
{
    return recordData;
}

void poi::hssf::record::DrawingRecord::setData(::int8_tArray* thedata)
{
    if(thedata == nullptr) {
        throw new ::java::lang::IllegalArgumentException(u"data must not be null"_j);
    }
    recordData = thedata;
}

poi::hssf::record::DrawingRecord* poi::hssf::record::DrawingRecord::clone()
{
    auto rec = new DrawingRecord();
    npc(rec)->recordData = npc(recordData)->clone();
    if(contd != nullptr) {
        npc(rec)->contd = npc(contd)->clone();
    }
    return rec;
}

java::lang::String* poi::hssf::record::DrawingRecord::toString()
{
    return ::java::lang::StringBuilder().append(u"DrawingRecord["_j)->append(npc(recordData)->length)
        ->append(u"]"_j)->toString();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::record::DrawingRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.DrawingRecord", 40);
    return c;
}

void poi::hssf::record::DrawingRecord::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        EMPTY_BYTE_ARRAY_ = (new ::int8_tArray({}));
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

int32_t poi::hssf::record::DrawingRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

int8_tArray* poi::hssf::record::DrawingRecord::serialize()
{
    return super::serialize();
}

java::lang::Class* poi::hssf::record::DrawingRecord::getClass0()
{
    return class_();
}

