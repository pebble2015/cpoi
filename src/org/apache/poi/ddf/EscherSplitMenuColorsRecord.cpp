// Generated from /POI/java/org/apache/poi/ddf/EscherSplitMenuColorsRecord.java
#include <org/apache/poi/ddf/EscherSplitMenuColorsRecord.hpp>

#include <java/io/Serializable.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/Cloneable.hpp>
#include <java/lang/Integer.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <org/apache/poi/ddf/EscherSerializationListener.hpp>
#include <org/apache/poi/util/LittleEndian.hpp>
#include <org/apache/poi/util/RecordFormatException.hpp>
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

org::apache::poi::ddf::EscherSplitMenuColorsRecord::EscherSplitMenuColorsRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ddf::EscherSplitMenuColorsRecord::EscherSplitMenuColorsRecord()
    : EscherSplitMenuColorsRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

constexpr int16_t org::apache::poi::ddf::EscherSplitMenuColorsRecord::RECORD_ID;

java::lang::String*& org::apache::poi::ddf::EscherSplitMenuColorsRecord::RECORD_DESCRIPTION()
{
    clinit();
    return RECORD_DESCRIPTION_;
}
java::lang::String* org::apache::poi::ddf::EscherSplitMenuColorsRecord::RECORD_DESCRIPTION_;

int32_t org::apache::poi::ddf::EscherSplitMenuColorsRecord::fillFields(::int8_tArray* data, int32_t offset, EscherRecordFactory* recordFactory)
{
    auto bytesRemaining = readHeader(data, offset);
    auto pos = offset + int32_t(8);
    auto size = int32_t(0);
    field_1_color1 = ::org::apache::poi::util::LittleEndian::getInt(data, pos + size);
    size += 4;
    field_2_color2 = ::org::apache::poi::util::LittleEndian::getInt(data, pos + size);
    size += 4;
    field_3_color3 = ::org::apache::poi::util::LittleEndian::getInt(data, pos + size);
    size += 4;
    field_4_color4 = ::org::apache::poi::util::LittleEndian::getInt(data, pos + size);
    size += 4;
    bytesRemaining -= size;
    if(bytesRemaining != 0) {
        throw new ::org::apache::poi::util::RecordFormatException(::java::lang::StringBuilder().append(u"Expecting no remaining data but got "_j)->append(bytesRemaining)
            ->append(u" byte(s)."_j)->toString());
    }
    return int32_t(8) + size + bytesRemaining;
}

int32_t org::apache::poi::ddf::EscherSplitMenuColorsRecord::serialize(int32_t offset, ::int8_tArray* data, EscherSerializationListener* listener)
{
    npc(listener)->beforeRecordSerialize(offset, getRecordId(), this);
    auto pos = offset;
    ::org::apache::poi::util::LittleEndian::putShort(data, pos, getOptions());
    pos += 2;
    ::org::apache::poi::util::LittleEndian::putShort(data, pos, getRecordId());
    pos += 2;
    auto remainingBytes = getRecordSize() - int32_t(8);
    ::org::apache::poi::util::LittleEndian::putInt(data, pos, remainingBytes);
    pos += 4;
    ::org::apache::poi::util::LittleEndian::putInt(data, pos, field_1_color1);
    pos += 4;
    ::org::apache::poi::util::LittleEndian::putInt(data, pos, field_2_color2);
    pos += 4;
    ::org::apache::poi::util::LittleEndian::putInt(data, pos, field_3_color3);
    pos += 4;
    ::org::apache::poi::util::LittleEndian::putInt(data, pos, field_4_color4);
    pos += 4;
    npc(listener)->afterRecordSerialize(pos, getRecordId(), pos - offset, this);
    return getRecordSize();
}

int32_t org::apache::poi::ddf::EscherSplitMenuColorsRecord::getRecordSize()
{
    return int32_t(8) + int32_t(4) * int32_t(4);
}

int16_t org::apache::poi::ddf::EscherSplitMenuColorsRecord::getRecordId()
{
    return RECORD_ID;
}

java::lang::String* org::apache::poi::ddf::EscherSplitMenuColorsRecord::getRecordName()
{
    return u"SplitMenuColors"_j;
}

int32_t org::apache::poi::ddf::EscherSplitMenuColorsRecord::getColor1()
{
    return field_1_color1;
}

void org::apache::poi::ddf::EscherSplitMenuColorsRecord::setColor1(int32_t field_1_color1)
{
    this->field_1_color1 = field_1_color1;
}

int32_t org::apache::poi::ddf::EscherSplitMenuColorsRecord::getColor2()
{
    return field_2_color2;
}

void org::apache::poi::ddf::EscherSplitMenuColorsRecord::setColor2(int32_t field_2_color2)
{
    this->field_2_color2 = field_2_color2;
}

int32_t org::apache::poi::ddf::EscherSplitMenuColorsRecord::getColor3()
{
    return field_3_color3;
}

void org::apache::poi::ddf::EscherSplitMenuColorsRecord::setColor3(int32_t field_3_color3)
{
    this->field_3_color3 = field_3_color3;
}

int32_t org::apache::poi::ddf::EscherSplitMenuColorsRecord::getColor4()
{
    return field_4_color4;
}

void org::apache::poi::ddf::EscherSplitMenuColorsRecord::setColor4(int32_t field_4_color4)
{
    this->field_4_color4 = field_4_color4;
}

java::lang::ObjectArrayArray* org::apache::poi::ddf::EscherSplitMenuColorsRecord::getAttributeMap()
{
    return new ::java::lang::ObjectArrayArray({
        (new ::java::lang::ObjectArray({
        static_cast< ::java::lang::Object* >(u"Color1"_j)
        , static_cast< ::java::lang::Object* >(::java::lang::Integer::valueOf(field_1_color1))
    }))
        , (new ::java::lang::ObjectArray({
        static_cast< ::java::lang::Object* >(u"Color2"_j)
        , static_cast< ::java::lang::Object* >(::java::lang::Integer::valueOf(field_2_color2))
    }))
        , (new ::java::lang::ObjectArray({
        static_cast< ::java::lang::Object* >(u"Color3"_j)
        , static_cast< ::java::lang::Object* >(::java::lang::Integer::valueOf(field_3_color3))
    }))
        , (new ::java::lang::ObjectArray({
        static_cast< ::java::lang::Object* >(u"Color4"_j)
        , static_cast< ::java::lang::Object* >(::java::lang::Integer::valueOf(field_4_color4))
    }))
    });
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ddf::EscherSplitMenuColorsRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ddf.EscherSplitMenuColorsRecord", 46);
    return c;
}

void org::apache::poi::ddf::EscherSplitMenuColorsRecord::clinit()
{
struct string_init_ {
    string_init_() {
    RECORD_DESCRIPTION_ = u"MsofbtSplitMenuColors"_j;
    }
};

    static string_init_ string_init_instance;

    super::clinit();
}

int32_t org::apache::poi::ddf::EscherSplitMenuColorsRecord::fillFields(::int8_tArray* data, EscherRecordFactory* f)
{
    return super::fillFields(data, f);
}

int8_tArray* org::apache::poi::ddf::EscherSplitMenuColorsRecord::serialize()
{
    return super::serialize();
}

int32_t org::apache::poi::ddf::EscherSplitMenuColorsRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

java::lang::Class* org::apache::poi::ddf::EscherSplitMenuColorsRecord::getClass0()
{
    return class_();
}

