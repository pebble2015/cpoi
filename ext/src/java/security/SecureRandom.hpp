// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <atomic>
#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/security/fwd-POI.hpp>
#include <sun/security/util/fwd-POI.hpp>
#include <java/util/Random.hpp>

struct default_init_tag;

class java::security::SecureRandom
    : public ::java::util::Random
{

public:
    typedef ::java::util::Random super;

private:
    ::java::lang::String* algorithm {  };
    int64_t counter {  };
    MessageDigest* digest {  };
    static ::sun::security::util::Debug* pdebug_;
    Provider* provider {  };
    ::int8_tArray* randomBytes {  };
    int32_t randomBytesUsed {  };
    SecureRandomSpi* secureRandomSpi {  };
    static std::atomic< SecureRandom* > seedGenerator_;

public: /* package */
    static constexpr int64_t serialVersionUID { int64_t(4940670005562187LL) };

private:
    static bool skipDebug_;
    ::int8_tArray* state {  };

protected:
    void ctor();
    void ctor(::int8_tArray* seed);
    void ctor(SecureRandomSpi* secureRandomSpi, Provider* provider);
    /*void ctor(SecureRandomSpi* secureRandomSpi, Provider* provider, ::java::lang::String* algorithm); (private) */

public:
    virtual ::int8_tArray* generateSeed(int32_t numBytes);
    virtual ::java::lang::String* getAlgorithm();
    /*void getDefaultPRNG(bool setSeed, ::int8_tArray* seed); (private) */
    static SecureRandom* getInstance(::java::lang::String* algorithm);
    static SecureRandom* getInstance(::java::lang::String* algorithm, ::java::lang::String* provider);
    static SecureRandom* getInstance(::java::lang::String* algorithm, Provider* provider);
    static SecureRandom* getInstanceStrong();
    /*static ::java::lang::String* getPrngAlgorithm(); (private) */
    Provider* getProvider();

public: /* package */
    virtual SecureRandomSpi* getSecureRandomSpi();

public:
    static ::int8_tArray* getSeed(int32_t numBytes);
    /*static ::int8_tArray* longToByteArray_(int64_t l); (private) */

public: /* protected */
    int32_t next(int32_t numBits) override;

public:
    void nextBytes(::int8_tArray* bytes) override;
    virtual void setSeed(::int8_tArray* seed);
    void setSeed(int64_t seed) override;

    // Generated
    SecureRandom();
    SecureRandom(::int8_tArray* seed);

public: /* protected */
    SecureRandom(SecureRandomSpi* secureRandomSpi, Provider* provider);
protected:
    SecureRandom(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    static ::sun::security::util::Debug*& pdebug();
    static std::atomic< SecureRandom* >& seedGenerator();
    static bool& skipDebug();
    virtual ::java::lang::Class* getClass0();
};
