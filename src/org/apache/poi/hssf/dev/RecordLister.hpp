// Generated from /POI/java/org/apache/poi/hssf/dev/RecordLister.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/dev/fwd-POI.hpp>
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

class org::apache::poi::hssf::dev::RecordLister
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

public: /* package */
    ::java::lang::String* file {  };
protected:
    void ctor();

public:
    virtual void run() /* throws(IOException) */;

private:
    static ::java::lang::String* formatSID(int32_t sid);
    static ::java::lang::String* formatSize(int32_t size);
    static ::java::lang::String* formatData(::int8_tArray* data);
    static ::java::lang::String* byteToHex(int8_t b);

public:
    virtual void setFile(::java::lang::String* file);
    static void main(::java::lang::StringArray* args) /* throws(IOException) */;

    // Generated
    RecordLister();
protected:
    RecordLister(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
