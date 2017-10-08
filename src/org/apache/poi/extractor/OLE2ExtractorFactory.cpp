// Generated from /POI/java/org/apache/poi/extractor/OLE2ExtractorFactory.java
#include <org/apache/poi/extractor/OLE2ExtractorFactory.hpp>

#include <java/io/Closeable.hpp>
#include <java/io/IOException.hpp>
#include <java/io/InputStream.hpp>
#include <java/io/Serializable.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/AutoCloseable.hpp>
#include <java/lang/Boolean.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/ClassLoader.hpp>
#include <java/lang/ClassNotFoundException.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/Exception.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/IllegalStateException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/lang/ThreadLocal.hpp>
#include <java/lang/Throwable.hpp>
#include <java/lang/reflect/AnnotatedElement.hpp>
#include <java/lang/reflect/GenericDeclaration.hpp>
#include <java/lang/reflect/Method.hpp>
#include <java/lang/reflect/Type.hpp>
#include <java/util/ArrayList.hpp>
#include <java/util/Iterator.hpp>
#include <java/util/List.hpp>
#include <org/apache/poi/EncryptedDocumentException.hpp>
#include <org/apache/poi/POIOLE2TextExtractor.hpp>
#include <org/apache/poi/POITextExtractor.hpp>
#include <org/apache/poi/extractor/OLE2ExtractorFactory_1.hpp>
#include <org/apache/poi/hssf/OldExcelFormatException.hpp>
#include <org/apache/poi/hssf/extractor/EventBasedExcelExtractor.hpp>
#include <org/apache/poi/hssf/extractor/ExcelExtractor.hpp>
#include <org/apache/poi/hssf/model/InternalWorkbook.hpp>
#include <org/apache/poi/hssf/record/crypto/Biff8EncryptionKey.hpp>
#include <org/apache/poi/poifs/crypt/Decryptor.hpp>
#include <org/apache/poi/poifs/crypt/EncryptionInfo.hpp>
#include <org/apache/poi/poifs/filesystem/DirectoryEntry.hpp>
#include <org/apache/poi/poifs/filesystem/DirectoryNode.hpp>
#include <org/apache/poi/poifs/filesystem/Entry.hpp>
#include <org/apache/poi/poifs/filesystem/NPOIFSFileSystem.hpp>
#include <org/apache/poi/poifs/filesystem/OPOIFSFileSystem.hpp>
#include <org/apache/poi/poifs/filesystem/POIFSFileSystem.hpp>
#include <org/apache/poi/util/IOUtils.hpp>
#include <org/apache/poi/util/POILogFactory.hpp>
#include <org/apache/poi/util/POILogger.hpp>
#include <SubArray.hpp>
#include <ObjectArray.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace lang
    {
typedef ::SubArray< ::java::lang::AutoCloseable, ObjectArray > AutoCloseableArray;
    } // lang

    namespace io
    {
typedef ::SubArray< ::java::io::Closeable, ::java::lang::ObjectArray, ::java::lang::AutoCloseableArray > CloseableArray;
typedef ::SubArray< ::java::io::Serializable, ::java::lang::ObjectArray > SerializableArray;
    } // io

    namespace lang
    {
typedef ::SubArray< ::java::lang::CharSequence, ObjectArray > CharSequenceArray;

        namespace reflect
        {
typedef ::SubArray< ::java::lang::reflect::AnnotatedElement, ::java::lang::ObjectArray > AnnotatedElementArray;
typedef ::SubArray< ::java::lang::reflect::GenericDeclaration, ::java::lang::ObjectArray, AnnotatedElementArray > GenericDeclarationArray;
typedef ::SubArray< ::java::lang::reflect::Type, ::java::lang::ObjectArray > TypeArray;
        } // reflect
typedef ::SubArray< ::java::lang::Class, ObjectArray, ::java::io::SerializableArray, ::java::lang::reflect::GenericDeclarationArray, ::java::lang::reflect::TypeArray, ::java::lang::reflect::AnnotatedElementArray > ClassArray;
typedef ::SubArray< ::java::lang::Comparable, ObjectArray > ComparableArray;
typedef ::SubArray< ::java::lang::String, ObjectArray, ::java::io::SerializableArray, ComparableArray, CharSequenceArray > StringArray;
    } // lang
} // java

