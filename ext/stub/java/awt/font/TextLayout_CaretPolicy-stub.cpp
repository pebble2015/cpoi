// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/awt/font/TextLayout_CaretPolicy.hpp>

extern void unimplemented_(const char16_t* name);
java::awt::font::TextLayout_CaretPolicy::TextLayout_CaretPolicy(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::awt::font::TextLayout_CaretPolicy::TextLayout_CaretPolicy()
    : TextLayout_CaretPolicy(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}


void ::java::awt::font::TextLayout_CaretPolicy::ctor()
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::awt::font::TextLayout_CaretPolicy::ctor()");
}

java::awt::font::TextHitInfo* java::awt::font::TextLayout_CaretPolicy::getStrongCaret(TextHitInfo* hit1, TextHitInfo* hit2, TextLayout* layout)
{ /* stub */
    unimplemented_(u"java::awt::font::TextHitInfo* java::awt::font::TextLayout_CaretPolicy::getStrongCaret(TextHitInfo* hit1, TextHitInfo* hit2, TextLayout* layout)");
    return 0;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::awt::font::TextLayout_CaretPolicy::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.awt.font.TextLayout.CaretPolicy", 36);
    return c;
}

java::lang::Class* java::awt::font::TextLayout_CaretPolicy::getClass0()
{
    return class_();
}

