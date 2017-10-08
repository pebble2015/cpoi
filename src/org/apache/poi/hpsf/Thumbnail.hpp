// Generated from /POI/java/org/apache/poi/hpsf/Thumbnail.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/hpsf/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class poi::hpsf::Thumbnail final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;
    static constexpr int32_t OFFSET_CFTAG { int32_t(4) };
    static constexpr int32_t OFFSET_CF { int32_t(8) };
    static constexpr int32_t OFFSET_WMFDATA { int32_t(20) };
    static constexpr int32_t CFTAG_WINDOWS { int32_t(-1) };
    static constexpr int32_t CFTAG_MACINTOSH { int32_t(-2) };
    static constexpr int32_t CFTAG_FMTID { int32_t(-3) };
    static constexpr int32_t CFTAG_NODATA { int32_t(0) };
    static constexpr int32_t CF_METAFILEPICT { int32_t(3) };
    static constexpr int32_t CF_DIB { int32_t(8) };
    static constexpr int32_t CF_ENHMETAFILE { int32_t(14) };
    static constexpr int32_t CF_BITMAP { int32_t(2) };

private:
    ::int8_tArray* _thumbnailData {  };
protected:
    void ctor();
    void ctor(::int8_tArray* thumbnailData);

public:
    ::int8_tArray* getThumbnail();
    void setThumbnail(::int8_tArray* thumbnail);
    int64_t getClipboardFormatTag();
    int64_t getClipboardFormat() /* throws(HPSFException) */;
    ::int8_tArray* getThumbnailAsWMF() /* throws(HPSFException) */;

    // Generated
    Thumbnail();
    Thumbnail(::int8_tArray* thumbnailData);
protected:
    Thumbnail(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    void init();
    virtual ::java::lang::Class* getClass0();
};
