// Generated from /POI/java/org/apache/poi/poifs/crypt/CryptoFunctions.java
#include <org/apache/poi/poifs/crypt/CryptoFunctions.hpp>

#include <java/io/Serializable.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/ClassLoader.hpp>
#include <java/lang/Cloneable.hpp>
#include <java/lang/Exception.hpp>
#include <java/lang/Integer.hpp>
#include <java/lang/Math.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/lang/System.hpp>
#include <java/lang/Thread.hpp>
#include <java/lang/Throwable.hpp>
#include <java/nio/charset/Charset.hpp>
#include <java/security/DigestException.hpp>
#include <java/security/GeneralSecurityException.hpp>
#include <java/security/Key.hpp>
#include <java/security/MessageDigest.hpp>
#include <java/security/Provider.hpp>
#include <java/security/Security.hpp>
#include <java/util/Arrays.hpp>
#include <java/util/Locale.hpp>
#include <javax/crypto/Cipher.hpp>
#include <javax/crypto/Mac.hpp>
#include <javax/crypto/SecretKey.hpp>
#include <javax/crypto/spec/IvParameterSpec.hpp>
#include <javax/crypto/spec/RC2ParameterSpec.hpp>
#include <org/apache/poi/EncryptedDocumentException.hpp>
#include <org/apache/poi/poifs/crypt/ChainingMode.hpp>
#include <org/apache/poi/poifs/crypt/CipherAlgorithm.hpp>
#include <org/apache/poi/poifs/crypt/Decryptor.hpp>
#include <org/apache/poi/poifs/crypt/HashAlgorithm.hpp>
#include <org/apache/poi/util/LittleEndian.hpp>
#include <org/apache/poi/util/LittleEndianConsts.hpp>
#include <org/apache/poi/util/StringUtil.hpp>
#include <Array.hpp>
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
typedef ::SubArray< ::java::lang::Cloneable, ObjectArray > CloneableArray;
    } // lang
} // java

namespace 
{
typedef ::SubArray< ::int32_tArray, ::java::lang::CloneableArray, ::java::io::SerializableArray > int32_tArrayArray;
} // 

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

