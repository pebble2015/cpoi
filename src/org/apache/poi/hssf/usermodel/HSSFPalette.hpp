// Generated from /POI/java/org/apache/poi/hssf/usermodel/HSSFPalette.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/hssf/usermodel/fwd-POI.hpp>
#include <org/apache/poi/hssf/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class org::apache::poi::hssf::usermodel::HSSFPalette final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    ::org::apache::poi::hssf::record::PaletteRecord* _palette {  };
protected:
    void ctor(::org::apache::poi::hssf::record::PaletteRecord* palette);

public:
    ::org::apache::poi::hssf::util::HSSFColor* getColor(int16_t index);
    ::org::apache::poi::hssf::util::HSSFColor* getColor(int32_t index);
    ::org::apache::poi::hssf::util::HSSFColor* findColor(int8_t red, int8_t green, int8_t blue);
    ::org::apache::poi::hssf::util::HSSFColor* findSimilarColor(int8_t red, int8_t green, int8_t blue);
    ::org::apache::poi::hssf::util::HSSFColor* findSimilarColor(int32_t red, int32_t green, int32_t blue);

private:
    int32_t unsignedInt(int8_t b);

public:
    void setColorAtIndex(int16_t index, int8_t red, int8_t green, int8_t blue);
    ::org::apache::poi::hssf::util::HSSFColor* addColor(int8_t red, int8_t green, int8_t blue);

    // Generated

public: /* protected */
    HSSFPalette(::org::apache::poi::hssf::record::PaletteRecord* palette);
protected:
    HSSFPalette(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class HSSFPalette_CustomColor;
};
