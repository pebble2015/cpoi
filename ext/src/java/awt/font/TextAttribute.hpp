// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/awt/font/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <java/text/AttributedCharacterIterator_Attribute.hpp>

struct default_init_tag;

class java::awt::font::TextAttribute final
    : public ::java::text::AttributedCharacterIterator_Attribute
{

public:
    typedef ::java::text::AttributedCharacterIterator_Attribute super;

private:
    static TextAttribute* BACKGROUND_;
    static TextAttribute* BIDI_EMBEDDING_;
    static TextAttribute* CHAR_REPLACEMENT_;
    static TextAttribute* FAMILY_;
    static TextAttribute* FONT_;
    static TextAttribute* FOREGROUND_;
    static TextAttribute* INPUT_METHOD_HIGHLIGHT_;
    static TextAttribute* INPUT_METHOD_UNDERLINE_;
    static TextAttribute* JUSTIFICATION_;
    static ::java::lang::Float* JUSTIFICATION_FULL_;
    static ::java::lang::Float* JUSTIFICATION_NONE_;
    static TextAttribute* KERNING_;
    static ::java::lang::Integer* KERNING_ON_;
    static TextAttribute* LIGATURES_;
    static ::java::lang::Integer* LIGATURES_ON_;
    static TextAttribute* NUMERIC_SHAPING_;
    static TextAttribute* POSTURE_;
    static ::java::lang::Float* POSTURE_OBLIQUE_;
    static ::java::lang::Float* POSTURE_REGULAR_;
    static TextAttribute* RUN_DIRECTION_;
    static ::java::lang::Boolean* RUN_DIRECTION_LTR_;
    static ::java::lang::Boolean* RUN_DIRECTION_RTL_;
    static TextAttribute* SIZE_;
    static TextAttribute* STRIKETHROUGH_;
    static ::java::lang::Boolean* STRIKETHROUGH_ON_;
    static TextAttribute* SUPERSCRIPT_;
    static ::java::lang::Integer* SUPERSCRIPT_SUB_;
    static ::java::lang::Integer* SUPERSCRIPT_SUPER_;
    static TextAttribute* SWAP_COLORS_;
    static ::java::lang::Boolean* SWAP_COLORS_ON_;
    static TextAttribute* TRACKING_;
    static ::java::lang::Float* TRACKING_LOOSE_;
    static ::java::lang::Float* TRACKING_TIGHT_;
    static TextAttribute* TRANSFORM_;
    static TextAttribute* UNDERLINE_;
    static ::java::lang::Integer* UNDERLINE_LOW_DASHED_;
    static ::java::lang::Integer* UNDERLINE_LOW_DOTTED_;
    static ::java::lang::Integer* UNDERLINE_LOW_GRAY_;
    static ::java::lang::Integer* UNDERLINE_LOW_ONE_PIXEL_;
    static ::java::lang::Integer* UNDERLINE_LOW_TWO_PIXEL_;
    static ::java::lang::Integer* UNDERLINE_ON_;
    static TextAttribute* WEIGHT_;
    static ::java::lang::Float* WEIGHT_BOLD_;
    static ::java::lang::Float* WEIGHT_DEMIBOLD_;
    static ::java::lang::Float* WEIGHT_DEMILIGHT_;
    static ::java::lang::Float* WEIGHT_EXTRABOLD_;
    static ::java::lang::Float* WEIGHT_EXTRA_LIGHT_;
    static ::java::lang::Float* WEIGHT_HEAVY_;
    static ::java::lang::Float* WEIGHT_LIGHT_;
    static ::java::lang::Float* WEIGHT_MEDIUM_;
    static ::java::lang::Float* WEIGHT_REGULAR_;
    static ::java::lang::Float* WEIGHT_SEMIBOLD_;
    static ::java::lang::Float* WEIGHT_ULTRABOLD_;
    static TextAttribute* WIDTH_;
    static ::java::lang::Float* WIDTH_CONDENSED_;
    static ::java::lang::Float* WIDTH_EXTENDED_;
    static ::java::lang::Float* WIDTH_REGULAR_;
    static ::java::lang::Float* WIDTH_SEMI_CONDENSED_;
    static ::java::lang::Float* WIDTH_SEMI_EXTENDED_;
    static ::java::util::Map* instanceMap_;

public: /* package */
    static constexpr int64_t serialVersionUID { int64_t(7744112784117861702LL) };

protected:
    void ctor(::java::lang::String* name);

public: /* protected */
    ::java::lang::Object* readResolve() override;

    // Generated
    TextAttribute(::java::lang::String* name);
protected:
    TextAttribute(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static TextAttribute*& BACKGROUND();
    static TextAttribute*& BIDI_EMBEDDING();
    static TextAttribute*& CHAR_REPLACEMENT();
    static TextAttribute*& FAMILY();
    static TextAttribute*& FONT();
    static TextAttribute*& FOREGROUND();
    static TextAttribute*& INPUT_METHOD_HIGHLIGHT();
    static TextAttribute*& INPUT_METHOD_UNDERLINE();
    static TextAttribute*& JUSTIFICATION();
    static ::java::lang::Float*& JUSTIFICATION_FULL();
    static ::java::lang::Float*& JUSTIFICATION_NONE();
    static TextAttribute*& KERNING();
    static ::java::lang::Integer*& KERNING_ON();
    static TextAttribute*& LIGATURES();
    static ::java::lang::Integer*& LIGATURES_ON();
    static TextAttribute*& NUMERIC_SHAPING();
    static TextAttribute*& POSTURE();
    static ::java::lang::Float*& POSTURE_OBLIQUE();
    static ::java::lang::Float*& POSTURE_REGULAR();
    static TextAttribute*& RUN_DIRECTION();
    static ::java::lang::Boolean*& RUN_DIRECTION_LTR();
    static ::java::lang::Boolean*& RUN_DIRECTION_RTL();
    static TextAttribute*& SIZE();
    static TextAttribute*& STRIKETHROUGH();
    static ::java::lang::Boolean*& STRIKETHROUGH_ON();
    static TextAttribute*& SUPERSCRIPT();
    static ::java::lang::Integer*& SUPERSCRIPT_SUB();
    static ::java::lang::Integer*& SUPERSCRIPT_SUPER();
    static TextAttribute*& SWAP_COLORS();
    static ::java::lang::Boolean*& SWAP_COLORS_ON();
    static TextAttribute*& TRACKING();
    static ::java::lang::Float*& TRACKING_LOOSE();
    static ::java::lang::Float*& TRACKING_TIGHT();
    static TextAttribute*& TRANSFORM();
    static TextAttribute*& UNDERLINE();
    static ::java::lang::Integer*& UNDERLINE_LOW_DASHED();
    static ::java::lang::Integer*& UNDERLINE_LOW_DOTTED();
    static ::java::lang::Integer*& UNDERLINE_LOW_GRAY();
    static ::java::lang::Integer*& UNDERLINE_LOW_ONE_PIXEL();
    static ::java::lang::Integer*& UNDERLINE_LOW_TWO_PIXEL();
    static ::java::lang::Integer*& UNDERLINE_ON();
    static TextAttribute*& WEIGHT();
    static ::java::lang::Float*& WEIGHT_BOLD();
    static ::java::lang::Float*& WEIGHT_DEMIBOLD();
    static ::java::lang::Float*& WEIGHT_DEMILIGHT();
    static ::java::lang::Float*& WEIGHT_EXTRABOLD();
    static ::java::lang::Float*& WEIGHT_EXTRA_LIGHT();
    static ::java::lang::Float*& WEIGHT_HEAVY();
    static ::java::lang::Float*& WEIGHT_LIGHT();
    static ::java::lang::Float*& WEIGHT_MEDIUM();
    static ::java::lang::Float*& WEIGHT_REGULAR();
    static ::java::lang::Float*& WEIGHT_SEMIBOLD();
    static ::java::lang::Float*& WEIGHT_ULTRABOLD();
    static TextAttribute*& WIDTH();
    static ::java::lang::Float*& WIDTH_CONDENSED();
    static ::java::lang::Float*& WIDTH_EXTENDED();
    static ::java::lang::Float*& WIDTH_REGULAR();
    static ::java::lang::Float*& WIDTH_SEMI_CONDENSED();
    static ::java::lang::Float*& WIDTH_SEMI_EXTENDED();

private:
    static ::java::util::Map*& instanceMap();
    virtual ::java::lang::Class* getClass0();
};
