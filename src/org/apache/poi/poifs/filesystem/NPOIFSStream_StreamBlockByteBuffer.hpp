// Generated from /POI/java/org/apache/poi/poifs/filesystem/NPOIFSStream.java

#pragma once

#include <fwd-POI.hpp>
#include <java/nio/fwd-POI.hpp>
#include <org/apache/poi/poifs/filesystem/fwd-POI.hpp>
#include <java/io/OutputStream.hpp>

struct default_init_tag;

class poi::poifs::filesystem::NPOIFSStream_StreamBlockByteBuffer
    : public ::java::io::OutputStream
{

public:
    typedef ::java::io::OutputStream super;

public: /* package */
    ::int8_tArray* oneByte {  };
    ::java::nio::ByteBuffer* buffer {  };
    BlockStore_ChainLoopDetector* loopDetector {  };
    int32_t prevBlock {  }, nextBlock {  };
protected:
    void ctor() /* throws(IOException) */;

public: /* protected */
    virtual void createBlockIfNeeded() /* throws(IOException) */;

public:
    void write(int32_t b) /* throws(IOException) */ override;
    void write(::int8_tArray* b, int32_t off, int32_t len) /* throws(IOException) */ override;
    void close() /* throws(IOException) */ override;

    // Generated

public: /* protected */
    NPOIFSStream_StreamBlockByteBuffer(NPOIFSStream *NPOIFSStream_this);
protected:
    NPOIFSStream_StreamBlockByteBuffer(NPOIFSStream *NPOIFSStream_this, const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    void init();

public:
    virtual void write(::int8_tArray* b);
    NPOIFSStream *NPOIFSStream_this;

private:
    virtual ::java::lang::Class* getClass0();
    friend class NPOIFSStream;
    friend class NPOIFSStream_StreamBlockByteBufferIterator;
};
