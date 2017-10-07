// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/awt/fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <sun/util/logging/fwd-POI.hpp>
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
typedef ::SubArray< ::java::lang::CharSequence, ObjectArray > CharSequenceArray;
typedef ::SubArray< ::java::lang::Comparable, ObjectArray > ComparableArray;
typedef ::SubArray< ::java::lang::String, ObjectArray, ::java::io::SerializableArray, ComparableArray, CharSequenceArray > StringArray;
    } // lang
} // java

struct default_init_tag;

class java::awt::AttributeValue
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    static ::sun::util::logging::PlatformLogger* log_;
    ::java::lang::StringArray* names {  };
    int32_t value {  };

protected:
    void ctor(int32_t value, ::java::lang::StringArray* names);

public:
    int32_t hashCode() override;
    ::java::lang::String* toString() override;

    // Generated

public: /* protected */
    AttributeValue(int32_t value, ::java::lang::StringArray* names);
protected:
    AttributeValue(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    static ::sun::util::logging::PlatformLogger*& log();
    virtual ::java::lang::Class* getClass0();
};
