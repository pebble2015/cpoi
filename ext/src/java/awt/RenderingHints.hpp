// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/awt/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <java/util/Map.hpp>
#include <java/lang/Cloneable.hpp>

struct default_init_tag;

class java::awt::RenderingHints
    : public virtual ::java::lang::Object
    , public virtual ::java::util::Map
    , public virtual ::java::lang::Cloneable
{

public:
    typedef ::java::lang::Object super;

private:
    static RenderingHints_Key* KEY_ALPHA_INTERPOLATION_;
    static RenderingHints_Key* KEY_ANTIALIASING_;
    static RenderingHints_Key* KEY_COLOR_RENDERING_;
    static RenderingHints_Key* KEY_DITHERING_;
    static RenderingHints_Key* KEY_FRACTIONALMETRICS_;
    static RenderingHints_Key* KEY_INTERPOLATION_;
    static RenderingHints_Key* KEY_RENDERING_;
    static RenderingHints_Key* KEY_STROKE_CONTROL_;
    static RenderingHints_Key* KEY_TEXT_ANTIALIASING_;
    static RenderingHints_Key* KEY_TEXT_LCD_CONTRAST_;
    static ::java::lang::Object* VALUE_ALPHA_INTERPOLATION_DEFAULT_;
    static ::java::lang::Object* VALUE_ALPHA_INTERPOLATION_QUALITY_;
    static ::java::lang::Object* VALUE_ALPHA_INTERPOLATION_SPEED_;
    static ::java::lang::Object* VALUE_ANTIALIAS_DEFAULT_;
    static ::java::lang::Object* VALUE_ANTIALIAS_OFF_;
    static ::java::lang::Object* VALUE_ANTIALIAS_ON_;
    static ::java::lang::Object* VALUE_COLOR_RENDER_DEFAULT_;
    static ::java::lang::Object* VALUE_COLOR_RENDER_QUALITY_;
    static ::java::lang::Object* VALUE_COLOR_RENDER_SPEED_;
    static ::java::lang::Object* VALUE_DITHER_DEFAULT_;
    static ::java::lang::Object* VALUE_DITHER_DISABLE_;
    static ::java::lang::Object* VALUE_DITHER_ENABLE_;
    static ::java::lang::Object* VALUE_FRACTIONALMETRICS_DEFAULT_;
    static ::java::lang::Object* VALUE_FRACTIONALMETRICS_OFF_;
    static ::java::lang::Object* VALUE_FRACTIONALMETRICS_ON_;
    static ::java::lang::Object* VALUE_INTERPOLATION_BICUBIC_;
    static ::java::lang::Object* VALUE_INTERPOLATION_BILINEAR_;
    static ::java::lang::Object* VALUE_INTERPOLATION_NEAREST_NEIGHBOR_;
    static ::java::lang::Object* VALUE_RENDER_DEFAULT_;
    static ::java::lang::Object* VALUE_RENDER_QUALITY_;
    static ::java::lang::Object* VALUE_RENDER_SPEED_;
    static ::java::lang::Object* VALUE_STROKE_DEFAULT_;
    static ::java::lang::Object* VALUE_STROKE_NORMALIZE_;
    static ::java::lang::Object* VALUE_STROKE_PURE_;
    static ::java::lang::Object* VALUE_TEXT_ANTIALIAS_DEFAULT_;
    static ::java::lang::Object* VALUE_TEXT_ANTIALIAS_GASP_;
    static ::java::lang::Object* VALUE_TEXT_ANTIALIAS_LCD_HBGR_;
    static ::java::lang::Object* VALUE_TEXT_ANTIALIAS_LCD_HRGB_;
    static ::java::lang::Object* VALUE_TEXT_ANTIALIAS_LCD_VBGR_;
    static ::java::lang::Object* VALUE_TEXT_ANTIALIAS_LCD_VRGB_;
    static ::java::lang::Object* VALUE_TEXT_ANTIALIAS_OFF_;
    static ::java::lang::Object* VALUE_TEXT_ANTIALIAS_ON_;

public: /* package */
    ::java::util::HashMap* hintmap {  };

protected:
    void ctor(::java::util::Map* init_);
    void ctor(RenderingHints_Key* key, ::java::lang::Object* value);

public:
    virtual void add(RenderingHints* hints);
    void clear() override;
    ::java::lang::Object* clone() override;
    bool containsKey(::java::lang::Object* key) override;
    bool containsValue(::java::lang::Object* value) override;
    ::java::util::Set* entrySet() override;
    bool equals(::java::lang::Object* o) override;
    ::java::lang::Object* get(::java::lang::Object* key) override;
    int32_t hashCode() override;
    bool isEmpty() override;
    ::java::util::Set* keySet() override;
    ::java::lang::Object* put(::java::lang::Object* key, ::java::lang::Object* value) override;
    void putAll(::java::util::Map* m) override;
    ::java::lang::Object* remove(::java::lang::Object* key) override;
    int32_t size() override;
    ::java::lang::String* toString() override;
    ::java::util::Collection* values() override;

    // Generated
    RenderingHints(::java::util::Map* init_);
    RenderingHints(RenderingHints_Key* key, ::java::lang::Object* value);
protected:
    RenderingHints(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    virtual bool remove(::java::lang::Object* key, ::java::lang::Object* value);
    static RenderingHints_Key*& KEY_ALPHA_INTERPOLATION();
    static RenderingHints_Key*& KEY_ANTIALIASING();
    static RenderingHints_Key*& KEY_COLOR_RENDERING();
    static RenderingHints_Key*& KEY_DITHERING();
    static RenderingHints_Key*& KEY_FRACTIONALMETRICS();
    static RenderingHints_Key*& KEY_INTERPOLATION();
    static RenderingHints_Key*& KEY_RENDERING();
    static RenderingHints_Key*& KEY_STROKE_CONTROL();
    static RenderingHints_Key*& KEY_TEXT_ANTIALIASING();
    static RenderingHints_Key*& KEY_TEXT_LCD_CONTRAST();
    static ::java::lang::Object*& VALUE_ALPHA_INTERPOLATION_DEFAULT();
    static ::java::lang::Object*& VALUE_ALPHA_INTERPOLATION_QUALITY();
    static ::java::lang::Object*& VALUE_ALPHA_INTERPOLATION_SPEED();
    static ::java::lang::Object*& VALUE_ANTIALIAS_DEFAULT();
    static ::java::lang::Object*& VALUE_ANTIALIAS_OFF();
    static ::java::lang::Object*& VALUE_ANTIALIAS_ON();
    static ::java::lang::Object*& VALUE_COLOR_RENDER_DEFAULT();
    static ::java::lang::Object*& VALUE_COLOR_RENDER_QUALITY();
    static ::java::lang::Object*& VALUE_COLOR_RENDER_SPEED();
    static ::java::lang::Object*& VALUE_DITHER_DEFAULT();
    static ::java::lang::Object*& VALUE_DITHER_DISABLE();
    static ::java::lang::Object*& VALUE_DITHER_ENABLE();
    static ::java::lang::Object*& VALUE_FRACTIONALMETRICS_DEFAULT();
    static ::java::lang::Object*& VALUE_FRACTIONALMETRICS_OFF();
    static ::java::lang::Object*& VALUE_FRACTIONALMETRICS_ON();
    static ::java::lang::Object*& VALUE_INTERPOLATION_BICUBIC();
    static ::java::lang::Object*& VALUE_INTERPOLATION_BILINEAR();
    static ::java::lang::Object*& VALUE_INTERPOLATION_NEAREST_NEIGHBOR();
    static ::java::lang::Object*& VALUE_RENDER_DEFAULT();
    static ::java::lang::Object*& VALUE_RENDER_QUALITY();
    static ::java::lang::Object*& VALUE_RENDER_SPEED();
    static ::java::lang::Object*& VALUE_STROKE_DEFAULT();
    static ::java::lang::Object*& VALUE_STROKE_NORMALIZE();
    static ::java::lang::Object*& VALUE_STROKE_PURE();
    static ::java::lang::Object*& VALUE_TEXT_ANTIALIAS_DEFAULT();
    static ::java::lang::Object*& VALUE_TEXT_ANTIALIAS_GASP();
    static ::java::lang::Object*& VALUE_TEXT_ANTIALIAS_LCD_HBGR();
    static ::java::lang::Object*& VALUE_TEXT_ANTIALIAS_LCD_HRGB();
    static ::java::lang::Object*& VALUE_TEXT_ANTIALIAS_LCD_VBGR();
    static ::java::lang::Object*& VALUE_TEXT_ANTIALIAS_LCD_VRGB();
    static ::java::lang::Object*& VALUE_TEXT_ANTIALIAS_OFF();
    static ::java::lang::Object*& VALUE_TEXT_ANTIALIAS_ON();

private:
    virtual ::java::lang::Class* getClass0();
};
