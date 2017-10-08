// Generated from /POI/java/org/apache/poi/poifs/crypt/EncryptionInfo.java
#include <org/apache/poi/poifs/crypt/EncryptionInfo.hpp>

#include <java/io/IOException.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/ClassLoader.hpp>
#include <java/lang/Exception.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/lang/Thread.hpp>
#include <java/lang/Throwable.hpp>
#include <org/apache/poi/EncryptedDocumentException.hpp>
#include <org/apache/poi/poifs/crypt/Decryptor.hpp>
#include <org/apache/poi/poifs/crypt/EncryptionHeader.hpp>
#include <org/apache/poi/poifs/crypt/EncryptionInfoBuilder.hpp>
#include <org/apache/poi/poifs/crypt/EncryptionMode.hpp>
#include <org/apache/poi/poifs/crypt/EncryptionVerifier.hpp>
#include <org/apache/poi/poifs/crypt/Encryptor.hpp>
#include <org/apache/poi/poifs/filesystem/DirectoryNode.hpp>
#include <org/apache/poi/poifs/filesystem/DocumentInputStream.hpp>
#include <org/apache/poi/poifs/filesystem/NPOIFSFileSystem.hpp>
#include <org/apache/poi/poifs/filesystem/OPOIFSFileSystem.hpp>
#include <org/apache/poi/poifs/filesystem/POIFSFileSystem.hpp>
#include <org/apache/poi/util/BitField.hpp>
#include <org/apache/poi/util/BitFieldFactory.hpp>
#include <org/apache/poi/util/LittleEndianInput.hpp>

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

