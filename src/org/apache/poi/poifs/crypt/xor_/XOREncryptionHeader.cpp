// Generated from /POI/java/org/apache/poi/poifs/crypt/xor/XOREncryptionHeader.java
#include <org/apache/poi/poifs/crypt/xor_/XOREncryptionHeader.hpp>

#include <java/lang/ClassCastException.hpp>
#include <org/apache/poi/poifs/crypt/EncryptionHeader.hpp>

template<typename T, typename U>
static T java_cast(U* u)
{
    if(!u) return static_cast<T>(nullptr);
    auto t = dynamic_cast<T>(u);
    if(!t) throw new ::java::lang::ClassCastException();
    return t;
}

poi::poifs::crypt::xor_::XOREncryptionHeader::XOREncryptionHeader(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::poifs::crypt::xor_::XOREncryptionHeader::XOREncryptionHeader() 
    : XOREncryptionHeader(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void poi::poifs::crypt::xor_::XOREncryptionHeader::ctor()
{
    super::ctor();
}

void poi::poifs::crypt::xor_::XOREncryptionHeader::write(::poi::util::LittleEndianByteArrayOutputStream* leos)
{
}

poi::poifs::crypt::xor_::XOREncryptionHeader* poi::poifs::crypt::xor_::XOREncryptionHeader::clone() /* throws(CloneNotSupportedException) */
{
    return java_cast< XOREncryptionHeader* >(super::clone());
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::poifs::crypt::xor_::XOREncryptionHeader::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.poifs.crypt.xor.XOREncryptionHeader", 50);
    return c;
}

java::lang::Class* poi::poifs::crypt::xor_::XOREncryptionHeader::getClass0()
{
    return class_();
}

