// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <java/awt/font/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class java::awt::font::TextLayout_CaretPolicy
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

protected:
    void ctor();

public:
    virtual TextHitInfo* getStrongCaret(TextHitInfo* hit1, TextHitInfo* hit2, TextLayout* layout);

    // Generated
    TextLayout_CaretPolicy();
protected:
    TextLayout_CaretPolicy(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
