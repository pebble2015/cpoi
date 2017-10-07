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
namespace org
{
    namespace apache
    {
        namespace poi
        {
            namespace poifs
            {
                namespace storage
                {
typedef ::SubArray< ::org::apache::poi::poifs::storage::BlockWritable, ::java::lang::ObjectArray > BlockWritableArray;
typedef ::SubArray< ::org::apache::poi::poifs::storage::BigBlock, ::java::lang::ObjectArray, BlockWritableArray > BigBlockArray;
typedef ::SubArray< ::org::apache::poi::poifs::storage::BATBlock, BigBlockArray > BATBlockArray;
                } // storage
            } // poifs
        } // poi
    } // apache
} // org

struct default_init_tag;

class org::apache::poi::poifs::storage::BlockAllocationTableWriter final
    : public virtual ::java::lang::Object
    , public BlockWritable
    , public ::org::apache::poi::poifs::filesystem::BATManaged
{

public:
    typedef ::java::lang::Object super;

private:
    ::org::apache::poi::util::IntList* _entries {  };
    BATBlockArray* _blocks {  };
    int32_t _start_block {  };
    ::org::apache::poi::poifs::common::POIFSBigBlockSize* _bigBlockSize {  };
protected:
    void ctor(::org::apache::poi::poifs::common::POIFSBigBlockSize* bigBlockSize);

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
    BlockAllocationTableWriter(::org::apache::poi::poifs::common::POIFSBigBlockSize* bigBlockSize);
protected:
    BlockAllocationTableWriter(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
