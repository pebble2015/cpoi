// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/jce.jar

#pragma once

#include <fwd-POI.hpp>
#include <javax/crypto/spec/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <java/security/spec/AlgorithmParameterSpec.hpp>

struct default_init_tag;

class javax::crypto::spec::IvParameterSpec
    : public virtual ::java::lang::Object
    , public virtual ::java::security::spec::AlgorithmParameterSpec
{

public:
    typedef ::java::lang::Object super;

private:
    ::int8_tArray* iv {  };

protected:
    void ctor(::int8_tArray* arg0);
    void ctor(::int8_tArray* arg0, int32_t arg1, int32_t arg2);

public:
    virtual ::int8_tArray* getIV();

    // Generated
    IvParameterSpec(::int8_tArray* arg0);
    IvParameterSpec(::int8_tArray* arg0, int32_t arg1, int32_t arg2);
protected:
    IvParameterSpec(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
