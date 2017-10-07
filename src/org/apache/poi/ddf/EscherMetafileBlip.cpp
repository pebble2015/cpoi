// Generated from /POI/java/org/apache/poi/ddf/EscherMetafileBlip.java
#include <org/apache/poi/ddf/EscherMetafileBlip.hpp>

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
#include <java/lang/RuntimeException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/lang/System.hpp>
#include <java/util/zip/DeflaterOutputStream.hpp>
#include <java/util/zip/InflaterInputStream.hpp>
#include <org/apache/poi/ddf/EscherSerializationListener.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFPictureData.hpp>
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

org::apache::poi::ddf::EscherMetafileBlip::EscherMetafileBlip(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ddf::EscherMetafileBlip::EscherMetafileBlip()
    : EscherMetafileBlip(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void org::apache::poi::ddf::EscherMetafileBlip::ctor()
{
    super::ctor();
    init();
}

void org::apache::poi::ddf::EscherMetafileBlip::init()
{
    field_1_UID = new ::int8_tArray(int32_t(16));
    field_2_UID = new ::int8_tArray(int32_t(16));
}

org::apache::poi::util::POILogger*& org::apache::poi::ddf::EscherMetafileBlip::log()
{
    clinit();
    return log_;
}
org::apache::poi::util::POILogger* org::apache::poi::ddf::EscherMetafileBlip::log_;

constexpr int16_t org::apache::poi::ddf::EscherMetafileBlip::RECORD_ID_EMF;

constexpr int16_t org::apache::poi::ddf::EscherMetafileBlip::RECORD_ID_WMF;

constexpr int16_t org::apache::poi::ddf::EscherMetafileBlip::RECORD_ID_PICT;

constexpr int32_t org::apache::poi::ddf::EscherMetafileBlip::HEADER_SIZE;

int32_t org::apache::poi::ddf::EscherMetafileBlip::fillFields(::int8_tArray* data, int32_t offset, EscherRecordFactory* recordFactory)
{
    auto bytesAfterHeader = readHeader(data, offset);
    auto pos = offset + HEADER_SIZE;
    ::java::lang::System::arraycopy(data, pos, field_1_UID, 0, 16);
    pos += 16;
    if((getOptions() ^ getSignature()) == 16) {
        ::java::lang::System::arraycopy(data, pos, field_2_UID, 0, 16);
        pos += 16;
    }
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
    pos += field_5_cbSave;
    if(field_6_fCompression == 0) {
        super::setPictureData(inflatePictureData(raw_pictureData));
    } else {
        super::setPictureData(raw_pictureData);
    }
    auto remaining = bytesAfterHeader - pos + offset + HEADER_SIZE;
    if(remaining > 0) {
        remainingData = new ::int8_tArray(remaining);
        ::java::lang::System::arraycopy(data, pos, remainingData, 0, remaining);
    }
    return bytesAfterHeader + HEADER_SIZE;
}

int32_t org::apache::poi::ddf::EscherMetafileBlip::serialize(int32_t offset, ::int8_tArray* data, EscherSerializationListener* listener)
{
    npc(listener)->beforeRecordSerialize(offset, getRecordId(), this);
    auto pos = offset;
    ::org::apache::poi::util::LittleEndian::putShort(data, pos, getOptions());
    pos += 2;
    ::org::apache::poi::util::LittleEndian::putShort(data, pos, getRecordId());
    pos += 2;
    ::org::apache::poi::util::LittleEndian::putInt(data, pos, getRecordSize() - HEADER_SIZE);
    pos += 4;
    ::java::lang::System::arraycopy(field_1_UID, 0, data, pos, npc(field_1_UID)->length);
    pos += npc(field_1_UID)->length;
    if((getOptions() ^ getSignature()) == 16) {
        ::java::lang::System::arraycopy(field_2_UID, 0, data, pos, npc(field_2_UID)->length);
        pos += npc(field_2_UID)->length;
    }
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
    pos += npc(raw_pictureData)->length;
    if(remainingData != nullptr) {
        ::java::lang::System::arraycopy(remainingData, 0, data, pos, npc(remainingData)->length);
        pos += npc(remainingData)->length;
    }
    npc(listener)->afterRecordSerialize(offset + getRecordSize(), getRecordId(), getRecordSize(), this);
    return getRecordSize();
}

int8_tArray* org::apache::poi::ddf::EscherMetafileBlip::inflatePictureData(::int8_tArray* data)
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
        npc(log_)->log(::org::apache::poi::util::POILogger::WARN, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(u"Possibly corrupt compression or non-compressed data"_j), static_cast< ::java::lang::Object* >(e)}));
        return data;
    }
}

