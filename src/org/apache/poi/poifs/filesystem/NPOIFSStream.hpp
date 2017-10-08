// Generated from /POI/java/org/apache/poi/poifs/filesystem/NPOIFSStream.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/poifs/filesystem/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/Iterable.hpp>

struct default_init_tag;

class poi::poifs::filesystem::NPOIFSStream
    : public virtual ::java::lang::Object
    , public virtual ::java::lang::Iterable
{

public:
    typedef ::java::lang::Object super;

private:
    BlockStore* blockStore {  };
    int32_t startBlock {  };
    ::java::io::OutputStream* outStream {  };
protected:
    void ctor(BlockStore* blockStore, int32_t startBlock);
    void ctor(BlockStore* blockStore);

public:
    virtual int32_t getStartBlock();
    ::java::util::Iterator* iterator() override;
    virtual ::java::util::Iterator* getBlockIterator();
    virtual void updateContents(::int8_tArray* contents) /* throws(IOException) */;
    virtual ::java::io::OutputStream* getOutputStream() /* throws(IOException) */;
    virtual void free() /* throws(IOException) */;

private:
    void free(BlockStore_ChainLoopDetector* loopDetector);

    // Generated

public:
    NPOIFSStream(BlockStore* blockStore, int32_t startBlock);
    NPOIFSStream(BlockStore* blockStore);
protected:
    NPOIFSStream(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class NPOIFSStream_StreamBlockByteBufferIterator;
    friend class NPOIFSStream_StreamBlockByteBuffer;
};
