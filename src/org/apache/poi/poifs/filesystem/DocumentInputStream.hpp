// Generated from /POI/java/org/apache/poi/poifs/filesystem/DocumentInputStream.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/poifs/filesystem/fwd-POI.hpp>
#include <java/io/InputStream.hpp>
#include <org/apache/poi/util/LittleEndianInput.hpp>

struct default_init_tag;

class poi::poifs::filesystem::DocumentInputStream
    : public ::java::io::InputStream
    , public virtual ::poi::util::LittleEndianInput
{

public:
    typedef ::java::io::InputStream super;

public: /* protected */
    static constexpr int32_t EOF_ { int32_t(-1) };
    static constexpr int32_t SIZE_SHORT { int32_t(2) };
    static constexpr int32_t SIZE_INT { int32_t(4) };
    static constexpr int32_t SIZE_LONG { int32_t(8) };

private:
    DocumentInputStream* delegate {  };
protected:
    void ctor();
    void ctor(DocumentEntry* document) /* throws(IOException) */;
    void ctor(OPOIFSDocument* document);
    void ctor(NPOIFSDocument* document);

public:
    int32_t available() override;
    void close() override;
    void mark(int32_t ignoredReadlimit) override;
    bool markSupported() override;
    int32_t read() /* throws(IOException) */ override;
    int32_t read(::int8_tArray* b) /* throws(IOException) */ override;
    int32_t read(::int8_tArray* b, int32_t off, int32_t len) /* throws(IOException) */ override;
    void reset() override;
    int64_t skip(int64_t n) /* throws(IOException) */ override;
    int8_t readByte() override;
    double readDouble() override;
    int16_t readShort() override;
    void readFully(::int8_tArray* buf) override;
    void readFully(::int8_tArray* buf, int32_t off, int32_t len) override;
    int64_t readLong() override;
    int32_t readInt() override;
    int32_t readUShort() override;
    int32_t readUByte() override;
    virtual int64_t readUInt();
    void readPlain(::int8_tArray* buf, int32_t off, int32_t len) override;

    // Generated

public: /* protected */
    DocumentInputStream();

public:
    DocumentInputStream(DocumentEntry* document);
    DocumentInputStream(OPOIFSDocument* document);
    DocumentInputStream(NPOIFSDocument* document);
protected:
    DocumentInputStream(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