poi::poifs::crypt::CryptoFunctions::CryptoFunctions(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::poifs::crypt::CryptoFunctions::CryptoFunctions()
    : CryptoFunctions(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

int8_tArray* poi::poifs::crypt::CryptoFunctions::hashPassword(::java::lang::String* password, HashAlgorithm* hashAlgorithm, ::int8_tArray* salt, int32_t spinCount)
{
    clinit();
    return hashPassword(password, hashAlgorithm, salt, spinCount, true);
}

int8_tArray* poi::poifs::crypt::CryptoFunctions::hashPassword(::java::lang::String* password, HashAlgorithm* hashAlgorithm, ::int8_tArray* salt, int32_t spinCount, bool iteratorFirst)
{
    clinit();
    if(password == nullptr) {
        password = Decryptor::DEFAULT_PASSWORD();
    }
    auto hashAlg = getMessageDigest(hashAlgorithm);
    npc(hashAlg)->update(salt);
    auto hash = npc(hashAlg)->digest(::poi::util::StringUtil::getToUnicodeLE(password));
    auto iterator = new ::int8_tArray(::poi::util::LittleEndianConsts::INT_SIZE);
    auto first = (iteratorFirst ? iterator : hash);
    auto second = (iteratorFirst ? hash : iterator);
    try {
        for (auto i = int32_t(0); i < spinCount; i++) {
            ::poi::util::LittleEndian::putInt(iterator, 0, i);
            npc(hashAlg)->reset();
            npc(hashAlg)->update(first);
            npc(hashAlg)->update(second);
            npc(hashAlg)->digest(hash, 0, npc(hash)->length);
        }
    } catch (::java::security::DigestException* e) {
        throw new ::poi::EncryptedDocumentException(u"error in password hashing"_j);
    }
    return hash;
}

int8_tArray* poi::poifs::crypt::CryptoFunctions::generateIv(HashAlgorithm* hashAlgorithm, ::int8_tArray* salt, ::int8_tArray* blockKey, int32_t blockSize)
{
    clinit();
    auto iv = salt;
    if(blockKey != nullptr) {
        auto hashAlgo = getMessageDigest(hashAlgorithm);
        npc(hashAlgo)->update(salt);
        iv = npc(hashAlgo)->digest(blockKey);
    }
    return getBlock36(iv, blockSize);
}

int8_tArray* poi::poifs::crypt::CryptoFunctions::generateKey(::int8_tArray* passwordHash, HashAlgorithm* hashAlgorithm, ::int8_tArray* blockKey, int32_t keySize)
{
    clinit();
    auto hashAlgo = getMessageDigest(hashAlgorithm);
    npc(hashAlgo)->update(passwordHash);
    auto key = npc(hashAlgo)->digest(blockKey);
    return getBlock36(key, keySize);
}

javax::crypto::Cipher* poi::poifs::crypt::CryptoFunctions::getCipher(::javax::crypto::SecretKey* key, CipherAlgorithm* cipherAlgorithm, ChainingMode* chain, ::int8_tArray* vec, int32_t cipherMode)
{
    clinit();
    return getCipher(key, cipherAlgorithm, chain, vec, cipherMode, nullptr);
}

javax::crypto::Cipher* poi::poifs::crypt::CryptoFunctions::getCipher(::java::security::Key* key, CipherAlgorithm* cipherAlgorithm, ChainingMode* chain, ::int8_tArray* vec, int32_t cipherMode, ::java::lang::String* padding)
{
    clinit();
    auto keySizeInBytes = npc(npc(key)->getEncoded())->length;
    if(padding == nullptr)
        padding = u"NoPadding"_j;

    try {
        if(::javax::crypto::Cipher::getMaxAllowedKeyLength(npc(cipherAlgorithm)->jceId) < keySizeInBytes * int32_t(8)) {
            throw new ::poi::EncryptedDocumentException(u"Export Restrictions in place - please install JCE Unlimited Strength Jurisdiction Policy files"_j);
        }
        ::javax::crypto::Cipher* cipher;
        if(cipherAlgorithm == CipherAlgorithm::rc4) {
            cipher = ::javax::crypto::Cipher::getInstance(npc(cipherAlgorithm)->jceId);
        } else if(npc(cipherAlgorithm)->needsBouncyCastle) {
            registerBouncyCastle();
            cipher = ::javax::crypto::Cipher::getInstance(::java::lang::StringBuilder().append(npc(cipherAlgorithm)->jceId)->append(u"/"_j)
                ->append(npc(chain)->jceId)
                ->append(u"/"_j)
                ->append(padding)->toString(), u"BC"_j);
        } else {
            cipher = ::javax::crypto::Cipher::getInstance(::java::lang::StringBuilder().append(npc(cipherAlgorithm)->jceId)->append(u"/"_j)
                ->append(npc(chain)->jceId)
                ->append(u"/"_j)
                ->append(padding)->toString());
        }
        if(vec == nullptr) {
            npc(cipher)->init_(cipherMode, key);
        } else {
            ::java::security::spec::AlgorithmParameterSpec* aps;
            if(cipherAlgorithm == CipherAlgorithm::rc2) {
                aps = new ::javax::crypto::spec::RC2ParameterSpec(npc(npc(key)->getEncoded())->length * int32_t(8), vec);
            } else {
                aps = new ::javax::crypto::spec::IvParameterSpec(vec);
            }
            npc(cipher)->init_(cipherMode, key, aps);
        }
        return cipher;
    } catch (::java::security::GeneralSecurityException* e) {
        throw new ::poi::EncryptedDocumentException(static_cast< ::java::lang::Throwable* >(e));
    }
}

int8_tArray* poi::poifs::crypt::CryptoFunctions::getBlock36(::int8_tArray* hash, int32_t size)
{
    clinit();
    return getBlockX(hash, size, static_cast< int8_t >(int32_t(54)));
}

int8_tArray* poi::poifs::crypt::CryptoFunctions::getBlock0(::int8_tArray* hash, int32_t size)
{
    clinit();
    return getBlockX(hash, size, static_cast< int8_t >(int32_t(0)));
}

int8_tArray* poi::poifs::crypt::CryptoFunctions::getBlockX(::int8_tArray* hash, int32_t size, int8_t fill)
{
    clinit();
    if(npc(hash)->length == size)
        return hash;

    auto result = new ::int8_tArray(size);
    ::java::util::Arrays::fill(result, fill);
    ::java::lang::System::arraycopy(hash, 0, result, 0, ::java::lang::Math::min(npc(result)->length, npc(hash)->length));
    return result;
}

java::security::MessageDigest* poi::poifs::crypt::CryptoFunctions::getMessageDigest(HashAlgorithm* hashAlgorithm)
{
    clinit();
    try {
        if(npc(hashAlgorithm)->needsBouncyCastle) {
            registerBouncyCastle();
            return ::java::security::MessageDigest::getInstance(npc(hashAlgorithm)->jceId, u"BC"_j);
        } else {
            return ::java::security::MessageDigest::getInstance(npc(hashAlgorithm)->jceId);
        }
    } catch (::java::security::GeneralSecurityException* e) {
        throw new ::poi::EncryptedDocumentException(u"hash algo not supported"_j, e);
    }
}

javax::crypto::Mac* poi::poifs::crypt::CryptoFunctions::getMac(HashAlgorithm* hashAlgorithm)
{
    clinit();
    try {
        if(npc(hashAlgorithm)->needsBouncyCastle) {
            registerBouncyCastle();
            return ::javax::crypto::Mac::getInstance(npc(hashAlgorithm)->jceHmacId, u"BC"_j);
        } else {
            return ::javax::crypto::Mac::getInstance(npc(hashAlgorithm)->jceHmacId);
        }
    } catch (::java::security::GeneralSecurityException* e) {
        throw new ::poi::EncryptedDocumentException(u"hmac algo not supported"_j, e);
    }
}

void poi::poifs::crypt::CryptoFunctions::registerBouncyCastle()
{
    clinit();
    if(::java::security::Security::getProvider(u"BC"_j) != nullptr) {
        return;
    }
    try {
        auto cl = npc(::java::lang::Thread::currentThread())->getContextClassLoader();
        auto bcProviderName = u"org.bouncycastle.jce.provider.BouncyCastleProvider"_j;
        auto clazz = java_cast< ::java::lang::Class* >(npc(cl)->loadClass(bcProviderName));
        ::java::security::Security::addProvider(java_cast< ::java::security::Provider* >(npc(clazz)->newInstance()));
    } catch (::java::lang::Exception* e) {
        throw new ::poi::EncryptedDocumentException(u"Only the BouncyCastle provider supports your encryption settings - please add it to the classpath."_j, e);
    }
}

int32_tArray*& poi::poifs::crypt::CryptoFunctions::INITIAL_CODE_ARRAY()
{
    clinit();
    return INITIAL_CODE_ARRAY_;
}
int32_tArray* poi::poifs::crypt::CryptoFunctions::INITIAL_CODE_ARRAY_;

int8_tArray*& poi::poifs::crypt::CryptoFunctions::PAD_ARRAY()
{
    clinit();
    return PAD_ARRAY_;
}
int8_tArray* poi::poifs::crypt::CryptoFunctions::PAD_ARRAY_;

int32_tArrayArray*& poi::poifs::crypt::CryptoFunctions::ENCRYPTION_MATRIX()
{
    clinit();
    return ENCRYPTION_MATRIX_;
}
int32_tArrayArray* poi::poifs::crypt::CryptoFunctions::ENCRYPTION_MATRIX_;

int32_t poi::poifs::crypt::CryptoFunctions::createXorVerifier1(::java::lang::String* password)
{
    clinit();
    auto arrByteChars = toAnsiPassword(password);
    int16_t verifier = int32_t(0);
    if(!npc(u""_j)->equals(static_cast< ::java::lang::Object* >(password))) {
        for (auto i = npc(arrByteChars)->length - int32_t(1); i >= 0; i--) {
            verifier = rotateLeftBase15Bit(verifier);
            verifier ^= (*arrByteChars)[i];
        }
        verifier = rotateLeftBase15Bit(verifier);
        verifier ^= npc(arrByteChars)->length;
        verifier ^= 52811;
    }
    return verifier & int32_t(65535);
}

int32_t poi::poifs::crypt::CryptoFunctions::createXorVerifier2(::java::lang::String* password)
{
    clinit();
    auto generatedKey = new ::int8_tArray(int32_t(4));
    auto const maxPasswordLength = int32_t(15);
    if(!npc(u""_j)->equals(static_cast< ::java::lang::Object* >(password))) {
        password = npc(password)->substring(0, ::java::lang::Math::min(npc(password)->length(), maxPasswordLength));
        auto arrByteChars = toAnsiPassword(password);
        auto highOrderWord = (*INITIAL_CODE_ARRAY_)[npc(arrByteChars)->length - int32_t(1)];
        for (auto i = int32_t(0); i < npc(arrByteChars)->length; i++) {
            auto tmp = maxPasswordLength - npc(arrByteChars)->length + i;
            for (auto intBit = int32_t(0); intBit < 7; intBit++) {
                if(((*arrByteChars)[i] & (int32_t(1) << intBit)) != 0) {
                    highOrderWord ^= (*(*ENCRYPTION_MATRIX_)[tmp])[intBit];
                }
            }
        }
        auto verifier = createXorVerifier1(password);
        ::poi::util::LittleEndian::putShort(generatedKey, 0, static_cast< int16_t >(verifier));
        ::poi::util::LittleEndian::putShort(generatedKey, 2, static_cast< int16_t >(highOrderWord));
    }
    return ::poi::util::LittleEndian::getInt(generatedKey);
}

java::lang::String* poi::poifs::crypt::CryptoFunctions::xorHashPassword(::java::lang::String* password)
{
    clinit();
    auto hashedPassword = createXorVerifier2(password);
    return ::java::lang::String::format(::java::util::Locale::ROOT(), u"%1$08X"_j, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(::java::lang::Integer::valueOf(hashedPassword))}));
}

