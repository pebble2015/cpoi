// Generated from /POI/java/org/apache/poi/sl/usermodel/SlideShowFactory.java
#include <org/apache/poi/sl/usermodel/SlideShowFactory.hpp>

#include <java/io/File.hpp>
#include <java/io/FileNotFoundException.hpp>
#include <java/io/IOException.hpp>
#include <java/io/InputStream.hpp>
#include <java/io/Serializable.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/Boolean.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/ClassLoader.hpp>
#include <java/lang/Exception.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/RuntimeException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/Thread.hpp>
#include <java/lang/Throwable.hpp>
#include <java/lang/reflect/AnnotatedElement.hpp>
#include <java/lang/reflect/GenericDeclaration.hpp>
#include <java/lang/reflect/InvocationTargetException.hpp>
#include <java/lang/reflect/Method.hpp>
#include <java/lang/reflect/Type.hpp>
#include <org/apache/poi/EncryptedDocumentException.hpp>
#include <org/apache/poi/OldFileFormatException.hpp>
#include <org/apache/poi/hssf/record/crypto/Biff8EncryptionKey.hpp>
#include <org/apache/poi/poifs/crypt/Decryptor.hpp>
#include <org/apache/poi/poifs/filesystem/DirectoryNode.hpp>
#include <org/apache/poi/poifs/filesystem/DocumentFactoryHelper.hpp>
#include <org/apache/poi/poifs/filesystem/FileMagic.hpp>
#include <org/apache/poi/poifs/filesystem/NPOIFSFileSystem.hpp>
#include <org/apache/poi/poifs/filesystem/OfficeXmlFileException.hpp>
#include <org/apache/poi/sl/usermodel/SlideShow.hpp>
#include <org/apache/poi/util/IOUtils.hpp>
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

template<typename T, typename U>
static T java_cast(U* u)
{
    if(!u) return static_cast<T>(nullptr);
    auto t = dynamic_cast<T>(u);
    if(!t) throw new ::java::lang::ClassCastException();
    return t;
}

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

namespace
{
    template<typename F>
    struct finally_
    {
        finally_(F f) : f(f), moved(false) { }
        finally_(finally_ &&x) : f(x.f), moved(false) { x.moved = true; }
        ~finally_() { if(!moved) f(); }
    private:
        finally_(const finally_&); finally_& operator=(const finally_&);
        F f;
        bool moved;
    };

    template<typename F> finally_<F> finally(F f) { return finally_<F>(f); }
}
org::apache::poi::sl::usermodel::SlideShowFactory::SlideShowFactory(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::sl::usermodel::SlideShowFactory::SlideShowFactory()
    : SlideShowFactory(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::sl::usermodel::SlideShow* org::apache::poi::sl::usermodel::SlideShowFactory::create(::org::apache::poi::poifs::filesystem::NPOIFSFileSystem* fs) /* throws(IOException) */
{
    clinit();
    return create(fs, static_cast< ::java::lang::String* >(nullptr));
}

org::apache::poi::sl::usermodel::SlideShow* org::apache::poi::sl::usermodel::SlideShowFactory::create(::org::apache::poi::poifs::filesystem::NPOIFSFileSystem* fs, ::java::lang::String* password) /* throws(IOException) */
{
    clinit();
    auto root = npc(fs)->getRoot();
    if(npc(root)->hasEntry(::org::apache::poi::poifs::crypt::Decryptor::DEFAULT_POIFS_ENTRY())) {
        ::java::io::InputStream* stream = nullptr;
        {
            auto finally0 = finally([&] {
                ::org::apache::poi::util::IOUtils::closeQuietly(stream);
            });
            {
                stream = ::org::apache::poi::poifs::filesystem::DocumentFactoryHelper::getDecryptedStream(fs, password);
                return createXSLFSlideShow(new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(stream)}));
            }
        }

    }
    auto passwordSet = false;
    if(password != nullptr) {
        ::org::apache::poi::hssf::record::crypto::Biff8EncryptionKey::setCurrentUserPassword(password);
        passwordSet = true;
    }
    {
        auto finally1 = finally([&] {
            if(passwordSet) {
                ::org::apache::poi::hssf::record::crypto::Biff8EncryptionKey::setCurrentUserPassword(nullptr);
            }
        });
        {
            return createHSLFSlideShow(new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(fs)}));
        }
    }

}

org::apache::poi::sl::usermodel::SlideShow* org::apache::poi::sl::usermodel::SlideShowFactory::create(::java::io::InputStream* inp) /* throws(IOException, EncryptedDocumentException) */
{
    clinit();
    return create(inp, static_cast< ::java::lang::String* >(nullptr));
}

org::apache::poi::sl::usermodel::SlideShow* org::apache::poi::sl::usermodel::SlideShowFactory::create(::java::io::InputStream* inp, ::java::lang::String* password) /* throws(IOException, EncryptedDocumentException) */
{
    clinit();
    auto is = ::org::apache::poi::poifs::filesystem::FileMagic::prepareToCheckMagic(inp);
    auto fm = ::org::apache::poi::poifs::filesystem::FileMagic::valueOf(is);
    {
        ::org::apache::poi::poifs::filesystem::NPOIFSFileSystem* fs;
        {
            auto v = fm;
            if((v == ::org::apache::poi::poifs::filesystem::FileMagic::OLE2)) {
                auto fs = new ::org::apache::poi::poifs::filesystem::NPOIFSFileSystem(is);
                return create(fs, password);
            }
            if((v == ::org::apache::poi::poifs::filesystem::FileMagic::OOXML)) {
                return createXSLFSlideShow(new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(is)}));
            }
            if((((v != ::org::apache::poi::poifs::filesystem::FileMagic::OLE2) && (v != ::org::apache::poi::poifs::filesystem::FileMagic::OOXML)))) {
                throw new ::java::lang::IllegalArgumentException(u"Your InputStream was neither an OLE2 stream, nor an OOXML stream"_j);
            }
end_switch0:;
        }
    }

}

