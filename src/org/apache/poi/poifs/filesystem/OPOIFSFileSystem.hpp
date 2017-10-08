// Generated from /POI/java/org/apache/poi/poifs/filesystem/OPOIFSFileSystem.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/poifs/common/fwd-POI.hpp>
#include <org/apache/poi/poifs/filesystem/fwd-POI.hpp>
#include <org/apache/poi/poifs/property/fwd-POI.hpp>
#include <org/apache/poi/poifs/storage/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>
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

class poi::poifs::filesystem::OPOIFSFileSystem
    : public virtual ::java::lang::Object
    , public virtual ::poi::poifs::dev::POIFSViewable
{

public:
    typedef ::java::lang::Object super;

private:
    static ::poi::util::POILogger* _logger_;

public:
    static ::java::io::InputStream* createNonClosingInputStream(::java::io::InputStream* is);

private:
    ::poi::poifs::property::PropertyTable* _property_table {  };
    ::java::util::List* _documents {  };
    DirectoryNode* _root {  };
    ::poi::poifs::common::POIFSBigBlockSize* bigBlockSize {  };
protected:
    void ctor();
    void ctor(::java::io::InputStream* stream) /* throws(IOException) */;

public: /* protected */
    virtual void closeInputStream(::java::io::InputStream* stream, bool success);

public:
    static bool hasPOIFSHeader(::java::io::InputStream* inp) /* throws(IOException) */;
    static bool hasPOIFSHeader(::int8_tArray* header8Bytes);
    virtual DocumentEntry* createDocument(::java::io::InputStream* stream, ::java::lang::String* name) /* throws(IOException) */;
    virtual DocumentEntry* createDocument(::java::lang::String* name, int32_t size, POIFSWriterListener* writer) /* throws(IOException) */;
    virtual DirectoryEntry* createDirectory(::java::lang::String* name) /* throws(IOException) */;
    virtual void writeFilesystem(::java::io::OutputStream* stream) /* throws(IOException) */;
    static void main(::java::lang::StringArray* args) /* throws(IOException) */;
    virtual DirectoryNode* getRoot();
    virtual DocumentInputStream* createDocumentInputStream(::java::lang::String* documentName) /* throws(IOException) */;

public: /* package */
    virtual void addDocument(OPOIFSDocument* document);
    virtual void addDirectory(::poi::poifs::property::DirectoryProperty* directory);
    virtual void remove(EntryNode* entry);

private:
    void processProperties(::poi::poifs::storage::BlockList* small_blocks, ::poi::poifs::storage::BlockList* big_blocks, ::java::util::Iterator* properties, DirectoryNode* dir, int32_t headerPropertiesStartAt) /* throws(IOException) */;

public:
    ::java::lang::ObjectArray* getViewableArray_() override;
    ::java::util::Iterator* getViewableIterator() override;
    bool preferArray_() override;
    ::java::lang::String* getShortDescription() override;
    virtual int32_t getBigBlockSize();
    virtual ::poi::poifs::common::POIFSBigBlockSize* getBigBlockSizeDetails();

    // Generated
    OPOIFSFileSystem();
    OPOIFSFileSystem(::java::io::InputStream* stream);
protected:
    OPOIFSFileSystem(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    void init();
    static ::poi::util::POILogger*& _logger();
    virtual ::java::lang::Class* getClass0();
};
