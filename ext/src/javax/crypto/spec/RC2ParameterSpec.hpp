// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/jce.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <javax/crypto/spec/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <java/security/spec/AlgorithmParameterSpec.hpp>

struct default_init_tag;

class javax::crypto::spec::RC2ParameterSpec
    : public virtual ::java::lang::Object
    , public virtual ::java::security::spec::AlgorithmParameterSpec
{

public:
    typedef ::java::lang::Object super;

private:
    int32_t effectiveKeyBits {  };
    ::int8_tArray* iv {  };

protected:
    void ctor(int32_t arg0);
    void ctor(int32_t arg0, ::int8_tArray* arg1);
    void ctor(int32_t arg0, ::int8_tArray* arg1, int32_t arg2);

public:
    bool equals(::java::lang::Object* arg0) override;
    virtual int32_t getEffectiveKeyBits();
    virtual ::int8_tArray* getIV();
    int32_t hashCode() override;

    // Generated
    RC2ParameterSpec(int32_t arg0);
    RC2ParameterSpec(int32_t arg0, ::int8_tArray* arg1);
    RC2ParameterSpec(int32_t arg0, ::int8_tArray* arg1, int32_t arg2);
protected:
    RC2ParameterSpec(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
