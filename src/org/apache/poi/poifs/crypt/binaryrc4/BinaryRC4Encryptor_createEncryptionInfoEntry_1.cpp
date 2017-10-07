// Generated from /POI/java/org/apache/poi/poifs/crypt/binaryrc4/BinaryRC4Encryptor.java
#include <org/apache/poi/poifs/crypt/binaryrc4/BinaryRC4Encryptor_createEncryptionInfoEntry_1.hpp>

#include <java/lang/NullPointerException.hpp>
#include <org/apache/poi/poifs/crypt/EncryptionInfo.hpp>
#include <org/apache/poi/poifs/crypt/binaryrc4/BinaryRC4EncryptionHeader.hpp>
#include <org/apache/poi/poifs/crypt/binaryrc4/BinaryRC4EncryptionVerifier.hpp>
#include <org/apache/poi/poifs/crypt/binaryrc4/BinaryRC4Encryptor.hpp>
#include <org/apache/poi/util/LittleEndianByteArrayOutputStream.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::poifs::crypt::binaryrc4::BinaryRC4Encryptor_createEncryptionInfoEntry_1::BinaryRC4Encryptor_createEncryptionInfoEntry_1(BinaryRC4Encryptor *BinaryRC4Encryptor_this, ::org::apache::poi::poifs::crypt::EncryptionInfo* info, BinaryRC4EncryptionHeader* header, BinaryRC4EncryptionVerifier* verifier)
    : super(*static_cast< ::default_init_tag* >(0))
    , BinaryRC4Encryptor_this(BinaryRC4Encryptor_this)
    , info(info)
    , header(header)
    , verifier(verifier)
{
    clinit();
    ctor();
}

void org::apache::poi::poifs::crypt::binaryrc4::BinaryRC4Encryptor_createEncryptionInfoEntry_1::write(::org::apache::poi::util::LittleEndianByteArrayOutputStream* bos)
{
    npc(bos)->writeShort(npc(info)->getVersionMajor());
    npc(bos)->writeShort(npc(info)->getVersionMinor());
    npc(header)->write(bos);
    npc(verifier)->write(bos);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::poifs::crypt::binaryrc4::BinaryRC4Encryptor_createEncryptionInfoEntry_1::class_()
{
    static ::java::lang::Class* c = ::class_(u"", 0);
    return c;
}

java::lang::Class* org::apache::poi::poifs::crypt::binaryrc4::BinaryRC4Encryptor_createEncryptionInfoEntry_1::getClass0()
{
    return class_();
}

