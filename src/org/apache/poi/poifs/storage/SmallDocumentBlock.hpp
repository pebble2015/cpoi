// Generated from /POI/java/org/apache/poi/poifs/storage/SmallDocumentBlock.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/poifs/common/fwd-POI.hpp>
#include <org/apache/poi/poifs/storage/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/poifs/storage/BlockWritable.hpp>
#include <org/apache/poi/poifs/storage/ListManagedBlock.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace poi
{
    namespace poifs
    {
        namespace storage
        {
typedef ::SubArray< ::poi::poifs::storage::BlockWritable, ::java::lang::ObjectArray > BlockWritableArray;
typedef ::SubArray< ::poi::poifs::storage::ListManagedBlock, ::java::lang::ObjectArray > ListManagedBlockArray;
typedef ::SubArray< ::poi::poifs::storage::SmallDocumentBlock, ::java::lang::ObjectArray, BlockWritableArray, ListManagedBlockArray > SmallDocumentBlockArray;
        } // storage
    } // poifs
} // poi

struct default_init_tag;

class poi::poifs::storage::SmallDocumentBlock final
    : public virtual ::java::lang::Object
    , public BlockWritable
    , public ListManagedBlock
{

public:
    typedef ::java::lang::Object super;

private:
    static constexpr int32_t BLOCK_SHIFT { int32_t(6) };
    ::int8_tArray* _data {  };
    static constexpr int8_t _default_fill { int8_t(-1) };
    static constexpr int32_t _block_size { int32_t(64) };
    static constexpr int32_t BLOCK_MASK { int32_t(63) };
    int32_t _blocks_per_big_block {  };
    ::poi::poifs::common::POIFSBigBlockSize* _bigBlockSize {  };
protected:
    void ctor(::poi::poifs::common::POIFSBigBlockSize* bigBlockSize, ::int8_tArray* data, int32_t index);
    void ctor(::poi::poifs::common::POIFSBigBlockSize* bigBlockSize);

private:
    static int32_t getBlocksPerBigBlock(::poi::poifs::common::POIFSBigBlockSize* bigBlockSize);

public:
    static SmallDocumentBlockArray* convert(::poi::poifs::common::POIFSBigBlockSize* bigBlockSize, ::int8_tArray* array, int32_t size);
    static int32_t fill(::poi::poifs::common::POIFSBigBlockSize* bigBlockSize, ::java::util::List* blocks);
    static SmallDocumentBlockArray* convert(::poi::poifs::common::POIFSBigBlockSize* bigBlockSize, BlockWritableArray* store, int32_t size) /* throws(IOException, ArrayIndexOutOfBoundsException) */;
    static ::java::util::List* extract(::poi::poifs::common::POIFSBigBlockSize* bigBlockSize, ListManagedBlockArray* blocks) /* throws(IOException) */;
    static DataInputBlock* getDataInputBlock(SmallDocumentBlockArray* blocks, int32_t offset);
    static int32_t calcSize(int32_t size);

public: /* protected */
    int32_t getSmallBlocksPerBigBlock();

private:
    static SmallDocumentBlock* makeEmptySmallDocumentBlock(::poi::poifs::common::POIFSBigBlockSize* bigBlockSize);
    static int32_t convertToBlockCount(int32_t size);

public:
    void writeBlocks(::java::io::OutputStream* stream) /* throws(IOException) */ override;
    ::int8_tArray* getData() override;
    ::poi::poifs::common::POIFSBigBlockSize* getBigBlockSize();

    // Generated

private:
    SmallDocumentBlock(::poi::poifs::common::POIFSBigBlockSize* bigBlockSize, ::int8_tArray* data, int32_t index);

public: /* protected */
    SmallDocumentBlock(::poi::poifs::common::POIFSBigBlockSize* bigBlockSize);
protected:
    SmallDocumentBlock(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