namespace poi
{
typedef ::SubArray< ::poi::POITextExtractor, ::java::lang::ObjectArray, ::java::io::CloseableArray > POITextExtractorArray;
} // poi

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
poi::extractor::OLE2ExtractorFactory::OLE2ExtractorFactory(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::extractor::OLE2ExtractorFactory::OLE2ExtractorFactory()
    : OLE2ExtractorFactory(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::util::POILogger*& poi::extractor::OLE2ExtractorFactory::LOGGER()
{
    clinit();
    return LOGGER_;
}
poi::util::POILogger* poi::extractor::OLE2ExtractorFactory::LOGGER_;

java::lang::ThreadLocal*& poi::extractor::OLE2ExtractorFactory::threadPreferEventExtractors()
{
    clinit();
    return threadPreferEventExtractors_;
}
java::lang::ThreadLocal* poi::extractor::OLE2ExtractorFactory::threadPreferEventExtractors_;

java::lang::Boolean*& poi::extractor::OLE2ExtractorFactory::allPreferEventExtractors()
{
    clinit();
    return allPreferEventExtractors_;
}
java::lang::Boolean* poi::extractor::OLE2ExtractorFactory::allPreferEventExtractors_;

bool poi::extractor::OLE2ExtractorFactory::getThreadPrefersEventExtractors()
{
    clinit();
    return (npc(java_cast< ::java::lang::Boolean* >(npc(threadPreferEventExtractors_)->get())))->booleanValue();
}

java::lang::Boolean* poi::extractor::OLE2ExtractorFactory::getAllThreadsPreferEventExtractors()
{
    clinit();
    return allPreferEventExtractors_;
}

void poi::extractor::OLE2ExtractorFactory::setThreadPrefersEventExtractors(bool preferEventExtractors)
{
    clinit();
    npc(threadPreferEventExtractors_)->set(::java::lang::Boolean::valueOf(preferEventExtractors));
}

void poi::extractor::OLE2ExtractorFactory::setAllThreadsPreferEventExtractors(::java::lang::Boolean* preferEventExtractors)
{
    clinit();
    allPreferEventExtractors_ = preferEventExtractors;
}

bool poi::extractor::OLE2ExtractorFactory::getPreferEventExtractor()
{
    clinit();
    if(allPreferEventExtractors_ != nullptr) {
        return (npc(allPreferEventExtractors_))->booleanValue();
    }
    return (npc(java_cast< ::java::lang::Boolean* >(npc(threadPreferEventExtractors_)->get())))->booleanValue();
}

poi::POIOLE2TextExtractor* poi::extractor::OLE2ExtractorFactory::createExtractor(::poi::poifs::filesystem::POIFSFileSystem* fs) /* throws(IOException) */
{
    clinit();
    return java_cast< ::poi::POIOLE2TextExtractor* >(createExtractor(npc(fs)->getRoot()));
}

poi::POIOLE2TextExtractor* poi::extractor::OLE2ExtractorFactory::createExtractor(::poi::poifs::filesystem::NPOIFSFileSystem* fs) /* throws(IOException) */
{
    clinit();
    return java_cast< ::poi::POIOLE2TextExtractor* >(createExtractor(npc(fs)->getRoot()));
}

poi::POIOLE2TextExtractor* poi::extractor::OLE2ExtractorFactory::createExtractor(::poi::poifs::filesystem::OPOIFSFileSystem* fs) /* throws(IOException) */
{
    clinit();
    return java_cast< ::poi::POIOLE2TextExtractor* >(createExtractor(npc(fs)->getRoot()));
}

poi::POITextExtractor* poi::extractor::OLE2ExtractorFactory::createExtractor(::java::io::InputStream* input) /* throws(IOException) */
{
    clinit();
    auto cls = getOOXMLClass();
    if(cls != nullptr) {
        try {
            auto m = npc(cls)->getDeclaredMethod(u"createExtractor"_j, new ::java::lang::ClassArray({static_cast< ::java::lang::Class* >(::java::io::InputStream::class_())}));
            return java_cast< ::poi::POITextExtractor* >(npc(m)->invoke(nullptr, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(input)})));
        } catch (::java::lang::IllegalArgumentException* iae) {
            throw iae;
        } catch (::java::lang::Exception* e) {
            throw new ::java::lang::IllegalArgumentException(u"Error creating Extractor for InputStream"_j, e);
        }
    } else {
        return createExtractor(new ::poi::poifs::filesystem::NPOIFSFileSystem(input));
    }
}

