// Generated from /POI/java/org/apache/poi/POIDocument.java
#include <org/apache/poi/POIDocument.hpp>

#include <java/io/ByteArrayInputStream.hpp>
#include <java/io/ByteArrayOutputStream.hpp>
#include <java/io/IOException.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Exception.hpp>
#include <java/lang/IllegalStateException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/lang/Throwable.hpp>
#include <java/security/GeneralSecurityException.hpp>
#include <java/util/List.hpp>
#include <org/apache/poi/EncryptedDocumentException.hpp>
#include <org/apache/poi/hpsf/DocumentSummaryInformation.hpp>
#include <org/apache/poi/hpsf/PropertySet.hpp>
#include <org/apache/poi/hpsf/PropertySetFactory.hpp>
#include <org/apache/poi/hpsf/SummaryInformation.hpp>
#include <org/apache/poi/hpsf/WritingNotSupportedException.hpp>
#include <org/apache/poi/poifs/crypt/Decryptor.hpp>
#include <org/apache/poi/poifs/crypt/EncryptionInfo.hpp>
#include <org/apache/poi/poifs/crypt/EncryptionMode.hpp>
#include <org/apache/poi/poifs/crypt/Encryptor.hpp>
#include <org/apache/poi/poifs/crypt/cryptoapi/CryptoAPIDecryptor.hpp>
#include <org/apache/poi/poifs/crypt/cryptoapi/CryptoAPIEncryptor.hpp>
#include <org/apache/poi/poifs/filesystem/DirectoryEntry.hpp>
#include <org/apache/poi/poifs/filesystem/DirectoryNode.hpp>
#include <org/apache/poi/poifs/filesystem/DocumentInputStream.hpp>
#include <org/apache/poi/poifs/filesystem/Entry.hpp>
#include <org/apache/poi/poifs/filesystem/NPOIFSFileSystem.hpp>
#include <org/apache/poi/poifs/filesystem/OPOIFSFileSystem.hpp>
#include <org/apache/poi/poifs/filesystem/POIFSFileSystem.hpp>
#include <org/apache/poi/util/IOUtils.hpp>
#include <org/apache/poi/util/POILogFactory.hpp>
#include <org/apache/poi/util/POILogger.hpp>
#include <Array.hpp>
#include <ObjectArray.hpp>

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
poi::POIDocument::POIDocument(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::POIDocument::POIDocument(::poi::poifs::filesystem::DirectoryNode* dir) 
    : POIDocument(*static_cast< ::default_init_tag* >(0))
{
    ctor(dir);
}

poi::POIDocument::POIDocument(::poi::poifs::filesystem::OPOIFSFileSystem* fs) 
    : POIDocument(*static_cast< ::default_init_tag* >(0))
{
    ctor(fs);
}

poi::POIDocument::POIDocument(::poi::poifs::filesystem::NPOIFSFileSystem* fs) 
    : POIDocument(*static_cast< ::default_init_tag* >(0))
{
    ctor(fs);
}

poi::POIDocument::POIDocument(::poi::poifs::filesystem::POIFSFileSystem* fs) 
    : POIDocument(*static_cast< ::default_init_tag* >(0))
{
    ctor(fs);
}

poi::util::POILogger*& poi::POIDocument::logger()
{
    clinit();
    return logger_;
}
poi::util::POILogger* poi::POIDocument::logger_;

void poi::POIDocument::ctor(::poi::poifs::filesystem::DirectoryNode* dir)
{
    super::ctor();
    this->directory = dir;
}

void poi::POIDocument::ctor(::poi::poifs::filesystem::OPOIFSFileSystem* fs)
{
    ctor(npc(fs)->getRoot());
}

void poi::POIDocument::ctor(::poi::poifs::filesystem::NPOIFSFileSystem* fs)
{
    ctor(npc(fs)->getRoot());
}

void poi::POIDocument::ctor(::poi::poifs::filesystem::POIFSFileSystem* fs)
{
    ctor(npc(fs)->getRoot());
}

poi::hpsf::DocumentSummaryInformation* poi::POIDocument::getDocumentSummaryInformation()
{
    if(!initialized) {
        readProperties();
    }
    return dsInf;
}

poi::hpsf::SummaryInformation* poi::POIDocument::getSummaryInformation()
{
    if(!initialized) {
        readProperties();
    }
    return sInf;
}

void poi::POIDocument::createInformationProperties()
{
    if(!initialized) {
        readProperties();
    }
    if(sInf == nullptr) {
        sInf = ::poi::hpsf::PropertySetFactory::newSummaryInformation();
    }
    if(dsInf == nullptr) {
        dsInf = ::poi::hpsf::PropertySetFactory::newDocumentSummaryInformation();
    }
}

void poi::POIDocument::readProperties()
{
    if(initialized) {
        return;
    }
    auto dsi = java_cast< ::poi::hpsf::DocumentSummaryInformation* >(readPropertySet(::poi::hpsf::DocumentSummaryInformation::class_(), ::poi::hpsf::DocumentSummaryInformation::DEFAULT_STREAM_NAME()));
    if(dsi != nullptr) {
        dsInf = dsi;
    }
    auto si = java_cast< ::poi::hpsf::SummaryInformation* >(readPropertySet(::poi::hpsf::SummaryInformation::class_(), ::poi::hpsf::SummaryInformation::DEFAULT_STREAM_NAME()));
    if(si != nullptr) {
        sInf = si;
    }
    initialized = true;
}

/* <T> */java::lang::Object* poi::POIDocument::readPropertySet(::java::lang::Class* clazz, ::java::lang::String* name)
{
    auto localName = npc(npc(clazz)->getName())->substring(npc(npc(clazz)->getName())->lastIndexOf(static_cast< int32_t >(u'.')) + int32_t(1));
    try {
        auto ps = getPropertySet(name);
        if(npc(clazz)->isInstance(ps)) {
            return java_cast< ::java::lang::Object* >(ps);
        } else if(ps != nullptr) {
            npc(logger_)->log(::poi::util::POILogger::WARN, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(::java::lang::StringBuilder().append(localName)->append(u" property set came back with wrong class - "_j)
                ->append(npc(npc(ps)->getClass())->getName())->toString())}));
        } else {
            npc(logger_)->log(::poi::util::POILogger::WARN, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(::java::lang::StringBuilder().append(localName)->append(u" property set came back as null"_j)->toString())}));
        }
    } catch (::java::io::IOException* e) {
        npc(logger_)->log(::poi::util::POILogger::ERROR, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(u"can't retrieve property set"_j), static_cast< ::java::lang::Object* >(e)}));
    }
    return nullptr;
}

