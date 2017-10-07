// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <javax/xml/transform/stream/StreamSource.hpp>

extern void unimplemented_(const char16_t* name);
javax::xml::transform::stream::StreamSource::StreamSource(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

javax::xml::transform::stream::StreamSource::StreamSource()
    : StreamSource(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

javax::xml::transform::stream::StreamSource::StreamSource(::java::io::InputStream* inputStream)
    : StreamSource(*static_cast< ::default_init_tag* >(0))
{
    ctor(inputStream);
}

javax::xml::transform::stream::StreamSource::StreamSource(::java::io::Reader* reader)
    : StreamSource(*static_cast< ::default_init_tag* >(0))
{
    ctor(reader);
}

javax::xml::transform::stream::StreamSource::StreamSource(::java::lang::String* systemId)
    : StreamSource(*static_cast< ::default_init_tag* >(0))
{
    ctor(systemId);
}

javax::xml::transform::stream::StreamSource::StreamSource(::java::io::File* f)
    : StreamSource(*static_cast< ::default_init_tag* >(0))
{
    ctor(f);
}

javax::xml::transform::stream::StreamSource::StreamSource(::java::io::InputStream* inputStream, ::java::lang::String* systemId)
    : StreamSource(*static_cast< ::default_init_tag* >(0))
{
    ctor(inputStream, systemId);
}

javax::xml::transform::stream::StreamSource::StreamSource(::java::io::Reader* reader, ::java::lang::String* systemId)
    : StreamSource(*static_cast< ::default_init_tag* >(0))
{
    ctor(reader, systemId);
}

java::lang::String*& javax::xml::transform::stream::StreamSource::FEATURE()
{
    clinit();
    return FEATURE_;
}
java::lang::String* javax::xml::transform::stream::StreamSource::FEATURE_;

void ::javax::xml::transform::stream::StreamSource::ctor()
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::javax::xml::transform::stream::StreamSource::ctor()");
}

void ::javax::xml::transform::stream::StreamSource::ctor(::java::io::InputStream* inputStream)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::javax::xml::transform::stream::StreamSource::ctor(::java::io::InputStream* inputStream)");
}

void ::javax::xml::transform::stream::StreamSource::ctor(::java::io::Reader* reader)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::javax::xml::transform::stream::StreamSource::ctor(::java::io::Reader* reader)");
}

void ::javax::xml::transform::stream::StreamSource::ctor(::java::lang::String* systemId)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::javax::xml::transform::stream::StreamSource::ctor(::java::lang::String* systemId)");
}

void ::javax::xml::transform::stream::StreamSource::ctor(::java::io::File* f)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::javax::xml::transform::stream::StreamSource::ctor(::java::io::File* f)");
}

void ::javax::xml::transform::stream::StreamSource::ctor(::java::io::InputStream* inputStream, ::java::lang::String* systemId)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::javax::xml::transform::stream::StreamSource::ctor(::java::io::InputStream* inputStream, ::java::lang::String* systemId)");
}

void ::javax::xml::transform::stream::StreamSource::ctor(::java::io::Reader* reader, ::java::lang::String* systemId)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::javax::xml::transform::stream::StreamSource::ctor(::java::io::Reader* reader, ::java::lang::String* systemId)");
}

java::io::InputStream* javax::xml::transform::stream::StreamSource::getInputStream()
{ /* stub */
return inputStream ; /* getter */
}

java::lang::String* javax::xml::transform::stream::StreamSource::getPublicId()
{ /* stub */
return publicId ; /* getter */
}

java::io::Reader* javax::xml::transform::stream::StreamSource::getReader()
{ /* stub */
return reader ; /* getter */
}

java::lang::String* javax::xml::transform::stream::StreamSource::getSystemId()
{ /* stub */
return systemId ; /* getter */
}

void javax::xml::transform::stream::StreamSource::setInputStream(::java::io::InputStream* inputStream)
{ /* stub */
    this->inputStream = inputStream; /* setter */
}

void javax::xml::transform::stream::StreamSource::setPublicId(::java::lang::String* publicId)
{ /* stub */
    this->publicId = publicId; /* setter */
}

void javax::xml::transform::stream::StreamSource::setReader(::java::io::Reader* reader)
{ /* stub */
    this->reader = reader; /* setter */
}

void javax::xml::transform::stream::StreamSource::setSystemId(::java::lang::String* systemId)
{ /* stub */
    this->systemId = systemId; /* setter */
}

void javax::xml::transform::stream::StreamSource::setSystemId(::java::io::File* f)
{ /* stub */
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* javax::xml::transform::stream::StreamSource::class_()
{
    static ::java::lang::Class* c = ::class_(u"javax.xml.transform.stream.StreamSource", 39);
    return c;
}

java::lang::Class* javax::xml::transform::stream::StreamSource::getClass0()
{
    return class_();
}

