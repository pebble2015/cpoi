// Generated from /POI/java/org/apache/poi/sl/usermodel/ShapeType.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/sl/usermodel/fwd-POI.hpp>
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
    namespace sl
    {
        namespace usermodel
        {
typedef ::SubArray< ::poi::sl::usermodel::ShapeType, ::java::lang::EnumArray > ShapeTypeArray;
        } // usermodel
    } // sl
} // poi

struct default_init_tag;

class poi::sl::usermodel::ShapeType final
    : public ::java::lang::Enum
{

public:
    typedef ::java::lang::Enum super;

public: /* package */
    static ShapeType *NOT_PRIMITIVE;
    static ShapeType *LINE;
    static ShapeType *LINE_INV;
    static ShapeType *TRIANGLE;
    static ShapeType *RT_TRIANGLE;
    static ShapeType *RECT;
    static ShapeType *DIAMOND;
    static ShapeType *PARALLELOGRAM;
    static ShapeType *TRAPEZOID;
    static ShapeType *NON_ISOSCELES_TRAPEZOID;
    static ShapeType *PENTAGON;
    static ShapeType *HEXAGON;
    static ShapeType *HEPTAGON;
    static ShapeType *OCTAGON;
    static ShapeType *DECAGON;
    static ShapeType *DODECAGON;
    static ShapeType *STAR_4;
    static ShapeType *STAR_5;
    static ShapeType *STAR_6;
    static ShapeType *STAR_7;
    static ShapeType *STAR_8;
    static ShapeType *STAR_10;
    static ShapeType *STAR_12;
    static ShapeType *STAR_16;
    static ShapeType *SEAL;
    static ShapeType *STAR_24;
    static ShapeType *STAR_32;
    static ShapeType *ROUND_RECT;
    static ShapeType *ROUND_1_RECT;
    static ShapeType *ROUND_2_SAME_RECT;
    static ShapeType *ROUND_2_DIAG_RECT;
    static ShapeType *SNIP_ROUND_RECT;
    static ShapeType *SNIP_1_RECT;
    static ShapeType *SNIP_2_SAME_RECT;
    static ShapeType *SNIP_2_DIAG_RECT;
    static ShapeType *PLAQUE;
    static ShapeType *ELLIPSE;
    static ShapeType *TEARDROP;
    static ShapeType *HOME_PLATE;
    static ShapeType *CHEVRON;
    static ShapeType *PIE_WEDGE;
    static ShapeType *PIE;
    static ShapeType *BLOCK_ARC;
    static ShapeType *DONUT;
    static ShapeType *NO_SMOKING;
    static ShapeType *RIGHT_ARROW;
    static ShapeType *LEFT_ARROW;
    static ShapeType *UP_ARROW;
    static ShapeType *DOWN_ARROW;
    static ShapeType *STRIPED_RIGHT_ARROW;
    static ShapeType *NOTCHED_RIGHT_ARROW;
    static ShapeType *BENT_UP_ARROW;
    static ShapeType *LEFT_RIGHT_ARROW;
    static ShapeType *UP_DOWN_ARROW;
    static ShapeType *LEFT_UP_ARROW;
    static ShapeType *LEFT_RIGHT_UP_ARROW;
    static ShapeType *QUAD_ARROW;
    static ShapeType *LEFT_ARROW_CALLOUT;
    static ShapeType *RIGHT_ARROW_CALLOUT;
    static ShapeType *UP_ARROW_CALLOUT;
    static ShapeType *DOWN_ARROW_CALLOUT;
    static ShapeType *LEFT_RIGHT_ARROW_CALLOUT;
    static ShapeType *UP_DOWN_ARROW_CALLOUT;
    static ShapeType *QUAD_ARROW_CALLOUT;
    static ShapeType *BENT_ARROW;
    static ShapeType *UTURN_ARROW;
    static ShapeType *CIRCULAR_ARROW;
    static ShapeType *LEFT_CIRCULAR_ARROW;
    static ShapeType *LEFT_RIGHT_CIRCULAR_ARROW;
    static ShapeType *CURVED_RIGHT_ARROW;
    static ShapeType *CURVED_LEFT_ARROW;
    static ShapeType *CURVED_UP_ARROW;
    static ShapeType *CURVED_DOWN_ARROW;
    static ShapeType *SWOOSH_ARROW;
    static ShapeType *CUBE;
    static ShapeType *CAN;
    static ShapeType *LIGHTNING_BOLT;
    static ShapeType *HEART;
    static ShapeType *SUN;
    static ShapeType *MOON;
    static ShapeType *SMILEY_FACE;
    static ShapeType *IRREGULAR_SEAL_1;
    static ShapeType *IRREGULAR_SEAL_2;
    static ShapeType *FOLDED_CORNER;
    static ShapeType *BEVEL;
    static ShapeType *FRAME;
    static ShapeType *HALF_FRAME;
    static ShapeType *CORNER;
    static ShapeType *DIAG_STRIPE;
    static ShapeType *CHORD;
    static ShapeType *ARC;
    static ShapeType *LEFT_BRACKET;
    static ShapeType *RIGHT_BRACKET;
    static ShapeType *LEFT_BRACE;
    static ShapeType *RIGHT_BRACE;
    static ShapeType *BRACKET_PAIR;
    static ShapeType *BRACE_PAIR;
    static ShapeType *STRAIGHT_CONNECTOR_1;
    static ShapeType *BENT_CONNECTOR_2;
    static ShapeType *BENT_CONNECTOR_3;
    static ShapeType *BENT_CONNECTOR_4;
    static ShapeType *BENT_CONNECTOR_5;
    static ShapeType *CURVED_CONNECTOR_2;
    static ShapeType *CURVED_CONNECTOR_3;
    static ShapeType *CURVED_CONNECTOR_4;
    static ShapeType *CURVED_CONNECTOR_5;
    static ShapeType *CALLOUT_1;
    static ShapeType *CALLOUT_2;
    static ShapeType *CALLOUT_3;
    static ShapeType *ACCENT_CALLOUT_1;
    static ShapeType *ACCENT_CALLOUT_2;
    static ShapeType *ACCENT_CALLOUT_3;
    static ShapeType *BORDER_CALLOUT_1;
    static ShapeType *BORDER_CALLOUT_2;
    static ShapeType *BORDER_CALLOUT_3;
    static ShapeType *ACCENT_BORDER_CALLOUT_1;
    static ShapeType *ACCENT_BORDER_CALLOUT_2;
    static ShapeType *ACCENT_BORDER_CALLOUT_3;
    static ShapeType *WEDGE_RECT_CALLOUT;
    static ShapeType *WEDGE_ROUND_RECT_CALLOUT;
    static ShapeType *WEDGE_ELLIPSE_CALLOUT;
    static ShapeType *CLOUD_CALLOUT;
    static ShapeType *CLOUD;
    static ShapeType *RIBBON;
    static ShapeType *RIBBON_2;
    static ShapeType *ELLIPSE_RIBBON;
    static ShapeType *ELLIPSE_RIBBON_2;
    static ShapeType *LEFT_RIGHT_RIBBON;
    static ShapeType *VERTICAL_SCROLL;
    static ShapeType *HORIZONTAL_SCROLL;
    static ShapeType *WAVE;
    static ShapeType *DOUBLE_WAVE;
    static ShapeType *PLUS;
    static ShapeType *FLOW_CHART_PROCESS;
    static ShapeType *FLOW_CHART_DECISION;
    static ShapeType *FLOW_CHART_INPUT_OUTPUT;
    static ShapeType *FLOW_CHART_PREDEFINED_PROCESS;
    static ShapeType *FLOW_CHART_INTERNAL_STORAGE;
    static ShapeType *FLOW_CHART_DOCUMENT;
    static ShapeType *FLOW_CHART_MULTIDOCUMENT;
    static ShapeType *FLOW_CHART_TERMINATOR;
    static ShapeType *FLOW_CHART_PREPARATION;
    static ShapeType *FLOW_CHART_MANUAL_INPUT;
    static ShapeType *FLOW_CHART_MANUAL_OPERATION;
    static ShapeType *FLOW_CHART_CONNECTOR;
    static ShapeType *FLOW_CHART_PUNCHED_CARD;
    static ShapeType *FLOW_CHART_PUNCHED_TAPE;
    static ShapeType *FLOW_CHART_SUMMING_JUNCTION;
    static ShapeType *FLOW_CHART_OR;
    static ShapeType *FLOW_CHART_COLLATE;
    static ShapeType *FLOW_CHART_SORT;
    static ShapeType *FLOW_CHART_EXTRACT;
    static ShapeType *FLOW_CHART_MERGE;
    static ShapeType *FLOW_CHART_OFFLINE_STORAGE;
    static ShapeType *FLOW_CHART_ONLINE_STORAGE;
    static ShapeType *FLOW_CHART_MAGNETIC_TAPE;
    static ShapeType *FLOW_CHART_MAGNETIC_DISK;
    static ShapeType *FLOW_CHART_MAGNETIC_DRUM;
    static ShapeType *FLOW_CHART_DISPLAY;
    static ShapeType *FLOW_CHART_DELAY;
    static ShapeType *FLOW_CHART_ALTERNATE_PROCESS;
    static ShapeType *FLOW_CHART_OFFPAGE_CONNECTOR;
    static ShapeType *ACTION_BUTTON_BLANK;
    static ShapeType *ACTION_BUTTON_HOME;
    static ShapeType *ACTION_BUTTON_HELP;
    static ShapeType *ACTION_BUTTON_INFORMATION;
    static ShapeType *ACTION_BUTTON_FORWARD_NEXT;
    static ShapeType *ACTION_BUTTON_BACK_PREVIOUS;
    static ShapeType *ACTION_BUTTON_END;
    static ShapeType *ACTION_BUTTON_BEGINNING;
    static ShapeType *ACTION_BUTTON_RETURN;
    static ShapeType *ACTION_BUTTON_DOCUMENT;
    static ShapeType *ACTION_BUTTON_SOUND;
    static ShapeType *ACTION_BUTTON_MOVIE;
    static ShapeType *GEAR_6;
    static ShapeType *GEAR_9;
    static ShapeType *FUNNEL;
    static ShapeType *MATH_PLUS;
    static ShapeType *MATH_MINUS;
    static ShapeType *MATH_MULTIPLY;
    static ShapeType *MATH_DIVIDE;
    static ShapeType *MATH_EQUAL;
    static ShapeType *MATH_NOT_EQUAL;
    static ShapeType *CORNER_TABS;
    static ShapeType *SQUARE_TABS;
    static ShapeType *PLAQUE_TABS;
    static ShapeType *CHART_X;
    static ShapeType *CHART_STAR;
    static ShapeType *CHART_PLUS;
    static ShapeType *NOTCHED_CIRCULAR_ARROW;
    static ShapeType *THICK_ARROW;
    static ShapeType *BALLOON;
    static ShapeType *TEXT_SIMPLE;
    static ShapeType *TEXT_OCTAGON;
    static ShapeType *TEXT_HEXAGON;
    static ShapeType *TEXT_CURVE;
    static ShapeType *TEXT_WAVE;
    static ShapeType *TEXT_RING;
    static ShapeType *TEXT_ON_CURVE;
    static ShapeType *TEXT_ON_RING;
    static ShapeType *TEXT_PLAIN_TEXT;
    static ShapeType *TEXT_STOP;
    static ShapeType *TEXT_TRIANGLE;
    static ShapeType *TEXT_TRIANGLE_INVERTED;
    static ShapeType *TEXT_CHEVRON;
    static ShapeType *TEXT_CHEVRON_INVERTED;
    static ShapeType *TEXT_RING_INSIDE;
    static ShapeType *TEXT_RING_OUTSIDE;
    static ShapeType *TEXT_ARCH_UP_CURVE;
    static ShapeType *TEXT_ARCH_DOWN_CURVE;
    static ShapeType *TEXT_CIRCLE_CURVE;
    static ShapeType *TEXT_BUTTON_CURVE;
    static ShapeType *TEXT_ARCH_UP_POUR;
    static ShapeType *TEXT_ARCH_DOWN_POUR;
    static ShapeType *TEXT_CIRCLE_POUR;
    static ShapeType *TEXT_BUTTON_POUR;
    static ShapeType *TEXT_CURVE_UP;
    static ShapeType *TEXT_CURVE_DOWN;
    static ShapeType *TEXT_CASCADE_UP;
    static ShapeType *TEXT_CASCADE_DOWN;
    static ShapeType *TEXT_WAVE_1;
    static ShapeType *TEXT_WAVE_2;
    static ShapeType *TEXT_WAVE_3;
    static ShapeType *TEXT_WAVE_4;
    static ShapeType *TEXT_INFLATE;
    static ShapeType *TEXT_DEFLATE;
    static ShapeType *TEXT_INFLATE_BOTTOM;
    static ShapeType *TEXT_DEFLATE_BOTTOM;
    static ShapeType *TEXT_INFLATE_TOP;
    static ShapeType *TEXT_DEFLATE_TOP;
    static ShapeType *TEXT_DEFLATE_INFLATE;
    static ShapeType *TEXT_DEFLATE_INFLATE_DEFLATE;
    static ShapeType *TEXT_FADE_RIGHT;
    static ShapeType *TEXT_FADE_LEFT;
    static ShapeType *TEXT_FADE_UP;
    static ShapeType *TEXT_FADE_DOWN;
    static ShapeType *TEXT_SLANT_UP;
    static ShapeType *TEXT_SLANT_DOWN;
    static ShapeType *TEXT_CAN_UP;
    static ShapeType *TEXT_CAN_DOWN;
    static ShapeType *CALLOUT_90;
    static ShapeType *ACCENT_CALLOUT_90;
    static ShapeType *BORDER_CALLOUT_90;
    static ShapeType *ACCENT_BORDER_CALLOUT_90;
    static ShapeType *HOST_CONTROL;
    static ShapeType *TEXT_BOX;

public:
    int32_t ooxmlId {  };
    int32_t nativeId {  };
    ::java::lang::String* nativeName {  };
protected:
    void ctor(::java::lang::String* name, int ordinal, int32_t ooxmlId, int32_t nativeId, ::java::lang::String* nativeName);

public:
    ::java::lang::String* getOoxmlName();
    static ShapeType* forId(int32_t id, bool isOoxmlId);

    // Generated

private:
    ShapeType(::java::lang::String* name, int ordinal, int32_t ooxmlId, int32_t nativeId, ::java::lang::String* nativeName);
protected:
    ShapeType(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static ShapeType* valueOf(::java::lang::String* a0);
    static ShapeTypeArray* values();

private:
    virtual ::java::lang::Class* getClass0();
};
