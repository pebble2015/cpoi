// Generated from /POI/java/org/apache/poi/poifs/crypt/ChainingMode.java

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
typedef ::SubArray< ::org::apache::poi::poifs::crypt::ChainingMode, ::java::lang::EnumArray > ChainingModeArray;
                } // crypt
            } // poifs
        } // poi
    } // apache
} // org

struct default_init_tag;

class org::apache::poi::poifs::crypt::ChainingMode final
    : public ::java::lang::Enum
{

public:
    typedef ::java::lang::Enum super;

public: /* package */
    static ChainingMode *ecb;
    static ChainingMode *cbc;
    static ChainingMode *cfb;

public:
    ::java::lang::String* jceId {  };
    int32_t ecmaId {  };
protected:
    void ctor(::java::lang::String* name, int ordinal, ::java::lang::String* jceId, int32_t ecmaId);

    // Generated

private:
    ChainingMode(::java::lang::String* name, int ordinal, ::java::lang::String* jceId, int32_t ecmaId);
protected:
    ChainingMode(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static ChainingMode* valueOf(::java::lang::String* a0);
    static ChainingModeArray* values();

private:
    virtual ::java::lang::Class* getClass0();
};
