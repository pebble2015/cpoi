// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <javax/xml/bind/JAXBContext.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace io
    {
typedef ::SubArray< ::java::io::Serializable, ::java::lang::ObjectArray > SerializableArray;
    } // io

    namespace lang
    {
        namespace reflect
        {
typedef ::SubArray< ::java::lang::reflect::AnnotatedElement, ::java::lang::ObjectArray > AnnotatedElementArray;
typedef ::SubArray< ::java::lang::reflect::GenericDeclaration, ::java::lang::ObjectArray, AnnotatedElementArray > GenericDeclarationArray;
typedef ::SubArray< ::java::lang::reflect::Type, ::java::lang::ObjectArray > TypeArray;
        } // reflect
typedef ::SubArray< ::java::lang::Class, ObjectArray, ::java::io::SerializableArray, ::java::lang::reflect::GenericDeclarationArray, ::java::lang::reflect::TypeArray, ::java::lang::reflect::AnnotatedElementArray > ClassArray;
    } // lang
} // java

extern void unimplemented_(const char16_t* name);
javax::xml::bind::JAXBContext::JAXBContext(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

javax::xml::bind::JAXBContext::JAXBContext()
    : JAXBContext(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

java::lang::String*& javax::xml::bind::JAXBContext::JAXB_CONTEXT_FACTORY()
{
    clinit();
    return JAXB_CONTEXT_FACTORY_;
}
java::lang::String* javax::xml::bind::JAXBContext::JAXB_CONTEXT_FACTORY_;

void ::javax::xml::bind::JAXBContext::ctor()
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::javax::xml::bind::JAXBContext::ctor()");
}

javax::xml::bind::Binder* javax::xml::bind::JAXBContext::createBinder()
{ /* stub */
    unimplemented_(u"javax::xml::bind::Binder* javax::xml::bind::JAXBContext::createBinder()");
    return 0;
}

javax::xml::bind::Binder* javax::xml::bind::JAXBContext::createBinder(::java::lang::Class* domType)
{ /* stub */
    unimplemented_(u"javax::xml::bind::Binder* javax::xml::bind::JAXBContext::createBinder(::java::lang::Class* domType)");
    return 0;
}

javax::xml::bind::JAXBIntrospector* javax::xml::bind::JAXBContext::createJAXBIntrospector()
{ /* stub */
    unimplemented_(u"javax::xml::bind::JAXBIntrospector* javax::xml::bind::JAXBContext::createJAXBIntrospector()");
    return 0;
}

void javax::xml::bind::JAXBContext::generateSchema(SchemaOutputResolver* outputResolver)
{ /* stub */
    unimplemented_(u"void javax::xml::bind::JAXBContext::generateSchema(SchemaOutputResolver* outputResolver)");
}

/* private: java::lang::ClassLoader* javax::xml::bind::JAXBContext::getContextClassLoader() */
javax::xml::bind::JAXBContext* javax::xml::bind::JAXBContext::newInstance(::java::lang::String* contextPath)
{ /* stub */
    clinit();
    unimplemented_(u"javax::xml::bind::JAXBContext* javax::xml::bind::JAXBContext::newInstance(::java::lang::String* contextPath)");
    return 0;
}

javax::xml::bind::JAXBContext* javax::xml::bind::JAXBContext::newInstance(::java::lang::ClassArray* classesToBeBound)
{ /* stub */
    clinit();
    unimplemented_(u"javax::xml::bind::JAXBContext* javax::xml::bind::JAXBContext::newInstance(::java::lang::ClassArray* classesToBeBound)");
    return 0;
}

javax::xml::bind::JAXBContext* javax::xml::bind::JAXBContext::newInstance(::java::lang::String* contextPath, ::java::lang::ClassLoader* classLoader)
{ /* stub */
    clinit();
    unimplemented_(u"javax::xml::bind::JAXBContext* javax::xml::bind::JAXBContext::newInstance(::java::lang::String* contextPath, ::java::lang::ClassLoader* classLoader)");
    return 0;
}

javax::xml::bind::JAXBContext* javax::xml::bind::JAXBContext::newInstance(::java::lang::ClassArray* classesToBeBound, ::java::util::Map* properties)
{ /* stub */
    clinit();
    unimplemented_(u"javax::xml::bind::JAXBContext* javax::xml::bind::JAXBContext::newInstance(::java::lang::ClassArray* classesToBeBound, ::java::util::Map* properties)");
    return 0;
}

javax::xml::bind::JAXBContext* javax::xml::bind::JAXBContext::newInstance(::java::lang::String* contextPath, ::java::lang::ClassLoader* classLoader, ::java::util::Map* properties)
{ /* stub */
    clinit();
    unimplemented_(u"javax::xml::bind::JAXBContext* javax::xml::bind::JAXBContext::newInstance(::java::lang::String* contextPath, ::java::lang::ClassLoader* classLoader, ::java::util::Map* properties)");
    return 0;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* javax::xml::bind::JAXBContext::class_()
{
    static ::java::lang::Class* c = ::class_(u"javax.xml.bind.JAXBContext", 26);
    return c;
}

java::lang::Class* javax::xml::bind::JAXBContext::getClass0()
{
    return class_();
}

