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
typedef ::SubArray< ::java::awt::GraphicsDevice_WindowTranslucency, ::java::lang::EnumArray > GraphicsDevice_WindowTranslucencyArray;
    } // awt
} // java

struct default_init_tag;

class java::awt::GraphicsDevice_WindowTranslucency final
    : public ::java::lang::Enum
{

public:
    typedef ::java::lang::Enum super;

private:
    static GraphicsDevice_WindowTranslucencyArray* $VALUES_;

public:
    static GraphicsDevice_WindowTranslucency* PERPIXEL_TRANSLUCENT;
    static GraphicsDevice_WindowTranslucency* PERPIXEL_TRANSPARENT;
    static GraphicsDevice_WindowTranslucency* TRANSLUCENT;

    /*void ctor(::java::lang::String* name, int ordinal); (private) */
    static GraphicsDevice_WindowTranslucency* valueOf(::java::lang::String* arg0);
    static GraphicsDevice_WindowTranslucencyArray* values();

    // Generated
    GraphicsDevice_WindowTranslucency(::java::lang::String* name, int ordinal);
protected:
    GraphicsDevice_WindowTranslucency(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static ::java::lang::Enum* valueOf(::java::lang::Class* enumType, ::java::lang::String* name);

private:
    static GraphicsDevice_WindowTranslucencyArray*& $VALUES();
    virtual ::java::lang::Class* getClass0();
};
