// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <java/io/Serializable.hpp>

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

struct default_init_tag;

class java::util::EnumSet_SerializationProxy
    : public virtual ::java::lang::Object
    , public virtual ::java::io::Serializable
{

public:
    typedef ::java::lang::Object super;

private:
    ::java::lang::Class* elementType {  };
    ::java::lang::EnumArray* elements {  };
    static constexpr int64_t serialVersionUID { int64_t(362491234563181265LL) };

protected:
    void ctor(EnumSet* set);
    /*::java::lang::Object* readResolve(); (private) */

    // Generated

public: /* package */
    EnumSet_SerializationProxy(EnumSet* set);
protected:
    EnumSet_SerializationProxy(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
