// Generated from /POI/java/org/apache/poi/poifs/filesystem/NDocumentInputStream.java

#pragma once

#include <fwd-POI.hpp>
#include <java/nio/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/poifs/filesystem/fwd-POI.hpp>
#include <org/apache/poi/poifs/filesystem/DocumentInputStream.hpp>

struct default_init_tag;

class org::apache::poi::poifs::filesystem::NDocumentInputStream final
    : public DocumentInputStream
{

public:
    typedef DocumentInputStream super;

private:
    int32_t _current_offset {  };
    int32_t _current_block_count {  };
    int32_t _marked_offset {  };
    int32_t _marked_offset_count {  };
    int32_t _document_size {  };
    bool _closed {  };
    NPOIFSDocument* _document {  };
    ::java::util::Iterator* _data {  };
    ::java::nio::ByteBuffer* _buffer {  };
protected:
    void ctor(DocumentEntry* document) /* throws(IOException) */;
    void ctor(NPOIFSDocument* document);

public:
    int32_t available() override;

private:
    int32_t remainingBytes();

public:
    void close() override;
    void mark(int32_t ignoredReadlimit) override;
    int32_t read() /* throws(IOException) */ override;
    int32_t read(::int8_tArray* b, int32_t off, int32_t len) /* throws(IOException) */ override;
    void reset() override;
    int64_t skip(int64_t n) /* throws(IOException) */ override;

private:
    void dieIfClosed() /* throws(IOException) */;
    bool atEOD();
    void checkAvaliable(int32_t requestedSize);

public:
    void readFully(::int8_tArray* buf, int32_t off, int32_t len) override;
    int8_t readByte() override;
    double readDouble() override;
    int64_t readLong() override;
    int16_t readShort() override;
    int32_t readInt() override;
    int32_t readUShort() override;
    int32_t readUByte() override;

    // Generated
    NDocumentInputStream(DocumentEntry* document);
    NDocumentInputStream(NPOIFSDocument* document);
protected:
    NDocumentInputStream(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    int32_t read(::int8_tArray* b);
    void readFully(::int8_tArray* buf);

private:
    virtual ::java::lang::Class* getClass0();
};