poi::hpsf::PropertySet* poi::POIDocument::getPropertySet(::java::lang::String* setName) /* throws(IOException) */
{
    return getPropertySet(setName, getEncryptionInfo());
}

poi::hpsf::PropertySet* poi::POIDocument::getPropertySet(::java::lang::String* setName, ::poi::poifs::crypt::EncryptionInfo* encryptionInfo) /* throws(IOException) */
{
    auto dirNode = directory;
    ::poi::poifs::filesystem::NPOIFSFileSystem* encPoifs = nullptr;
    auto step = u"getting"_j;
    {
        auto finally0 = finally([&] {
            ::poi::util::IOUtils::closeQuietly(encPoifs);
        });
        try {
            if(encryptionInfo != nullptr && npc(encryptionInfo)->isDocPropsEncrypted()) {
                step = u"getting encrypted"_j;
                auto encryptedStream = getEncryptedPropertyStreamName();
                if(!npc(dirNode)->hasEntry(encryptedStream)) {
                    throw new EncryptedDocumentException(::java::lang::StringBuilder().append(u"can't find encrypted property stream '"_j)->append(encryptedStream)
                        ->append(u"'"_j)->toString());
                }
                auto dec = java_cast< ::poi::poifs::crypt::cryptoapi::CryptoAPIDecryptor* >(npc(encryptionInfo)->getDecryptor());
                encPoifs = npc(dec)->getSummaryEntries(dirNode, encryptedStream);
                dirNode = npc(encPoifs)->getRoot();
            }
            if(dirNode == nullptr || !npc(dirNode)->hasEntry(setName)) {
                return nullptr;
            }
            step = u"getting"_j;
            auto dis = npc(dirNode)->createDocumentInputStream(npc(dirNode)->getEntry(setName));
            {
                auto finally1 = finally([&] {
                    npc(dis)->close();
                });
                {
                    step = u"creating"_j;
                    return ::poi::hpsf::PropertySetFactory::create(dis);
                }
            }

        } catch (::java::io::IOException* e) {
            throw e;
        } catch (::java::lang::Exception* e) {
            throw new ::java::io::IOException(::java::lang::StringBuilder().append(u"Error "_j)->append(step)
                ->append(u" property set with name "_j)
                ->append(setName)->toString(), e);
        }
    }
}

