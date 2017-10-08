// Generated from /POI/java/org/apache/poi/poifs/filesystem/OPOIFSDocument.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/poifs/common/fwd-POI.hpp>
#include <org/apache/poi/poifs/filesystem/fwd-POI.hpp>
#include <org/apache/poi/poifs/property/fwd-POI.hpp>
#include <org/apache/poi/poifs/storage/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/poifs/filesystem/BATManaged.hpp>
#include <org/apache/poi/poifs/storage/BlockWritable.hpp>
#include <org/apache/poi/poifs/dev/POIFSViewable.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace poi
{
    namespace poifs
    {
        namespace storage
        {
typedef ::SubArray< ::poi::poifs::storage::BlockWritable, ::java::lang::ObjectArray > BlockWritableArray;
typedef ::SubArray< ::poi::poifs::storage::BigBlock, ::java::lang::ObjectArray, BlockWritableArray > BigBlockArray;
typedef ::SubArray< ::poi::poifs::storage::DocumentBlock, BigBlockArray > DocumentBlockArray;
typedef ::SubArray< ::poi::poifs::storage::ListManagedBlock, ::java::lang::ObjectArray > ListManagedBlockArray;
typedef ::SubArray< ::poi::poifs::storage::RawDataBlock, ::java::lang::ObjectArray, ListManagedBlockArray > RawDataBlockArray;
typedef ::SubArray< ::poi::poifs::storage::SmallDocumentBlock, ::java::lang::ObjectArray, BlockWritableArray, ListManagedBlockArray > SmallDocumentBlockArray;
        } // storage
    } // poifs
} // poi

struct default_init_tag;

class poi::poifs::filesystem::OPOIFSDocument final
    : public virtual ::java::lang::Object
    , public BATManaged
    , public ::poi::poifs::storage::BlockWritable
    , public ::poi::poifs::dev::POIFSViewable
{

public:
    typedef ::java::lang::Object super;

private:
    static ::poi::poifs::storage::DocumentBlockArray* EMPTY_BIG_BLOCK_ARRAY_;
    static ::poi::poifs::storage::SmallDocumentBlockArray* EMPTY_SMALL_BLOCK_ARRAY_;
    ::poi::poifs::property::DocumentProperty* _property {  };
    int32_t _size {  };
    ::poi::poifs::common::POIFSBigBlockSize* _bigBigBlockSize {  };
    OPOIFSDocument_SmallBlockStore* _small_store {  };
    OPOIFSDocument_BigBlockStore* _big_store {  };
protected:
    void ctor(::java::lang::String* name, ::poi::poifs::storage::RawDataBlockArray* blocks, int32_t length) /* throws(IOException) */;

private:
    static ::poi::poifs::storage::DocumentBlockArray* convertRawBlocksToBigBlocks(::poi::poifs::storage::ListManagedBlockArray* blocks) /* throws(IOException) */;
    static ::poi::poifs::storage::SmallDocumentBlockArray* convertRawBlocksToSmallBlocks(::poi::poifs::storage::ListManagedBlockArray* blocks);
protected:
    void ctor(::java::lang::String* name, ::poi::poifs::storage::SmallDocumentBlockArray* blocks, int32_t length);
    void ctor(::java::lang::String* name, ::poi::poifs::common::POIFSBigBlockSize* bigBlockSize, ::poi::poifs::storage::ListManagedBlockArray* blocks, int32_t length) /* throws(IOException) */;
    void ctor(::java::lang::String* name, ::poi::poifs::storage::ListManagedBlockArray* blocks, int32_t length) /* throws(IOException) */;
    void ctor(::java::lang::String* name, ::poi::poifs::common::POIFSBigBlockSize* bigBlockSize, ::java::io::InputStream* stream) /* throws(IOException) */;
    void ctor(::java::lang::String* name, ::java::io::InputStream* stream) /* throws(IOException) */;
    void ctor(::java::lang::String* name, int32_t size, ::poi::poifs::common::POIFSBigBlockSize* bigBlockSize, POIFSDocumentPath* path, POIFSWriterListener* writer);
    void ctor(::java::lang::String* name, int32_t size, POIFSDocumentPath* path, POIFSWriterListener* writer);

public:
    ::poi::poifs::storage::SmallDocumentBlockArray* getSmallBlocks();
    int32_t getSize();

public: /* package */
    void read(::int8_tArray* buffer, int32_t offset);
    ::poi::poifs::storage::DataInputBlock* getDataInputBlock(int32_t offset);
    ::poi::poifs::property::DocumentProperty* getDocumentProperty();

public:
    void writeBlocks(::java::io::OutputStream* stream) /* throws(IOException) */ override;
    int32_t countBlocks() override;
    void setStartBlock(int32_t index) override;
    ::java::lang::ObjectArray* getViewableArray_() override;
    ::java::util::Iterator* getViewableIterator() override;
    bool preferArray_() override;
    ::java::lang::String* getShortDescription() override;

    // Generated
    OPOIFSDocument(::java::lang::String* name, ::poi::poifs::storage::RawDataBlockArray* blocks, int32_t length);
    OPOIFSDocument(::java::lang::String* name, ::poi::poifs::storage::SmallDocumentBlockArray* blocks, int32_t length);
    OPOIFSDocument(::java::lang::String* name, ::poi::poifs::common::POIFSBigBlockSize* bigBlockSize, ::poi::poifs::storage::ListManagedBlockArray* blocks, int32_t length);
    OPOIFSDocument(::java::lang::String* name, ::poi::poifs::storage::ListManagedBlockArray* blocks, int32_t length);
    OPOIFSDocument(::java::lang::String* name, ::poi::poifs::common::POIFSBigBlockSize* bigBlockSize, ::java::io::InputStream* stream);
    OPOIFSDocument(::java::lang::String* name, ::java::io::InputStream* stream);
    OPOIFSDocument(::java::lang::String* name, int32_t size, ::poi::poifs::common::POIFSBigBlockSize* bigBlockSize, POIFSDocumentPath* path, POIFSWriterListener* writer);
    OPOIFSDocument(::java::lang::String* name, int32_t size, POIFSDocumentPath* path, POIFSWriterListener* writer);
protected:
    OPOIFSDocument(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    static ::poi::poifs::storage::DocumentBlockArray*& EMPTY_BIG_BLOCK_ARRAY();
    static ::poi::poifs::storage::SmallDocumentBlockArray*& EMPTY_SMALL_BLOCK_ARRAY();
    virtual ::java::lang::Class* getClass0();
    friend class OPOIFSDocument_SmallBlockStore;
    friend class OPOIFSDocument_BigBlockStore;
};
