// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/lang/reflect/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <javax/xml/bind/fwd-POI.hpp>
#include <java/lang/Object.hpp>

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

struct default_init_tag;

class javax::xml::bind::JAXBContext
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    static ::java::lang::String* JAXB_CONTEXT_FACTORY_;

protected:
    void ctor();

public:
    virtual Binder* createBinder();
    virtual Binder* createBinder(::java::lang::Class* domType);
    virtual JAXBIntrospector* createJAXBIntrospector();
    virtual Marshaller* createMarshaller() = 0;
    virtual Unmarshaller* createUnmarshaller() = 0;
    virtual Validator* createValidator() = 0;
    virtual void generateSchema(SchemaOutputResolver* outputResolver);
    /*static ::java::lang::ClassLoader* getContextClassLoader(); (private) */
    static JAXBContext* newInstance(::java::lang::String* contextPath);
    static JAXBContext* newInstance(::java::lang::ClassArray* classesToBeBound);
    static JAXBContext* newInstance(::java::lang::String* contextPath, ::java::lang::ClassLoader* classLoader);
    static JAXBContext* newInstance(::java::lang::ClassArray* classesToBeBound, ::java::util::Map* properties);
    static JAXBContext* newInstance(::java::lang::String* contextPath, ::java::lang::ClassLoader* classLoader, ::java::util::Map* properties);

    // Generated

public: /* protected */
    JAXBContext();
protected:
    JAXBContext(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static ::java::lang::String*& JAXB_CONTEXT_FACTORY();

private:
    virtual ::java::lang::Class* getClass0();
};
