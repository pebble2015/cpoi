// Generated from /POI/java/org/apache/poi/poifs/crypt/CipherAlgorithm.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/poifs/crypt/fwd-POI.hpp>
#include <java/lang/Enum.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace io
    {
typedef ::SubArray< ::java::io::Serializable, ::java::lang::ObjectArray > SerializableArray;
    } // io

    namespace lang
    {
typedef ::SubArray< ::java::lang::Comparable, ObjectArray > ComparableArray;
typedef ::SubArray< ::java::lang::Enum, ObjectArray, ComparableArray, ::java::io::SerializableArray > EnumArray;
    } // lang
} // java

namespace poi
{
    namespace poifs
    {
        namespace crypt
        {
typedef ::SubArray< ::poi::poifs::crypt::CipherAlgorithm, ::java::lang::EnumArray > CipherAlgorithmArray;
        } // crypt
    } // poifs
} // poi

struct default_init_tag;

class poi::poifs::crypt::CipherAlgorithm final
    : public ::java::lang::Enum
{

public:
    typedef ::java::lang::Enum super;

public: /* package */
    static CipherAlgorithm *rc4;
    static CipherAlgorithm *aes128;
    static CipherAlgorithm *aes192;
    static CipherAlgorithm *aes256;
    static CipherAlgorithm *rc2;
    static CipherAlgorithm *des;
    static CipherAlgorithm *des3;
    static CipherAlgorithm *des3_112;
    static CipherAlgorithm *rsa;

public:
    CipherProvider* provider {  };
    ::java::lang::String* jceId {  };
    int32_t ecmaId {  };
    int32_t defaultKeySize {  };
    ::int32_tArray* allowedKeySize {  };
    int32_t blockSize {  };
    int32_t encryptedVerifierHashLength {  };
    ::java::lang::String* xmlId {  };
    bool needsBouncyCastle {  };
protected:
    void ctor(::java::lang::String* name, int ordinal, CipherProvider* provider, ::java::lang::String* jceId, int32_t ecmaId, int32_t defaultKeySize, ::int32_tArray* allowedKeySize, int32_t blockSize, int32_t encryptedVerifierHashLength, ::java::lang::String* xmlId, bool needsBouncyCastle);

public:
    static CipherAlgorithm* fromEcmaId(int32_t ecmaId);
    static CipherAlgorithm* fromXmlId(::java::lang::String* xmlId, int32_t keySize);

    // Generated

private:
    CipherAlgorithm(::java::lang::String* name, int ordinal, CipherProvider* provider, ::java::lang::String* jceId, int32_t ecmaId, int32_t defaultKeySize, ::int32_tArray* allowedKeySize, int32_t blockSize, int32_t encryptedVerifierHashLength, ::java::lang::String* xmlId, bool needsBouncyCastle);
protected:
    CipherAlgorithm(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static CipherAlgorithm* valueOf(::java::lang::String* a0);
    static CipherAlgorithmArray* values();

private:
    virtual ::java::lang::Class* getClass0();
};
