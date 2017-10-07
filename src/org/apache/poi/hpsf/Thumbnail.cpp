// Generated from /POI/java/org/apache/poi/hpsf/Thumbnail.java
#include <org/apache/poi/hpsf/Thumbnail.hpp>

#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/lang/System.hpp>
#include <org/apache/poi/hpsf/HPSFException.hpp>
#include <org/apache/poi/util/LittleEndian.hpp>
#include <Array.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::hpsf::Thumbnail::Thumbnail(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hpsf::Thumbnail::Thumbnail() 
    : Thumbnail(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::hpsf::Thumbnail::Thumbnail(::int8_tArray* thumbnailData) 
    : Thumbnail(*static_cast< ::default_init_tag* >(0))
{
    ctor(thumbnailData);
}

void org::apache::poi::hpsf::Thumbnail::init()
{
    _thumbnailData = nullptr;
}

constexpr int32_t org::apache::poi::hpsf::Thumbnail::OFFSET_CFTAG;

constexpr int32_t org::apache::poi::hpsf::Thumbnail::OFFSET_CF;

constexpr int32_t org::apache::poi::hpsf::Thumbnail::OFFSET_WMFDATA;

constexpr int32_t org::apache::poi::hpsf::Thumbnail::CFTAG_WINDOWS;

constexpr int32_t org::apache::poi::hpsf::Thumbnail::CFTAG_MACINTOSH;

constexpr int32_t org::apache::poi::hpsf::Thumbnail::CFTAG_FMTID;

constexpr int32_t org::apache::poi::hpsf::Thumbnail::CFTAG_NODATA;

constexpr int32_t org::apache::poi::hpsf::Thumbnail::CF_METAFILEPICT;

constexpr int32_t org::apache::poi::hpsf::Thumbnail::CF_DIB;

constexpr int32_t org::apache::poi::hpsf::Thumbnail::CF_ENHMETAFILE;

constexpr int32_t org::apache::poi::hpsf::Thumbnail::CF_BITMAP;

void org::apache::poi::hpsf::Thumbnail::ctor()
{
    super::ctor();
    init();
}

void org::apache::poi::hpsf::Thumbnail::ctor(::int8_tArray* thumbnailData)
{
    super::ctor();
    init();
    this->_thumbnailData = thumbnailData;
}

int8_tArray* org::apache::poi::hpsf::Thumbnail::getThumbnail()
{
    return _thumbnailData;
}

void org::apache::poi::hpsf::Thumbnail::setThumbnail(::int8_tArray* thumbnail)
{
    this->_thumbnailData = thumbnail;
}

int64_t org::apache::poi::hpsf::Thumbnail::getClipboardFormatTag()
{
    int64_t clipboardFormatTag = ::org::apache::poi::util::LittleEndian::getInt(getThumbnail(), OFFSET_CFTAG);
    return clipboardFormatTag;
}

int64_t org::apache::poi::hpsf::Thumbnail::getClipboardFormat() /* throws(HPSFException) */
{
    if(!(getClipboardFormatTag() == CFTAG_WINDOWS))
        throw new HPSFException(::java::lang::StringBuilder().append(u"Clipboard Format Tag of Thumbnail must "_j)->append(u"be CFTAG_WINDOWS."_j)->toString());

    return ::org::apache::poi::util::LittleEndian::getInt(getThumbnail(), OFFSET_CF);
}

int8_tArray* org::apache::poi::hpsf::Thumbnail::getThumbnailAsWMF() /* throws(HPSFException) */
{
    if(!(getClipboardFormatTag() == CFTAG_WINDOWS))
        throw new HPSFException(::java::lang::StringBuilder().append(u"Clipboard Format Tag of Thumbnail must "_j)->append(u"be CFTAG_WINDOWS."_j)->toString());

    if(!(getClipboardFormat() == CF_METAFILEPICT)) {
        throw new HPSFException(::java::lang::StringBuilder().append(u"Clipboard Format of Thumbnail must "_j)->append(u"be CF_METAFILEPICT."_j)->toString());
    }
    auto thumbnail = getThumbnail();
    auto wmfImageLength = npc(thumbnail)->length - OFFSET_WMFDATA;
    auto wmfImage = new ::int8_tArray(wmfImageLength);
    ::java::lang::System::arraycopy(thumbnail, OFFSET_WMFDATA, wmfImage, 0, wmfImageLength);
    return wmfImage;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hpsf::Thumbnail::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hpsf.Thumbnail", 29);
    return c;
}

java::lang::Class* org::apache::poi::hpsf::Thumbnail::getClass0()
{
    return class_();
}

