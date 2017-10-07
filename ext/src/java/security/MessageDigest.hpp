// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/nio/fwd-POI.hpp>
#include <java/security/fwd-POI.hpp>
#include <sun/security/util/fwd-POI.hpp>
#include <java/security/MessageDigestSpi.hpp>

struct default_init_tag;

class java::security::MessageDigest
    : public MessageDigestSpi
{

public:
    typedef MessageDigestSpi super;

private:
    static constexpr int32_t INITIAL { int32_t(0) };
    static constexpr int32_t IN_PROGRESS { int32_t(1) };
    ::java::lang::String* algorithm {  };
    static ::sun::security::util::Debug* pdebug_;
    Provider* provider {  };
    static bool skipDebug_;
    int32_t state {  };

protected:
    void ctor(::java::lang::String* algorithm);

public:
    ::java::lang::Object* clone() override;
    virtual ::int8_tArray* digest();
    virtual ::int8_tArray* digest(::int8_tArray* input);
    virtual int32_t digest(::int8_tArray* buf, int32_t offset, int32_t len);
    ::java::lang::String* getAlgorithm();
    int32_t getDigestLength();
    static MessageDigest* getInstance(::java::lang::String* algorithm);
    static MessageDigest* getInstance(::java::lang::String* algorithm, ::java::lang::String* provider);
    static MessageDigest* getInstance(::java::lang::String* algorithm, Provider* provider);
    Provider* getProvider();
    static bool isEqual(::int8_tArray* digesta, ::int8_tArray* digestb);
    virtual void reset();
    ::java::lang::String* toString() override;
    virtual void update(int8_t input);
    virtual void update(::int8_tArray* input);
    void update(::java::nio::ByteBuffer* input);
    virtual void update(::int8_tArray* input, int32_t offset, int32_t len);

    // Generated

public: /* protected */
    MessageDigest(::java::lang::String* algorithm);
protected:
    MessageDigest(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    static ::sun::security::util::Debug*& pdebug();
    static bool& skipDebug();
    virtual ::java::lang::Class* getClass0();
};
