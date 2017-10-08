// Generated from /POI/java/org/apache/poi/hssf/record/crypto/Biff8EncryptionKey.java

#pragma once

#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/crypto/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class poi::hssf::record::crypto::Biff8EncryptionKey final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    static ::java::lang::ThreadLocal* _userPasswordTLS_;

public:
    static void setCurrentUserPassword(::java::lang::String* password);
    static ::java::lang::String* getCurrentUserPassword();

    // Generated
    Biff8EncryptionKey();
protected:
    Biff8EncryptionKey(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    static ::java::lang::ThreadLocal*& _userPasswordTLS();
    virtual ::java::lang::Class* getClass0();
};
