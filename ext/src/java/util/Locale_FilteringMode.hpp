// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
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

    namespace util
    {
typedef ::SubArray< ::java::util::Locale_FilteringMode, ::java::lang::EnumArray > Locale_FilteringModeArray;
    } // util
} // java

struct default_init_tag;

class java::util::Locale_FilteringMode final
    : public ::java::lang::Enum
{

public:
    typedef ::java::lang::Enum super;

private:
    static Locale_FilteringModeArray* $VALUES_;

public:
    static Locale_FilteringMode* AUTOSELECT_FILTERING;
    static Locale_FilteringMode* EXTENDED_FILTERING;
    static Locale_FilteringMode* IGNORE_EXTENDED_RANGES;
    static Locale_FilteringMode* MAP_EXTENDED_RANGES;
    static Locale_FilteringMode* REJECT_EXTENDED_RANGES;

    /*void ctor(::java::lang::String* name, int ordinal); (private) */
    static Locale_FilteringMode* valueOf(::java::lang::String* arg0);
    static Locale_FilteringModeArray* values();

    // Generated
    Locale_FilteringMode(::java::lang::String* name, int ordinal);
protected:
    Locale_FilteringMode(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static ::java::lang::Enum* valueOf(::java::lang::Class* enumType, ::java::lang::String* name);

private:
    static Locale_FilteringModeArray*& $VALUES();
    virtual ::java::lang::Class* getClass0();
};
