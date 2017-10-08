// Generated from /POI/java/org/apache/poi/hssf/record/crypto/Biff8EncryptionKey.java
#include <org/apache/poi/hssf/record/crypto/Biff8EncryptionKey.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/ThreadLocal.hpp>

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

poi::hssf::record::crypto::Biff8EncryptionKey::Biff8EncryptionKey(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::record::crypto::Biff8EncryptionKey::Biff8EncryptionKey()
    : Biff8EncryptionKey(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

java::lang::ThreadLocal*& poi::hssf::record::crypto::Biff8EncryptionKey::_userPasswordTLS()
{
    clinit();
    return _userPasswordTLS_;
}
java::lang::ThreadLocal* poi::hssf::record::crypto::Biff8EncryptionKey::_userPasswordTLS_;

void poi::hssf::record::crypto::Biff8EncryptionKey::setCurrentUserPassword(::java::lang::String* password)
{
    clinit();
    if(password == nullptr) {
        npc(_userPasswordTLS_)->remove();
    } else {
        npc(_userPasswordTLS_)->set(password);
    }
}

java::lang::String* poi::hssf::record::crypto::Biff8EncryptionKey::getCurrentUserPassword()
{
    clinit();
    return java_cast< ::java::lang::String* >(npc(_userPasswordTLS_)->get());
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::record::crypto::Biff8EncryptionKey::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.crypto.Biff8EncryptionKey", 52);
    return c;
}

void poi::hssf::record::crypto::Biff8EncryptionKey::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        _userPasswordTLS_ = new ::java::lang::ThreadLocal();
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* poi::hssf::record::crypto::Biff8EncryptionKey::getClass0()
{
    return class_();
}

