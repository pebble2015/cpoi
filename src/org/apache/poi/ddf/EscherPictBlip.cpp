// Generated from /POI/java/org/apache/poi/ddf/EscherPictBlip.java
#include <org/apache/poi/ddf/EscherPictBlip.hpp>

#include <java/awt/Dimension.hpp>
#include <java/awt/Rectangle.hpp>
#include <java/io/ByteArrayInputStream.hpp>
#include <java/io/ByteArrayOutputStream.hpp>
#include <java/io/IOException.hpp>
#include <java/io/Serializable.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/Byte.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/Cloneable.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/Integer.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/System.hpp>
#include <java/util/zip/InflaterInputStream.hpp>
#include <org/apache/poi/ddf/EscherSerializationListener.hpp>
#include <org/apache/poi/util/LittleEndian.hpp>
#include <org/apache/poi/util/POILogFactory.hpp>
#include <org/apache/poi/util/POILogger.hpp>
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

org::apache::poi::ddf::EscherPictBlip::EscherPictBlip(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ddf::EscherPictBlip::EscherPictBlip()
    : EscherPictBlip(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void org::apache::poi::ddf::EscherPictBlip::ctor()
{
    super::ctor();
    init();
}

void org::apache::poi::ddf::EscherPictBlip::init()
{
    field_1_UID = new ::int8_tArray(int32_t(16));
}

org::apache::poi::util::POILogger*& org::apache::poi::ddf::EscherPictBlip::log()
{
    clinit();
    return log_;
}
org::apache::poi::util::POILogger* org::apache::poi::ddf::EscherPictBlip::log_;

constexpr int16_t org::apache::poi::ddf::EscherPictBlip::RECORD_ID_EMF;

constexpr int16_t org::apache::poi::ddf::EscherPictBlip::RECORD_ID_WMF;

constexpr int16_t org::apache::poi::ddf::EscherPictBlip::RECORD_ID_PICT;

constexpr int32_t org::apache::poi::ddf::EscherPictBlip::HEADER_SIZE;

int32_t org::apache::poi::ddf::EscherPictBlip::fillFields(::int8_tArray* data, int32_t offset, EscherRecordFactory* recordFactory)
{
    auto bytesAfterHeader = readHeader(data, offset);
    auto pos = offset + HEADER_SIZE;
    ::java::lang::System::arraycopy(data, pos, field_1_UID, 0, 16);
    pos += 16;
    field_2_cb = ::org::apache::poi::util::LittleEndian::getInt(data, pos);
    pos += 4;
    field_3_rcBounds_x1 = ::org::apache::poi::util::LittleEndian::getInt(data, pos);
    pos += 4;
    field_3_rcBounds_y1 = ::org::apache::poi::util::LittleEndian::getInt(data, pos);
    pos += 4;
    field_3_rcBounds_x2 = ::org::apache::poi::util::LittleEndian::getInt(data, pos);
    pos += 4;
    field_3_rcBounds_y2 = ::org::apache::poi::util::LittleEndian::getInt(data, pos);
    pos += 4;
    field_4_ptSize_w = ::org::apache::poi::util::LittleEndian::getInt(data, pos);
    pos += 4;
    field_4_ptSize_h = ::org::apache::poi::util::LittleEndian::getInt(data, pos);
    pos += 4;
    field_5_cbSave = ::org::apache::poi::util::LittleEndian::getInt(data, pos);
    pos += 4;
    field_6_fCompression = (*data)[pos];
    pos++;
    field_7_fFilter = (*data)[pos];
    pos++;
    raw_pictureData = new ::int8_tArray(field_5_cbSave);
    ::java::lang::System::arraycopy(data, pos, raw_pictureData, 0, field_5_cbSave);
    if(field_6_fCompression == 0) {
        super::setPictureData(inflatePictureData(raw_pictureData));
    } else {
        super::setPictureData(raw_pictureData);
    }
    return bytesAfterHeader + HEADER_SIZE;
}

int32_t org::apache::poi::ddf::EscherPictBlip::serialize(int32_t offset, ::int8_tArray* data, EscherSerializationListener* listener)
{
    npc(listener)->beforeRecordSerialize(offset, getRecordId(), this);
    auto pos = offset;
    ::org::apache::poi::util::LittleEndian::putShort(data, pos, getOptions());
    pos += 2;
    ::org::apache::poi::util::LittleEndian::putShort(data, pos, getRecordId());
    pos += 2;
    ::org::apache::poi::util::LittleEndian::putInt(data, 0, getRecordSize() - HEADER_SIZE);
    pos += 4;
    ::java::lang::System::arraycopy(field_1_UID, 0, data, pos, 16);
    pos += 16;
    ::org::apache::poi::util::LittleEndian::putInt(data, pos, field_2_cb);
    pos += 4;
    ::org::apache::poi::util::LittleEndian::putInt(data, pos, field_3_rcBounds_x1);
    pos += 4;
    ::org::apache::poi::util::LittleEndian::putInt(data, pos, field_3_rcBounds_y1);
    pos += 4;
    ::org::apache::poi::util::LittleEndian::putInt(data, pos, field_3_rcBounds_x2);
    pos += 4;
    ::org::apache::poi::util::LittleEndian::putInt(data, pos, field_3_rcBounds_y2);
    pos += 4;
    ::org::apache::poi::util::LittleEndian::putInt(data, pos, field_4_ptSize_w);
    pos += 4;
    ::org::apache::poi::util::LittleEndian::putInt(data, pos, field_4_ptSize_h);
    pos += 4;
    ::org::apache::poi::util::LittleEndian::putInt(data, pos, field_5_cbSave);
    pos += 4;
    (*data)[pos] = field_6_fCompression;
    pos++;
    (*data)[pos] = field_7_fFilter;
    pos++;
    ::java::lang::System::arraycopy(raw_pictureData, 0, data, pos, npc(raw_pictureData)->length);
    npc(listener)->afterRecordSerialize(offset + getRecordSize(), getRecordId(), getRecordSize(), this);
    return HEADER_SIZE + int32_t(16) + int32_t(1)+ npc(raw_pictureData)->length;
}

int8_tArray* org::apache::poi::ddf::EscherPictBlip::inflatePictureData(::int8_tArray* data)
{
    clinit();
    try {
        auto in = new ::java::util::zip::InflaterInputStream(new ::java::io::ByteArrayInputStream(data));
        auto out = new ::java::io::ByteArrayOutputStream();
        auto buf = new ::int8_tArray(int32_t(4096));
        int32_t readBytes;
        while ((readBytes = npc(in)->read(buf)) > 0) {
            npc(out)->write(buf, int32_t(0), readBytes);
        }
        return npc(out)->toByteArray_();
    } catch (::java::io::IOException* e) {
        npc(log_)->log(::org::apache::poi::util::POILogger::INFO, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(u"Possibly corrupt compression or non-compressed data"_j), static_cast< ::java::lang::Object* >(e)}));
        return data;
    }
}

