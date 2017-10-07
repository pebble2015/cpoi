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
typedef ::SubArray< ::java::util::Formatter_BigDecimalLayoutForm, ::java::lang::EnumArray > Formatter_BigDecimalLayoutFormArray;
    } // util
} // java

struct default_init_tag;

class java::util::Formatter_BigDecimalLayoutForm final
    : public ::java::lang::Enum
{

public:
    typedef ::java::lang::Enum super;

private:
    static Formatter_BigDecimalLayoutFormArray* $VALUES_;

public:
    static Formatter_BigDecimalLayoutForm* DECIMAL_FLOAT;
    static Formatter_BigDecimalLayoutForm* SCIENTIFIC;

    /*void ctor(::java::lang::String* name, int ordinal); (private) */
    static Formatter_BigDecimalLayoutForm* valueOf(::java::lang::String* arg0);
    static Formatter_BigDecimalLayoutFormArray* values();

    // Generated
    Formatter_BigDecimalLayoutForm(::java::lang::String* name, int ordinal);
protected:
    Formatter_BigDecimalLayoutForm(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static ::java::lang::Enum* valueOf(::java::lang::Class* enumType, ::java::lang::String* name);

private:
    static Formatter_BigDecimalLayoutFormArray*& $VALUES();
    virtual ::java::lang::Class* getClass0();
};
