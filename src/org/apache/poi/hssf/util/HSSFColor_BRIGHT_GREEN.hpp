// Generated from /POI/java/org/apache/poi/hssf/util/HSSFColor.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/util/HSSFColor_HSSFColorRef.hpp>

struct default_init_tag;

class poi::hssf::util::HSSFColor_BRIGHT_GREEN
    : public HSSFColor_HSSFColorRef
{

public:
    typedef HSSFColor_HSSFColorRef super;

private:
    static HSSFColor_HSSFColorPredefined* ref_;
    static int16_t index_;
    static int32_t index2_;
    static ::int16_tArray* triplet_;
    static ::java::lang::String* hexString_;
protected:
    void ctor();

    // Generated

public:
    HSSFColor_BRIGHT_GREEN();
protected:
    HSSFColor_BRIGHT_GREEN(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    static HSSFColor_HSSFColorPredefined*& ref();

public:
    static int16_t& index();
    static int32_t& index2();
    static ::int16_tArray*& triplet();
    static ::java::lang::String*& hexString();

private:
    virtual ::java::lang::Class* getClass0();
    friend class HSSFColor;
    friend class HSSFColor_HSSFColorPredefined;
    friend class HSSFColor_HSSFColorRef;
    friend class HSSFColor_BLACK;
    friend class HSSFColor_BROWN;
    friend class HSSFColor_OLIVE_GREEN;
    friend class HSSFColor_DARK_GREEN;
    friend class HSSFColor_DARK_TEAL;
    friend class HSSFColor_DARK_BLUE;
    friend class HSSFColor_INDIGO;
    friend class HSSFColor_GREY_80_PERCENT;
    friend class HSSFColor_DARK_RED;
    friend class HSSFColor_ORANGE;
    friend class HSSFColor_DARK_YELLOW;
    friend class HSSFColor_GREEN;
    friend class HSSFColor_TEAL;
    friend class HSSFColor_BLUE;
    friend class HSSFColor_BLUE_GREY;
    friend class HSSFColor_GREY_50_PERCENT;
    friend class HSSFColor_RED;
    friend class HSSFColor_LIGHT_ORANGE;
    friend class HSSFColor_LIME;
    friend class HSSFColor_SEA_GREEN;
    friend class HSSFColor_AQUA;
    friend class HSSFColor_LIGHT_BLUE;
    friend class HSSFColor_VIOLET;
    friend class HSSFColor_GREY_40_PERCENT;
    friend class HSSFColor_PINK;
    friend class HSSFColor_GOLD;
    friend class HSSFColor_YELLOW;
    friend class HSSFColor_TURQUOISE;
    friend class HSSFColor_SKY_BLUE;
    friend class HSSFColor_PLUM;
    friend class HSSFColor_GREY_25_PERCENT;
    friend class HSSFColor_ROSE;
    friend class HSSFColor_TAN;
    friend class HSSFColor_LIGHT_YELLOW;
    friend class HSSFColor_LIGHT_GREEN;
    friend class HSSFColor_LIGHT_TURQUOISE;
    friend class HSSFColor_PALE_BLUE;
    friend class HSSFColor_LAVENDER;
    friend class HSSFColor_WHITE;
    friend class HSSFColor_CORNFLOWER_BLUE;
    friend class HSSFColor_LEMON_CHIFFON;
    friend class HSSFColor_MAROON;
    friend class HSSFColor_ORCHID;
    friend class HSSFColor_CORAL;
    friend class HSSFColor_ROYAL_BLUE;
    friend class HSSFColor_LIGHT_CORNFLOWER_BLUE;
    friend class HSSFColor_AUTOMATIC;
};
