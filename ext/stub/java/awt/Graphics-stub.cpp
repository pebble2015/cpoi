// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/awt/Graphics.hpp>

extern void unimplemented_(const char16_t* name);
java::awt::Graphics::Graphics(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::awt::Graphics::Graphics()
    : Graphics(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}


void ::java::awt::Graphics::ctor()
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::awt::Graphics::ctor()");
}

java::awt::Graphics* java::awt::Graphics::create(int32_t x, int32_t y, int32_t width, int32_t height)
{ /* stub */
    unimplemented_(u"java::awt::Graphics* java::awt::Graphics::create(int32_t x, int32_t y, int32_t width, int32_t height)");
    return 0;
}

void java::awt::Graphics::draw3DRect(int32_t x, int32_t y, int32_t width, int32_t height, bool raised)
{ /* stub */
    unimplemented_(u"void java::awt::Graphics::draw3DRect(int32_t x, int32_t y, int32_t width, int32_t height, bool raised)");
}

void java::awt::Graphics::drawBytes(::int8_tArray* data, int32_t offset, int32_t length, int32_t x, int32_t y)
{ /* stub */
    unimplemented_(u"void java::awt::Graphics::drawBytes(::int8_tArray* data, int32_t offset, int32_t length, int32_t x, int32_t y)");
}

void java::awt::Graphics::drawChars(::char16_tArray* data, int32_t offset, int32_t length, int32_t x, int32_t y)
{ /* stub */
    unimplemented_(u"void java::awt::Graphics::drawChars(::char16_tArray* data, int32_t offset, int32_t length, int32_t x, int32_t y)");
}

void java::awt::Graphics::drawPolygon(Polygon* p)
{ /* stub */
    unimplemented_(u"void java::awt::Graphics::drawPolygon(Polygon* p)");
}

void java::awt::Graphics::drawRect(int32_t x, int32_t y, int32_t width, int32_t height)
{ /* stub */
    unimplemented_(u"void java::awt::Graphics::drawRect(int32_t x, int32_t y, int32_t width, int32_t height)");
}

void java::awt::Graphics::fill3DRect(int32_t x, int32_t y, int32_t width, int32_t height, bool raised)
{ /* stub */
    unimplemented_(u"void java::awt::Graphics::fill3DRect(int32_t x, int32_t y, int32_t width, int32_t height, bool raised)");
}

void java::awt::Graphics::fillPolygon(Polygon* p)
{ /* stub */
    unimplemented_(u"void java::awt::Graphics::fillPolygon(Polygon* p)");
}

void java::awt::Graphics::finalize()
{ /* stub */
    unimplemented_(u"void java::awt::Graphics::finalize()");
}

java::awt::Rectangle* java::awt::Graphics::getClipBounds(Rectangle* r)
{ /* stub */
    unimplemented_(u"java::awt::Rectangle* java::awt::Graphics::getClipBounds(Rectangle* r)");
    return 0;
}

java::awt::Rectangle* java::awt::Graphics::getClipRect()
{ /* stub */
    unimplemented_(u"java::awt::Rectangle* java::awt::Graphics::getClipRect()");
    return 0;
}

java::awt::FontMetrics* java::awt::Graphics::getFontMetrics()
{ /* stub */
    unimplemented_(u"java::awt::FontMetrics* java::awt::Graphics::getFontMetrics()");
    return 0;
}

bool java::awt::Graphics::hitClip(int32_t x, int32_t y, int32_t width, int32_t height)
{ /* stub */
    unimplemented_(u"bool java::awt::Graphics::hitClip(int32_t x, int32_t y, int32_t width, int32_t height)");
    return 0;
}

java::lang::String* java::awt::Graphics::toString()
{ /* stub */
    unimplemented_(u"java::lang::String* java::awt::Graphics::toString()");
    return 0;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::awt::Graphics::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.awt.Graphics", 17);
    return c;
}

java::lang::Class* java::awt::Graphics::getClass0()
{
    return class_();
}

