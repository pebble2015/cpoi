// Generated from /POI/java/org/apache/poi/poifs/crypt/standard/StandardEncryptor.java
#include <org/apache/poi/poifs/crypt/standard/StandardEncryptor_StandardCipherOutputStream.hpp>

#include <java/io/File.hpp>
#include <java/io/FileInputStream.hpp>
#include <java/io/FileOutputStream.hpp>
#include <java/io/IOException.hpp>
#include <java/io/OutputStream.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/lang/Throwable.hpp>
#include <javax/crypto/CipherOutputStream.hpp>
#include <org/apache/poi/EncryptedDocumentException.hpp>
#include <org/apache/poi/poifs/crypt/Encryptor.hpp>
#include <org/apache/poi/poifs/crypt/standard/StandardEncryptor.hpp>
#include <org/apache/poi/poifs/filesystem/DirectoryNode.hpp>
#include <org/apache/poi/poifs/filesystem/DocumentOutputStream.hpp>
#include <org/apache/poi/poifs/filesystem/POIFSWriterEvent.hpp>
#include <org/apache/poi/poifs/filesystem/POIFSWriterListener.hpp>
#include <org/apache/poi/util/IOUtils.hpp>
#include <org/apache/poi/util/LittleEndianConsts.hpp>
#include <org/apache/poi/util/LittleEndianOutputStream.hpp>
#include <org/apache/poi/util/POILogger.hpp>
#include <org/apache/poi/util/TempFile.hpp>
#include <ObjectArray.hpp>

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
poi::poifs::crypt::standard::StandardEncryptor_StandardCipherOutputStream::StandardEncryptor_StandardCipherOutputStream(StandardEncryptor *StandardEncryptor_this, const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
    , StandardEncryptor_this(StandardEncryptor_this)
{
    clinit();
}

poi::poifs::crypt::standard::StandardEncryptor_StandardCipherOutputStream::StandardEncryptor_StandardCipherOutputStream(StandardEncryptor *StandardEncryptor_this, ::poi::poifs::filesystem::DirectoryNode* dir, ::java::io::File* fileOut)  /* throws(IOException) */
    : StandardEncryptor_StandardCipherOutputStream(StandardEncryptor_this, *static_cast< ::default_init_tag* >(0))
{
    ctor(dir,fileOut);
}

poi::poifs::crypt::standard::StandardEncryptor_StandardCipherOutputStream::StandardEncryptor_StandardCipherOutputStream(StandardEncryptor *StandardEncryptor_this, ::poi::poifs::filesystem::DirectoryNode* dir)  /* throws(IOException) */
    : StandardEncryptor_StandardCipherOutputStream(StandardEncryptor_this, *static_cast< ::default_init_tag* >(0))
{
    ctor(dir);
}

void poi::poifs::crypt::standard::StandardEncryptor_StandardCipherOutputStream::ctor(::poi::poifs::filesystem::DirectoryNode* dir, ::java::io::File* fileOut) /* throws(IOException) */
{
    super::ctor(new ::javax::crypto::CipherOutputStream(new ::java::io::FileOutputStream(fileOut), StandardEncryptor_this->getCipher(StandardEncryptor_this->getSecretKey(), u"PKCS5Padding"_j)));
    this->fileOut = fileOut;
    this->dir = dir;
}

void poi::poifs::crypt::standard::StandardEncryptor_StandardCipherOutputStream::ctor(::poi::poifs::filesystem::DirectoryNode* dir) /* throws(IOException) */
{
    ctor(dir, ::poi::util::TempFile::createTempFile(u"encrypted_package"_j, u"crypt"_j));
}

void poi::poifs::crypt::standard::StandardEncryptor_StandardCipherOutputStream::write(::int8_tArray* b, int32_t off, int32_t len) /* throws(IOException) */
{
    npc(out)->write(b, off, len);
    countBytes += len;
}

void poi::poifs::crypt::standard::StandardEncryptor_StandardCipherOutputStream::write(int32_t b) /* throws(IOException) */
{
    npc(out)->write(b);
    countBytes++;
}

void poi::poifs::crypt::standard::StandardEncryptor_StandardCipherOutputStream::close() /* throws(IOException) */
{
    super::close();
    writeToPOIFS();
}

void poi::poifs::crypt::standard::StandardEncryptor_StandardCipherOutputStream::writeToPOIFS() /* throws(IOException) */
{
    auto oleStreamSize = static_cast< int32_t >((npc(fileOut)->length() + ::poi::util::LittleEndianConsts::LONG_SIZE));
    npc(dir)->createDocument(::poi::poifs::crypt::Encryptor::DEFAULT_POIFS_ENTRY(), oleStreamSize, static_cast< ::poi::poifs::filesystem::POIFSWriterListener* >(this));
}

void poi::poifs::crypt::standard::StandardEncryptor_StandardCipherOutputStream::processPOIFSWriterEvent(::poi::poifs::filesystem::POIFSWriterEvent* event)
{
    try {
        auto leos = new ::poi::util::LittleEndianOutputStream(npc(event)->getStream());
        npc(leos)->writeLong(countBytes);
        auto fis = new ::java::io::FileInputStream(fileOut);
        {
            auto finally0 = finally([&] {
                npc(fis)->close();
            });
            {
                ::poi::util::IOUtils::copy(fis, leos);
            }
        }

        if(!npc(fileOut)->delete_()) {
            npc(StandardEncryptor::logger())->log(::poi::util::POILogger::ERROR, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(::java::lang::StringBuilder().append(u"Can't delete temporary encryption file: "_j)->append(static_cast< ::java::lang::Object* >(fileOut))->toString())}));
        }
        npc(leos)->close();
    } catch (::java::io::IOException* e) {
        throw new ::poi::EncryptedDocumentException(static_cast< ::java::lang::Throwable* >(e));
    }
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::poifs::crypt::standard::StandardEncryptor_StandardCipherOutputStream::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.poifs.crypt.standard.StandardEncryptor.StandardCipherOutputStream", 80);
    return c;
}

void poi::poifs::crypt::standard::StandardEncryptor_StandardCipherOutputStream::write(::int8_tArray* b)
{
    super::write(b);
}

java::lang::Class* poi::poifs::crypt::standard::StandardEncryptor_StandardCipherOutputStream::getClass0()
{
    return class_();
}