int32_t org::apache::poi::ddf::EscherPictBlip::getRecordSize()
{
    return int32_t(8) + int32_t(50) + npc(raw_pictureData)->length;
}

int8_tArray* org::apache::poi::ddf::EscherPictBlip::getUID()
{
    return field_1_UID;
}

void org::apache::poi::ddf::EscherPictBlip::setUID(::int8_tArray* uid)
{
    if(uid == nullptr || npc(uid)->length != 16) {
        throw new ::java::lang::IllegalArgumentException(u"uid must be byte[16]"_j);
    }
    ::java::lang::System::arraycopy(uid, 0, field_1_UID, 0, npc(field_1_UID)->length);
}

int32_t org::apache::poi::ddf::EscherPictBlip::getUncompressedSize()
{
    return field_2_cb;
}

void org::apache::poi::ddf::EscherPictBlip::setUncompressedSize(int32_t uncompressedSize)
{
    field_2_cb = uncompressedSize;
}

java::awt::Rectangle* org::apache::poi::ddf::EscherPictBlip::getBounds()
{
    return new ::java::awt::Rectangle(field_3_rcBounds_x1, field_3_rcBounds_y1, field_3_rcBounds_x2 - field_3_rcBounds_x1, field_3_rcBounds_y2 - field_3_rcBounds_y1);
}

void org::apache::poi::ddf::EscherPictBlip::setBounds(::java::awt::Rectangle* bounds)
{
    field_3_rcBounds_x1 = npc(bounds)->x;
    field_3_rcBounds_y1 = npc(bounds)->y;
    field_3_rcBounds_x2 = npc(bounds)->x + npc(bounds)->width;
    field_3_rcBounds_y2 = npc(bounds)->y + npc(bounds)->height;
}

