// Generated from /POI/java/org/apache/poi/ddf/EscherClientAnchorRecord.java
#include <org/apache/poi/ddf/EscherClientAnchorRecord.hpp>

#include <java/io/Serializable.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/Cloneable.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/Short.hpp>
#include <java/lang/String.hpp>
#include <java/lang/System.hpp>
#include <org/apache/poi/ddf/EscherSerializationListener.hpp>
#include <org/apache/poi/util/LittleEndian.hpp>
#include <Array.hpp>
#include <SubArray.hpp>
#include <ObjectArray.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace io
    {
typedef ::SubArray< ::java::io::Serializable, ::java::lang::ObjectArray > SerializableArray;
    } // io

    namespace lang
    {
typedef ::SubArray< ::java::lang::Cloneable, ObjectArray > CloneableArray;
typedef ::SubArray< ::java::lang::ObjectArray, CloneableArray, ::java::io::SerializableArray > ObjectArrayArray;
    } // lang
} // java

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::ddf::EscherClientAnchorRecord::EscherClientAnchorRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ddf::EscherClientAnchorRecord::EscherClientAnchorRecord()
    : EscherClientAnchorRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void org::apache::poi::ddf::EscherClientAnchorRecord::ctor()
{
    super::ctor();
    init();
}

void org::apache::poi::ddf::EscherClientAnchorRecord::init()
{
    remainingData = new ::int8_tArray(int32_t(0));
    shortRecord = false;
}

constexpr int16_t org::apache::poi::ddf::EscherClientAnchorRecord::RECORD_ID;

java::lang::String*& org::apache::poi::ddf::EscherClientAnchorRecord::RECORD_DESCRIPTION()
{
    clinit();
    return RECORD_DESCRIPTION_;
}
java::lang::String* org::apache::poi::ddf::EscherClientAnchorRecord::RECORD_DESCRIPTION_;

int32_t org::apache::poi::ddf::EscherClientAnchorRecord::fillFields(::int8_tArray* data, int32_t offset, EscherRecordFactory* recordFactory)
{
    auto bytesRemaining = readHeader(data, offset);
    auto pos = offset + int32_t(8);
    auto size = int32_t(0);
    if(bytesRemaining != 4) {
        field_1_flag = ::org::apache::poi::util::LittleEndian::getShort(data, pos + size);
        size += 2;
        field_2_col1 = ::org::apache::poi::util::LittleEndian::getShort(data, pos + size);
        size += 2;
        field_3_dx1 = ::org::apache::poi::util::LittleEndian::getShort(data, pos + size);
        size += 2;
        field_4_row1 = ::org::apache::poi::util::LittleEndian::getShort(data, pos + size);
        size += 2;
        if(bytesRemaining >= 18) {
            field_5_dy1 = ::org::apache::poi::util::LittleEndian::getShort(data, pos + size);
            size += 2;
            field_6_col2 = ::org::apache::poi::util::LittleEndian::getShort(data, pos + size);
            size += 2;
            field_7_dx2 = ::org::apache::poi::util::LittleEndian::getShort(data, pos + size);
            size += 2;
            field_8_row2 = ::org::apache::poi::util::LittleEndian::getShort(data, pos + size);
            size += 2;
            field_9_dy2 = ::org::apache::poi::util::LittleEndian::getShort(data, pos + size);
            size += 2;
            shortRecord = false;
        } else {
            shortRecord = true;
        }
    }
    bytesRemaining -= size;
    remainingData = new ::int8_tArray(bytesRemaining);
    ::java::lang::System::arraycopy(data, pos + size, remainingData, 0, bytesRemaining);
    return int32_t(8) + size + bytesRemaining;
}

