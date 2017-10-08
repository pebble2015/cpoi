// Generated from /POI/java/org/apache/poi/poifs/crypt/HashAlgorithm.java

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
typedef ::SubArray< ::poi::poifs::crypt::HashAlgorithm, ::java::lang::EnumArray > HashAlgorithmArray;
        } // crypt
    } // poifs
} // poi

struct default_init_tag;

class poi::poifs::crypt::HashAlgorithm final
    : public ::java::lang::Enum
{

public:
    typedef ::java::lang::Enum super;

public: /* package */
    static HashAlgorithm *none;
    static HashAlgorithm *sha1;
    static HashAlgorithm *sha256;
    static HashAlgorithm *sha384;
    static HashAlgorithm *sha512;
    static HashAlgorithm *md5;
    static HashAlgorithm *md2;
    static HashAlgorithm *md4;
    static HashAlgorithm *ripemd128;
    static HashAlgorithm *ripemd160;
    static HashAlgorithm *whirlpool;
    static HashAlgorithm *sha224;

public:
    ::java::lang::String* jceId {  };
    int32_t ecmaId {  };
    ::java::lang::String* ecmaString {  };
    int32_t hashSize {  };
    ::java::lang::String* jceHmacId {  };
    bool needsBouncyCastle {  };
protected:
    void ctor(::java::lang::String* name, int ordinal, ::java::lang::String* jceId, int32_t ecmaId, ::java::lang::String* ecmaString, int32_t hashSize, ::java::lang::String* jceHmacId, bool needsBouncyCastle);

public:
    static HashAlgorithm* fromEcmaId(int32_t ecmaId);
    static HashAlgorithm* fromEcmaId(::java::lang::String* ecmaString);
    static HashAlgorithm* fromString(::java::lang::String* string);

    // Generated

private:
    HashAlgorithm(::java::lang::String* name, int ordinal, ::java::lang::String* jceId, int32_t ecmaId, ::java::lang::String* ecmaString, int32_t hashSize, ::java::lang::String* jceHmacId, bool needsBouncyCastle);
protected:
    HashAlgorithm(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static HashAlgorithm* valueOf(::java::lang::String* a0);
    static HashAlgorithmArray* values();

private:
    virtual ::java::lang::Class* getClass0();
};
