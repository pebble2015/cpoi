// Generated from /POI/java/org/apache/poi/poifs/crypt/CipherProvider.java

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
typedef ::SubArray< ::poi::poifs::crypt::CipherProvider, ::java::lang::EnumArray > CipherProviderArray;
        } // crypt
    } // poifs
} // poi

struct default_init_tag;

class poi::poifs::crypt::CipherProvider final
    : public ::java::lang::Enum
{

public:
    typedef ::java::lang::Enum super;

public: /* package */
    static CipherProvider *rc4;
    static CipherProvider *aes;

public:
    static CipherProvider* fromEcmaId(int32_t ecmaId);
    ::java::lang::String* jceId {  };
    int32_t ecmaId {  };
    ::java::lang::String* cipherProviderName {  };
protected:
    void ctor(::java::lang::String* name, int ordinal, ::java::lang::String* jceId, int32_t ecmaId, ::java::lang::String* cipherProviderName);

    // Generated

private:
    CipherProvider(::java::lang::String* name, int ordinal, ::java::lang::String* jceId, int32_t ecmaId, ::java::lang::String* cipherProviderName);
protected:
    CipherProvider(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static CipherProvider* valueOf(::java::lang::String* a0);
    static CipherProviderArray* values();

private:
    virtual ::java::lang::Class* getClass0();
};
