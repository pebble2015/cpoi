// Generated from /POI/java/org/apache/poi/hssf/usermodel/HSSFPictureData.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ddf/fwd-POI.hpp>
#include <org/apache/poi/hssf/usermodel/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/ss/usermodel/PictureData.hpp>

struct default_init_tag;

class poi::hssf::usermodel::HSSFPictureData
    : public virtual ::java::lang::Object
    , public virtual ::poi::ss::usermodel::PictureData
{

public:
    typedef ::java::lang::Object super;
    static constexpr int16_t MSOBI_WMF { int16_t(8544) };
    static constexpr int16_t MSOBI_EMF { int16_t(15680) };
    static constexpr int16_t MSOBI_PICT { int16_t(21536) };
    static constexpr int16_t MSOBI_PNG { int16_t(28160) };
    static constexpr int16_t MSOBI_JPEG { int16_t(18080) };
    static constexpr int16_t MSOBI_DIB { int16_t(31360) };
    static constexpr int16_t FORMAT_MASK { int16_t(-16) };

private:
    ::poi::ddf::EscherBlipRecord* blip {  };
protected:
    void ctor(::poi::ddf::EscherBlipRecord* blip);

public:
    ::int8_tArray* getData() override;
    virtual int32_t getFormat();
    ::java::lang::String* suggestFileExtension() override;
    ::java::lang::String* getMimeType() override;
    int32_t getPictureType() override;

    // Generated
    HSSFPictureData(::poi::ddf::EscherBlipRecord* blip);
protected:
    HSSFPictureData(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
