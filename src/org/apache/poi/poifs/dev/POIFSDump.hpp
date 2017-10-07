// Generated from /POI/java/org/apache/poi/poifs/dev/POIFSDump.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/poifs/dev/fwd-POI.hpp>
#include <org/apache/poi/poifs/filesystem/fwd-POI.hpp>
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

class org::apache::poi::poifs::dev::POIFSDump
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;
    static void main(::java::lang::StringArray* args) /* throws(IOException) */;
    static void dump(::org::apache::poi::poifs::filesystem::DirectoryEntry* root, ::java::io::File* parent) /* throws(IOException) */;
    static void dump(::org::apache::poi::poifs::filesystem::NPOIFSFileSystem* fs, int32_t startBlock, ::java::lang::String* name, ::java::io::File* parent) /* throws(IOException) */;

    // Generated
    POIFSDump();
protected:
    POIFSDump(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
