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
typedef ::SubArray< ::java::awt::Component_BaselineResizeBehavior, ::java::lang::EnumArray > Component_BaselineResizeBehaviorArray;
    } // awt
} // java

struct default_init_tag;

class java::awt::Component_BaselineResizeBehavior final
    : public ::java::lang::Enum
{

public:
    typedef ::java::lang::Enum super;

private:
    static Component_BaselineResizeBehaviorArray* $VALUES_;

public:
    static Component_BaselineResizeBehavior* CENTER_OFFSET;
    static Component_BaselineResizeBehavior* CONSTANT_ASCENT;
    static Component_BaselineResizeBehavior* CONSTANT_DESCENT;
    static Component_BaselineResizeBehavior* OTHER;

    /*void ctor(::java::lang::String* name, int ordinal); (private) */
    static Component_BaselineResizeBehavior* valueOf(::java::lang::String* arg0);
    static Component_BaselineResizeBehaviorArray* values();

    // Generated
    Component_BaselineResizeBehavior(::java::lang::String* name, int ordinal);
protected:
    Component_BaselineResizeBehavior(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static ::java::lang::Enum* valueOf(::java::lang::Class* enumType, ::java::lang::String* name);

private:
    static Component_BaselineResizeBehaviorArray*& $VALUES();
    virtual ::java::lang::Class* getClass0();
};
