// Generated from /POI/java/org/apache/poi/ss/usermodel/ExtendedColor.java

#pragma once

#include <fwd-POI.hpp>
#include <java/awt/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/ss/usermodel/Color.hpp>

struct default_init_tag;

class poi::ss::usermodel::ExtendedColor
    : public virtual ::java::lang::Object
    , public virtual Color
{

public:
    typedef ::java::lang::Object super;

public: /* protected */
    virtual void setColor(::java::awt::Color* clr);

public:
    virtual bool isAuto() = 0;
    virtual bool isIndexed() = 0;
    virtual bool isRGB() = 0;
    virtual bool isThemed() = 0;
    virtual int16_t getIndex() = 0;
    virtual int32_t getTheme() = 0;
    virtual ::int8_tArray* getRGB() = 0;
    virtual ::int8_tArray* getARGB() = 0;

public: /* protected */
    virtual ::int8_tArray* getStoredRBG() = 0;

public:
    virtual void setRGB(::int8_tArray* rgb) = 0;

public: /* protected */
    virtual ::int8_tArray* getRGBOrARGB();
    virtual ::int8_tArray* getIndexedRGB() = 0;

public:
    virtual ::int8_tArray* getRGBWithTint();
    virtual ::java::lang::String* getARGBHex();
    virtual void setARGBHex(::java::lang::String* argb);

private:
    static int8_t applyTint(int32_t lum, double tint);

public:
    virtual double getTint() = 0;
    virtual void setTint(double tint) = 0;

    // Generated
    ExtendedColor();
protected:
    ExtendedColor(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
