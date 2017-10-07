// Generated from /POI/java/org/apache/poi/hssf/util/HSSFColor.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/util/fwd-POI.hpp>
#include <java/lang/Enum.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace io
    {
typedef ::SubArray< ::java::io::Serializable, ::java::lang::ObjectArray > SerializableArray;
    } // io

    namespace lang
    {
typedef ::SubArray< ::java::lang::Comparable, ObjectArray > ComparableArray;
typedef ::SubArray< ::java::lang::Enum, ObjectArray, ComparableArray, ::java::io::SerializableArray > EnumArray;
    } // lang
} // java

namespace org
{
    namespace apache
    {
        namespace poi
        {
            namespace hssf
            {
                namespace util
                {
typedef ::SubArray< ::org::apache::poi::hssf::util::HSSFColor_HSSFColorPredefined, ::java::lang::EnumArray > HSSFColor_HSSFColorPredefinedArray;
                } // util
            } // hssf
        } // poi
    } // apache
} // org

struct default_init_tag;

class org::apache::poi::hssf::util::HSSFColor_HSSFColorPredefined final
    : public ::java::lang::Enum
{

public:
    typedef ::java::lang::Enum super;

public: /* package */
    static HSSFColor_HSSFColorPredefined *BLACK;
    static HSSFColor_HSSFColorPredefined *BROWN;
    static HSSFColor_HSSFColorPredefined *OLIVE_GREEN;
    static HSSFColor_HSSFColorPredefined *DARK_GREEN;
    static HSSFColor_HSSFColorPredefined *DARK_TEAL;
    static HSSFColor_HSSFColorPredefined *DARK_BLUE;
    static HSSFColor_HSSFColorPredefined *INDIGO;
    static HSSFColor_HSSFColorPredefined *GREY_80_PERCENT;
    static HSSFColor_HSSFColorPredefined *ORANGE;
    static HSSFColor_HSSFColorPredefined *DARK_YELLOW;
    static HSSFColor_HSSFColorPredefined *GREEN;
    static HSSFColor_HSSFColorPredefined *TEAL;
    static HSSFColor_HSSFColorPredefined *BLUE;
    static HSSFColor_HSSFColorPredefined *BLUE_GREY;
    static HSSFColor_HSSFColorPredefined *GREY_50_PERCENT;
    static HSSFColor_HSSFColorPredefined *RED;
    static HSSFColor_HSSFColorPredefined *LIGHT_ORANGE;
    static HSSFColor_HSSFColorPredefined *LIME;
    static HSSFColor_HSSFColorPredefined *SEA_GREEN;
    static HSSFColor_HSSFColorPredefined *AQUA;
    static HSSFColor_HSSFColorPredefined *LIGHT_BLUE;
    static HSSFColor_HSSFColorPredefined *VIOLET;
    static HSSFColor_HSSFColorPredefined *GREY_40_PERCENT;
    static HSSFColor_HSSFColorPredefined *PINK;
    static HSSFColor_HSSFColorPredefined *GOLD;
    static HSSFColor_HSSFColorPredefined *YELLOW;
    static HSSFColor_HSSFColorPredefined *BRIGHT_GREEN;
    static HSSFColor_HSSFColorPredefined *TURQUOISE;
    static HSSFColor_HSSFColorPredefined *DARK_RED;
    static HSSFColor_HSSFColorPredefined *SKY_BLUE;
    static HSSFColor_HSSFColorPredefined *PLUM;
    static HSSFColor_HSSFColorPredefined *GREY_25_PERCENT;
    static HSSFColor_HSSFColorPredefined *ROSE;
    static HSSFColor_HSSFColorPredefined *LIGHT_YELLOW;
    static HSSFColor_HSSFColorPredefined *LIGHT_GREEN;
    static HSSFColor_HSSFColorPredefined *LIGHT_TURQUOISE;
    static HSSFColor_HSSFColorPredefined *PALE_BLUE;
    static HSSFColor_HSSFColorPredefined *LAVENDER;
    static HSSFColor_HSSFColorPredefined *WHITE;
    static HSSFColor_HSSFColorPredefined *CORNFLOWER_BLUE;
    static HSSFColor_HSSFColorPredefined *LEMON_CHIFFON;
    static HSSFColor_HSSFColorPredefined *MAROON;
    static HSSFColor_HSSFColorPredefined *ORCHID;
    static HSSFColor_HSSFColorPredefined *CORAL;
    static HSSFColor_HSSFColorPredefined *ROYAL_BLUE;
    static HSSFColor_HSSFColorPredefined *LIGHT_CORNFLOWER_BLUE;
    static HSSFColor_HSSFColorPredefined *TAN;
    static HSSFColor_HSSFColorPredefined *AUTOMATIC;

private:
    HSSFColor* color {  };
protected:
    void ctor(::java::lang::String* name, int ordinal, int32_t index, int32_t index2, int32_t rgb);

public:
    int16_t getIndex();
    int16_t getIndex2();
    ::int16_tArray* getTriplet();
    ::java::lang::String* getHexString();
    HSSFColor* getColor();

    // Generated

private:
    HSSFColor_HSSFColorPredefined(::java::lang::String* name, int ordinal, int32_t index, int32_t index2, int32_t rgb);
protected:
    HSSFColor_HSSFColorPredefined(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static HSSFColor_HSSFColorPredefined* valueOf(::java::lang::String* a0);
    static HSSFColor_HSSFColorPredefinedArray* values();

private:
    virtual ::java::lang::Class* getClass0();
    friend class HSSFColor;
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
