// Generated from /POI/java/org/apache/poi/hssf/record/DrawingGroupRecord.java
#include <org/apache/poi/hssf/record/DrawingGroupRecord.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/lang/Math.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/System.hpp>
#include <java/util/Iterator.hpp>
#include <java/util/List.hpp>
#include <org/apache/poi/ddf/EscherRecord.hpp>
#include <org/apache/poi/ddf/NullEscherSerializationListener.hpp>
#include <org/apache/poi/hssf/record/ContinueRecord.hpp>
#include <org/apache/poi/util/LittleEndian.hpp>
#include <Array.hpp>

template<typename T, typename U>
static T java_cast(U* u)
{
    if(!u) return static_cast<T>(nullptr);
    auto t = dynamic_cast<T>(u);
    if(!t) throw new ::java::lang::ClassCastException();
    return t;
}

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::hssf::record::DrawingGroupRecord::DrawingGroupRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::record::DrawingGroupRecord::DrawingGroupRecord() 
    : DrawingGroupRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::hssf::record::DrawingGroupRecord::DrawingGroupRecord(RecordInputStream* in) 
    : DrawingGroupRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int16_t poi::hssf::record::DrawingGroupRecord::sid;

constexpr int32_t poi::hssf::record::DrawingGroupRecord::MAX_RECORD_SIZE;

constexpr int32_t poi::hssf::record::DrawingGroupRecord::MAX_DATA_SIZE;

void poi::hssf::record::DrawingGroupRecord::ctor()
{
    super::ctor();
}

void poi::hssf::record::DrawingGroupRecord::ctor(RecordInputStream* in)
{
    super::ctor(in);
}

java::lang::String* poi::hssf::record::DrawingGroupRecord::getRecordName()
{
    return u"MSODRAWINGGROUP"_j;
}

int16_t poi::hssf::record::DrawingGroupRecord::getSid()
{
    return sid;
}

int32_t poi::hssf::record::DrawingGroupRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    auto rawData = getRawData();
    if(npc(getEscherRecords())->size() == 0 && rawData != nullptr) {
        return writeData(offset, data, rawData);
    }
    auto buffer = new ::int8_tArray(getRawDataSize());
    auto pos = int32_t(0);
    for (auto *iterator = npc(getEscherRecords())->iterator(); npc(iterator)->hasNext(); ) {
        auto r = java_cast< ::poi::ddf::EscherRecord* >(npc(iterator)->next());
        pos += npc(r)->serialize(pos, buffer, new ::poi::ddf::NullEscherSerializationListener());
    }
    return writeData(offset, data, buffer);
}

void poi::hssf::record::DrawingGroupRecord::processChildRecords()
{
    convertRawBytesToEscherRecords();
}

int32_t poi::hssf::record::DrawingGroupRecord::getRecordSize()
{
    return grossSizeFromDataSize(getRawDataSize());
}

int32_t poi::hssf::record::DrawingGroupRecord::getRawDataSize()
{
    auto escherRecords = getEscherRecords();
    auto rawData = getRawData();
    if(npc(escherRecords)->size() == 0 && rawData != nullptr) {
        return npc(rawData)->length;
    }
    auto size = int32_t(0);
    for (auto *iterator = npc(escherRecords)->iterator(); npc(iterator)->hasNext(); ) {
        auto r = java_cast< ::poi::ddf::EscherRecord* >(npc(iterator)->next());
        size += npc(r)->getRecordSize();
    }
    return size;
}

int32_t poi::hssf::record::DrawingGroupRecord::grossSizeFromDataSize(int32_t dataSize)
{
    clinit();
    return dataSize + ((dataSize - int32_t(1)) / MAX_DATA_SIZE + int32_t(1)) * int32_t(4);
}

int32_t poi::hssf::record::DrawingGroupRecord::writeData(int32_t offset, ::int8_tArray* data, ::int8_tArray* rawData)
{
    auto writtenActualData = int32_t(0);
    auto writtenRawData = int32_t(0);
    while (writtenRawData < npc(rawData)->length) {
        auto segmentLength = ::java::lang::Math::min(npc(rawData)->length - writtenRawData, MAX_DATA_SIZE);
        if(writtenRawData / MAX_DATA_SIZE >= 2)
            writeContinueHeader(data, offset, segmentLength);
        else
            writeHeader(data, offset, segmentLength);
        writtenActualData += 4;
        offset += 4;
        ::java::lang::System::arraycopy(rawData, writtenRawData, data, offset, segmentLength);
        offset += segmentLength;
        writtenRawData += segmentLength;
        writtenActualData += segmentLength;
    }
    return writtenActualData;
}

void poi::hssf::record::DrawingGroupRecord::writeHeader(::int8_tArray* data, int32_t offset, int32_t sizeExcludingHeader)
{
    ::poi::util::LittleEndian::putShort(data, int32_t(0) + offset, getSid());
    ::poi::util::LittleEndian::putShort(data, int32_t(2) + offset, static_cast< int16_t >(sizeExcludingHeader));
}

void poi::hssf::record::DrawingGroupRecord::writeContinueHeader(::int8_tArray* data, int32_t offset, int32_t sizeExcludingHeader)
{
    ::poi::util::LittleEndian::putShort(data, int32_t(0) + offset, ContinueRecord::sid);
    ::poi::util::LittleEndian::putShort(data, int32_t(2) + offset, static_cast< int16_t >(sizeExcludingHeader));
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::record::DrawingGroupRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.DrawingGroupRecord", 45);
    return c;
}

int8_tArray* poi::hssf::record::DrawingGroupRecord::serialize()
{
    return super::serialize();
}

java::lang::Class* poi::hssf::record::DrawingGroupRecord::getClass0()
{
    return class_();
}

