// Generated from /POI/java/org/apache/poi/poifs/filesystem/BlockStore.java

#pragma once

#include <fwd-POI.hpp>
#include <java/nio/fwd-POI.hpp>
#include <org/apache/poi/poifs/filesystem/fwd-POI.hpp>
#include <org/apache/poi/poifs/storage/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class org::apache::poi::poifs::filesystem::BlockStore
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

public: /* protected */
    virtual int32_t getBlockStoreBlockSize() = 0;
    virtual ::java::nio::ByteBuffer* getBlockAt(int32_t offset) /* throws(IOException) */ = 0;
    virtual ::java::nio::ByteBuffer* createBlockIfNeeded(int32_t offset) /* throws(IOException) */ = 0;
    virtual ::org::apache::poi::poifs::storage::BATBlock_BATBlockAndIndex* getBATBlockAndIndex(int32_t offset) = 0;
    virtual int32_t getNextBlock(int32_t offset) = 0;
    virtual void setNextBlock(int32_t offset, int32_t nextBlock) = 0;
    virtual int32_t getFreeBlock() /* throws(IOException) */ = 0;
    virtual BlockStore_ChainLoopDetector* getChainLoopDetector() /* throws(IOException) */ = 0;

    // Generated

public:
    BlockStore();
protected:
    BlockStore(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class BlockStore_ChainLoopDetector;
};
