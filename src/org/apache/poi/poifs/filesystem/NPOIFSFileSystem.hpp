// Generated from /POI/java/org/apache/poi/poifs/filesystem/NPOIFSFileSystem.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/nio/fwd-POI.hpp>
#include <java/nio/channels/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/poifs/common/fwd-POI.hpp>
#include <org/apache/poi/poifs/filesystem/fwd-POI.hpp>
#include <org/apache/poi/poifs/nio/fwd-POI.hpp>
#include <org/apache/poi/poifs/property/fwd-POI.hpp>
#include <org/apache/poi/poifs/storage/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/poifs/filesystem/BlockStore.hpp>
#include <org/apache/poi/poifs/dev/POIFSViewable.hpp>
#include <java/io/Closeable.hpp>

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

class poi::poifs::filesystem::NPOIFSFileSystem
    : public BlockStore
    , public virtual ::poi::poifs::dev::POIFSViewable
    , public virtual ::java::io::Closeable
{

public:
    typedef BlockStore super;

private:
    static ::poi::util::POILogger* LOG_;

public:
    static ::java::io::InputStream* createNonClosingInputStream(::java::io::InputStream* is);

private:
    NPOIFSMiniStore* _mini_store {  };
    ::poi::poifs::property::NPropertyTable* _property_table {  };
    ::java::util::List* _xbat_blocks {  };
    ::java::util::List* _bat_blocks {  };
    ::poi::poifs::storage::HeaderBlock* _header {  };
    DirectoryNode* _root {  };
    ::poi::poifs::nio::DataSource* _data {  };
    ::poi::poifs::common::POIFSBigBlockSize* bigBlockSize {  };
protected:
    void ctor(bool newFS);
    void ctor();
    void ctor(::java::io::File* file) /* throws(IOException) */;
    void ctor(::java::io::File* file, bool readOnly) /* throws(IOException) */;
    void ctor(::java::nio::channels::FileChannel* channel) /* throws(IOException) */;
    void ctor(::java::nio::channels::FileChannel* channel, bool readOnly) /* throws(IOException) */;
    void ctor(::java::nio::channels::FileChannel* channel, ::java::io::File* srcFile, bool readOnly, bool closeChannelOnError) /* throws(IOException) */;
    void ctor(::java::io::InputStream* stream) /* throws(IOException) */;

private:
    void closeInputStream(::java::io::InputStream* stream, bool success);

public:
    static bool hasPOIFSHeader(::java::io::InputStream* inp) /* throws(IOException) */;
    static bool hasPOIFSHeader(::int8_tArray* header8Bytes);

private:
    void readCoreContents() /* throws(IOException) */;
    void readBAT(int32_t batAt, BlockStore_ChainLoopDetector* loopDetector) /* throws(IOException) */;
    ::poi::poifs::storage::BATBlock* createBAT(int32_t offset, bool isBAT) /* throws(IOException) */;

public: /* protected */
    ::java::nio::ByteBuffer* getBlockAt(int32_t offset) /* throws(IOException) */ override;
    ::java::nio::ByteBuffer* createBlockIfNeeded(int32_t offset) /* throws(IOException) */ override;
    ::poi::poifs::storage::BATBlock_BATBlockAndIndex* getBATBlockAndIndex(int32_t offset) override;
    int32_t getNextBlock(int32_t offset) override;
    void setNextBlock(int32_t offset, int32_t nextBlock) override;
    int32_t getFreeBlock() /* throws(IOException) */ override;
    virtual int64_t size() /* throws(IOException) */;
    BlockStore_ChainLoopDetector* getChainLoopDetector() /* throws(IOException) */ override;

public: /* package */
    virtual ::poi::poifs::property::NPropertyTable* _get_property_table();

public:
    virtual NPOIFSMiniStore* getMiniStore();

public: /* package */
    virtual void addDocument(NPOIFSDocument* document);
    virtual void addDirectory(::poi::poifs::property::DirectoryProperty* directory);

public:
    virtual DocumentEntry* createDocument(::java::io::InputStream* stream, ::java::lang::String* name) /* throws(IOException) */;
    virtual DocumentEntry* createDocument(::java::lang::String* name, int32_t size, POIFSWriterListener* writer) /* throws(IOException) */;
    virtual DirectoryEntry* createDirectory(::java::lang::String* name) /* throws(IOException) */;
    virtual DocumentEntry* createOrUpdateDocument(::java::io::InputStream* stream, ::java::lang::String* name) /* throws(IOException) */;
    virtual bool isInPlaceWriteable();
    virtual void writeFilesystem() /* throws(IOException) */;
    virtual void writeFilesystem(::java::io::OutputStream* stream) /* throws(IOException) */;

private:
    void syncWithDataSource() /* throws(IOException) */;

public:
    void close() /* throws(IOException) */ override;
    static void main(::java::lang::StringArray* args) /* throws(IOException) */;
    virtual DirectoryNode* getRoot();
    virtual DocumentInputStream* createDocumentInputStream(::java::lang::String* documentName) /* throws(IOException) */;

public: /* package */
    virtual void remove(EntryNode* entry) /* throws(IOException) */;

public:
    ::java::lang::ObjectArray* getViewableArray_() override;
    ::java::util::Iterator* getViewableIterator() override;
    bool preferArray_() override;
    ::java::lang::String* getShortDescription() override;
    virtual int32_t getBigBlockSize();
    virtual ::poi::poifs::common::POIFSBigBlockSize* getBigBlockSizeDetails();

public: /* protected */
    int32_t getBlockStoreBlockSize() override;

public:
    virtual ::poi::poifs::property::NPropertyTable* getPropertyTable();
    virtual ::poi::poifs::storage::HeaderBlock* getHeaderBlock();

    // Generated

private:
    NPOIFSFileSystem(bool newFS);

public:
    NPOIFSFileSystem();
    NPOIFSFileSystem(::java::io::File* file);
    NPOIFSFileSystem(::java::io::File* file, bool readOnly);
    NPOIFSFileSystem(::java::nio::channels::FileChannel* channel);
    NPOIFSFileSystem(::java::nio::channels::FileChannel* channel, bool readOnly);

private:
    NPOIFSFileSystem(::java::nio::channels::FileChannel* channel, ::java::io::File* srcFile, bool readOnly, bool closeChannelOnError);

public:
    NPOIFSFileSystem(::java::io::InputStream* stream);
protected:
    NPOIFSFileSystem(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    void init();
    static ::poi::util::POILogger*& LOG();
    virtual ::java::lang::Class* getClass0();
};
