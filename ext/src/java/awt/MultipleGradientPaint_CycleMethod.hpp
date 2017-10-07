// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <java/awt/fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/lang/Enum.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace lang
    {
typedef ::SubArray< ::java::lang::Comparable, ObjectArray > ComparableArray;
    } // lang

    namespace io
    {
typedef ::SubArray< ::java::io::Serializable, ::java::lang::ObjectArray > SerializableArray;
    } // io

    namespace lang
    {
typedef ::SubArray< ::java::lang::Enum, ObjectArray, ComparableArray, ::java::io::SerializableArray > EnumArray;
    } // lang

    namespace awt
    {
typedef ::SubArray< ::java::awt::MultipleGradientPaint_CycleMethod, ::java::lang::EnumArray > MultipleGradientPaint_CycleMethodArray;
    } // awt
} // java

struct default_init_tag;

class java::awt::MultipleGradientPaint_CycleMethod final
    : public ::java::lang::Enum
{

public:
    typedef ::java::lang::Enum super;

private:
    static MultipleGradientPaint_CycleMethodArray* $VALUES_;

public:
    static MultipleGradientPaint_CycleMethod* NO_CYCLE;
    static MultipleGradientPaint_CycleMethod* REFLECT;
    static MultipleGradientPaint_CycleMethod* REPEAT;

    /*void ctor(::java::lang::String* name, int ordinal); (private) */
    static MultipleGradientPaint_CycleMethod* valueOf(::java::lang::String* arg0);
    static MultipleGradientPaint_CycleMethodArray* values();

    // Generated
    MultipleGradientPaint_CycleMethod(::java::lang::String* name, int ordinal);
protected:
    MultipleGradientPaint_CycleMethod(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static ::java::lang::Enum* valueOf(::java::lang::Class* enumType, ::java::lang::String* name);

private:
    static MultipleGradientPaint_CycleMethodArray*& $VALUES();
    virtual ::java::lang::Class* getClass0();
};