int32_t org::apache::poi::ddf::EscherClientAnchorRecord::serialize(int32_t offset, ::int8_tArray* data, EscherSerializationListener* listener)
{
    npc(listener)->beforeRecordSerialize(offset, getRecordId(), this);
    if(remainingData == nullptr) {
        remainingData = new ::int8_tArray(int32_t(0));
    }
    ::org::apache::poi::util::LittleEndian::putShort(data, offset, getOptions());
    ::org::apache::poi::util::LittleEndian::putShort(data, offset + int32_t(2), getRecordId());
    auto remainingBytes = npc(remainingData)->length + (shortRecord ? int32_t(8) : int32_t(18));
    ::org::apache::poi::util::LittleEndian::putInt(data, offset + int32_t(4), remainingBytes);
    ::org::apache::poi::util::LittleEndian::putShort(data, offset + int32_t(8), field_1_flag);
    ::org::apache::poi::util::LittleEndian::putShort(data, offset + int32_t(10), field_2_col1);
    ::org::apache::poi::util::LittleEndian::putShort(data, offset + int32_t(12), field_3_dx1);
    ::org::apache::poi::util::LittleEndian::putShort(data, offset + int32_t(14), field_4_row1);
    if(!shortRecord) {
        ::org::apache::poi::util::LittleEndian::putShort(data, offset + int32_t(16), field_5_dy1);
        ::org::apache::poi::util::LittleEndian::putShort(data, offset + int32_t(18), field_6_col2);
        ::org::apache::poi::util::LittleEndian::putShort(data, offset + int32_t(20), field_7_dx2);
        ::org::apache::poi::util::LittleEndian::putShort(data, offset + int32_t(22), field_8_row2);
        ::org::apache::poi::util::LittleEndian::putShort(data, offset + int32_t(24), field_9_dy2);
    }
    ::java::lang::System::arraycopy(remainingData, 0, data, offset + (shortRecord ? int32_t(16) : int32_t(26)), npc(remainingData)->length);
    auto pos = offset + int32_t(8) + (shortRecord ? int32_t(8) : int32_t(18))+ npc(remainingData)->length;
    npc(listener)->afterRecordSerialize(pos, getRecordId(), pos - offset, this);
    return pos - offset;
}

int32_t org::apache::poi::ddf::EscherClientAnchorRecord::getRecordSize()
{
    return int32_t(8) + (shortRecord ? int32_t(8) : int32_t(18)) + (remainingData == nullptr ? int32_t(0) : npc(remainingData)->length);
}

int16_t org::apache::poi::ddf::EscherClientAnchorRecord::getRecordId()
{
    return RECORD_ID;
}

java::lang::String* org::apache::poi::ddf::EscherClientAnchorRecord::getRecordName()
{
    return u"ClientAnchor"_j;
}

int16_t org::apache::poi::ddf::EscherClientAnchorRecord::getFlag()
{
    return field_1_flag;
}

void org::apache::poi::ddf::EscherClientAnchorRecord::setFlag(int16_t field_1_flag)
{
    this->field_1_flag = field_1_flag;
}

int16_t org::apache::poi::ddf::EscherClientAnchorRecord::getCol1()
{
    return field_2_col1;
}

void org::apache::poi::ddf::EscherClientAnchorRecord::setCol1(int16_t field_2_col1)
{
    this->field_2_col1 = field_2_col1;
}

int16_t org::apache::poi::ddf::EscherClientAnchorRecord::getDx1()
{
    return field_3_dx1;
}

void org::apache::poi::ddf::EscherClientAnchorRecord::setDx1(int16_t field_3_dx1)
{
    this->field_3_dx1 = field_3_dx1;
}

int16_t org::apache::poi::ddf::EscherClientAnchorRecord::getRow1()
{
    return field_4_row1;
}

void org::apache::poi::ddf::EscherClientAnchorRecord::setRow1(int16_t field_4_row1)
{
    this->field_4_row1 = field_4_row1;
}

int16_t org::apache::poi::ddf::EscherClientAnchorRecord::getDy1()
{
    return field_5_dy1;
}

void org::apache::poi::ddf::EscherClientAnchorRecord::setDy1(int16_t field_5_dy1)
{
    shortRecord = false;
    this->field_5_dy1 = field_5_dy1;
}

int16_t org::apache::poi::ddf::EscherClientAnchorRecord::getCol2()
{
    return field_6_col2;
}

void org::apache::poi::ddf::EscherClientAnchorRecord::setCol2(int16_t field_6_col2)
{
    shortRecord = false;
    this->field_6_col2 = field_6_col2;
}

int16_t org::apache::poi::ddf::EscherClientAnchorRecord::getDx2()
{
    return field_7_dx2;
}

void org::apache::poi::ddf::EscherClientAnchorRecord::setDx2(int16_t field_7_dx2)
{
    shortRecord = false;
    this->field_7_dx2 = field_7_dx2;
}

int16_t org::apache::poi::ddf::EscherClientAnchorRecord::getRow2()
{
    return field_8_row2;
}

