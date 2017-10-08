// Generated from /POI/java/org/apache/poi/poifs/filesystem/BlockStore.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/poifs/filesystem/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class poi::poifs::filesystem::BlockStore_ChainLoopDetector
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    ::boolArray* used_blocks {  };
protected:
    void ctor(int64_t rawSize);

public: /* protected */
    virtual void claim(int32_t offset);

    // Generated
    BlockStore_ChainLoopDetector(BlockStore *BlockStore_this, int64_t rawSize);
protected:
    BlockStore_ChainLoopDetector(BlockStore *BlockStore_this, const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    BlockStore *BlockStore_this;

private:
    virtual ::java::lang::Class* getClass0();
    friend class BlockStore;
};
