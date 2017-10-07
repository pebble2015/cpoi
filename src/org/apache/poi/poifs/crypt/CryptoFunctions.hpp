// Generated from /POI/java/org/apache/poi/poifs/crypt/CryptoFunctions.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/security/fwd-POI.hpp>
#include <javax/crypto/fwd-POI.hpp>
#include <org/apache/poi/poifs/crypt/fwd-POI.hpp>
#include <java/lang/Object.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace io
    {
typedef ::SubArray< ::java::io::Serializable, ::java::lang::ObjectArray > SerializableArray;
    } // io

    namespace lang
    {
typedef ::SubArray< ::java::lang::Cloneable, ObjectArray > CloneableArray;
    } // lang
} // java

namespace 
{
typedef ::SubArray< ::int32_tArray, ::java::lang::CloneableArray, ::java::io::SerializableArray > int32_tArrayArray;
} // 

struct default_init_tag;

class org::apache::poi::poifs::crypt::CryptoFunctions
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;
    static ::int8_tArray* hashPassword(::java::lang::String* password, HashAlgorithm* hashAlgorithm, ::int8_tArray* salt, int32_t spinCount);
    static ::int8_tArray* hashPassword(::java::lang::String* password, HashAlgorithm* hashAlgorithm, ::int8_tArray* salt, int32_t spinCount, bool iteratorFirst);
    static ::int8_tArray* generateIv(HashAlgorithm* hashAlgorithm, ::int8_tArray* salt, ::int8_tArray* blockKey, int32_t blockSize);
    static ::int8_tArray* generateKey(::int8_tArray* passwordHash, HashAlgorithm* hashAlgorithm, ::int8_tArray* blockKey, int32_t keySize);
    static ::javax::crypto::Cipher* getCipher(::javax::crypto::SecretKey* key, CipherAlgorithm* cipherAlgorithm, ChainingMode* chain, ::int8_tArray* vec, int32_t cipherMode);
    static ::javax::crypto::Cipher* getCipher(::java::security::Key* key, CipherAlgorithm* cipherAlgorithm, ChainingMode* chain, ::int8_tArray* vec, int32_t cipherMode, ::java::lang::String* padding);

private:
    static ::int8_tArray* getBlock36(::int8_tArray* hash, int32_t size);

public:
    static ::int8_tArray* getBlock0(::int8_tArray* hash, int32_t size);

private:
    static ::int8_tArray* getBlockX(::int8_tArray* hash, int32_t size, int8_t fill);

public:
    static ::java::security::MessageDigest* getMessageDigest(HashAlgorithm* hashAlgorithm);
    static ::javax::crypto::Mac* getMac(HashAlgorithm* hashAlgorithm);
    static void registerBouncyCastle();

private:
    static ::int32_tArray* INITIAL_CODE_ARRAY_;
    static ::int8_tArray* PAD_ARRAY_;
    static ::int32_tArrayArray* ENCRYPTION_MATRIX_;

public:
    static int32_t createXorVerifier1(::java::lang::String* password);
    static int32_t createXorVerifier2(::java::lang::String* password);
    static ::java::lang::String* xorHashPassword(::java::lang::String* password);
    static ::java::lang::String* xorHashPasswordReversed(::java::lang::String* password);
    static int32_t createXorKey1(::java::lang::String* password);
    static ::int8_tArray* createXorArray1(::java::lang::String* password);

private:
    static ::int8_tArray* toAnsiPassword(::java::lang::String* password);
    static int8_t rotateLeft(int8_t bits, int32_t shift);
    static int16_t rotateLeftBase15Bit(int16_t verifier);

    // Generated

public:
    CryptoFunctions();
protected:
    CryptoFunctions(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    static ::int32_tArray*& INITIAL_CODE_ARRAY();
    static ::int8_tArray*& PAD_ARRAY();
    static ::int32_tArrayArray*& ENCRYPTION_MATRIX();
    virtual ::java::lang::Class* getClass0();
};