poi::poifs::crypt::EncryptionInfo::EncryptionInfo(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::poifs::crypt::EncryptionInfo::EncryptionInfo(::poi::poifs::filesystem::POIFSFileSystem* fs)  /* throws(IOException) */
    : EncryptionInfo(*static_cast< ::default_init_tag* >(0))
{
    ctor(fs);
}

poi::poifs::crypt::EncryptionInfo::EncryptionInfo(::poi::poifs::filesystem::OPOIFSFileSystem* fs)  /* throws(IOException) */
    : EncryptionInfo(*static_cast< ::default_init_tag* >(0))
{
    ctor(fs);
}

poi::poifs::crypt::EncryptionInfo::EncryptionInfo(::poi::poifs::filesystem::NPOIFSFileSystem* fs)  /* throws(IOException) */
    : EncryptionInfo(*static_cast< ::default_init_tag* >(0))
{
    ctor(fs);
}

poi::poifs::crypt::EncryptionInfo::EncryptionInfo(::poi::poifs::filesystem::DirectoryNode* dir)  /* throws(IOException) */
    : EncryptionInfo(*static_cast< ::default_init_tag* >(0))
{
    ctor(dir);
}

poi::poifs::crypt::EncryptionInfo::EncryptionInfo(::poi::util::LittleEndianInput* dis, EncryptionMode* preferredEncryptionMode)  /* throws(IOException) */
    : EncryptionInfo(*static_cast< ::default_init_tag* >(0))
{
    ctor(dis,preferredEncryptionMode);
}

poi::poifs::crypt::EncryptionInfo::EncryptionInfo(EncryptionMode* encryptionMode) 
    : EncryptionInfo(*static_cast< ::default_init_tag* >(0))
{
    ctor(encryptionMode);
}

poi::poifs::crypt::EncryptionInfo::EncryptionInfo(EncryptionMode* encryptionMode, CipherAlgorithm* cipherAlgorithm, HashAlgorithm* hashAlgorithm, int32_t keyBits, int32_t blockSize, ChainingMode* chainingMode) 
    : EncryptionInfo(*static_cast< ::default_init_tag* >(0))
{
    ctor(encryptionMode,cipherAlgorithm,hashAlgorithm,keyBits,blockSize,chainingMode);
}

poi::util::BitField*& poi::poifs::crypt::EncryptionInfo::flagCryptoAPI()
{
    clinit();
    return flagCryptoAPI_;
}
poi::util::BitField* poi::poifs::crypt::EncryptionInfo::flagCryptoAPI_;

poi::util::BitField*& poi::poifs::crypt::EncryptionInfo::flagDocProps()
{
    clinit();
    return flagDocProps_;
}
poi::util::BitField* poi::poifs::crypt::EncryptionInfo::flagDocProps_;

poi::util::BitField*& poi::poifs::crypt::EncryptionInfo::flagExternal()
{
    clinit();
    return flagExternal_;
}
poi::util::BitField* poi::poifs::crypt::EncryptionInfo::flagExternal_;

poi::util::BitField*& poi::poifs::crypt::EncryptionInfo::flagAES()
{
    clinit();
    return flagAES_;
}
poi::util::BitField* poi::poifs::crypt::EncryptionInfo::flagAES_;

void poi::poifs::crypt::EncryptionInfo::ctor(::poi::poifs::filesystem::POIFSFileSystem* fs) /* throws(IOException) */
{
    ctor(npc(fs)->getRoot());
}

void poi::poifs::crypt::EncryptionInfo::ctor(::poi::poifs::filesystem::OPOIFSFileSystem* fs) /* throws(IOException) */
{
    ctor(npc(fs)->getRoot());
}

void poi::poifs::crypt::EncryptionInfo::ctor(::poi::poifs::filesystem::NPOIFSFileSystem* fs) /* throws(IOException) */
{
    ctor(npc(fs)->getRoot());
}

void poi::poifs::crypt::EncryptionInfo::ctor(::poi::poifs::filesystem::DirectoryNode* dir) /* throws(IOException) */
{
    ctor(npc(dir)->createDocumentInputStream(u"EncryptionInfo"_j), nullptr);
}

void poi::poifs::crypt::EncryptionInfo::ctor(::poi::util::LittleEndianInput* dis, EncryptionMode* preferredEncryptionMode) /* throws(IOException) */
{
    super::ctor();
    if(preferredEncryptionMode == EncryptionMode::xor_) {
        versionMajor = npc(EncryptionMode::xor_)->versionMajor;
        versionMinor = npc(EncryptionMode::xor_)->versionMinor;
    } else {
        versionMajor = npc(dis)->readUShort();
        versionMinor = npc(dis)->readUShort();
    }
    if(versionMajor == npc(EncryptionMode::xor_)->versionMajor && versionMinor == npc(EncryptionMode::xor_)->versionMinor) {
        encryptionMode = EncryptionMode::xor_;
        encryptionFlags = -int32_t(1);
    } else if(versionMajor == npc(EncryptionMode::binaryRC4)->versionMajor && versionMinor == npc(EncryptionMode::binaryRC4)->versionMinor) {
        encryptionMode = EncryptionMode::binaryRC4;
        encryptionFlags = -int32_t(1);
    } else if(2 <= versionMajor && versionMajor <= 4 && versionMinor == 2) {
        encryptionFlags = npc(dis)->readInt();
        encryptionMode = (preferredEncryptionMode == EncryptionMode::cryptoAPI || !npc(flagAES_)->isSet(encryptionFlags)) ? EncryptionMode::cryptoAPI : EncryptionMode::standard;
    } else if(versionMajor == npc(EncryptionMode::agile)->versionMajor && versionMinor == npc(EncryptionMode::agile)->versionMinor) {
        encryptionMode = EncryptionMode::agile;
        encryptionFlags = npc(dis)->readInt();
    } else {
        encryptionFlags = npc(dis)->readInt();
        throw new ::poi::EncryptedDocumentException(::java::lang::StringBuilder().append(u"Unknown encryption: version major: "_j)->append(versionMajor)
            ->append(u" / version minor: "_j)
            ->append(versionMinor)
            ->append(u" / fCrypto: "_j)
            ->append(npc(flagCryptoAPI_)->isSet(encryptionFlags))
            ->append(u" / fExternal: "_j)
            ->append(npc(flagExternal_)->isSet(encryptionFlags))
            ->append(u" / fDocProps: "_j)
            ->append(npc(flagDocProps_)->isSet(encryptionFlags))
            ->append(u" / fAES: "_j)
            ->append(npc(flagAES_)->isSet(encryptionFlags))->toString());
    }
    EncryptionInfoBuilder* eib;
    try {
        eib = getBuilder(encryptionMode);
    } catch (::java::lang::Exception* e) {
        throw new ::java::io::IOException(static_cast< ::java::lang::Throwable* >(e));
    }
    npc(eib)->initialize(this, dis);
}

void poi::poifs::crypt::EncryptionInfo::ctor(EncryptionMode* encryptionMode)
{
    ctor(encryptionMode, nullptr, nullptr, -int32_t(1), -int32_t(1), nullptr);
}

void poi::poifs::crypt::EncryptionInfo::ctor(EncryptionMode* encryptionMode, CipherAlgorithm* cipherAlgorithm, HashAlgorithm* hashAlgorithm, int32_t keyBits, int32_t blockSize, ChainingMode* chainingMode)
{
    super::ctor();
    this->encryptionMode = encryptionMode;
    versionMajor = npc(encryptionMode)->versionMajor;
    versionMinor = npc(encryptionMode)->versionMinor;
    encryptionFlags = npc(encryptionMode)->encryptionFlags;
    EncryptionInfoBuilder* eib;
    try {
        eib = getBuilder(encryptionMode);
    } catch (::java::lang::Exception* e) {
        throw new ::poi::EncryptedDocumentException(static_cast< ::java::lang::Throwable* >(e));
    }
    npc(eib)->initialize(this, cipherAlgorithm, hashAlgorithm, keyBits, blockSize, chainingMode);
}

poi::poifs::crypt::EncryptionInfoBuilder* poi::poifs::crypt::EncryptionInfo::getBuilder(EncryptionMode* encryptionMode) /* throws(ClassNotFoundException, IllegalAccessException, InstantiationException) */
{
    clinit();
    auto cl = npc(::java::lang::Thread::currentThread())->getContextClassLoader();
    EncryptionInfoBuilder* eib;
    eib = java_cast< EncryptionInfoBuilder* >(java_cast< ::java::lang::Object* >(npc(npc(cl)->loadClass(npc(encryptionMode)->builder))->newInstance()));
    return eib;
}

int32_t poi::poifs::crypt::EncryptionInfo::getVersionMajor()
{
    return versionMajor;
}

int32_t poi::poifs::crypt::EncryptionInfo::getVersionMinor()
{
    return versionMinor;
}

int32_t poi::poifs::crypt::EncryptionInfo::getEncryptionFlags()
{
    return encryptionFlags;
}

poi::poifs::crypt::EncryptionHeader* poi::poifs::crypt::EncryptionInfo::getHeader()
{
    return header;
}

poi::poifs::crypt::EncryptionVerifier* poi::poifs::crypt::EncryptionInfo::getVerifier()
{
    return verifier;
}

poi::poifs::crypt::Decryptor* poi::poifs::crypt::EncryptionInfo::getDecryptor()
{
    return decryptor;
}

poi::poifs::crypt::Encryptor* poi::poifs::crypt::EncryptionInfo::getEncryptor()
{
    return encryptor;
}

void poi::poifs::crypt::EncryptionInfo::setHeader(EncryptionHeader* header)
{
    this->header = header;
}

void poi::poifs::crypt::EncryptionInfo::setVerifier(EncryptionVerifier* verifier)
{
    this->verifier = verifier;
}

void poi::poifs::crypt::EncryptionInfo::setDecryptor(Decryptor* decryptor)
{
    this->decryptor = decryptor;
}

void poi::poifs::crypt::EncryptionInfo::setEncryptor(Encryptor* encryptor)
{
    this->encryptor = encryptor;
}

poi::poifs::crypt::EncryptionMode* poi::poifs::crypt::EncryptionInfo::getEncryptionMode()
{
    return encryptionMode;
}

bool poi::poifs::crypt::EncryptionInfo::isDocPropsEncrypted()
{
    return !npc(flagDocProps_)->isSet(getEncryptionFlags());
}

poi::poifs::crypt::EncryptionInfo* poi::poifs::crypt::EncryptionInfo::clone() /* throws(CloneNotSupportedException) */
{
    auto other = java_cast< EncryptionInfo* >(super::clone());
    npc(other)->header = npc(header)->clone();
    npc(other)->verifier = npc(verifier)->clone();
    npc(other)->decryptor = npc(decryptor)->clone();
    npc(npc(other)->decryptor)->setEncryptionInfo(other);
    npc(other)->encryptor = npc(encryptor)->clone();
    npc(npc(other)->encryptor)->setEncryptionInfo(other);
    return other;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::poifs::crypt::EncryptionInfo::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.poifs.crypt.EncryptionInfo", 41);
    return c;
}

void poi::poifs::crypt::EncryptionInfo::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        flagCryptoAPI_ = ::poi::util::BitFieldFactory::getInstance(4);
        flagDocProps_ = ::poi::util::BitFieldFactory::getInstance(8);
        flagExternal_ = ::poi::util::BitFieldFactory::getInstance(16);
        flagAES_ = ::poi::util::BitFieldFactory::getInstance(32);
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* poi::poifs::crypt::EncryptionInfo::getClass0()
{
    return class_();
}