int32_t org::apache::poi::ddf::EscherMetafileBlip::getRecordSize()
{
    auto size = int32_t(8) + int32_t(50) + npc(raw_pictureData)->length;
    if(remainingData != nullptr) {
        size += npc(remainingData)->length;
    }
    if((getOptions() ^ getSignature()) == 16) {
        size += npc(field_2_UID)->length;
    }
    return size;
}

int8_tArray* org::apache::poi::ddf::EscherMetafileBlip::getUID()
{
    return field_1_UID;
}

void org::apache::poi::ddf::EscherMetafileBlip::setUID(::int8_tArray* uid)
{
    if(uid == nullptr || npc(uid)->length != 16) {
        throw new ::java::lang::IllegalArgumentException(u"uid must be byte[16]"_j);
    }
    ::java::lang::System::arraycopy(uid, 0, field_1_UID, 0, npc(field_1_UID)->length);
}

int8_tArray* org::apache::poi::ddf::EscherMetafileBlip::getPrimaryUID()
{
    return field_2_UID;
}

void org::apache::poi::ddf::EscherMetafileBlip::setPrimaryUID(::int8_tArray* primaryUID)
{
    if(primaryUID == nullptr || npc(primaryUID)->length != 16) {
        throw new ::java::lang::IllegalArgumentException(u"primaryUID must be byte[16]"_j);
    }
    ::java::lang::System::arraycopy(primaryUID, 0, field_2_UID, 0, npc(field_2_UID)->length);
}

int32_t org::apache::poi::ddf::EscherMetafileBlip::getUncompressedSize()
{
    return field_2_cb;
}

void org::apache::poi::ddf::EscherMetafileBlip::setUncompressedSize(int32_t uncompressedSize)
{
    field_2_cb = uncompressedSize;
}

java::awt::Rectangle* org::apache::poi::ddf::EscherMetafileBlip::getBounds()
{
    return new ::java::awt::Rectangle(field_3_rcBounds_x1, field_3_rcBounds_y1, field_3_rcBounds_x2 - field_3_rcBounds_x1, field_3_rcBounds_y2 - field_3_rcBounds_y1);
}

void org::apache::poi::ddf::EscherMetafileBlip::setBounds(::java::awt::Rectangle* bounds)
{
    field_3_rcBounds_x1 = npc(bounds)->x;
    field_3_rcBounds_y1 = npc(bounds)->y;
    field_3_rcBounds_x2 = npc(bounds)->x + npc(bounds)->width;
    field_3_rcBounds_y2 = npc(bounds)->y + npc(bounds)->height;
}

java::awt::Dimension* org::apache::poi::ddf::EscherMetafileBlip::getSizeEMU()
{
    return new ::java::awt::Dimension(field_4_ptSize_w, field_4_ptSize_h);
}

void org::apache::poi::ddf::EscherMetafileBlip::setSizeEMU(::java::awt::Dimension* sizeEMU)
{
    field_4_ptSize_w = npc(sizeEMU)->width;
    field_4_ptSize_h = npc(sizeEMU)->height;
}

int32_t org::apache::poi::ddf::EscherMetafileBlip::getCompressedSize()
{
    return field_5_cbSave;
}

void org::apache::poi::ddf::EscherMetafileBlip::setCompressedSize(int32_t compressedSize)
{
    field_5_cbSave = compressedSize;
}

bool org::apache::poi::ddf::EscherMetafileBlip::isCompressed()
{
    return (field_6_fCompression == 0);
}

