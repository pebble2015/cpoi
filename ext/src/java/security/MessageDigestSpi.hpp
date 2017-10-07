// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/nio/fwd-POI.hpp>
#include <java/security/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class java::security::MessageDigestSpi
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    ::int8_tArray* tempArray_ {  };

protected:
    void ctor();

public:
    ::java::lang::Object* clone() override;

public: /* protected */
    virtual ::int8_tArray* engineDigest() = 0;
    virtual int32_t engineDigest(::int8_tArray* buf, int32_t offset, int32_t len);
    virtual int32_t engineGetDigestLength();
    virtual void engineReset() = 0;
    virtual void engineUpdate(int8_t input) = 0;
    virtual void engineUpdate(::java::nio::ByteBuffer* input);
    virtual void engineUpdate(::int8_tArray* input, int32_t offset, int32_t len) = 0;

    // Generated

public:
    MessageDigestSpi();
protected:
    MessageDigestSpi(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
