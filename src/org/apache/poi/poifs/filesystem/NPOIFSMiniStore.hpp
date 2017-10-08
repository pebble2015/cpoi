// Generated from /POI/java/org/apache/poi/poifs/filesystem/NPOIFSMiniStore.java

#pragma once

#include <fwd-POI.hpp>
#include <java/nio/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/poifs/filesystem/fwd-POI.hpp>
#include <org/apache/poi/poifs/property/fwd-POI.hpp>
#include <org/apache/poi/poifs/storage/fwd-POI.hpp>
#include <org/apache/poi/poifs/filesystem/BlockStore.hpp>

struct default_init_tag;

class poi::poifs::filesystem::NPOIFSMiniStore
    : public BlockStore
{

public:
    typedef BlockStore super;

private:
    NPOIFSFileSystem* _filesystem {  };
    NPOIFSStream* _mini_stream {  };
    ::java::util::List* _sbat_blocks {  };
    ::poi::poifs::storage::HeaderBlock* _header {  };
    ::poi::poifs::property::RootProperty* _root {  };
protected:
    void ctor(NPOIFSFileSystem* filesystem, ::poi::poifs::property::RootProperty* root, ::java::util::List* sbats, ::poi::poifs::storage::HeaderBlock* header);

public: /* protected */
    ::java::nio::ByteBuffer* getBlockAt(int32_t offset) /* throws(IOException) */ override;
    ::java::nio::ByteBuffer* createBlockIfNeeded(int32_t offset) /* throws(IOException) */ override;
    ::poi::poifs::storage::BATBlock_BATBlockAndIndex* getBATBlockAndIndex(int32_t offset) override;
    int32_t getNextBlock(int32_t offset) override;
    void setNextBlock(int32_t offset, int32_t nextBlock) override;
    int32_t getFreeBlock() /* throws(IOException) */ override;
    BlockStore_ChainLoopDetector* getChainLoopDetector() /* throws(IOException) */ override;
    int32_t getBlockStoreBlockSize() override;
    virtual void syncWithDataSource() /* throws(IOException) */;

    // Generated
    NPOIFSMiniStore(NPOIFSFileSystem* filesystem, ::poi::poifs::property::RootProperty* root, ::java::util::List* sbats, ::poi::poifs::storage::HeaderBlock* header);
protected:
    NPOIFSMiniStore(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
