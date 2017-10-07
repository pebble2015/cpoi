// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/math/fwd-POI.hpp>
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

    namespace math
    {
typedef ::SubArray< ::java::math::RoundingMode, ::java::lang::EnumArray > RoundingModeArray;
    } // math
} // java

struct default_init_tag;

class java::math::RoundingMode final
    : public ::java::lang::Enum
{

public:
    typedef ::java::lang::Enum super;

private:
    static RoundingModeArray* $VALUES_;

public:
    static RoundingMode* CEILING;
    static RoundingMode* DOWN;
    static RoundingMode* FLOOR;
    static RoundingMode* HALF_DOWN;
    static RoundingMode* HALF_EVEN;
    static RoundingMode* HALF_UP;
    static RoundingMode* UNNECESSARY;
    static RoundingMode* UP;

public: /* package */
    int32_t oldMode {  };

    /*void ctor(::java::lang::String* name, int ordinal, int32_t oldMode); (private) */

public:
    static RoundingMode* valueOf(::java::lang::String* arg0);
    static RoundingMode* valueOf(int32_t rm);
    static RoundingModeArray* values();

    // Generated
    RoundingMode(::java::lang::String* name, int ordinal);
protected:
    RoundingMode(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static ::java::lang::Enum* valueOf(::java::lang::Class* enumType, ::java::lang::String* name);

private:
    static RoundingModeArray*& $VALUES();
    virtual ::java::lang::Class* getClass0();
};
