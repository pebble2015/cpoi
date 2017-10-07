// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/util/zip/fwd-POI.hpp>
#include <java/io/FilterInputStream.hpp>

struct default_init_tag;

class java::util::zip::InflaterInputStream
    : public ::java::io::FilterInputStream
{

public:
    typedef ::java::io::FilterInputStream super;

private:
    ::int8_tArray* b {  };

public: /* protected */
    ::int8_tArray* buf {  };

private:
    bool closed {  };

public: /* protected */
    Inflater* inf {  };
    int32_t len {  };

private:
    bool reachEOF {  };
    ::int8_tArray* singleByteBuf {  };

public: /* package */
    bool usesDefaultInflater {  };

protected:
    void ctor(::java::io::InputStream* in);
    void ctor(::java::io::InputStream* in, Inflater* inf);
    void ctor(::java::io::InputStream* in, Inflater* inf, int32_t size);

public:
    int32_t available() override;
    void close() override;
    /*void ensureOpen(); (private) */

public: /* protected */
    virtual void fill();

public:
    void mark(int32_t readlimit) override;
    bool markSupported() override;
    int32_t read() override;
    int32_t read(::int8_tArray* b, int32_t off, int32_t len) override;
    void reset() override;
    int64_t skip(int64_t n) override;

    // Generated
    InflaterInputStream(::java::io::InputStream* in);
    InflaterInputStream(::java::io::InputStream* in, Inflater* inf);
    InflaterInputStream(::java::io::InputStream* in, Inflater* inf, int32_t size);
protected:
    InflaterInputStream(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    int32_t read(::int8_tArray* b);

private:
    virtual ::java::lang::Class* getClass0();
};