void poi::POIDocument::writeProperties() /* throws(IOException) */
{
    validateInPlaceWritePossible();
    writeProperties(npc(directory)->getFileSystem(), nullptr);
}

void poi::POIDocument::writeProperties(::poi::poifs::filesystem::NPOIFSFileSystem* outFS) /* throws(IOException) */
{
    writeProperties(outFS, nullptr);
}

void poi::POIDocument::writeProperties(::poi::poifs::filesystem::NPOIFSFileSystem* outFS, ::java::util::List* writtenEntries) /* throws(IOException) */
{
    auto ei = getEncryptionInfo();
    auto const encryptProps = (ei != nullptr && npc(ei)->isDocPropsEncrypted());
    auto fs = (encryptProps) ? new ::poi::poifs::filesystem::NPOIFSFileSystem() : outFS;
    auto si = getSummaryInformation();
    if(si != nullptr) {
        writePropertySet(::poi::hpsf::SummaryInformation::DEFAULT_STREAM_NAME(), si, fs);
        if(writtenEntries != nullptr) {
            npc(writtenEntries)->add(static_cast< ::java::lang::Object* >(::poi::hpsf::SummaryInformation::DEFAULT_STREAM_NAME()));
        }
    }
    auto dsi = getDocumentSummaryInformation();
    if(dsi != nullptr) {
        writePropertySet(::poi::hpsf::DocumentSummaryInformation::DEFAULT_STREAM_NAME(), dsi, fs);
        if(writtenEntries != nullptr) {
            npc(writtenEntries)->add(static_cast< ::java::lang::Object* >(::poi::hpsf::DocumentSummaryInformation::DEFAULT_STREAM_NAME()));
        }
    }
    if(!encryptProps) {
        return;
    }
    dsi = ::poi::hpsf::PropertySetFactory::newDocumentSummaryInformation();
    writePropertySet(::poi::hpsf::DocumentSummaryInformation::DEFAULT_STREAM_NAME(), dsi, outFS);
    if(npc(npc(outFS)->getRoot())->hasEntry(::poi::hpsf::SummaryInformation::DEFAULT_STREAM_NAME())) {
        npc(npc(npc(outFS)->getRoot())->getEntry(::poi::hpsf::SummaryInformation::DEFAULT_STREAM_NAME()))->delete_();
    }
    auto encGen = npc(ei)->getEncryptor();
    if(!(dynamic_cast< ::poi::poifs::crypt::cryptoapi::CryptoAPIEncryptor* >(encGen) != nullptr)) {
        throw new EncryptedDocumentException(::java::lang::StringBuilder().append(u"Using "_j)->append(static_cast< ::java::lang::Object* >(npc(ei)->getEncryptionMode()))
            ->append(u" encryption. Only CryptoAPI encryption supports encrypted property sets!"_j)->toString());
    }
    auto enc = java_cast< ::poi::poifs::crypt::cryptoapi::CryptoAPIEncryptor* >(encGen);
    {
        auto finally2 = finally([&] {
            npc(fs)->close();
        });
        try {
            npc(enc)->setSummaryEntries(npc(outFS)->getRoot(), getEncryptedPropertyStreamName(), fs);
        } catch (::java::security::GeneralSecurityException* e) {
            throw new ::java::io::IOException(static_cast< ::java::lang::Throwable* >(e));
        }
    }
}

