// Generated from /POI/java/org/apache/poi/poifs/eventfilesystem/POIFSReader.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/poifs/eventfilesystem/fwd-POI.hpp>
#include <org/apache/poi/poifs/filesystem/fwd-POI.hpp>
#include <org/apache/poi/poifs/storage/fwd-POI.hpp>
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

class org::apache::poi::poifs::eventfilesystem::POIFSReader
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    POIFSReaderRegistry* registry {  };
    bool registryClosed {  };
    bool notifyEmptyDirectories {  };
protected:
    void ctor();

public:
    virtual void read(::java::io::InputStream* stream) /* throws(IOException) */;
    virtual void registerListener(POIFSReaderListener* listener);
    virtual void registerListener(POIFSReaderListener* listener, ::java::lang::String* name);
    virtual void registerListener(POIFSReaderListener* listener, ::org::apache::poi::poifs::filesystem::POIFSDocumentPath* path, ::java::lang::String* name);
    virtual void setNotifyEmptyDirectories(bool notifyEmptyDirectories);
    static void main(::java::lang::StringArray* args) /* throws(IOException) */;

private:
    void processProperties(::org::apache::poi::poifs::storage::BlockList* small_blocks, ::org::apache::poi::poifs::storage::BlockList* big_blocks, ::java::util::Iterator* properties, ::org::apache::poi::poifs::filesystem::POIFSDocumentPath* path) /* throws(IOException) */;

    // Generated

public:
    POIFSReader();
protected:
    POIFSReader(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    void init();
    virtual ::java::lang::Class* getClass0();
    friend class POIFSReader_SampleListener;
};
