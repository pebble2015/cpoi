// Generated from /POI/java/org/apache/poi/dev/RecordGenerator.java

#pragma once

#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/dev/fwd-POI.hpp>
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

class org::apache::poi::dev::RecordGenerator
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;
    static void main(::java::lang::StringArray* args) /* throws(Exception) */;

private:
    static void generateRecords(::java::lang::String* defintionsDir, ::java::lang::String* recordStyleDir, ::java::lang::String* destSrcPathDir, ::java::lang::String* testSrcPathDir) /* throws(Exception) */;
    static void transform(::java::io::File* in, ::java::io::File* out, ::java::io::File* xslt) /* throws(FileNotFoundException, TransformerException) */;

    // Generated

public:
    RecordGenerator();
protected:
    RecordGenerator(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