org::apache::poi::sl::usermodel::SlideShow* org::apache::poi::sl::usermodel::SlideShowFactory::create(::java::io::File* file) /* throws(IOException, EncryptedDocumentException) */
{
    clinit();
    return create(file, static_cast< ::java::lang::String* >(nullptr));
}

org::apache::poi::sl::usermodel::SlideShow* org::apache::poi::sl::usermodel::SlideShowFactory::create(::java::io::File* file, ::java::lang::String* password) /* throws(IOException, EncryptedDocumentException) */
{
    clinit();
    return create(file, password, false);
}

org::apache::poi::sl::usermodel::SlideShow* org::apache::poi::sl::usermodel::SlideShowFactory::create(::java::io::File* file, ::java::lang::String* password, bool readOnly) /* throws(IOException, EncryptedDocumentException) */
{
    clinit();
    if(!npc(file)->exists()) {
        throw new ::java::io::FileNotFoundException(npc(file)->toString());
    }
    ::org::apache::poi::poifs::filesystem::NPOIFSFileSystem* fs = nullptr;
    try {
        fs = new ::org::apache::poi::poifs::filesystem::NPOIFSFileSystem(file, readOnly);
        return create(fs, password);
    } catch (::org::apache::poi::poifs::filesystem::OfficeXmlFileException* e) {
        ::org::apache::poi::util::IOUtils::closeQuietly(fs);
        return createXSLFSlideShow(new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(file), static_cast< ::java::lang::Object* >(::java::lang::Boolean::valueOf(readOnly))}));
    } catch (::java::lang::RuntimeException* e) {
        ::org::apache::poi::util::IOUtils::closeQuietly(fs);
        throw e;
    }
}

org::apache::poi::sl::usermodel::SlideShow* org::apache::poi::sl::usermodel::SlideShowFactory::createHSLFSlideShow(::java::lang::ObjectArray*/*...*/ args) /* throws(IOException, EncryptedDocumentException) */
{
    clinit();
    return createSlideShow(u"org.apache.poi.hslf.usermodel.HSLFSlideShowFactory"_j, args);
}

org::apache::poi::sl::usermodel::SlideShow* org::apache::poi::sl::usermodel::SlideShowFactory::createXSLFSlideShow(::java::lang::ObjectArray*/*...*/ args) /* throws(IOException, EncryptedDocumentException) */
{
    clinit();
    return createSlideShow(u"org.apache.poi.xslf.usermodel.XSLFSlideShowFactory"_j, args);
}

org::apache::poi::sl::usermodel::SlideShow* org::apache::poi::sl::usermodel::SlideShowFactory::createSlideShow(::java::lang::String* factoryClass, ::java::lang::ObjectArray* args) /* throws(IOException, EncryptedDocumentException) */
{
    clinit();
    try {
        auto clazz = npc(npc(::java::lang::Thread::currentThread())->getContextClassLoader())->loadClass(factoryClass);
        auto argsClz = new ::java::lang::ClassArray(npc(args)->length);
        auto i = int32_t(0);
        for(auto o : *npc(args)) {
            auto c = npc(o)->getClass();
            if(npc(::java::lang::Boolean::class_())->isAssignableFrom(c)) {
                c = ::java::lang::Boolean::TYPE();
            } else if(npc(::java::io::InputStream::class_())->isAssignableFrom(c)) {
                c = ::java::io::InputStream::class_();
            }
            argsClz->set(i++, c);
        }
        auto m = npc(clazz)->getMethod(u"createSlideShow"_j, argsClz);
        return java_cast< SlideShow* >(npc(m)->invoke(nullptr, args));
    } catch (::java::lang::reflect::InvocationTargetException* e) {
        auto t = npc(e)->getCause();
        if(dynamic_cast< ::java::io::IOException* >(t) != nullptr) {
            throw java_cast< ::java::io::IOException* >(t);
        } else if(dynamic_cast< ::org::apache::poi::EncryptedDocumentException* >(t) != nullptr) {
            throw java_cast< ::org::apache::poi::EncryptedDocumentException* >(t);
        } else if(dynamic_cast< ::org::apache::poi::OldFileFormatException* >(t) != nullptr) {
            throw java_cast< ::org::apache::poi::OldFileFormatException* >(t);
        } else {
            throw new ::java::io::IOException(t);
        }
    } catch (::java::lang::Exception* e) {
        throw new ::java::io::IOException(static_cast< ::java::lang::Throwable* >(e));
    }
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::sl::usermodel::SlideShowFactory::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.sl.usermodel.SlideShowFactory", 44);
    return c;
}

java::lang::Class* org::apache::poi::sl::usermodel::SlideShowFactory::getClass0()
{
    return class_();
}

