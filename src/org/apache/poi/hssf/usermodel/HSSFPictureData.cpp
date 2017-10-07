// Generated from /POI/java/org/apache/poi/hssf/usermodel/HSSFPictureData.java
#include <org/apache/poi/hssf/usermodel/HSSFPictureData.hpp>

#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/System.hpp>
#include <org/apache/poi/ddf/EscherBitmapBlip.hpp>
#include <org/apache/poi/ddf/EscherBlipRecord.hpp>
#include <org/apache/poi/ddf/EscherMetafileBlip.hpp>
#include <org/apache/poi/ss/usermodel/Workbook.hpp>
#include <org/apache/poi/util/PngUtils.hpp>
#include <Array.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::hssf::usermodel::HSSFPictureData::HSSFPictureData(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::usermodel::HSSFPictureData::HSSFPictureData(::org::apache::poi::ddf::EscherBlipRecord* blip) 
    : HSSFPictureData(*static_cast< ::default_init_tag* >(0))
{
    ctor(blip);
}

constexpr int16_t org::apache::poi::hssf::usermodel::HSSFPictureData::MSOBI_WMF;

constexpr int16_t org::apache::poi::hssf::usermodel::HSSFPictureData::MSOBI_EMF;

constexpr int16_t org::apache::poi::hssf::usermodel::HSSFPictureData::MSOBI_PICT;

constexpr int16_t org::apache::poi::hssf::usermodel::HSSFPictureData::MSOBI_PNG;

constexpr int16_t org::apache::poi::hssf::usermodel::HSSFPictureData::MSOBI_JPEG;

constexpr int16_t org::apache::poi::hssf::usermodel::HSSFPictureData::MSOBI_DIB;

constexpr int16_t org::apache::poi::hssf::usermodel::HSSFPictureData::FORMAT_MASK;

void org::apache::poi::hssf::usermodel::HSSFPictureData::ctor(::org::apache::poi::ddf::EscherBlipRecord* blip)
{
    super::ctor();
    this->blip = blip;
}

int8_tArray* org::apache::poi::hssf::usermodel::HSSFPictureData::getData()
{
    auto pictureData = npc(blip)->getPicturedata();
    if(::org::apache::poi::util::PngUtils::matchesPngHeader(pictureData, 16)) {
        auto png = new ::int8_tArray(npc(pictureData)->length - int32_t(16));
        ::java::lang::System::arraycopy(pictureData, 16, png, 0, npc(png)->length);
        pictureData = png;
    }
    return pictureData;
}

int32_t org::apache::poi::hssf::usermodel::HSSFPictureData::getFormat()
{
    return npc(blip)->getRecordId() - static_cast< int16_t >(int32_t(61464));
}

java::lang::String* org::apache::poi::hssf::usermodel::HSSFPictureData::suggestFileExtension()
{
    switch (npc(blip)->getRecordId()) {
    case ::org::apache::poi::ddf::EscherMetafileBlip::RECORD_ID_WMF:
        return u"wmf"_j;
    case ::org::apache::poi::ddf::EscherMetafileBlip::RECORD_ID_EMF:
        return u"emf"_j;
    case ::org::apache::poi::ddf::EscherMetafileBlip::RECORD_ID_PICT:
        return u"pict"_j;
    case ::org::apache::poi::ddf::EscherBitmapBlip::RECORD_ID_PNG:
        return u"png"_j;
    case ::org::apache::poi::ddf::EscherBitmapBlip::RECORD_ID_JPEG:
        return u"jpeg"_j;
    case ::org::apache::poi::ddf::EscherBitmapBlip::RECORD_ID_DIB:
        return u"dib"_j;
    default:
        return u""_j;
    }

}

java::lang::String* org::apache::poi::hssf::usermodel::HSSFPictureData::getMimeType()
{
    switch (npc(blip)->getRecordId()) {
    case ::org::apache::poi::ddf::EscherMetafileBlip::RECORD_ID_WMF:
        return u"image/x-wmf"_j;
    case ::org::apache::poi::ddf::EscherMetafileBlip::RECORD_ID_EMF:
        return u"image/x-emf"_j;
    case ::org::apache::poi::ddf::EscherMetafileBlip::RECORD_ID_PICT:
        return u"image/x-pict"_j;
    case ::org::apache::poi::ddf::EscherBitmapBlip::RECORD_ID_PNG:
        return u"image/png"_j;
    case ::org::apache::poi::ddf::EscherBitmapBlip::RECORD_ID_JPEG:
        return u"image/jpeg"_j;
    case ::org::apache::poi::ddf::EscherBitmapBlip::RECORD_ID_DIB:
        return u"image/bmp"_j;
    default:
        return u"image/unknown"_j;
    }

}

int32_t org::apache::poi::hssf::usermodel::HSSFPictureData::getPictureType()
{
    switch (npc(blip)->getRecordId()) {
    case ::org::apache::poi::ddf::EscherMetafileBlip::RECORD_ID_WMF:
        return ::org::apache::poi::ss::usermodel::Workbook::PICTURE_TYPE_WMF;
    case ::org::apache::poi::ddf::EscherMetafileBlip::RECORD_ID_EMF:
        return ::org::apache::poi::ss::usermodel::Workbook::PICTURE_TYPE_EMF;
    case ::org::apache::poi::ddf::EscherMetafileBlip::RECORD_ID_PICT:
        return ::org::apache::poi::ss::usermodel::Workbook::PICTURE_TYPE_PICT;
    case ::org::apache::poi::ddf::EscherBitmapBlip::RECORD_ID_PNG:
        return ::org::apache::poi::ss::usermodel::Workbook::PICTURE_TYPE_PNG;
    case ::org::apache::poi::ddf::EscherBitmapBlip::RECORD_ID_JPEG:
        return ::org::apache::poi::ss::usermodel::Workbook::PICTURE_TYPE_JPEG;
    case ::org::apache::poi::ddf::EscherBitmapBlip::RECORD_ID_DIB:
        return ::org::apache::poi::ss::usermodel::Workbook::PICTURE_TYPE_DIB;
    default:
        return -int32_t(1);
    }

}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::usermodel::HSSFPictureData::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.usermodel.HSSFPictureData", 45);
    return c;
}

java::lang::Class* org::apache::poi::hssf::usermodel::HSSFPictureData::getClass0()
{
    return class_();
}