java::lang::String* poi::poifs::crypt::CryptoFunctions::xorHashPasswordReversed(::java::lang::String* password)
{
    clinit();
    auto hashedPassword = createXorVerifier2(password);
    return ::java::lang::String::format(::java::util::Locale::ROOT(), u"%1$02X%2$02X%3$02X%4$02X"_j, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(::java::lang::Integer::valueOf((static_cast<int32_t>(static_cast<uint32_t>(hashedPassword) >> int32_t(0))) & int32_t(255))), static_cast< ::java::lang::Object* >(::java::lang::Integer::valueOf((static_cast<int32_t>(static_cast<uint32_t>(hashedPassword) >> int32_t(8))) & int32_t(255))), static_cast< ::java::lang::Object* >(::java::lang::Integer::valueOf((static_cast<int32_t>(static_cast<uint32_t>(hashedPassword) >> int32_t(16))) & int32_t(255))), static_cast< ::java::lang::Object* >(::java::lang::Integer::valueOf((static_cast<int32_t>(static_cast<uint32_t>(hashedPassword) >> int32_t(24))) & int32_t(255)))}));
}

int32_t poi::poifs::crypt::CryptoFunctions::createXorKey1(::java::lang::String* password)
{
    clinit();
    return static_cast<int32_t>(static_cast<uint32_t>(createXorVerifier2(password)) >> int32_t(16));
}

