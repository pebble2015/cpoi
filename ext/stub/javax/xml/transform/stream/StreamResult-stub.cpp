// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <javax/xml/transform/stream/StreamResult.hpp>

extern void unimplemented_(const char16_t* name);
javax::xml::transform::stream::StreamResult::StreamResult(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

javax::xml::transform::stream::StreamResult::StreamResult()
    : StreamResult(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

javax::xml::transform::stream::StreamResult::StreamResult(::java::io::OutputStream* outputStream)
    : StreamResult(*static_cast< ::default_init_tag* >(0))
{
    ctor(outputStream);
}

javax::xml::transform::stream::StreamResult::StreamResult(::java::io::Writer* writer)
    : StreamResult(*static_cast< ::default_init_tag* >(0))
{
    ctor(writer);
}

javax::xml::transform::stream::StreamResult::StreamResult(::java::lang::String* systemId)
    : StreamResult(*static_cast< ::default_init_tag* >(0))
{
    ctor(systemId);
}

javax::xml::transform::stream::StreamResult::StreamResult(::java::io::File* f)
    : StreamResult(*static_cast< ::default_init_tag* >(0))
{
    ctor(f);
}

java::lang::String*& javax::xml::transform::stream::StreamResult::FEATURE()
{
    clinit();
    return FEATURE_;
}
java::lang::String* javax::xml::transform::stream::StreamResult::FEATURE_;

void ::javax::xml::transform::stream::StreamResult::ctor()
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::javax::xml::transform::stream::StreamResult::ctor()");
}

void ::javax::xml::transform::stream::StreamResult::ctor(::java::io::OutputStream* outputStream)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::javax::xml::transform::stream::StreamResult::ctor(::java::io::OutputStream* outputStream)");
}

void ::javax::xml::transform::stream::StreamResult::ctor(::java::io::Writer* writer)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::javax::xml::transform::stream::StreamResult::ctor(::java::io::Writer* writer)");
}

void ::javax::xml::transform::stream::StreamResult::ctor(::java::lang::String* systemId)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::javax::xml::transform::stream::StreamResult::ctor(::java::lang::String* systemId)");
}

void ::javax::xml::transform::stream::StreamResult::ctor(::java::io::File* f)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::javax::xml::transform::stream::StreamResult::ctor(::java::io::File* f)");
}

java::io::OutputStream* javax::xml::transform::stream::StreamResult::getOutputStream()
{ /* stub */
return outputStream ; /* getter */
}

java::lang::String* javax::xml::transform::stream::StreamResult::getSystemId()
{ /* stub */
return systemId ; /* getter */
}

java::io::Writer* javax::xml::transform::stream::StreamResult::getWriter()
{ /* stub */
return writer ; /* getter */
}

void javax::xml::transform::stream::StreamResult::setOutputStream(::java::io::OutputStream* outputStream)
{ /* stub */
    this->outputStream = outputStream; /* setter */
}

void javax::xml::transform::stream::StreamResult::setSystemId(::java::lang::String* systemId)
{ /* stub */
    this->systemId = systemId; /* setter */
}

void javax::xml::transform::stream::StreamResult::setSystemId(::java::io::File* f)
{ /* stub */
}

void javax::xml::transform::stream::StreamResult::setWriter(::java::io::Writer* writer)
{ /* stub */
    this->writer = writer; /* setter */
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* javax::xml::transform::stream::StreamResult::class_()
{
    static ::java::lang::Class* c = ::class_(u"javax.xml.transform.stream.StreamResult", 39);
    return c;
}

java::lang::Class* javax::xml::transform::stream::StreamResult::getClass0()
{
    return class_();
}

