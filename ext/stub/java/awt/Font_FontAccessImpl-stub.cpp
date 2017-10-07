// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/awt/Font_FontAccessImpl.hpp>

extern void unimplemented_(const char16_t* name);
java::awt::Font_FontAccessImpl::Font_FontAccessImpl(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}


/* private: void ::java::awt::Font_FontAccessImpl::ctor() */
sun::font::Font2D* java::awt::Font_FontAccessImpl::getFont2D(Font* font)
{ /* stub */
    unimplemented_(u"sun::font::Font2D* java::awt::Font_FontAccessImpl::getFont2D(Font* font)");
    return 0;
}

bool java::awt::Font_FontAccessImpl::isCreatedFont(Font* font)
{ /* stub */
    unimplemented_(u"bool java::awt::Font_FontAccessImpl::isCreatedFont(Font* font)");
    return 0;
}

void java::awt::Font_FontAccessImpl::setCreatedFont(Font* font)
{ /* stub */
    unimplemented_(u"void java::awt::Font_FontAccessImpl::setCreatedFont(Font* font)");
}

void java::awt::Font_FontAccessImpl::setFont2D(Font* font, ::sun::font::Font2DHandle* handle)
{ /* stub */
    unimplemented_(u"void java::awt::Font_FontAccessImpl::setFont2D(Font* font, ::sun::font::Font2DHandle* handle)");
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::awt::Font_FontAccessImpl::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.awt.Font.FontAccessImpl", 28);
    return c;
}

java::lang::Class* java::awt::Font_FontAccessImpl::getClass0()
{
    return class_();
}

