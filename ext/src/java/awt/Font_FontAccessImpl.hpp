// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/awt/fwd-POI.hpp>
#include <sun/font/fwd-POI.hpp>
#include <sun/font/FontAccess.hpp>

struct default_init_tag;

class java::awt::Font_FontAccessImpl
    : public ::sun::font::FontAccess
{

public:
    typedef ::sun::font::FontAccess super;

    /*void ctor(); (private) */
    ::sun::font::Font2D* getFont2D(Font* font) override;
    bool isCreatedFont(Font* font) override;
    void setCreatedFont(Font* font) override;
    void setFont2D(Font* font, ::sun::font::Font2DHandle* handle) override;

    // Generated
    Font_FontAccessImpl();
protected:
    Font_FontAccessImpl(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