void poi::POIDocument::writePropertySet(::java::lang::String* name, ::poi::hpsf::PropertySet* set, ::poi::poifs::filesystem::NPOIFSFileSystem* outFS) /* throws(IOException) */
{
    try {
        auto mSet = new ::poi::hpsf::PropertySet(set);
        auto bOut = new ::java::io::ByteArrayOutputStream();
        npc(mSet)->write(bOut);
        auto data = npc(bOut)->toByteArray_();
        auto bIn = new ::java::io::ByteArrayInputStream(data);
        npc(outFS)->createOrUpdateDocument(bIn, name);
        npc(logger_)->log(::poi::util::POILogger::INFO, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(::java::lang::StringBuilder().append(u"Wrote property set "_j)->append(name)
            ->append(u" of size "_j)
            ->append(npc(data)->length)->toString())}));
    } catch (::poi::hpsf::WritingNotSupportedException* wnse) {
        npc(logger_)->log(::poi::util::POILogger::ERROR, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(::java::lang::StringBuilder().append(u"Couldn't write property set with name "_j)->append(name)
            ->append(u" as not supported by HPSF yet"_j)->toString())}));
    }
}

void poi::POIDocument::validateInPlaceWritePossible() /* throws(IllegalStateException) */
{
    if(directory == nullptr) {
        throw new ::java::lang::IllegalStateException(u"Newly created Document, cannot save in-place"_j);
    }
    if(npc(directory)->getParent() != nullptr) {
        throw new ::java::lang::IllegalStateException(u"This is not the root Document, cannot save embedded resource in-place"_j);
    }
    if(npc(directory)->getFileSystem() == nullptr || !npc(npc(directory)->getFileSystem())->isInPlaceWriteable()) {
        throw new ::java::lang::IllegalStateException(u"Opened read-only or via an InputStream, a Writeable File is required"_j);
    }
}

void poi::POIDocument::close() /* throws(IOException) */
{
    if(directory != nullptr) {
        if(npc(directory)->getNFileSystem() != nullptr) {
            npc(npc(directory)->getNFileSystem())->close();
            clearDirectory();
        }
    }
}

poi::poifs::filesystem::DirectoryNode* poi::POIDocument::getDirectory()
{
    return directory;
}

void poi::POIDocument::clearDirectory()
{
    directory = nullptr;
}

bool poi::POIDocument::initDirectory()
{
    if(directory == nullptr) {
        directory = (new ::poi::poifs::filesystem::NPOIFSFileSystem())->getRoot();
        return true;
    }
    return false;
}

poi::poifs::filesystem::DirectoryNode* poi::POIDocument::replaceDirectory(::poi::poifs::filesystem::DirectoryNode* newDirectory)
{
    auto dn = directory;
    directory = newDirectory;
    return dn;
}

java::lang::String* poi::POIDocument::getEncryptedPropertyStreamName()
{
    return u"encryption"_j;
}

poi::poifs::crypt::EncryptionInfo* poi::POIDocument::getEncryptionInfo() /* throws(IOException) */
{
    return nullptr;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::POIDocument::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.POIDocument", 26);
    return c;
}

void poi::POIDocument::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        logger_ = ::poi::util::POILogFactory::getLogger(static_cast< ::java::lang::Class* >(POIDocument::class_()));
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* poi::POIDocument::getClass0()
{
    return class_();
}

