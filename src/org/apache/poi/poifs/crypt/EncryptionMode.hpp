// Generated from /POI/java/org/apache/poi/poifs/crypt/EncryptionMode.java

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

namespace org
{
    namespace apache
    {
        namespace poi
        {
            namespace poifs
            {
                namespace crypt
                {
typedef ::SubArray< ::org::apache::poi::poifs::crypt::EncryptionMode, ::java::lang::EnumArray > EncryptionModeArray;
                } // crypt
            } // poifs
        } // poi
    } // apache
} // org

struct default_init_tag;

class org::apache::poi::poifs::crypt::EncryptionMode final
    : public ::java::lang::Enum
{

public:
    typedef ::java::lang::Enum super;

public: /* package */
    static EncryptionMode *binaryRC4;
    static EncryptionMode *cryptoAPI;
    static EncryptionMode *standard;
    static EncryptionMode *agile;
    static EncryptionMode *xor_;

public:
    ::java::lang::String* builder {  };
    int32_t versionMajor {  };
    int32_t versionMinor {  };
    int32_t encryptionFlags {  };
protected:
    void ctor(::java::lang::String* name, int ordinal, ::java::lang::String* builder, int32_t versionMajor, int32_t versionMinor, int32_t encryptionFlags);

    // Generated

private:
    EncryptionMode(::java::lang::String* name, int ordinal, ::java::lang::String* builder, int32_t versionMajor, int32_t versionMinor, int32_t encryptionFlags);
protected:
    EncryptionMode(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static EncryptionMode* valueOf(::java::lang::String* a0);
    static EncryptionModeArray* values();

private:
    virtual ::java::lang::Class* getClass0();
};
