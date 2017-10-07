// Generated from /POI/java/org/apache/poi/hssf/util/HSSFColor.java

#pragma once

#include <fwd-POI.hpp>
#include <java/awt/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/util/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/ss/usermodel/Color.hpp>

struct default_init_tag;

class org::apache::poi::hssf::util::HSSFColor
    : public virtual ::java::lang::Object
    , public virtual ::org::apache::poi::ss::usermodel::Color
{

public:
    typedef ::java::lang::Object super;

private:
    static ::java::util::Map* indexHash_;
    static ::java::util::Map* enumList_;
    ::java::awt::Color* color {  };
    int32_t index {  };
    int32_t index2 {  };
protected:
    void ctor();
    void ctor(int32_t index, int32_t index2, ::java::awt::Color* color);

public:
    static ::java::util::Map* getIndexHash();
    static ::java::util::Map* getMutableIndexHash();

private:
    static ::java::util::Map* createColorsByIndexMap();

public:
    static ::java::util::Map* getTripletHash();

private:
    static ::java::util::Map* createColorsByHexStringMap();
    static ::java::util::Map* mapEnumToColorClass();

public:
    virtual int16_t getIndex();
    virtual int16_t getIndex2();
    virtual ::int16_tArray* getTriplet();
    virtual ::java::lang::String* getHexString();
    static HSSFColor* toHSSFColor(::org::apache::poi::ss::usermodel::Color* color);

    // Generated
    HSSFColor();
    HSSFColor(int32_t index, int32_t index2, ::java::awt::Color* color);
protected:
    HSSFColor(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    static ::java::util::Map*& indexHash();
    static ::java::util::Map*& enumList();
    virtual ::java::lang::Class* getClass0();
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
    friend class HSSFColor_BRIGHT_GREEN;
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