void org::apache::poi::ddf::EscherClientAnchorRecord::setRow2(int16_t field_8_row2)
{
    shortRecord = false;
    this->field_8_row2 = field_8_row2;
}

int16_t org::apache::poi::ddf::EscherClientAnchorRecord::getDy2()
{
    return field_9_dy2;
}

void org::apache::poi::ddf::EscherClientAnchorRecord::setDy2(int16_t field_9_dy2)
{
    shortRecord = false;
    this->field_9_dy2 = field_9_dy2;
}

int8_tArray* org::apache::poi::ddf::EscherClientAnchorRecord::getRemainingData()
{
    return remainingData;
}

void org::apache::poi::ddf::EscherClientAnchorRecord::setRemainingData(::int8_tArray* remainingData)
{
    if(remainingData == nullptr) {
        this->remainingData = new ::int8_tArray(int32_t(0));
    } else {
        this->remainingData = npc(remainingData)->clone();
    }
}

java::lang::ObjectArrayArray* org::apache::poi::ddf::EscherClientAnchorRecord::getAttributeMap()
{
    return new ::java::lang::ObjectArrayArray({
        (new ::java::lang::ObjectArray({
        static_cast< ::java::lang::Object* >(u"Flag"_j)
        , static_cast< ::java::lang::Object* >(::java::lang::Short::valueOf(field_1_flag))
    }))
        , (new ::java::lang::ObjectArray({
        static_cast< ::java::lang::Object* >(u"Col1"_j)
        , static_cast< ::java::lang::Object* >(::java::lang::Short::valueOf(field_2_col1))
    }))
        , (new ::java::lang::ObjectArray({
        static_cast< ::java::lang::Object* >(u"DX1"_j)
        , static_cast< ::java::lang::Object* >(::java::lang::Short::valueOf(field_3_dx1))
    }))
        , (new ::java::lang::ObjectArray({
        static_cast< ::java::lang::Object* >(u"Row1"_j)
        , static_cast< ::java::lang::Object* >(::java::lang::Short::valueOf(field_4_row1))
    }))
        , (new ::java::lang::ObjectArray({
        static_cast< ::java::lang::Object* >(u"DY1"_j)
        , static_cast< ::java::lang::Object* >(::java::lang::Short::valueOf(field_5_dy1))
    }))
        , (new ::java::lang::ObjectArray({
        static_cast< ::java::lang::Object* >(u"Col2"_j)
        , static_cast< ::java::lang::Object* >(::java::lang::Short::valueOf(field_6_col2))
    }))
        , (new ::java::lang::ObjectArray({
        static_cast< ::java::lang::Object* >(u"DX2"_j)
        , static_cast< ::java::lang::Object* >(::java::lang::Short::valueOf(field_7_dx2))
    }))
        , (new ::java::lang::ObjectArray({
        static_cast< ::java::lang::Object* >(u"Row2"_j)
        , static_cast< ::java::lang::Object* >(::java::lang::Short::valueOf(field_8_row2))
    }))
        , (new ::java::lang::ObjectArray({
        static_cast< ::java::lang::Object* >(u"DY2"_j)
        , static_cast< ::java::lang::Object* >(::java::lang::Short::valueOf(field_9_dy2))
    }))
        , (new ::java::lang::ObjectArray({
        static_cast< ::java::lang::Object* >(u"Extra Data"_j)
        , static_cast< ::java::lang::Object* >(remainingData)
    }))
    });
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ddf::EscherClientAnchorRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ddf.EscherClientAnchorRecord", 43);
    return c;
}

void org::apache::poi::ddf::EscherClientAnchorRecord::clinit()
{
struct string_init_ {
    string_init_() {
    RECORD_DESCRIPTION_ = u"MsofbtClientAnchor"_j;
    }
};

    static string_init_ string_init_instance;

    super::clinit();
}

int32_t org::apache::poi::ddf::EscherClientAnchorRecord::fillFields(::int8_tArray* data, EscherRecordFactory* f)
{
    return super::fillFields(data, f);
}

int8_tArray* org::apache::poi::ddf::EscherClientAnchorRecord::serialize()
{
    return super::serialize();
}

int32_t org::apache::poi::ddf::EscherClientAnchorRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

java::lang::Class* org::apache::poi::ddf::EscherClientAnchorRecord::getClass0()
{
    return class_();
}

