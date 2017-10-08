// Generated from /POI/java/org/apache/poi/sl/draw/binding/STShapeType.java

#pragma once

#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/sl/draw/binding/fwd-POI.hpp>
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
        namespace draw
        {
            namespace binding
            {
typedef ::SubArray< ::poi::sl::draw::binding::STShapeType, ::java::lang::EnumArray > STShapeTypeArray;
            } // binding
        } // draw
    } // sl
} // poi

struct default_init_tag;

class poi::sl::draw::binding::STShapeType final
    : public ::java::lang::Enum
{

public:
    typedef ::java::lang::Enum super;

public: /* package */
    static STShapeType *LINE;
    static STShapeType *LINE_INV;
    static STShapeType *TRIANGLE;
    static STShapeType *RT_TRIANGLE;
    static STShapeType *RECT;
    static STShapeType *DIAMOND;
    static STShapeType *PARALLELOGRAM;
    static STShapeType *TRAPEZOID;
    static STShapeType *NON_ISOSCELES_TRAPEZOID;
    static STShapeType *PENTAGON;
    static STShapeType *HEXAGON;
    static STShapeType *HEPTAGON;
    static STShapeType *OCTAGON;
    static STShapeType *DECAGON;
    static STShapeType *DODECAGON;
    static STShapeType *STAR_4;
    static STShapeType *STAR_5;
    static STShapeType *STAR_6;
    static STShapeType *STAR_7;
    static STShapeType *STAR_8;
    static STShapeType *STAR_10;
    static STShapeType *STAR_12;
    static STShapeType *STAR_16;
    static STShapeType *STAR_24;
    static STShapeType *STAR_32;
    static STShapeType *ROUND_RECT;
    static STShapeType *ROUND_1_RECT;
    static STShapeType *ROUND_2_SAME_RECT;
    static STShapeType *ROUND_2_DIAG_RECT;
    static STShapeType *SNIP_ROUND_RECT;
    static STShapeType *SNIP_1_RECT;
    static STShapeType *SNIP_2_SAME_RECT;
    static STShapeType *SNIP_2_DIAG_RECT;
    static STShapeType *PLAQUE;
    static STShapeType *ELLIPSE;
    static STShapeType *TEARDROP;
    static STShapeType *HOME_PLATE;
    static STShapeType *CHEVRON;
    static STShapeType *PIE_WEDGE;
    static STShapeType *PIE;
    static STShapeType *BLOCK_ARC;
    static STShapeType *DONUT;
    static STShapeType *NO_SMOKING;
    static STShapeType *RIGHT_ARROW;
    static STShapeType *LEFT_ARROW;
    static STShapeType *UP_ARROW;
    static STShapeType *DOWN_ARROW;
    static STShapeType *STRIPED_RIGHT_ARROW;
    static STShapeType *NOTCHED_RIGHT_ARROW;
    static STShapeType *BENT_UP_ARROW;
    static STShapeType *LEFT_RIGHT_ARROW;
    static STShapeType *UP_DOWN_ARROW;
    static STShapeType *LEFT_UP_ARROW;
    static STShapeType *LEFT_RIGHT_UP_ARROW;
    static STShapeType *QUAD_ARROW;
    static STShapeType *LEFT_ARROW_CALLOUT;
    static STShapeType *RIGHT_ARROW_CALLOUT;
    static STShapeType *UP_ARROW_CALLOUT;
    static STShapeType *DOWN_ARROW_CALLOUT;
    static STShapeType *LEFT_RIGHT_ARROW_CALLOUT;
    static STShapeType *UP_DOWN_ARROW_CALLOUT;
    static STShapeType *QUAD_ARROW_CALLOUT;
    static STShapeType *BENT_ARROW;
    static STShapeType *UTURN_ARROW;
    static STShapeType *CIRCULAR_ARROW;
    static STShapeType *LEFT_CIRCULAR_ARROW;
    static STShapeType *LEFT_RIGHT_CIRCULAR_ARROW;
    static STShapeType *CURVED_RIGHT_ARROW;
    static STShapeType *CURVED_LEFT_ARROW;
    static STShapeType *CURVED_UP_ARROW;
    static STShapeType *CURVED_DOWN_ARROW;
    static STShapeType *SWOOSH_ARROW;
    static STShapeType *CUBE;
    static STShapeType *CAN;
    static STShapeType *LIGHTNING_BOLT;
    static STShapeType *HEART;
    static STShapeType *SUN;
    static STShapeType *MOON;
    static STShapeType *SMILEY_FACE;
    static STShapeType *IRREGULAR_SEAL_1;
    static STShapeType *IRREGULAR_SEAL_2;
    static STShapeType *FOLDED_CORNER;
    static STShapeType *BEVEL;
    static STShapeType *FRAME;
    static STShapeType *HALF_FRAME;
    static STShapeType *CORNER;
    static STShapeType *DIAG_STRIPE;
    static STShapeType *CHORD;
    static STShapeType *ARC;
    static STShapeType *LEFT_BRACKET;
    static STShapeType *RIGHT_BRACKET;
    static STShapeType *LEFT_BRACE;
    static STShapeType *RIGHT_BRACE;
    static STShapeType *BRACKET_PAIR;
    static STShapeType *BRACE_PAIR;
    static STShapeType *STRAIGHT_CONNECTOR_1;
    static STShapeType *BENT_CONNECTOR_2;
    static STShapeType *BENT_CONNECTOR_3;
    static STShapeType *BENT_CONNECTOR_4;
    static STShapeType *BENT_CONNECTOR_5;
    static STShapeType *CURVED_CONNECTOR_2;
    static STShapeType *CURVED_CONNECTOR_3;
    static STShapeType *CURVED_CONNECTOR_4;
    static STShapeType *CURVED_CONNECTOR_5;
    static STShapeType *CALLOUT_1;
    static STShapeType *CALLOUT_2;
    static STShapeType *CALLOUT_3;
    static STShapeType *ACCENT_CALLOUT_1;
    static STShapeType *ACCENT_CALLOUT_2;
    static STShapeType *ACCENT_CALLOUT_3;
    static STShapeType *BORDER_CALLOUT_1;
    static STShapeType *BORDER_CALLOUT_2;
    static STShapeType *BORDER_CALLOUT_3;
    static STShapeType *ACCENT_BORDER_CALLOUT_1;
    static STShapeType *ACCENT_BORDER_CALLOUT_2;
    static STShapeType *ACCENT_BORDER_CALLOUT_3;
    static STShapeType *WEDGE_RECT_CALLOUT;
    static STShapeType *WEDGE_ROUND_RECT_CALLOUT;
    static STShapeType *WEDGE_ELLIPSE_CALLOUT;
    static STShapeType *CLOUD_CALLOUT;
    static STShapeType *CLOUD;
    static STShapeType *RIBBON;
    static STShapeType *RIBBON_2;
    static STShapeType *ELLIPSE_RIBBON;
    static STShapeType *ELLIPSE_RIBBON_2;
    static STShapeType *LEFT_RIGHT_RIBBON;
    static STShapeType *VERTICAL_SCROLL;
    static STShapeType *HORIZONTAL_SCROLL;
    static STShapeType *WAVE;
    static STShapeType *DOUBLE_WAVE;
    static STShapeType *PLUS;
    static STShapeType *FLOW_CHART_PROCESS;
    static STShapeType *FLOW_CHART_DECISION;
    static STShapeType *FLOW_CHART_INPUT_OUTPUT;
    static STShapeType *FLOW_CHART_PREDEFINED_PROCESS;
    static STShapeType *FLOW_CHART_INTERNAL_STORAGE;
    static STShapeType *FLOW_CHART_DOCUMENT;
    static STShapeType *FLOW_CHART_MULTIDOCUMENT;
    static STShapeType *FLOW_CHART_TERMINATOR;
    static STShapeType *FLOW_CHART_PREPARATION;
    static STShapeType *FLOW_CHART_MANUAL_INPUT;
    static STShapeType *FLOW_CHART_MANUAL_OPERATION;
    static STShapeType *FLOW_CHART_CONNECTOR;
    static STShapeType *FLOW_CHART_PUNCHED_CARD;
    static STShapeType *FLOW_CHART_PUNCHED_TAPE;
    static STShapeType *FLOW_CHART_SUMMING_JUNCTION;
    static STShapeType *FLOW_CHART_OR;
    static STShapeType *FLOW_CHART_COLLATE;
    static STShapeType *FLOW_CHART_SORT;
    static STShapeType *FLOW_CHART_EXTRACT;
    static STShapeType *FLOW_CHART_MERGE;
    static STShapeType *FLOW_CHART_OFFLINE_STORAGE;
    static STShapeType *FLOW_CHART_ONLINE_STORAGE;
    static STShapeType *FLOW_CHART_MAGNETIC_TAPE;
    static STShapeType *FLOW_CHART_MAGNETIC_DISK;
    static STShapeType *FLOW_CHART_MAGNETIC_DRUM;
    static STShapeType *FLOW_CHART_DISPLAY;
    static STShapeType *FLOW_CHART_DELAY;
    static STShapeType *FLOW_CHART_ALTERNATE_PROCESS;
    static STShapeType *FLOW_CHART_OFFPAGE_CONNECTOR;
    static STShapeType *ACTION_BUTTON_BLANK;
    static STShapeType *ACTION_BUTTON_HOME;
    static STShapeType *ACTION_BUTTON_HELP;
    static STShapeType *ACTION_BUTTON_INFORMATION;
    static STShapeType *ACTION_BUTTON_FORWARD_NEXT;
    static STShapeType *ACTION_BUTTON_BACK_PREVIOUS;
    static STShapeType *ACTION_BUTTON_END;
    static STShapeType *ACTION_BUTTON_BEGINNING;
    static STShapeType *ACTION_BUTTON_RETURN;
    static STShapeType *ACTION_BUTTON_DOCUMENT;
    static STShapeType *ACTION_BUTTON_SOUND;
    static STShapeType *ACTION_BUTTON_MOVIE;
    static STShapeType *GEAR_6;
    static STShapeType *GEAR_9;
    static STShapeType *FUNNEL;
    static STShapeType *MATH_PLUS;
    static STShapeType *MATH_MINUS;
    static STShapeType *MATH_MULTIPLY;
    static STShapeType *MATH_DIVIDE;
    static STShapeType *MATH_EQUAL;
    static STShapeType *MATH_NOT_EQUAL;
    static STShapeType *CORNER_TABS;
    static STShapeType *SQUARE_TABS;
    static STShapeType *PLAQUE_TABS;
    static STShapeType *CHART_X;
    static STShapeType *CHART_STAR;
    static STShapeType *CHART_PLUS;

private:
    ::java::lang::String* value_ {  };
protected:
    void ctor(::java::lang::String* name, int ordinal, ::java::lang::String* v);

public:
    ::java::lang::String* value();
    static STShapeType* fromValue(::java::lang::String* v);

    // Generated

private:
    STShapeType(::java::lang::String* name, int ordinal, ::java::lang::String* v);
protected:
    STShapeType(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static STShapeType* valueOf(::java::lang::String* a0);
    static STShapeTypeArray* values();

private:
    virtual ::java::lang::Class* getClass0();
};
