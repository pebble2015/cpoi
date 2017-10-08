// Generated from /POI/java/org/apache/poi/poifs/filesystem/ODocumentInputStream.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/poifs/filesystem/fwd-POI.hpp>
#include <org/apache/poi/poifs/storage/fwd-POI.hpp>
#include <org/apache/poi/poifs/filesystem/DocumentInputStream.hpp>

struct default_init_tag;

class poi::poifs::filesystem::ODocumentInputStream final
    : public DocumentInputStream
{

public:
    typedef DocumentInputStream super;

private:
    int32_t _current_offset {  };
    int32_t _marked_offset {  };
    int32_t _document_size {  };
    bool _closed {  };
    OPOIFSDocument* _document {  };
    ::poi::poifs::storage::DataInputBlock* _currentBlock {  };
protected:
    void ctor(DocumentEntry* document) /* throws(IOException) */;
    void ctor(OPOIFSDocument* document);

public:
    int32_t available() override;
    void close() override;
    void mark(int32_t ignoredReadlimit) override;

private:
    ::poi::poifs::storage::DataInputBlock* getDataInputBlock(int32_t offset);

public:
    int32_t read() /* throws(IOException) */ override;
    int32_t read(::int8_tArray* b, int32_t off, int32_t len) /* throws(IOException) */ override;
    void reset() override;
    int64_t skip(int64_t n) /* throws(IOException) */ override;

private:
    void dieIfClosed() /* throws(IOException) */;
    bool atEOD();
    void checkAvaliable(int32_t requestedSize);

public:
    int8_t readByte() override;
    double readDouble() override;
    int16_t readShort() override;
    void readFully(::int8_tArray* buf, int32_t off, int32_t len) override;
    int64_t readLong() override;
    int32_t readInt() override;
    int32_t readUShort() override;
    int32_t readUByte() override;

    // Generated
    ODocumentInputStream(DocumentEntry* document);
    ODocumentInputStream(OPOIFSDocument* document);
protected:
    ODocumentInputStream(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    int32_t read(::int8_tArray* b);
    void readFully(::int8_tArray* buf);

private:
    virtual ::java::lang::Class* getClass0();
};