int8_tArray* poi::poifs::crypt::CryptoFunctions::createXorArray1(::java::lang::String* password)
{
    clinit();
    if(npc(password)->length() > 15) {
        password = npc(password)->substring(0, 15);
    }
    auto passBytes = npc(password)->getBytes(::java::nio::charset::Charset::forName(u"ASCII"_j));
    auto obfuscationArray_ = new ::int8_tArray(int32_t(16));
    ::java::lang::System::arraycopy(passBytes, 0, obfuscationArray_, 0, npc(passBytes)->length);
    ::java::lang::System::arraycopy(PAD_ARRAY_, 0, obfuscationArray_, npc(passBytes)->length, npc(PAD_ARRAY_)->length - npc(passBytes)->length + int32_t(1));
    auto xorKey = createXorKey1(password);
    auto nRotateSize = int32_t(2);
    auto baseKeyLE = (new ::int8_tArray({
        static_cast< int8_t >((xorKey & int32_t(255)))
        , static_cast< int8_t >(((static_cast<int32_t>(static_cast<uint32_t>(xorKey) >> int32_t(8))) & int32_t(255)))
    }));
    for (auto i = int32_t(0); i < npc(obfuscationArray_)->length; i++) {
        (*obfuscationArray_)[i] ^= (*baseKeyLE)[i & int32_t(1)];
        (*obfuscationArray_)[i] = rotateLeft((*obfuscationArray_)[i], nRotateSize);
    }
    return obfuscationArray_;
}

