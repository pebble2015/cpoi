// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/util/zip/fwd-POI.hpp>
#include <java/io/FilterOutputStream.hpp>

struct default_init_tag;

class java::util::zip::DeflaterOutputStream
    : public ::java::io::FilterOutputStream
{

public:
    typedef ::java::io::FilterOutputStream super;

public: /* protected */
    ::int8_tArray* buf {  };

private:
    bool closed {  };

public: /* protected */
    Deflater* def {  };

private:
    bool syncFlush {  };

public: /* package */
    bool usesDefaultDeflater {  };

protected:
    void ctor(::java::io::OutputStream* out);
    void ctor(::java::io::OutputStream* out, Deflater* def);
    void ctor(::java::io::OutputStream* out, bool syncFlush);
    void ctor(::java::io::OutputStream* out, Deflater* def, int32_t size);
    void ctor(::java::io::OutputStream* out, Deflater* def, bool syncFlush);
    void ctor(::java::io::OutputStream* out, Deflater* def, int32_t size, bool syncFlush);

public:
    void close() override;

public: /* protected */
    virtual void deflate();

public:
    virtual void finish();
    void flush() override;
    void write(int32_t b) override;
    void write(::int8_tArray* b, int32_t off, int32_t len) override;

    // Generated
    DeflaterOutputStream(::java::io::OutputStream* out);
    DeflaterOutputStream(::java::io::OutputStream* out, Deflater* def);
    DeflaterOutputStream(::java::io::OutputStream* out, bool syncFlush);
    DeflaterOutputStream(::java::io::OutputStream* out, Deflater* def, int32_t size);
    DeflaterOutputStream(::java::io::OutputStream* out, Deflater* def, bool syncFlush);
    DeflaterOutputStream(::java::io::OutputStream* out, Deflater* def, int32_t size, bool syncFlush);
protected:
    DeflaterOutputStream(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    void write(::int8_tArray* b);

private:
    virtual ::java::lang::Class* getClass0();
};
