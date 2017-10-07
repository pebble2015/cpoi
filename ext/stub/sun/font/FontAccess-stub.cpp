// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <sun/font/FontAccess.hpp>

extern void unimplemented_(const char16_t* name);
sun::font::FontAccess::FontAccess(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

sun::font::FontAccess::FontAccess()
    : FontAccess(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

sun::font::FontAccess*& sun::font::FontAccess::access()
{
    clinit();
    return access_;
}
sun::font::FontAccess* sun::font::FontAccess::access_;

void ::sun::font::FontAccess::ctor()
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::sun::font::FontAccess::ctor()");
}

sun::font::FontAccess* sun::font::FontAccess::getFontAccess()
{ /* stub */
    clinit();
    unimplemented_(u"sun::font::FontAccess* sun::font::FontAccess::getFontAccess()");
    return 0;
}

void sun::font::FontAccess::setFontAccess(FontAccess* arg0)
{ /* stub */
    clinit();
    unimplemented_(u"void sun::font::FontAccess::setFontAccess(FontAccess* arg0)");
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* sun::font::FontAccess::class_()
{
    static ::java::lang::Class* c = ::class_(u"sun.font.FontAccess", 19);
    return c;
}

java::lang::Class* sun::font::FontAccess::getClass0()
{
    return class_();
}

