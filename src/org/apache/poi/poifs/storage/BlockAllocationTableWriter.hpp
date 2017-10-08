// Generated from /POI/java/org/apache/poi/poifs/storage/BlockAllocationTableWriter.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/nio/fwd-POI.hpp>
#include <org/apache/poi/poifs/common/fwd-POI.hpp>
#include <org/apache/poi/poifs/storage/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/poifs/storage/BlockWritable.hpp>
#include <org/apache/poi/poifs/filesystem/BATManaged.hpp>

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

class poi::poifs::storage::BlockAllocationTableWriter final
    : public virtual ::java::lang::Object
    , public BlockWritable
    , public ::poi::poifs::filesystem::BATManaged
{

public:
    typedef ::java::lang::Object super;

private:
    ::poi::util::IntList* _entries {  };
    BATBlockArray* _blocks {  };
    int32_t _start_block {  };
    ::poi::poifs::common::POIFSBigBlockSize* _bigBlockSize {  };
protected:
    void ctor(::poi::poifs::common::POIFSBigBlockSize* bigBlockSize);

public:
    int32_t createBlocks();
    int32_t allocateSpace(int32_t blockCount);
    int32_t getStartBlock();

public: /* package */
    void simpleCreateBlocks();

public:
    void writeBlocks(::java::io::OutputStream* stream) /* throws(IOException) */ override;
    static void writeBlock(BATBlock* bat, ::java::nio::ByteBuffer* block) /* throws(IOException) */;
    int32_t countBlocks() override;
    void setStartBlock(int32_t start_block) override;

    // Generated
    BlockAllocationTableWriter(::poi::poifs::common::POIFSBigBlockSize* bigBlockSize);
protected:
    BlockAllocationTableWriter(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
