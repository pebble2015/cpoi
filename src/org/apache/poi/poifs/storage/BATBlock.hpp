// Generated from /POI/java/org/apache/poi/poifs/storage/BATBlock.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/nio/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/poifs/common/fwd-POI.hpp>
#include <org/apache/poi/poifs/storage/fwd-POI.hpp>
#include <org/apache/poi/poifs/storage/BigBlock.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace poi
{
    namespace poifs
    {
        namespace storage
        {
typedef ::SubArray< ::poi::poifs::storage::BlockWritable, ::java::lang::ObjectArray > BlockWritableArray;
typedef ::SubArray< ::poi::poifs::storage::BigBlock, ::java::lang::ObjectArray, BlockWritableArray > BigBlockArray;
typedef ::SubArray< ::poi::poifs::storage::BATBlock, BigBlockArray > BATBlockArray;
        } // storage
    } // poifs
} // poi

struct default_init_tag;

class poi::poifs::storage::BATBlock final
    : public BigBlock
{

public:
    typedef BigBlock super;

private:
    ::int32_tArray* _values {  };
    bool _has_free_sectors {  };
    int32_t ourBlockIndex {  };
protected:
    void ctor(::poi::poifs::common::POIFSBigBlockSize* bigBlockSize);
    void ctor(::poi::poifs::common::POIFSBigBlockSize* bigBlockSize, ::int32_tArray* entries, int32_t start_index, int32_t end_index);

private:
    void recomputeFree();

public:
    static BATBlock* createBATBlock(::poi::poifs::common::POIFSBigBlockSize* bigBlockSize, ::java::nio::ByteBuffer* data);
    static BATBlock* createEmptyBATBlock(::poi::poifs::common::POIFSBigBlockSize* bigBlockSize, bool isXBAT);
    static BATBlockArray* createBATBlocks(::poi::poifs::common::POIFSBigBlockSize* bigBlockSize, ::int32_tArray* entries);
    static BATBlockArray* createXBATBlocks(::poi::poifs::common::POIFSBigBlockSize* bigBlockSize, ::int32_tArray* entries, int32_t startBlock);
    static int32_t calculateStorageRequirements(::poi::poifs::common::POIFSBigBlockSize* bigBlockSize, int32_t entryCount);
    static int32_t calculateXBATStorageRequirements(::poi::poifs::common::POIFSBigBlockSize* bigBlockSize, int32_t entryCount);
    static int64_t calculateMaximumSize(::poi::poifs::common::POIFSBigBlockSize* bigBlockSize, int32_t numBATs);
    static int64_t calculateMaximumSize(HeaderBlock* header);
    static BATBlock_BATBlockAndIndex* getBATBlockAndIndex(int32_t offset, HeaderBlock* header, ::java::util::List* bats);
    static BATBlock_BATBlockAndIndex* getSBATBlockAndIndex(int32_t offset, HeaderBlock* header, ::java::util::List* sbats);

private:
    void setXBATChain(::poi::poifs::common::POIFSBigBlockSize* bigBlockSize, int32_t chainIndex);

public:
    bool hasFreeSectors();
    int32_t getUsedSectors(bool isAnXBAT);
    int32_t getValueAt(int32_t relativeOffset);
    void setValueAt(int32_t relativeOffset, int32_t value);
    void setOurBlockIndex(int32_t index);
    int32_t getOurBlockIndex();

public: /* package */
    void writeData(::java::io::OutputStream* stream) /* throws(IOException) */ override;
    void writeData(::java::nio::ByteBuffer* block) /* throws(IOException) */;

private:
    ::int8_tArray* serialize();

    // Generated
    BATBlock(::poi::poifs::common::POIFSBigBlockSize* bigBlockSize);
    BATBlock(::poi::poifs::common::POIFSBigBlockSize* bigBlockSize, ::int32_tArray* entries, int32_t start_index, int32_t end_index);
protected:
    BATBlock(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class BATBlock_BATBlockAndIndex;
};
