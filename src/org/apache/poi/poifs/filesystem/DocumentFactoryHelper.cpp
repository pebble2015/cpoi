// Generated from /POI/java/org/apache/poi/poifs/filesystem/DocumentFactoryHelper.java
#include <org/apache/poi/poifs/filesystem/DocumentFactoryHelper.hpp>

#include <java/io/IOException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/Throwable.hpp>
#include <java/security/GeneralSecurityException.hpp>
#include <org/apache/poi/EncryptedDocumentException.hpp>
#include <org/apache/poi/poifs/crypt/Decryptor.hpp>
#include <org/apache/poi/poifs/crypt/EncryptionInfo.hpp>
#include <org/apache/poi/poifs/filesystem/DocumentFactoryHelper_getDecryptedStream_1.hpp>
#include <org/apache/poi/poifs/filesystem/FileMagic.hpp>
#include <org/apache/poi/poifs/filesystem/NPOIFSFileSystem.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::poifs::filesystem::DocumentFactoryHelper::DocumentFactoryHelper(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::poifs::filesystem::DocumentFactoryHelper::DocumentFactoryHelper()
    : DocumentFactoryHelper(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

java::io::InputStream* org::apache::poi::poifs::filesystem::DocumentFactoryHelper::getDecryptedStream(NPOIFSFileSystem* fs, ::java::lang::String* password) /* throws(IOException) */
{
    clinit();
    auto info = new ::org::apache::poi::poifs::crypt::EncryptionInfo(fs);
    auto d = ::org::apache::poi::poifs::crypt::Decryptor::getInstance(info);
    try {
        auto passwordCorrect = false;
        if(password != nullptr && npc(d)->verifyPassword(password)) {
            passwordCorrect = true;
        }
        if(!passwordCorrect && npc(d)->verifyPassword(::org::apache::poi::poifs::crypt::Decryptor::DEFAULT_PASSWORD())) {
            passwordCorrect = true;
        }
        if(passwordCorrect) {
            return new DocumentFactoryHelper_getDecryptedStream_1(fs, npc(d)->getDataStream(npc(fs)->getRoot()));
        } else {
            if(password != nullptr)
                throw new ::org::apache::poi::EncryptedDocumentException(u"Password incorrect"_j);
            else
                throw new ::org::apache::poi::EncryptedDocumentException(u"The supplied spreadsheet is protected, but no password was supplied"_j);
        }
    } catch (::java::security::GeneralSecurityException* e) {
        throw new ::java::io::IOException(static_cast< ::java::lang::Throwable* >(e));
    }
}

bool org::apache::poi::poifs::filesystem::DocumentFactoryHelper::hasOOXMLHeader(::java::io::InputStream* inp) /* throws(IOException) */
{
    clinit();
    return FileMagic::valueOf(inp) == FileMagic::OOXML;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::poifs::filesystem::DocumentFactoryHelper::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.poifs.filesystem.DocumentFactoryHelper", 53);
    return c;
}

java::lang::Class* org::apache::poi::poifs::filesystem::DocumentFactoryHelper::getClass0()
{
    return class_();
}

