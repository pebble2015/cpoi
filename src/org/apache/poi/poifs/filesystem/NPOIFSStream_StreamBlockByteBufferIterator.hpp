// Generated from /POI/java/org/apache/poi/poifs/filesystem/NPOIFSStream.java

#pragma once

#include <fwd-POI.hpp>
#include <java/nio/fwd-POI.hpp>
#include <org/apache/poi/poifs/filesystem/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <java/util/Iterator.hpp>
#include <java/nio/ByteBuffer.hpp>

struct default_init_tag;

class poi::poifs::filesystem::NPOIFSStream_StreamBlockByteBufferIterator
    : public virtual ::java::lang::Object
    , public virtual ::java::util::Iterator
{

public:
    typedef ::java::lang::Object super;

private:
    BlockStore_ChainLoopDetector* loopDetector {  };
    int32_t nextBlock {  };
protected:
    void ctor(int32_t firstBlock);

public:
    bool hasNext() override;
    ::java::nio::ByteBuffer* next() override;
    void remove() override;

    // Generated

public: /* protected */
    NPOIFSStream_StreamBlockByteBufferIterator(NPOIFSStream *NPOIFSStream_this, int32_t firstBlock);
protected:
    NPOIFSStream_StreamBlockByteBufferIterator(NPOIFSStream *NPOIFSStream_this, const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    NPOIFSStream *NPOIFSStream_this;

private:
    virtual ::java::lang::Class* getClass0();
    friend class NPOIFSStream;
    friend class NPOIFSStream_StreamBlockByteBuffer;
};
