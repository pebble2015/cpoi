// Generated from /POI/java/org/apache/poi/ss/usermodel/IndexedColors.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/fwd-POI.hpp>
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

namespace poi
{
    namespace ss
    {
        namespace usermodel
        {
typedef ::SubArray< ::poi::ss::usermodel::IndexedColors, ::java::lang::EnumArray > IndexedColorsArray;
        } // usermodel
    } // ss
} // poi

struct default_init_tag;

class poi::ss::usermodel::IndexedColors final
    : public ::java::lang::Enum
{

public:
    typedef ::java::lang::Enum super;

public: /* package */
    static IndexedColors *BLACK1;
    static IndexedColors *WHITE1;
    static IndexedColors *RED1;
    static IndexedColors *BRIGHT_GREEN1;
    static IndexedColors *BLUE1;
    static IndexedColors *YELLOW1;
    static IndexedColors *PINK1;
    static IndexedColors *TURQUOISE1;
    static IndexedColors *BLACK;
    static IndexedColors *WHITE;
    static IndexedColors *RED;
    static IndexedColors *BRIGHT_GREEN;
    static IndexedColors *BLUE;
    static IndexedColors *YELLOW;
    static IndexedColors *PINK;
    static IndexedColors *TURQUOISE;
    static IndexedColors *DARK_RED;
    static IndexedColors *GREEN;
    static IndexedColors *DARK_BLUE;
    static IndexedColors *DARK_YELLOW;
    static IndexedColors *VIOLET;
    static IndexedColors *TEAL;
    static IndexedColors *GREY_25_PERCENT;
    static IndexedColors *GREY_50_PERCENT;
    static IndexedColors *CORNFLOWER_BLUE;
    static IndexedColors *MAROON;
    static IndexedColors *LEMON_CHIFFON;
    static IndexedColors *LIGHT_TURQUOISE1;
    static IndexedColors *ORCHID;
    static IndexedColors *CORAL;
    static IndexedColors *ROYAL_BLUE;
    static IndexedColors *LIGHT_CORNFLOWER_BLUE;
    static IndexedColors *SKY_BLUE;
    static IndexedColors *LIGHT_TURQUOISE;
    static IndexedColors *LIGHT_GREEN;
    static IndexedColors *LIGHT_YELLOW;
    static IndexedColors *PALE_BLUE;
    static IndexedColors *ROSE;
    static IndexedColors *LAVENDER;
    static IndexedColors *TAN;
    static IndexedColors *LIGHT_BLUE;
    static IndexedColors *AQUA;
    static IndexedColors *LIME;
    static IndexedColors *GOLD;
    static IndexedColors *LIGHT_ORANGE;
    static IndexedColors *ORANGE;
    static IndexedColors *BLUE_GREY;
    static IndexedColors *GREY_40_PERCENT;
    static IndexedColors *DARK_TEAL;
    static IndexedColors *SEA_GREEN;
    static IndexedColors *DARK_GREEN;
    static IndexedColors *OLIVE_GREEN;
    static IndexedColors *BROWN;
    static IndexedColors *PLUM;
    static IndexedColors *INDIGO;
    static IndexedColors *GREY_80_PERCENT;
    static IndexedColors *AUTOMATIC;

private:
    static IndexedColorsArray* _values_;

public:
    int16_t index {  };
protected:
    void ctor(::java::lang::String* name, int ordinal, int32_t idx);

public:
    int16_t getIndex();
    static IndexedColors* fromInt(int32_t index);

    // Generated

private:
    IndexedColors(::java::lang::String* name, int ordinal, int32_t idx);
protected:
    IndexedColors(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    static IndexedColorsArray*& _values();

public:
    static IndexedColors* valueOf(::java::lang::String* a0);
    static IndexedColorsArray* values();

private:
    virtual ::java::lang::Class* getClass0();
};
