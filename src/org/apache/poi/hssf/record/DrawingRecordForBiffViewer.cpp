// Generated from /POI/java/org/apache/poi/hssf/record/DrawingRecordForBiffViewer.java
#include <org/apache/poi/hssf/record/DrawingRecordForBiffViewer.hpp>

#include <java/io/ByteArrayInputStream.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <org/apache/poi/hssf/record/DrawingRecord.hpp>
#include <org/apache/poi/hssf/record/RecordInputStream.hpp>
#include <Array.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::hssf::record::DrawingRecordForBiffViewer::DrawingRecordForBiffViewer(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::record::DrawingRecordForBiffViewer::DrawingRecordForBiffViewer() 
    : DrawingRecordForBiffViewer(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::hssf::record::DrawingRecordForBiffViewer::DrawingRecordForBiffViewer(RecordInputStream* in) 
    : DrawingRecordForBiffViewer(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

org::apache::poi::hssf::record::DrawingRecordForBiffViewer::DrawingRecordForBiffViewer(DrawingRecord* r) 
    : DrawingRecordForBiffViewer(*static_cast< ::default_init_tag* >(0))
{
    ctor(r);
}

constexpr int16_t org::apache::poi::hssf::record::DrawingRecordForBiffViewer::sid;

void org::apache::poi::hssf::record::DrawingRecordForBiffViewer::ctor()
{
    super::ctor();
}

void org::apache::poi::hssf::record::DrawingRecordForBiffViewer::ctor(RecordInputStream* in)
{
    super::ctor(in);
}

void org::apache::poi::hssf::record::DrawingRecordForBiffViewer::ctor(DrawingRecord* r)
{
    super::ctor(convertToInputStream(r));
    convertRawBytesToEscherRecords();
}

org::apache::poi::hssf::record::RecordInputStream* org::apache::poi::hssf::record::DrawingRecordForBiffViewer::convertToInputStream(DrawingRecord* r)
{
    clinit();
    auto data = npc(r)->serialize();
    auto rinp = new RecordInputStream(new ::java::io::ByteArrayInputStream(data));
    npc(rinp)->nextRecord();
    return rinp;
}

java::lang::String* org::apache::poi::hssf::record::DrawingRecordForBiffViewer::getRecordName()
{
    return u"MSODRAWING"_j;
}

int16_t org::apache::poi::hssf::record::DrawingRecordForBiffViewer::getSid()
{
    return sid;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::record::DrawingRecordForBiffViewer::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.DrawingRecordForBiffViewer", 53);
    return c;
}

java::lang::Class* org::apache::poi::hssf::record::DrawingRecordForBiffViewer::getClass0()
{
    return class_();
}

