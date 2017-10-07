// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/jce.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/nio/fwd-POI.hpp>
#include <java/security/fwd-POI.hpp>
#include <java/security/spec/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <javax/crypto/fwd-POI.hpp>
#include <sun/security/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/Cloneable.hpp>

struct default_init_tag;

class javax::crypto::Mac
    : public virtual ::java::lang::Object
    , public virtual ::java::lang::Cloneable
{

public:
    typedef ::java::lang::Object super;

private:
    ::java::lang::String* algorithm {  };
    static ::sun::security::util::Debug* debug_;
    ::java::security::Provider_Service* firstService {  };
    bool initialized {  };
    ::java::lang::Object* lock {  };
    static ::sun::security::util::Debug* pdebug_;
    ::java::security::Provider* provider {  };
    ::java::util::Iterator* serviceIterator {  };
    static bool skipDebug_;
    MacSpi* spi {  };
    static int32_t warnCount_;

protected:
    void ctor(MacSpi* arg0, ::java::security::Provider* arg1, ::java::lang::String* arg2);
    /*void ctor(::java::security::Provider_Service* arg0, ::java::util::Iterator* arg1, ::java::lang::String* arg2); (private) */

public: /* package */
    virtual void chooseFirstProvider();
    /*void chooseProvider(::java::security::Key* arg0, ::java::security::spec::AlgorithmParameterSpec* arg1); (private) */

public:
    ::java::lang::Object* clone() override;
    ::int8_tArray* doFinal();
    ::int8_tArray* doFinal(::int8_tArray* arg0);
    void doFinal(::int8_tArray* arg0, int32_t arg1);
    ::java::lang::String* getAlgorithm();
    static Mac* getInstance(::java::lang::String* arg0);
    static Mac* getInstance(::java::lang::String* arg0, ::java::lang::String* arg1);
    static Mac* getInstance(::java::lang::String* arg0, ::java::security::Provider* arg1);
    int32_t getMacLength();
    ::java::security::Provider* getProvider();
    void init_(::java::security::Key* arg0);
    void init_(::java::security::Key* arg0, ::java::security::spec::AlgorithmParameterSpec* arg1);
    void reset();
    void update(int8_t arg0);
    void update(::int8_tArray* arg0);
    void update(::java::nio::ByteBuffer* arg0);
    void update(::int8_tArray* arg0, int32_t arg1, int32_t arg2);

    // Generated

public: /* protected */
    Mac(MacSpi* arg0, ::java::security::Provider* arg1, ::java::lang::String* arg2);
protected:
    Mac(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    static ::sun::security::util::Debug*& debug();
    static ::sun::security::util::Debug*& pdebug();
    static bool& skipDebug();
    static int32_t& warnCount();
    virtual ::java::lang::Class* getClass0();
};
