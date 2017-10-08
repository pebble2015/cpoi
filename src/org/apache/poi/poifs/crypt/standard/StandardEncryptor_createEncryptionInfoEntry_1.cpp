// Generated from /POI/java/org/apache/poi/poifs/crypt/standard/StandardEncryptor.java
#include <org/apache/poi/poifs/crypt/standard/StandardEncryptor_createEncryptionInfoEntry_1.hpp>

#include <java/lang/NullPointerException.hpp>
#include <org/apache/poi/poifs/crypt/EncryptionInfo.hpp>
#include <org/apache/poi/poifs/crypt/standard/StandardEncryptionHeader.hpp>
#include <org/apache/poi/poifs/crypt/standard/StandardEncryptionVerifier.hpp>
#include <org/apache/poi/poifs/crypt/standard/StandardEncryptor.hpp>
#include <org/apache/poi/util/LittleEndianByteArrayOutputStream.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::poifs::crypt::standard::StandardEncryptor_createEncryptionInfoEntry_1::StandardEncryptor_createEncryptionInfoEntry_1(StandardEncryptor *StandardEncryptor_this, ::poi::poifs::crypt::EncryptionInfo* info, StandardEncryptionHeader* header, StandardEncryptionVerifier* verifier)
    : super(*static_cast< ::default_init_tag* >(0))
    , StandardEncryptor_this(StandardEncryptor_this)
    , info(info)
    , header(header)
    , verifier(verifier)
{
    clinit();
    ctor();
}

void poi::poifs::crypt::standard::StandardEncryptor_createEncryptionInfoEntry_1::write(::poi::util::LittleEndianByteArrayOutputStream* bos)
{
    npc(bos)->writeShort(npc(info)->getVersionMajor());
    npc(bos)->writeShort(npc(info)->getVersionMinor());
    npc(bos)->writeInt(npc(info)->getEncryptionFlags());
    npc(header)->write(bos);
    npc(verifier)->write(bos);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::poifs::crypt::standard::StandardEncryptor_createEncryptionInfoEntry_1::class_()
{
    static ::java::lang::Class* c = ::class_(u"", 0);
    return c;
}

java::lang::Class* poi::poifs::crypt::standard::StandardEncryptor_createEncryptionInfoEntry_1::getClass0()
{
    return class_();
}

