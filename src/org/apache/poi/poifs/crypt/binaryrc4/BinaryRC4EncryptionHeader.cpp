// Generated from /POI/java/org/apache/poi/poifs/crypt/binaryrc4/BinaryRC4EncryptionHeader.java
#include <org/apache/poi/poifs/crypt/binaryrc4/BinaryRC4EncryptionHeader.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/lang/String.hpp>
#include <org/apache/poi/poifs/crypt/CipherAlgorithm.hpp>
#include <org/apache/poi/poifs/crypt/CipherProvider.hpp>
#include <org/apache/poi/poifs/crypt/EncryptionHeader.hpp>
#include <org/apache/poi/poifs/crypt/HashAlgorithm.hpp>

template<typename T, typename U>
static T java_cast(U* u)
{
    if(!u) return static_cast<T>(nullptr);
    auto t = dynamic_cast<T>(u);
    if(!t) throw new ::java::lang::ClassCastException();
    return t;
}

poi::poifs::crypt::binaryrc4::BinaryRC4EncryptionHeader::BinaryRC4EncryptionHeader(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::poifs::crypt::binaryrc4::BinaryRC4EncryptionHeader::BinaryRC4EncryptionHeader() 
    : BinaryRC4EncryptionHeader(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void poi::poifs::crypt::binaryrc4::BinaryRC4EncryptionHeader::ctor()
{
    super::ctor();
    setCipherAlgorithm(::poi::poifs::crypt::CipherAlgorithm::rc4);
    setKeySize(40);
    setBlockSize(-int32_t(1));
    setCipherProvider(::poi::poifs::crypt::CipherProvider::rc4);
    setHashAlgorithm(::poi::poifs::crypt::HashAlgorithm::md5);
    setSizeExtra(0);
    setFlags(0);
    setCspName(u""_j);
    setChainingMode(nullptr);
}

void poi::poifs::crypt::binaryrc4::BinaryRC4EncryptionHeader::write(::poi::util::LittleEndianByteArrayOutputStream* littleendianbytearrayoutputstream)
{
}

poi::poifs::crypt::binaryrc4::BinaryRC4EncryptionHeader* poi::poifs::crypt::binaryrc4::BinaryRC4EncryptionHeader::clone() /* throws(CloneNotSupportedException) */
{
    return java_cast< BinaryRC4EncryptionHeader* >(super::clone());
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::poifs::crypt::binaryrc4::BinaryRC4EncryptionHeader::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.poifs.crypt.binaryrc4.BinaryRC4EncryptionHeader", 62);
    return c;
}

java::lang::Class* poi::poifs::crypt::binaryrc4::BinaryRC4EncryptionHeader::getClass0()
{
    return class_();
}

