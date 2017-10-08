// Generated from /POI/java/org/apache/poi/poifs/crypt/cryptoapi/CryptoAPIDecryptor.java
#include <org/apache/poi/poifs/crypt/cryptoapi/CryptoAPIDecryptor_StreamDescriptorEntry.hpp>

#include <org/apache/poi/util/BitFieldFactory.hpp>

poi::poifs::crypt::cryptoapi::CryptoAPIDecryptor_StreamDescriptorEntry::CryptoAPIDecryptor_StreamDescriptorEntry(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::poifs::crypt::cryptoapi::CryptoAPIDecryptor_StreamDescriptorEntry::CryptoAPIDecryptor_StreamDescriptorEntry()
    : CryptoAPIDecryptor_StreamDescriptorEntry(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::util::BitField*& poi::poifs::crypt::cryptoapi::CryptoAPIDecryptor_StreamDescriptorEntry::flagStream()
{
    clinit();
    return flagStream_;
}
poi::util::BitField* poi::poifs::crypt::cryptoapi::CryptoAPIDecryptor_StreamDescriptorEntry::flagStream_;

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::poifs::crypt::cryptoapi::CryptoAPIDecryptor_StreamDescriptorEntry::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.poifs.crypt.cryptoapi.CryptoAPIDecryptor.StreamDescriptorEntry", 77);
    return c;
}

void poi::poifs::crypt::cryptoapi::CryptoAPIDecryptor_StreamDescriptorEntry::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        flagStream_ = ::poi::util::BitFieldFactory::getInstance(1);
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* poi::poifs::crypt::cryptoapi::CryptoAPIDecryptor_StreamDescriptorEntry::getClass0()
{
    return class_();
}

