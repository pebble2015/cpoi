// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <sun/java2d/pipe/hw/fwd-POI.hpp>
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

namespace sun
{
    namespace java2d
    {
        namespace pipe
        {
            namespace hw
            {
typedef ::SubArray< ::sun::java2d::pipe::hw::ExtendedBufferCapabilities_VSyncType, ::java::lang::EnumArray > ExtendedBufferCapabilities_VSyncTypeArray;
            } // hw
        } // pipe
    } // java2d
} // sun

struct default_init_tag;

class sun::java2d::pipe::hw::ExtendedBufferCapabilities_VSyncType final
    : public ::java::lang::Enum
{

public:
    typedef ::java::lang::Enum super;

private:
    static ExtendedBufferCapabilities_VSyncTypeArray* $VALUES_;

public:
    static ExtendedBufferCapabilities_VSyncType* VSYNC_DEFAULT;
    static ExtendedBufferCapabilities_VSyncType* VSYNC_OFF;
    static ExtendedBufferCapabilities_VSyncType* VSYNC_ON;

private:
    int32_t id_ {  };

    /*void ctor(::java::lang::String* name, int ordinal, int32_t arg0); (private) */

public:
    int32_t id();
    static ExtendedBufferCapabilities_VSyncType* valueOf(::java::lang::String* arg0);
    static ExtendedBufferCapabilities_VSyncTypeArray* values();

    // Generated
    ExtendedBufferCapabilities_VSyncType(::java::lang::String* name, int ordinal);
protected:
    ExtendedBufferCapabilities_VSyncType(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static ::java::lang::Enum* valueOf(::java::lang::Class* enumType, ::java::lang::String* name);

private:
    static ExtendedBufferCapabilities_VSyncTypeArray*& $VALUES();
    virtual ::java::lang::Class* getClass0();
};
