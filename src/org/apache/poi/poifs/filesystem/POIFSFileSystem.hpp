// Generated from /POI/java/org/apache/poi/poifs/filesystem/POIFSFileSystem.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/poifs/filesystem/fwd-POI.hpp>
#include <org/apache/poi/poifs/filesystem/NPOIFSFileSystem.hpp>
#include <org/apache/poi/poifs/dev/POIFSViewable.hpp>

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

class org::apache::poi::poifs::filesystem::POIFSFileSystem
    : public NPOIFSFileSystem
    , public virtual ::org::apache::poi::poifs::dev::POIFSViewable
{

public:
    typedef NPOIFSFileSystem super;
    static ::java::io::InputStream* createNonClosingInputStream(::java::io::InputStream* is);
protected:
    void ctor();
    void ctor(::java::io::InputStream* stream) /* throws(IOException) */;
    void ctor(::java::io::File* file, bool readOnly) /* throws(IOException) */;
    void ctor(::java::io::File* file) /* throws(IOException) */;

public:
    static POIFSFileSystem* create(::java::io::File* file) /* throws(IOException) */;
    static void main(::java::lang::StringArray* args) /* throws(IOException) */;

    // Generated
    POIFSFileSystem();
    POIFSFileSystem(::java::io::InputStream* stream);
    POIFSFileSystem(::java::io::File* file, bool readOnly);
    POIFSFileSystem(::java::io::File* file);
protected:
    POIFSFileSystem(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    virtual ::java::lang::String* getShortDescription();
    virtual ::java::lang::ObjectArray* getViewableArray_();
    virtual ::java::util::Iterator* getViewableIterator();
    virtual bool preferArray_();

private:
    virtual ::java::lang::Class* getClass0();
};
