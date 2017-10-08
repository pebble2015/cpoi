// Generated from /POI/java/org/apache/poi/hssf/usermodel/HSSFPalette.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/usermodel/fwd-POI.hpp>
#include <org/apache/poi/hssf/util/HSSFColor.hpp>

struct default_init_tag;

class poi::hssf::usermodel::HSSFPalette_CustomColor final
    : public ::poi::hssf::util::HSSFColor
{

public:
    typedef ::poi::hssf::util::HSSFColor super;

private:
    int16_t _byteOffset {  };
    int8_t _red {  };
    int8_t _green {  };
    int8_t _blue {  };
protected:
    void ctor(int16_t byteOffset, ::int8_tArray* colors);
    void ctor(int16_t byteOffset, int8_t red, int8_t green, int8_t blue);

public:
    int16_t getIndex() override;
    ::int16_tArray* getTriplet() override;
    ::java::lang::String* getHexString() override;

private:
    ::java::lang::String* getGnumericPart(int8_t color);

    // Generated

public:
    HSSFPalette_CustomColor(int16_t byteOffset, ::int8_tArray* colors);

private:
    HSSFPalette_CustomColor(int16_t byteOffset, int8_t red, int8_t green, int8_t blue);
protected:
    HSSFPalette_CustomColor(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class HSSFPalette;
};
