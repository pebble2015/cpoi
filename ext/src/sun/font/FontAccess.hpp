// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/awt/fwd-POI.hpp>
#include <sun/font/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class sun::font::FontAccess
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    static FontAccess* access_;

protected:
    void ctor();

public:
    virtual Font2D* getFont2D(::java::awt::Font* arg0) = 0;
    static FontAccess* getFontAccess();
    virtual bool isCreatedFont(::java::awt::Font* arg0) = 0;
    virtual void setCreatedFont(::java::awt::Font* arg0) = 0;
    virtual void setFont2D(::java::awt::Font* arg0, Font2DHandle* arg1) = 0;
    static void setFontAccess(FontAccess* arg0);

    // Generated
    FontAccess();
protected:
    FontAccess(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    static FontAccess*& access();
    virtual ::java::lang::Class* getClass0();
};
