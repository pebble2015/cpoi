// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/awt/fwd-POI.hpp>
#include <java/awt/font/fwd-POI.hpp>
#include <java/awt/geom/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/text/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <java/io/Serializable.hpp>

struct default_init_tag;

class java::awt::FontMetrics
    : public virtual ::java::lang::Object
    , public virtual ::java::io::Serializable
{

public:
    typedef ::java::lang::Object super;

private:
    static ::java::awt::font::FontRenderContext* DEFAULT_FRC_;

public: /* protected */
    Font* font {  };

private:
    static constexpr int64_t serialVersionUID { int64_t(1681126225205050147LL) };

protected:
    void ctor(Font* font);

public:
    virtual int32_t bytesWidth(::int8_tArray* data, int32_t off, int32_t len);
    virtual int32_t charWidth(int32_t codePoint);
    virtual int32_t charWidth(char16_t ch);
    virtual int32_t charsWidth(::char16_tArray* data, int32_t off, int32_t len);
    virtual int32_t getAscent();
    virtual int32_t getDescent();
    virtual Font* getFont();
    virtual ::java::awt::font::FontRenderContext* getFontRenderContext();
    virtual int32_t getHeight();
    virtual int32_t getLeading();
    virtual ::java::awt::font::LineMetrics* getLineMetrics(::java::lang::String* str, Graphics* context);
    virtual ::java::awt::font::LineMetrics* getLineMetrics(::java::lang::String* str, int32_t beginIndex, int32_t limit, Graphics* context);
    virtual ::java::awt::font::LineMetrics* getLineMetrics(::char16_tArray* chars, int32_t beginIndex, int32_t limit, Graphics* context);
    virtual ::java::awt::font::LineMetrics* getLineMetrics(::java::text::CharacterIterator* ci, int32_t beginIndex, int32_t limit, Graphics* context);
    virtual int32_t getMaxAdvance();
    virtual int32_t getMaxAscent();
    virtual ::java::awt::geom::Rectangle2D* getMaxCharBounds(Graphics* context);
    virtual int32_t getMaxDecent();
    virtual int32_t getMaxDescent();
    virtual ::java::awt::geom::Rectangle2D* getStringBounds(::java::lang::String* str, Graphics* context);
    virtual ::java::awt::geom::Rectangle2D* getStringBounds(::java::lang::String* str, int32_t beginIndex, int32_t limit, Graphics* context);
    virtual ::java::awt::geom::Rectangle2D* getStringBounds(::char16_tArray* chars, int32_t beginIndex, int32_t limit, Graphics* context);
    virtual ::java::awt::geom::Rectangle2D* getStringBounds(::java::text::CharacterIterator* ci, int32_t beginIndex, int32_t limit, Graphics* context);
    virtual ::int32_tArray* getWidths();
    virtual bool hasUniformLineMetrics();
    /*static void initIDs(); (private) */
    /*::java::awt::font::FontRenderContext* myFRC(Graphics* context); (private) */
    virtual int32_t stringWidth(::java::lang::String* str);
    ::java::lang::String* toString() override;

    // Generated

public: /* protected */
    FontMetrics(Font* font);
protected:
    FontMetrics(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    static ::java::awt::font::FontRenderContext*& DEFAULT_FRC();
    virtual ::java::lang::Class* getClass0();
};
