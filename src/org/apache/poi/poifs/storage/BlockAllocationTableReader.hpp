// Generated from /POI/java/org/apache/poi/poifs/storage/BlockAllocationTableReader.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/poifs/common/fwd-POI.hpp>
#include <org/apache/poi/poifs/storage/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace poi
{
    namespace poifs
    {
        namespace storage
        {
typedef ::SubArray< ::poi::poifs::storage::ListManagedBlock, ::java::lang::ObjectArray > ListManagedBlockArray;
        } // storage
    } // poifs
} // poi

struct default_init_tag;

class poi::poifs::storage::BlockAllocationTableReader final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    static ::poi::util::POILogger* _logger_;
    static constexpr int32_t MAX_BLOCK_COUNT { int32_t(65535) };
    ::poi::util::IntList* _entries {  };
    ::poi::poifs::common::POIFSBigBlockSize* bigBlockSize {  };
protected:
    void ctor(::poi::poifs::common::POIFSBigBlockSize* bigBlockSize, int32_t block_count, ::int32_tArray* block_array, int32_t xbat_count, int32_t xbat_index, BlockList* raw_block_list) /* throws(IOException) */;
    void ctor(::poi::poifs::common::POIFSBigBlockSize* bigBlockSize, ListManagedBlockArray* blocks, BlockList* raw_block_list) /* throws(IOException) */;
    void ctor(::poi::poifs::common::POIFSBigBlockSize* bigBlockSize);

public:
    static void sanityCheckBlockCount(int32_t block_count) /* throws(IOException) */;

public: /* package */
    ListManagedBlockArray* fetchBlocks(int32_t startBlock, int32_t headerPropertiesStartBlock, BlockList* blockList) /* throws(IOException) */;
    bool isUsed(int32_t index);
    int32_t getNextBlockIndex(int32_t index) /* throws(IOException) */;

private:
    void setEntries(ListManagedBlockArray* blocks, BlockList* raw_blocks) /* throws(IOException) */;

public:
    ::poi::util::IntList* getEntries();

    // Generated
    BlockAllocationTableReader(::poi::poifs::common::POIFSBigBlockSize* bigBlockSize, int32_t block_count, ::int32_tArray* block_array, int32_t xbat_count, int32_t xbat_index, BlockList* raw_block_list);

public: /* package */
    BlockAllocationTableReader(::poi::poifs::common::POIFSBigBlockSize* bigBlockSize, ListManagedBlockArray* blocks, BlockList* raw_block_list);
    BlockAllocationTableReader(::poi::poifs::common::POIFSBigBlockSize* bigBlockSize);
protected:
    BlockAllocationTableReader(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    static ::poi::util::POILogger*& _logger();
    virtual ::java::lang::Class* getClass0();
};
