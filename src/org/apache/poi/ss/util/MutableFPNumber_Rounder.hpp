// Generated from /POI/java/org/apache/poi/ss/util/MutableFPNumber.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/math/fwd-POI.hpp>
#include <org/apache/poi/ss/util/fwd-POI.hpp>
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
typedef ::SubArray< ::java::lang::Comparable, ObjectArray > ComparableArray;
typedef ::SubArray< ::java::lang::Number, ObjectArray, ::java::io::SerializableArray > NumberArray;
    } // lang

    namespace math
    {
typedef ::SubArray< ::java::math::BigInteger, ::java::lang::NumberArray, ::java::lang::ComparableArray > BigIntegerArray;
    } // math
} // java

struct default_init_tag;

class org::apache::poi::ss::util::MutableFPNumber_Rounder final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    static ::java::math::BigIntegerArray* HALF_BITS_;

public:
    static ::java::math::BigInteger* round(::java::math::BigInteger* bi, int32_t nBits);

    // Generated
    MutableFPNumber_Rounder();
protected:
    MutableFPNumber_Rounder(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    static ::java::math::BigIntegerArray*& HALF_BITS();
    virtual ::java::lang::Class* getClass0();
    friend class MutableFPNumber;
    friend class MutableFPNumber_TenPower;
};
