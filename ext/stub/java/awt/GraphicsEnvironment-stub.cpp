// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/awt/GraphicsEnvironment.hpp>

extern void unimplemented_(const char16_t* name);
java::awt::GraphicsEnvironment::GraphicsEnvironment(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::awt::GraphicsEnvironment::GraphicsEnvironment()
    : GraphicsEnvironment(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

java::lang::Boolean*& java::awt::GraphicsEnvironment::defaultHeadless()
{
    clinit();
    return defaultHeadless_;
}
java::lang::Boolean* java::awt::GraphicsEnvironment::defaultHeadless_;
java::lang::Boolean*& java::awt::GraphicsEnvironment::headless()
{
    clinit();
    return headless_;
}
java::lang::Boolean* java::awt::GraphicsEnvironment::headless_;
java::awt::GraphicsEnvironment*& java::awt::GraphicsEnvironment::localEnv()
{
    clinit();
    return localEnv_;
}
java::awt::GraphicsEnvironment* java::awt::GraphicsEnvironment::localEnv_;

void ::java::awt::GraphicsEnvironment::ctor()
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::awt::GraphicsEnvironment::ctor()");
}

void java::awt::GraphicsEnvironment::checkHeadless()
{ /* stub */
    clinit();
    unimplemented_(u"void java::awt::GraphicsEnvironment::checkHeadless()");
}

/* private: java::awt::GraphicsEnvironment* java::awt::GraphicsEnvironment::createGE() */
java::awt::Point* java::awt::GraphicsEnvironment::getCenterPoint()
{ /* stub */
    unimplemented_(u"java::awt::Point* java::awt::GraphicsEnvironment::getCenterPoint()");
    return 0;
}

java::lang::String* java::awt::GraphicsEnvironment::getHeadlessMessage()
{ /* stub */
    clinit();
    unimplemented_(u"java::lang::String* java::awt::GraphicsEnvironment::getHeadlessMessage()");
    return 0;
}

/* private: bool java::awt::GraphicsEnvironment::getHeadlessProperty() */
java::awt::GraphicsEnvironment* java::awt::GraphicsEnvironment::getLocalGraphicsEnvironment()
{ /* stub */
    clinit();
    unimplemented_(u"java::awt::GraphicsEnvironment* java::awt::GraphicsEnvironment::getLocalGraphicsEnvironment()");
    return 0;
}

java::awt::Rectangle* java::awt::GraphicsEnvironment::getMaximumWindowBounds()
{ /* stub */
    unimplemented_(u"java::awt::Rectangle* java::awt::GraphicsEnvironment::getMaximumWindowBounds()");
    return 0;
}

bool java::awt::GraphicsEnvironment::isHeadless()
{ /* stub */
    clinit();
    unimplemented_(u"bool java::awt::GraphicsEnvironment::isHeadless()");
    return 0;
}

bool java::awt::GraphicsEnvironment::isHeadlessInstance()
{ /* stub */
    unimplemented_(u"bool java::awt::GraphicsEnvironment::isHeadlessInstance()");
    return 0;
}

void java::awt::GraphicsEnvironment::preferLocaleFonts()
{ /* stub */
    unimplemented_(u"void java::awt::GraphicsEnvironment::preferLocaleFonts()");
}

void java::awt::GraphicsEnvironment::preferProportionalFonts()
{ /* stub */
    unimplemented_(u"void java::awt::GraphicsEnvironment::preferProportionalFonts()");
}

bool java::awt::GraphicsEnvironment::registerFont(Font* font)
{ /* stub */
    unimplemented_(u"bool java::awt::GraphicsEnvironment::registerFont(Font* font)");
    return 0;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::awt::GraphicsEnvironment::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.awt.GraphicsEnvironment", 28);
    return c;
}

java::lang::Class* java::awt::GraphicsEnvironment::getClass0()
{
    return class_();
}