int8_tArray* poi::poifs::crypt::CryptoFunctions::toAnsiPassword(::java::lang::String* password)
{
    clinit();
    auto arrByteChars = new ::int8_tArray(npc(password)->length());
    for (auto i = int32_t(0); i < npc(password)->length(); i++) {
        int32_t intTemp = npc(password)->charAt(i);
        auto lowByte = static_cast< int8_t >((intTemp & int32_t(255)));
        auto highByte = static_cast< int8_t >(((static_cast<int32_t>(static_cast<uint32_t>(intTemp) >> int32_t(8))) & int32_t(255)));
        (*arrByteChars)[i] = (lowByte != 0 ? lowByte : highByte);
    }
    return arrByteChars;
}

int8_t poi::poifs::crypt::CryptoFunctions::rotateLeft(int8_t bits, int32_t shift)
{
    clinit();
    return static_cast< int8_t >((((bits & int32_t(255)) << shift) | (static_cast<int32_t>(static_cast<uint32_t>((bits & int32_t(255))) >> (int32_t(8) - shift)))));
}

int16_t poi::poifs::crypt::CryptoFunctions::rotateLeftBase15Bit(int16_t verifier)
{
    clinit();
    auto intermediate1 = static_cast< int16_t >((((verifier & int32_t(16384)) == 0) ? int32_t(0) : int32_t(1)));
    auto intermediate2 = static_cast< int16_t >(((verifier << int32_t(1)) & int32_t(32767)));
    auto intermediate3 = static_cast< int16_t >((intermediate1 | intermediate2));
    return intermediate3;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::poifs::crypt::CryptoFunctions::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.poifs.crypt.CryptoFunctions", 42);
    return c;
}