java::lang::Class* poi::extractor::OLE2ExtractorFactory::getOOXMLClass()
{
    clinit();
    try {
        return npc(npc(OLE2ExtractorFactory::class_())->getClassLoader())->loadClass(u"org.apache.poi.extractor.ExtractorFactory"_j);
    } catch (::java::lang::ClassNotFoundException* e) {
        npc(LOGGER_)->log(::poi::util::POILogger::WARN, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(u"POI OOXML jar missing"_j)}));
        return nullptr;
    }
}

java::lang::Class* poi::extractor::OLE2ExtractorFactory::getScratchpadClass()
{
    clinit();
    try {
        return npc(npc(OLE2ExtractorFactory::class_())->getClassLoader())->loadClass(u"org.apache.poi.extractor.OLE2ScratchpadExtractorFactory"_j);
    } catch (::java::lang::ClassNotFoundException* e) {
        npc(LOGGER_)->log(::poi::util::POILogger::ERROR, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(u"POI Scratchpad jar missing"_j)}));
        throw new ::java::lang::IllegalStateException(u"POI Scratchpad jar missing, required for ExtractorFactory"_j);
    }
}

poi::POITextExtractor* poi::extractor::OLE2ExtractorFactory::createExtractor(::poi::poifs::filesystem::DirectoryNode* poifsDir) /* throws(IOException) */
{
    clinit();
    for(auto workbookName : *npc(::poi::hssf::model::InternalWorkbook::WORKBOOK_DIR_ENTRY_NAMES())) {
        if(npc(poifsDir)->hasEntry(workbookName)) {
            if(getPreferEventExtractor()) {
                return new ::poi::hssf::extractor::EventBasedExcelExtractor(poifsDir);
            }
            return new ::poi::hssf::extractor::ExcelExtractor(poifsDir);
        }
    }
    if(npc(poifsDir)->hasEntry(::poi::hssf::model::InternalWorkbook::OLD_WORKBOOK_DIR_ENTRY_NAME())) {
        throw new ::poi::hssf::OldExcelFormatException(::java::lang::StringBuilder().append(u"Old Excel Spreadsheet format (1-95) "_j)->append(u"found. Please call OldExcelExtractor directly for basic text extraction"_j)->toString());
    }
    auto cls = getScratchpadClass();
    try {
        auto m = npc(cls)->getDeclaredMethod(u"createExtractor"_j, new ::java::lang::ClassArray({static_cast< ::java::lang::Class* >(::poi::poifs::filesystem::DirectoryNode::class_())}));
        auto ext = java_cast< ::poi::POITextExtractor* >(npc(m)->invoke(nullptr, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(poifsDir)})));
        if(ext != nullptr)
            return ext;

    } catch (::java::lang::IllegalArgumentException* iae) {
        throw iae;
    } catch (::java::lang::Exception* e) {
        throw new ::java::lang::IllegalArgumentException(u"Error creating Scratchpad Extractor"_j, e);
    }
    throw new ::java::lang::IllegalArgumentException(u"No supported documents found in the OLE2 stream"_j);
}

