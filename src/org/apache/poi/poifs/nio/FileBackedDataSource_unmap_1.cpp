// Generated from /POI/java/org/apache/poi/poifs/nio/FileBackedDataSource.java
#include <org/apache/poi/poifs/nio/FileBackedDataSource_unmap_1.hpp>

#include <java/io/Serializable.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/Exception.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/reflect/AnnotatedElement.hpp>
#include <java/lang/reflect/GenericDeclaration.hpp>
#include <java/lang/reflect/Method.hpp>
#include <java/lang/reflect/Type.hpp>
#include <java/nio/ByteBuffer.hpp>
#include <org/apache/poi/poifs/nio/FileBackedDataSource.hpp>
#include <org/apache/poi/util/POILogger.hpp>
#include <SubArray.hpp>
#include <ObjectArray.hpp>

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

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::poifs::nio::FileBackedDataSource_unmap_1::FileBackedDataSource_unmap_1(::java::nio::ByteBuffer* buffer)
    : super(*static_cast< ::default_init_tag* >(0))
    , buffer(buffer)
{
    clinit();
    ctor();
}

java::lang::Void* org::apache::poi::poifs::nio::FileBackedDataSource_unmap_1::run()
{
    try {
        auto const getCleanerMethod = npc(npc(buffer)->getClass())->getMethod(u"cleaner"_j, new ::java::lang::ClassArray());
        npc(getCleanerMethod)->setAccessible(true);
        auto const cleaner = npc(getCleanerMethod)->invoke(buffer, new ::java::lang::ObjectArray());
        if(cleaner != nullptr) {
            npc(npc(npc(cleaner)->getClass())->getMethod(u"clean"_j, new ::java::lang::ClassArray()))->invoke(cleaner, new ::java::lang::ObjectArray());
        }
    } catch (::java::lang::Exception* e) {
        npc(FileBackedDataSource::logger())->log(::org::apache::poi::util::POILogger::WARN, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(u"Unable to unmap memory mapped ByteBuffer."_j), static_cast< ::java::lang::Object* >(e)}));
    }
    return nullptr;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::poifs::nio::FileBackedDataSource_unmap_1::class_()
{
    static ::java::lang::Class* c = ::class_(u"", 0);
    return c;
}

java::lang::Class* org::apache::poi::poifs::nio::FileBackedDataSource_unmap_1::getClass0()
{
    return class_();
}

