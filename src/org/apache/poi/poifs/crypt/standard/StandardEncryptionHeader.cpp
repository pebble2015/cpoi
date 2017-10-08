// Generated from /POI/java/org/apache/poi/poifs/crypt/standard/StandardEncryptionHeader.java
#include <org/apache/poi/poifs/crypt/standard/StandardEncryptionHeader.hpp>

#include <java/io/InputStream.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <org/apache/poi/hssf/record/RecordInputStream.hpp>
#include <org/apache/poi/poifs/crypt/ChainingMode.hpp>
#include <org/apache/poi/poifs/crypt/CipherAlgorithm.hpp>
#include <org/apache/poi/poifs/crypt/CipherProvider.hpp>
#include <org/apache/poi/poifs/crypt/EncryptionHeader.hpp>
#include <org/apache/poi/poifs/crypt/EncryptionInfo.hpp>
#include <org/apache/poi/poifs/crypt/HashAlgorithm.hpp>
#include <org/apache/poi/util/BitField.hpp>
#include <org/apache/poi/util/LittleEndianByteArrayOutputStream.hpp>
#include <org/apache/poi/util/LittleEndianConsts.hpp>
#include <org/apache/poi/util/LittleEndianInput.hpp>
#include <org/apache/poi/util/LittleEndianOutput.hpp>
#include <org/apache/poi/util/StringUtil.hpp>

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

poi::poifs::crypt::standard::StandardEncryptionHeader::StandardEncryptionHeader(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::poifs::crypt::standard::StandardEncryptionHeader::StandardEncryptionHeader(::poi::util::LittleEndianInput* is)  /* throws(IOException) */
    : StandardEncryptionHeader(*static_cast< ::default_init_tag* >(0))
{
    ctor(is);
}

poi::poifs::crypt::standard::StandardEncryptionHeader::StandardEncryptionHeader(::poi::poifs::crypt::CipherAlgorithm* cipherAlgorithm, ::poi::poifs::crypt::HashAlgorithm* hashAlgorithm, int32_t keyBits, int32_t blockSize, ::poi::poifs::crypt::ChainingMode* chainingMode) 
    : StandardEncryptionHeader(*static_cast< ::default_init_tag* >(0))
{
    ctor(cipherAlgorithm,hashAlgorithm,keyBits,blockSize,chainingMode);
}

void poi::poifs::crypt::standard::StandardEncryptionHeader::ctor(::poi::util::LittleEndianInput* is) /* throws(IOException) */
{
    super::ctor();
    setFlags(npc(is)->readInt());
    setSizeExtra(npc(is)->readInt());
    setCipherAlgorithm(::poi::poifs::crypt::CipherAlgorithm::fromEcmaId(npc(is)->readInt()));
    setHashAlgorithm(::poi::poifs::crypt::HashAlgorithm::fromEcmaId(npc(is)->readInt()));
    auto keySize = npc(is)->readInt();
    if(keySize == 0) {
        keySize = 40;
    }
    setKeySize(keySize);
    setBlockSize(getKeySize());
    setCipherProvider(::poi::poifs::crypt::CipherProvider::fromEcmaId(npc(is)->readInt()));
    npc(is)->readLong();
    if(dynamic_cast< ::poi::hssf::record::RecordInputStream* >(is) != nullptr) {
        npc((java_cast< ::poi::hssf::record::RecordInputStream* >(is)))->mark(::poi::util::LittleEndianConsts::INT_SIZE + int32_t(1));
    } else {
        npc((java_cast< ::java::io::InputStream* >(is)))->mark(::poi::util::LittleEndianConsts::INT_SIZE + int32_t(1));
    }
    auto checkForSalt = npc(is)->readInt();
    if(dynamic_cast< ::poi::hssf::record::RecordInputStream* >(is) != nullptr) {
        npc((java_cast< ::poi::hssf::record::RecordInputStream* >(is)))->reset();
    } else {
        npc((java_cast< ::java::io::InputStream* >(is)))->reset();
    }
    if(checkForSalt == 16) {
        setCspName(u""_j);
    } else {
        auto builder = new ::java::lang::StringBuilder();
        while (true) {
            auto c = static_cast< char16_t >(npc(is)->readShort());
            if(c == 0) {
                break;
            }
            npc(builder)->append(c);
        }
        setCspName(npc(builder)->toString());
    }
    setChainingMode(::poi::poifs::crypt::ChainingMode::ecb);
    setKeySalt(nullptr);
}

void poi::poifs::crypt::standard::StandardEncryptionHeader::ctor(::poi::poifs::crypt::CipherAlgorithm* cipherAlgorithm, ::poi::poifs::crypt::HashAlgorithm* hashAlgorithm, int32_t keyBits, int32_t blockSize, ::poi::poifs::crypt::ChainingMode* chainingMode)
{
    super::ctor();
    setCipherAlgorithm(cipherAlgorithm);
    setHashAlgorithm(hashAlgorithm);
    setKeySize(keyBits);
    setBlockSize(blockSize);
    setCipherProvider(npc(cipherAlgorithm)->provider);
    setFlags(npc(::poi::poifs::crypt::EncryptionInfo::flagCryptoAPI())->setBoolean(0, true) | npc(::poi::poifs::crypt::EncryptionInfo::flagAES())->setBoolean(0, npc(cipherAlgorithm)->provider == ::poi::poifs::crypt::CipherProvider::aes));
}

void poi::poifs::crypt::standard::StandardEncryptionHeader::write(::poi::util::LittleEndianByteArrayOutputStream* bos)
{
    auto startIdx = npc(bos)->getWriteIndex();
    auto sizeOutput = npc(bos)->createDelayedOutput(::poi::util::LittleEndianConsts::INT_SIZE);
    npc(bos)->writeInt(getFlags());
    npc(bos)->writeInt(int32_t(0));
    npc(bos)->writeInt(npc(getCipherAlgorithm())->ecmaId);
    npc(bos)->writeInt(npc(getHashAlgorithm())->ecmaId);
    npc(bos)->writeInt(getKeySize());
    npc(bos)->writeInt(npc(getCipherProvider())->ecmaId);
    npc(bos)->writeInt(int32_t(0));
    npc(bos)->writeInt(int32_t(0));
    auto cspName = getCspName();
    if(cspName == nullptr) {
        cspName = npc(getCipherProvider())->cipherProviderName;
    }
    npc(bos)->write(::poi::util::StringUtil::getToUnicodeLE(cspName));
    npc(bos)->writeShort(int32_t(0));
    auto headerSize = npc(bos)->getWriteIndex() - startIdx - ::poi::util::LittleEndianConsts::INT_SIZE;
    npc(sizeOutput)->writeInt(headerSize);
}

poi::poifs::crypt::standard::StandardEncryptionHeader* poi::poifs::crypt::standard::StandardEncryptionHeader::clone() /* throws(CloneNotSupportedException) */
{
    return java_cast< StandardEncryptionHeader* >(super::clone());
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::poifs::crypt::standard::StandardEncryptionHeader::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.poifs.crypt.standard.StandardEncryptionHeader", 60);
    return c;
}

java::lang::Class* poi::poifs::crypt::standard::StandardEncryptionHeader::getClass0()
{
    return class_();
}