void org::apache::poi::ddf::EscherMetafileBlip::setCompressed(bool compressed)
{
    field_6_fCompression = compressed ? static_cast< int8_t >(int32_t(0)) : static_cast< int8_t >(int32_t(254));
}

int8_t org::apache::poi::ddf::EscherMetafileBlip::getFilter()
{
    return field_7_fFilter;
}

void org::apache::poi::ddf::EscherMetafileBlip::setFilter(int8_t filter)
{
    field_7_fFilter = filter;
}

int8_tArray* org::apache::poi::ddf::EscherMetafileBlip::getRemainingData()
{
    return remainingData;
}

int16_t org::apache::poi::ddf::EscherMetafileBlip::getSignature()
{
    switch (getRecordId()) {
    case RECORD_ID_EMF:
        return ::org::apache::poi::hssf::usermodel::HSSFPictureData::MSOBI_EMF;
    case RECORD_ID_WMF:
        return ::org::apache::poi::hssf::usermodel::HSSFPictureData::MSOBI_WMF;
    case RECORD_ID_PICT:
        return ::org::apache::poi::hssf::usermodel::HSSFPictureData::MSOBI_PICT;
    }

    if(npc(log_)->check(::org::apache::poi::util::POILogger::WARN)) {
        npc(log_)->log(::org::apache::poi::util::POILogger::WARN, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(::java::lang::StringBuilder().append(u"Unknown metafile: "_j)->append(getRecordId())->toString())}));
    }
    return 0;
}

void org::apache::poi::ddf::EscherMetafileBlip::setPictureData(::int8_tArray* pictureData)
{
    super::setPictureData(pictureData);
    setUncompressedSize(npc(pictureData)->length);
    try {
        auto bos = new ::java::io::ByteArrayOutputStream();
        auto dos = new ::java::util::zip::DeflaterOutputStream(bos);
        npc(dos)->write(pictureData);
        npc(dos)->close();
        raw_pictureData = npc(bos)->toByteArray_();
    } catch (::java::io::IOException* e) {
        throw new ::java::lang::RuntimeException(u"Can't compress metafile picture data"_j, e);
    }
    setCompressedSize(npc(raw_pictureData)->length);
    setCompressed(true);
}

java::lang::ObjectArrayArray* org::apache::poi::ddf::EscherMetafileBlip::getAttributeMap()
{
    return new ::java::lang::ObjectArrayArray({
        (new ::java::lang::ObjectArray({
        static_cast< ::java::lang::Object* >(u"UID"_j)
        , static_cast< ::java::lang::Object* >(field_1_UID)
        , static_cast< ::java::lang::Object* >(u"UID2"_j)
        , static_cast< ::java::lang::Object* >(field_2_UID)
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
        , static_cast< ::java::lang::Object* >(u""_j)
    }))
        , (new ::java::lang::ObjectArray({
        static_cast< ::java::lang::Object* >(u"Remaining Data"_j)
        , static_cast< ::java::lang::Object* >(remainingData)
    }))
    });
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ddf::EscherMetafileBlip::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ddf.EscherMetafileBlip", 37);
    return c;
}

void org::apache::poi::ddf::EscherMetafileBlip::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        log_ = ::org::apache::poi::util::POILogFactory::getLogger(static_cast< ::java::lang::Class* >(EscherMetafileBlip::class_()));
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

void org::apache::poi::ddf::EscherMetafileBlip::setPictureData(::int8_tArray* pictureData, int32_t offset, int32_t length)
{
    super::setPictureData(pictureData, offset, length);
}

int32_t org::apache::poi::ddf::EscherMetafileBlip::fillFields(::int8_tArray* data, EscherRecordFactory* f)
{
    return super::fillFields(data, f);
}

int8_tArray* org::apache::poi::ddf::EscherMetafileBlip::serialize()
{
    return super::serialize();
}

int32_t org::apache::poi::ddf::EscherMetafileBlip::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

java::lang::Class* org::apache::poi::ddf::EscherMetafileBlip::getClass0()
{
    return class_();
}

