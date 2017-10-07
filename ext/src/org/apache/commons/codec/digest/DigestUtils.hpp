// Generated from /POI/commons-codec-1.10.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/security/fwd-POI.hpp>
#include <org/apache/commons/codec/digest/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class org::apache::commons::codec::digest::DigestUtils
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    static constexpr int32_t STREAM_BUFFER_LENGTH { int32_t(1024) };

protected:
    void ctor();
    /*static ::int8_tArray* digest(::java::security::MessageDigest* digest, ::java::io::InputStream* data); (private) */

public:
    static ::java::security::MessageDigest* getDigest(::java::lang::String* arg0);
    static ::java::security::MessageDigest* getMd2Digest();
    static ::java::security::MessageDigest* getMd5Digest();
    static ::java::security::MessageDigest* getSha1Digest();
    static ::java::security::MessageDigest* getSha256Digest();
    static ::java::security::MessageDigest* getSha384Digest();
    static ::java::security::MessageDigest* getSha512Digest();
    static ::java::security::MessageDigest* getShaDigest();
    static ::int8_tArray* md2(::int8_tArray* data);
    static ::int8_tArray* md2(::java::io::InputStream* data);
    static ::int8_tArray* md2(::java::lang::String* data);
    static ::java::lang::String* md2Hex(::int8_tArray* data);
    static ::java::lang::String* md2Hex(::java::io::InputStream* data);
    static ::java::lang::String* md2Hex(::java::lang::String* data);
    static ::int8_tArray* md5(::int8_tArray* data);
    static ::int8_tArray* md5(::java::io::InputStream* data);
    static ::int8_tArray* md5(::java::lang::String* data);
    static ::java::lang::String* md5Hex(::int8_tArray* data);
    static ::java::lang::String* md5Hex(::java::io::InputStream* data);
    static ::java::lang::String* md5Hex(::java::lang::String* data);
    static ::int8_tArray* sha(::int8_tArray* data);
    static ::int8_tArray* sha(::java::io::InputStream* data);
    static ::int8_tArray* sha(::java::lang::String* data);
    static ::int8_tArray* sha1(::int8_tArray* data);
    static ::int8_tArray* sha1(::java::io::InputStream* data);
    static ::int8_tArray* sha1(::java::lang::String* data);
    static ::java::lang::String* sha1Hex(::int8_tArray* data);
    static ::java::lang::String* sha1Hex(::java::io::InputStream* data);
    static ::java::lang::String* sha1Hex(::java::lang::String* data);
    static ::int8_tArray* sha256(::int8_tArray* data);
    static ::int8_tArray* sha256(::java::io::InputStream* data);
    static ::int8_tArray* sha256(::java::lang::String* data);
    static ::java::lang::String* sha256Hex(::int8_tArray* data);
    static ::java::lang::String* sha256Hex(::java::io::InputStream* data);
    static ::java::lang::String* sha256Hex(::java::lang::String* data);
    static ::int8_tArray* sha384(::int8_tArray* data);
    static ::int8_tArray* sha384(::java::io::InputStream* data);
    static ::int8_tArray* sha384(::java::lang::String* data);
    static ::java::lang::String* sha384Hex(::int8_tArray* data);
    static ::java::lang::String* sha384Hex(::java::io::InputStream* data);
    static ::java::lang::String* sha384Hex(::java::lang::String* data);
    static ::int8_tArray* sha512(::int8_tArray* data);
    static ::int8_tArray* sha512(::java::io::InputStream* data);
    static ::int8_tArray* sha512(::java::lang::String* data);
    static ::java::lang::String* sha512Hex(::int8_tArray* data);
    static ::java::lang::String* sha512Hex(::java::io::InputStream* data);
    static ::java::lang::String* sha512Hex(::java::lang::String* data);
    static ::java::lang::String* shaHex(::int8_tArray* data);
    static ::java::lang::String* shaHex(::java::io::InputStream* data);
    static ::java::lang::String* shaHex(::java::lang::String* data);
    static ::java::security::MessageDigest* updateDigest(::java::security::MessageDigest* messageDigest, ::int8_tArray* valueToDigest);
    static ::java::security::MessageDigest* updateDigest(::java::security::MessageDigest* digest, ::java::io::InputStream* data);
    static ::java::security::MessageDigest* updateDigest(::java::security::MessageDigest* messageDigest, ::java::lang::String* valueToDigest);

    // Generated
    DigestUtils();
protected:
    DigestUtils(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
