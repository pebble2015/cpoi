// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <javax/xml/bind/JAXBException.hpp>

extern void unimplemented_(const char16_t* name);
javax::xml::bind::JAXBException::JAXBException(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

javax::xml::bind::JAXBException::JAXBException(::java::lang::String* message)
    : JAXBException(*static_cast< ::default_init_tag* >(0))
{
    ctor(message);
}

javax::xml::bind::JAXBException::JAXBException(::java::lang::Throwable* exception)
    : JAXBException(*static_cast< ::default_init_tag* >(0))
{
    ctor(exception);
}

javax::xml::bind::JAXBException::JAXBException(::java::lang::String* message, ::java::lang::String* errorCode)
    : JAXBException(*static_cast< ::default_init_tag* >(0))
{
    ctor(message, errorCode);
}

javax::xml::bind::JAXBException::JAXBException(::java::lang::String* message, ::java::lang::Throwable* exception)
    : JAXBException(*static_cast< ::default_init_tag* >(0))
{
    ctor(message, exception);
}

javax::xml::bind::JAXBException::JAXBException(::java::lang::String* message, ::java::lang::String* errorCode, ::java::lang::Throwable* exception)
    : JAXBException(*static_cast< ::default_init_tag* >(0))
{
    ctor(message, errorCode, exception);
}

constexpr int64_t javax::xml::bind::JAXBException::serialVersionUID;

void ::javax::xml::bind::JAXBException::ctor(::java::lang::String* message)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::javax::xml::bind::JAXBException::ctor(::java::lang::String* message)");
}

void ::javax::xml::bind::JAXBException::ctor(::java::lang::Throwable* exception)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::javax::xml::bind::JAXBException::ctor(::java::lang::Throwable* exception)");
}

void ::javax::xml::bind::JAXBException::ctor(::java::lang::String* message, ::java::lang::String* errorCode)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::javax::xml::bind::JAXBException::ctor(::java::lang::String* message, ::java::lang::String* errorCode)");
}

void ::javax::xml::bind::JAXBException::ctor(::java::lang::String* message, ::java::lang::Throwable* exception)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::javax::xml::bind::JAXBException::ctor(::java::lang::String* message, ::java::lang::Throwable* exception)");
}

void ::javax::xml::bind::JAXBException::ctor(::java::lang::String* message, ::java::lang::String* errorCode, ::java::lang::Throwable* exception)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::javax::xml::bind::JAXBException::ctor(::java::lang::String* message, ::java::lang::String* errorCode, ::java::lang::Throwable* exception)");
}

java::lang::Throwable* javax::xml::bind::JAXBException::getCause()
{ /* stub */
    unimplemented_(u"java::lang::Throwable* javax::xml::bind::JAXBException::getCause()");
    return 0;
}

java::lang::String* javax::xml::bind::JAXBException::getErrorCode()
{ /* stub */
return errorCode ; /* getter */
}

java::lang::Throwable* javax::xml::bind::JAXBException::getLinkedException()
{ /* stub */
return linkedException ; /* getter */
}

void javax::xml::bind::JAXBException::printStackTrace()
{ /* stub */
    unimplemented_(u"void javax::xml::bind::JAXBException::printStackTrace()");
}

void javax::xml::bind::JAXBException::printStackTrace(::java::io::PrintStream* s)
{ /* stub */
    unimplemented_(u"void javax::xml::bind::JAXBException::printStackTrace(::java::io::PrintStream* s)");
}

void javax::xml::bind::JAXBException::printStackTrace(::java::io::PrintWriter* s)
{ /* stub */
    unimplemented_(u"void javax::xml::bind::JAXBException::printStackTrace(::java::io::PrintWriter* s)");
}

void javax::xml::bind::JAXBException::setLinkedException(::java::lang::Throwable* exception)
{ /* stub */
    this->linkedException = exception; /* setter */
}

java::lang::String* javax::xml::bind::JAXBException::toString()
{ /* stub */
    unimplemented_(u"java::lang::String* javax::xml::bind::JAXBException::toString()");
    return 0;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* javax::xml::bind::JAXBException::class_()
{
    static ::java::lang::Class* c = ::class_(u"javax.xml.bind.JAXBException", 28);
    return c;
}

java::lang::Class* javax::xml::bind::JAXBException::getClass0()
{
    return class_();
}

