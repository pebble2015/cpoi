// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <javax/xml/transform/TransformerException.hpp>

extern void unimplemented_(const char16_t* name);
javax::xml::transform::TransformerException::TransformerException(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

javax::xml::transform::TransformerException::TransformerException(::java::lang::String* message)
    : TransformerException(*static_cast< ::default_init_tag* >(0))
{
    ctor(message);
}

javax::xml::transform::TransformerException::TransformerException(::java::lang::Throwable* e)
    : TransformerException(*static_cast< ::default_init_tag* >(0))
{
    ctor(e);
}

javax::xml::transform::TransformerException::TransformerException(::java::lang::String* message, ::java::lang::Throwable* e)
    : TransformerException(*static_cast< ::default_init_tag* >(0))
{
    ctor(message, e);
}

javax::xml::transform::TransformerException::TransformerException(::java::lang::String* message, SourceLocator* locator)
    : TransformerException(*static_cast< ::default_init_tag* >(0))
{
    ctor(message, locator);
}

javax::xml::transform::TransformerException::TransformerException(::java::lang::String* message, SourceLocator* locator, ::java::lang::Throwable* e)
    : TransformerException(*static_cast< ::default_init_tag* >(0))
{
    ctor(message, locator, e);
}

constexpr int64_t javax::xml::transform::TransformerException::serialVersionUID;

void ::javax::xml::transform::TransformerException::ctor(::java::lang::String* message)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::javax::xml::transform::TransformerException::ctor(::java::lang::String* message)");
}

void ::javax::xml::transform::TransformerException::ctor(::java::lang::Throwable* e)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::javax::xml::transform::TransformerException::ctor(::java::lang::Throwable* e)");
}

void ::javax::xml::transform::TransformerException::ctor(::java::lang::String* message, ::java::lang::Throwable* e)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::javax::xml::transform::TransformerException::ctor(::java::lang::String* message, ::java::lang::Throwable* e)");
}

void ::javax::xml::transform::TransformerException::ctor(::java::lang::String* message, SourceLocator* locator)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::javax::xml::transform::TransformerException::ctor(::java::lang::String* message, SourceLocator* locator)");
}

void ::javax::xml::transform::TransformerException::ctor(::java::lang::String* message, SourceLocator* locator, ::java::lang::Throwable* e)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::javax::xml::transform::TransformerException::ctor(::java::lang::String* message, SourceLocator* locator, ::java::lang::Throwable* e)");
}

java::lang::Throwable* javax::xml::transform::TransformerException::getCause()
{ /* stub */
    unimplemented_(u"java::lang::Throwable* javax::xml::transform::TransformerException::getCause()");
    return 0;
}

java::lang::Throwable* javax::xml::transform::TransformerException::getException()
{ /* stub */
    unimplemented_(u"java::lang::Throwable* javax::xml::transform::TransformerException::getException()");
    return 0;
}

java::lang::String* javax::xml::transform::TransformerException::getLocationAsString()
{ /* stub */
    unimplemented_(u"java::lang::String* javax::xml::transform::TransformerException::getLocationAsString()");
    return 0;
}

/* private: java::lang::String* javax::xml::transform::TransformerException::getLocationString() */
javax::xml::transform::SourceLocator* javax::xml::transform::TransformerException::getLocator()
{ /* stub */
return locator ; /* getter */
}

java::lang::String* javax::xml::transform::TransformerException::getMessageAndLocation()
{ /* stub */
    unimplemented_(u"java::lang::String* javax::xml::transform::TransformerException::getMessageAndLocation()");
    return 0;
}

/* private: java::security::ProtectionDomain* javax::xml::transform::TransformerException::getNonPrivDomain() */
java::lang::Throwable* javax::xml::transform::TransformerException::initCause(::java::lang::Throwable* cause)
{ /* stub */
    unimplemented_(u"java::lang::Throwable* javax::xml::transform::TransformerException::initCause(::java::lang::Throwable* cause)");
    return 0;
}

void javax::xml::transform::TransformerException::printStackTrace()
{ /* stub */
    unimplemented_(u"void javax::xml::transform::TransformerException::printStackTrace()");
}

void javax::xml::transform::TransformerException::printStackTrace(::java::io::PrintStream* s)
{ /* stub */
    unimplemented_(u"void javax::xml::transform::TransformerException::printStackTrace(::java::io::PrintStream* s)");
}

void javax::xml::transform::TransformerException::printStackTrace(::java::io::PrintWriter* s)
{ /* stub */
    unimplemented_(u"void javax::xml::transform::TransformerException::printStackTrace(::java::io::PrintWriter* s)");
}

void javax::xml::transform::TransformerException::setLocator(SourceLocator* location)
{ /* stub */
    this->locator = location; /* setter */
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* javax::xml::transform::TransformerException::class_()
{
    static ::java::lang::Class* c = ::class_(u"javax.xml.transform.TransformerException", 40);
    return c;
}

java::lang::Class* javax::xml::transform::TransformerException::getClass0()
{
    return class_();
}