java::awt::Dimension* org::apache::poi::ddf::EscherPictBlip::getSizeEMU()
{
    return new ::java::awt::Dimension(field_4_ptSize_w, field_4_ptSize_h);
}

void org::apache::poi::ddf::EscherPictBlip::setSizeEMU(::java::awt::Dimension* sizeEMU)
{
    field_4_ptSize_w = npc(sizeEMU)->width;
    field_4_ptSize_h = npc(sizeEMU)->height;
}

int32_t org::apache::poi::ddf::EscherPictBlip::getCompressedSize()
{
    return field_5_cbSave;
}

void org::apache::poi::ddf::EscherPictBlip::setCompressedSize(int32_t compressedSize)
{
    field_5_cbSave = compressedSize;
}

bool org::apache::poi::ddf::EscherPictBlip::isCompressed()
{
    return (field_6_fCompression == 0);
}

void org::apache::poi::ddf::EscherPictBlip::setCompressed(bool compressed)
{
    field_6_fCompression = compressed ? static_cast< int8_t >(int32_t(0)) : static_cast< int8_t >(int32_t(254));
}

int8_t org::apache::poi::ddf::EscherPictBlip::getFilter()
{
    return field_7_fFilter;
}

void org::apache::poi::ddf::EscherPictBlip::setFilter(int8_t filter)
{
    field_7_fFilter = filter;
}

java::lang::ObjectArrayArray* org::apache::poi::ddf::EscherPictBlip::getAttributeMap()
{
    return new ::java::lang::ObjectArrayArray({
        (new ::java::lang::ObjectArray({
        static_cast< ::java::lang::Object* >(u"UID"_j)
        , static_cast< ::java::lang::Object* >(field_1_UID)
    }))
        , (new ::java::lang::ObjectArray({
        static_cast< ::java::lang::Object* >(u"Uncompressed Size"_j)
        , static_cast< ::java::lang::Object* >(::java::lang::Integer::valueOf(field_2_cb))
    }))
        , (new ::java::lang::ObjectArray({
        static_cast< ::java::lang::Object* >(u"Bounds"_j)
        , static_cast< ::java::lang::Object* >(npc(getBounds())->toString())
    }))
        , (new ::java::lang::ObjectArray({
        static_cast< ::java::lang::Object* >(u"Size in EMU"_j)
        , static_cast< ::java::lang::Object* >(npc(getSizeEMU())->toString())
    }))
        , (new ::java::lang::ObjectArray({
        static_cast< ::java::lang::Object* >(u"Compressed Size"_j)
        , static_cast< ::java::lang::Object* >(::java::lang::Integer::valueOf(field_5_cbSave))
    }))
        , (new ::java::lang::ObjectArray({
        static_cast< ::java::lang::Object* >(u"Compression"_j)
        , static_cast< ::java::lang::Object* >(::java::lang::Byte::valueOf(field_6_fCompression))
    }))
        , (new ::java::lang::ObjectArray({
        static_cast< ::java::lang::Object* >(u"Filter"_j)
        , static_cast< ::java::lang::Object* >(::java::lang::Byte::valueOf(field_7_fFilter))
    }))
        , (new ::java::lang::ObjectArray({
        static_cast< ::java::lang::Object* >(u"Extra Data"_j)
        , static_cast< ::java::lang::Object* >(getPicturedata())
    }))
    });
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ddf::EscherPictBlip::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ddf.EscherPictBlip", 33);
    return c;
}

void org::apache::poi::ddf::EscherPictBlip::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        log_ = ::org::apache::poi::util::POILogFactory::getLogger(static_cast< ::java::lang::Class* >(EscherPictBlip::class_()));
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

int32_t org::apache::poi::ddf::EscherPictBlip::fillFields(::int8_tArray* data, EscherRecordFactory* f)
{
    return super::fillFields(data, f);
}

int8_tArray* org::apache::poi::ddf::EscherPictBlip::serialize()
{
    return super::serialize();
}

int32_t org::apache::poi::ddf::EscherPictBlip::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

java::lang::Class* org::apache::poi::ddf::EscherPictBlip::getClass0()
{
    return class_();
}

