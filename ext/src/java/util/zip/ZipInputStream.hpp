// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/nio/charset/fwd-POI.hpp>
#include <java/util/zip/fwd-POI.hpp>
#include <java/util/zip/InflaterInputStream.hpp>
#include <java/util/zip/ZipConstants.hpp>

struct default_init_tag;

class java::util::zip::ZipInputStream
    : public InflaterInputStream
    , public virtual ZipConstants
{

public:
    typedef InflaterInputStream super;

private:
    static constexpr int32_t DEFLATED { int32_t(8) };
    static constexpr int32_t STORED { int32_t(0) };
    ::int8_tArray* b {  };
    bool closed {  };
    CRC32* crc {  };
    ZipEntry* entry {  };
    bool entryEOF {  };
    int32_t flag {  };
    int64_t remaining {  };
    ::int8_tArray* tmpbuf {  };
    ZipCoder* zc {  };

protected:
    void ctor(::java::io::InputStream* in);
    void ctor(::java::io::InputStream* in, ::java::nio::charset::Charset* charset);

public:
    int32_t available() override;
    void close() override;
    virtual void closeEntry();

public: /* protected */
    virtual ZipEntry* createZipEntry(::java::lang::String* name);
    /*void ensureOpen(); (private) */

public:
    virtual ZipEntry* getNextEntry();
    int32_t read(::int8_tArray* b, int32_t off, int32_t len) override;
    /*void readEnd(ZipEntry* e); (private) */
    /*void readFully(::int8_tArray* b, int32_t off, int32_t len); (private) */
    /*ZipEntry* readLOC(); (private) */
    int64_t skip(int64_t n) override;

    // Generated
    ZipInputStream(::java::io::InputStream* in);
    ZipInputStream(::java::io::InputStream* in, ::java::nio::charset::Charset* charset);
protected:
    ZipInputStream(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    int32_t read();
    int32_t read(::int8_tArray* b);

private:
    virtual ::java::lang::Class* getClass0();
};
