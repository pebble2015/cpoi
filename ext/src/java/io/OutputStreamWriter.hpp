// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/nio/charset/fwd-POI.hpp>
#include <sun/nio/cs/fwd-POI.hpp>
#include <java/io/Writer.hpp>

struct default_init_tag;

class java::io::OutputStreamWriter
    : public Writer
{

public:
    typedef Writer super;

private:
    ::sun::nio::cs::StreamEncoder* se {  };

protected:
    void ctor(OutputStream* out);
    void ctor(OutputStream* out, ::java::lang::String* charsetName);
    void ctor(OutputStream* out, ::java::nio::charset::Charset* cs);
    void ctor(OutputStream* out, ::java::nio::charset::CharsetEncoder* enc);

public:
    void close() override;
    void flush() override;

public: /* package */
    virtual void flushBuffer();

public:
    virtual ::java::lang::String* getEncoding();
    void write(int32_t c) override;
    void write(::char16_tArray* cbuf, int32_t off, int32_t len) override;
    void write(::java::lang::String* str, int32_t off, int32_t len) override;

    // Generated
    OutputStreamWriter(OutputStream* out);
    OutputStreamWriter(OutputStream* out, ::java::lang::String* charsetName);
    OutputStreamWriter(OutputStream* out, ::java::nio::charset::Charset* cs);
    OutputStreamWriter(OutputStream* out, ::java::nio::charset::CharsetEncoder* enc);
protected:
    OutputStreamWriter(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    virtual void write(::char16_tArray* cbuf);
    virtual void write(::java::lang::String* str);

private:
    virtual ::java::lang::Class* getClass0();
};