void poi::poifs::crypt::CryptoFunctions::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        INITIAL_CODE_ARRAY_ = (new ::int32_tArray({
            int32_t(57840)
            , int32_t(7439)
            , int32_t(52380)
            , int32_t(33984)
            , int32_t(4364)
            , int32_t(3600)
            , int32_t(61902)
            , int32_t(12606)
            , int32_t(6258)
            , int32_t(57657)
            , int32_t(54287)
            , int32_t(34041)
            , int32_t(10252)
            , int32_t(43370)
            , int32_t(20163)
        }));
        PAD_ARRAY_ = (new ::int8_tArray({
            static_cast< int8_t >(int32_t(187))
            , static_cast< int8_t >(int32_t(255))
            , static_cast< int8_t >(int32_t(255))
            , static_cast< int8_t >(int32_t(186))
            , static_cast< int8_t >(int32_t(255))
            , static_cast< int8_t >(int32_t(255))
            , static_cast< int8_t >(int32_t(185))
            , static_cast< int8_t >(int32_t(128))
            , static_cast< int8_t >(int32_t(0))
            , static_cast< int8_t >(int32_t(190))
            , static_cast< int8_t >(int32_t(15))
            , static_cast< int8_t >(int32_t(0))
            , static_cast< int8_t >(int32_t(191))
            , static_cast< int8_t >(int32_t(15))
            , static_cast< int8_t >(int32_t(0))
        }));
        ENCRYPTION_MATRIX_ = (new ::int32_tArrayArray({
            (new ::int32_tArray({
            int32_t(44796)
            , int32_t(19929)
            , int32_t(39858)
            , int32_t(10053)
            , int32_t(20106)
            , int32_t(40212)
            , int32_t(10761)
        }))
            , (new ::int32_tArray({
            int32_t(31585)
            , int32_t(63170)
            , int32_t(64933)
            , int32_t(60267)
            , int32_t(50935)
            , int32_t(40399)
            , int32_t(11199)
        }))
            , (new ::int32_tArray({
            int32_t(17763)
            , int32_t(35526)
            , int32_t(1453)
            , int32_t(2906)
            , int32_t(5812)
            , int32_t(11624)
            , int32_t(23248)
        }))
            , (new ::int32_tArray({
            int32_t(885)
            , int32_t(1770)
            , int32_t(3540)
            , int32_t(7080)
            , int32_t(14160)
            , int32_t(28320)
            , int32_t(56640)
        }))
            , (new ::int32_tArray({
            int32_t(55369)
            , int32_t(41139)
            , int32_t(20807)
            , int32_t(41614)
            , int32_t(21821)
            , int32_t(43642)
            , int32_t(17621)
        }))
            , (new ::int32_tArray({
            int32_t(28485)
            , int32_t(56970)
            , int32_t(44341)
            , int32_t(19019)
            , int32_t(38038)
            , int32_t(14605)
            , int32_t(29210)
        }))
            , (new ::int32_tArray({
            int32_t(60195)
            , int32_t(50791)
            , int32_t(40175)
            , int32_t(10751)
            , int32_t(21502)
            , int32_t(43004)
            , int32_t(24537)
        }))
            , (new ::int32_tArray({
            int32_t(18387)
            , int32_t(36774)
            , int32_t(3949)
            , int32_t(7898)
            , int32_t(15796)
            , int32_t(31592)
            , int32_t(63184)
        }))
            , (new ::int32_tArray({
            int32_t(47201)
            , int32_t(24803)
            , int32_t(49606)
            , int32_t(37805)
            , int32_t(14203)
            , int32_t(28406)
            , int32_t(56812)
        }))
            , (new ::int32_tArray({
            int32_t(17824)
            , int32_t(35648)
            , int32_t(1697)
            , int32_t(3394)
            , int32_t(6788)
            , int32_t(13576)
            , int32_t(27152)
        }))
            , (new ::int32_tArray({
            int32_t(43601)
            , int32_t(17539)
            , int32_t(35078)
            , int32_t(557)
            , int32_t(1114)
            , int32_t(2228)
            , int32_t(4456)
        }))
            , (new ::int32_tArray({
            int32_t(30388)
            , int32_t(60776)
            , int32_t(51953)
            , int32_t(34243)
            , int32_t(7079)
            , int32_t(14158)
            , int32_t(28316)
        }))
            , (new ::int32_tArray({
            int32_t(14128)
            , int32_t(28256)
            , int32_t(56512)
            , int32_t(43425)
            , int32_t(17251)
            , int32_t(34502)
            , int32_t(7597)
        }))
            , (new ::int32_tArray({
            int32_t(13105)
            , int32_t(26210)
            , int32_t(52420)
            , int32_t(35241)
            , int32_t(883)
            , int32_t(1766)
            , int32_t(3532)
        }))
            , (new ::int32_tArray({
            int32_t(4129)
            , int32_t(8258)
            , int32_t(16516)
            , int32_t(33032)
            , int32_t(4657)
            , int32_t(9314)
            , int32_t(18628)
        }))
        }));
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* poi::poifs::crypt::CryptoFunctions::getClass0()
{
    return class_();
}

