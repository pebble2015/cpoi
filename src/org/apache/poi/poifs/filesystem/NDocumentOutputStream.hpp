// Generated from /POI/java/org/apache/poi/poifs/filesystem/NDocumentOutputStream.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/poifs/filesystem/fwd-POI.hpp>
#include <org/apache/poi/poifs/property/fwd-POI.hpp>
#include <java/io/OutputStream.hpp>

struct default_init_tag;

class org::apache::poi::poifs::filesystem::NDocumentOutputStream final
    : public ::java::io::OutputStream
{

public:
    typedef ::java::io::OutputStream super;

private:
    int32_t _document_size {  };
    bool _closed {  };
    NPOIFSDocument* _document {  };
    ::org::apache::poi::poifs::property::DocumentProperty* _property {  };
    ::java::io::ByteArrayOutputStream* _buffer {  };
    NPOIFSStream* _stream {  };
    ::java::io::OutputStream* _stream_output {  };
protected:
    void ctor(DocumentEntry* document) /* throws(IOException) */;
    void ctor(DirectoryEntry* parent, ::java::lang::String* name) /* throws(IOException) */;

private:
    void dieIfClosed() /* throws(IOException) */;
    void checkBufferSize() /* throws(IOException) */;

public:
    void write(int32_t b) /* throws(IOException) */ override;
    void write(::int8_tArray* b) /* throws(IOException) */ override;
    void write(::int8_tArray* b, int32_t off, int32_t len) /* throws(IOException) */ override;
    void close() /* throws(IOException) */ override;

    // Generated
    NDocumentOutputStream(DocumentEntry* document);
    NDocumentOutputStream(DirectoryEntry* parent, ::java::lang::String* name);
protected:
    NDocumentOutputStream(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    void init();
    virtual ::java::lang::Class* getClass0();
};
