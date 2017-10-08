// Generated from /POI/java/org/apache/poi/poifs/macros/VBAMacroExtractor.java

#pragma once

#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/poifs/macros/fwd-POI.hpp>
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

class poi::poifs::macros::VBAMacroExtractor
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;
    static void main(::java::lang::StringArray* args) /* throws(IOException) */;
    virtual void extract(::java::io::File* input, ::java::io::File* outputDir, ::java::lang::String* extension) /* throws(IOException) */;
    virtual void extract(::java::io::File* input, ::java::io::File* outputDir) /* throws(IOException) */;

    // Generated
    VBAMacroExtractor();
protected:
    VBAMacroExtractor(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