poi::POITextExtractorArray* poi::extractor::OLE2ExtractorFactory::getEmbededDocsTextExtractors(::poi::POIOLE2TextExtractor* ext) /* throws(IOException) */
{
    clinit();
    ::java::util::List* dirs = new ::java::util::ArrayList();
    ::java::util::List* nonPOIFS = new ::java::util::ArrayList();
    auto root = npc(ext)->getRoot();
    if(root == nullptr) {
        throw new ::java::lang::IllegalStateException(u"The extractor didn't know which POIFS it came from!"_j);
    }
    if(dynamic_cast< ::poi::hssf::extractor::ExcelExtractor* >(ext) != nullptr) {
        auto it = npc(root)->getEntries();
        while (npc(it)->hasNext()) {
            auto entry = java_cast< ::poi::poifs::filesystem::Entry* >(npc(it)->next());
            if(npc(npc(entry)->getName())->startsWith(u"MBD"_j)) {
                npc(dirs)->add(static_cast< ::java::lang::Object* >(entry));
            }
        }
    } else {
        auto cls = getScratchpadClass();
        try {
            auto m = npc(cls)->getDeclaredMethod(u"identifyEmbeddedResources"_j, new ::java::lang::ClassArray({static_cast< ::java::lang::Class* >(::poi::POIOLE2TextExtractor::class_()), static_cast< ::java::lang::Class* >(::java::util::List::class_()), static_cast< ::java::lang::Class* >(::java::util::List::class_())}));
            npc(m)->invoke(nullptr, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(ext), static_cast< ::java::lang::Object* >(dirs), static_cast< ::java::lang::Object* >(nonPOIFS)}));
        } catch (::java::lang::Exception* e) {
            throw new ::java::lang::IllegalArgumentException(u"Error checking for Scratchpad embedded resources"_j, e);
        }
    }
    if(npc(dirs)->size() == 0 && npc(nonPOIFS)->size() == 0) {
        return new ::poi::POITextExtractorArray(int32_t(0));
    }
    auto e = new ::java::util::ArrayList();
    for (auto _i = npc(dirs)->iterator(); _i->hasNext(); ) {
        ::poi::poifs::filesystem::Entry* dir = java_cast< ::poi::poifs::filesystem::Entry* >(_i->next());
        {
            npc(e)->add(static_cast< ::java::lang::Object* >(createExtractor(java_cast< ::poi::poifs::filesystem::DirectoryNode* >(dir))));
        }
    }
    for (auto _i = npc(nonPOIFS)->iterator(); _i->hasNext(); ) {
        ::java::io::InputStream* nonPOIF = java_cast< ::java::io::InputStream* >(_i->next());
        {
            try {
                npc(e)->add(static_cast< ::java::lang::Object* >(createExtractor(nonPOIF)));
            } catch (::java::lang::IllegalArgumentException* ie) {
                npc(LOGGER_)->log(::poi::util::POILogger::WARN, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(ie)}));
            } catch (::java::lang::Exception* xe) {
                npc(LOGGER_)->log(::poi::util::POILogger::WARN, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(xe)}));
            }
        }
    }
    return java_cast< ::poi::POITextExtractorArray* >(npc(e)->toArray_(static_cast< ::java::lang::ObjectArray* >(new ::poi::POITextExtractorArray(npc(e)->size()))));
}

poi::POITextExtractor* poi::extractor::OLE2ExtractorFactory::createEncyptedOOXMLExtractor(::poi::poifs::filesystem::DirectoryNode* poifsDir) /* throws(IOException) */
{
    clinit();
    auto pass = ::poi::hssf::record::crypto::Biff8EncryptionKey::getCurrentUserPassword();
    if(pass == nullptr) {
        pass = ::poi::poifs::crypt::Decryptor::DEFAULT_PASSWORD();
    }
    auto ei = new ::poi::poifs::crypt::EncryptionInfo(poifsDir);
    auto dec = npc(ei)->getDecryptor();
    ::java::io::InputStream* is = nullptr;
    {
        auto finally0 = finally([&] {
            ::poi::util::IOUtils::closeQuietly(is);
        });
        try {
            if(!npc(dec)->verifyPassword(pass)) {
                throw new ::poi::EncryptedDocumentException(u"Invalid password specified - use Biff8EncryptionKey.setCurrentUserPassword() before calling extractor"_j);
            }
            is = npc(dec)->getDataStream(poifsDir);
            return createExtractor(is);
        } catch (::java::io::IOException* e) {
            throw e;
        } catch (::java::lang::Exception* e) {
            throw new ::java::io::IOException(static_cast< ::java::lang::Throwable* >(e));
        }
    }
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::extractor::OLE2ExtractorFactory::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.extractor.OLE2ExtractorFactory", 45);
    return c;
}

void poi::extractor::OLE2ExtractorFactory::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        LOGGER_ = ::poi::util::POILogFactory::getLogger(static_cast< ::java::lang::Class* >(OLE2ExtractorFactory::class_()));
        threadPreferEventExtractors_ = new OLE2ExtractorFactory_1();
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* poi::extractor::OLE2ExtractorFactory::getClass0()
{
    return class_();
}

