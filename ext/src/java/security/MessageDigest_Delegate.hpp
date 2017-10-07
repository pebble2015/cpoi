// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/nio/fwd-POI.hpp>
#include <java/security/fwd-POI.hpp>
#include <java/security/MessageDigest.hpp>

struct default_init_tag;

class java::security::MessageDigest_Delegate
    : public MessageDigest
{

public:
    typedef MessageDigest super;

private:
    MessageDigestSpi* digestSpi {  };

protected:
    void ctor(MessageDigestSpi* digestSpi, ::java::lang::String* algorithm);

public:
    ::java::lang::Object* clone() override;

public: /* protected */
    ::int8_tArray* engineDigest() override;
    int32_t engineDigest(::int8_tArray* buf, int32_t offset, int32_t len) override;
    int32_t engineGetDigestLength() override;
    void engineReset() override;
    void engineUpdate(int8_t input) override;
    void engineUpdate(::java::nio::ByteBuffer* input) override;
    void engineUpdate(::int8_tArray* input, int32_t offset, int32_t len) override;

    // Generated

public:
    MessageDigest_Delegate(MessageDigestSpi* digestSpi, ::java::lang::String* algorithm);
protected:
    MessageDigest_Delegate(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
