// Generated from /POI/java/org/apache/poi/ddf/DefaultEscherRecordFactory.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/lang/reflect/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/ddf/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/ddf/EscherRecordFactory.hpp>

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

class poi::ddf::DefaultEscherRecordFactory
    : public virtual ::java::lang::Object
    , public virtual EscherRecordFactory
{

public:
    typedef ::java::lang::Object super;

private:
    static ::java::lang::ClassArray* escherRecordClasses_;
    static ::java::util::Map* recordsMap_;
protected:
    void ctor();

public:
    EscherRecord* createRecord(::int8_tArray* data, int32_t offset) override;

public: /* protected */
    static ::java::util::Map* recordsToMap(::java::lang::ClassArray* recClasses);

public:
    static bool isContainer(int16_t options, int16_t recordId);

    // Generated
    DefaultEscherRecordFactory();
protected:
    DefaultEscherRecordFactory(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    static ::java::lang::ClassArray*& escherRecordClasses();
    static ::java::util::Map*& recordsMap();
    virtual ::java::lang::Class* getClass0();
};
