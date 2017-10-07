// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/nio/fwd-POI.hpp>
#include <java/io/BufferedReader.hpp>

struct default_init_tag;

class java::io::LineNumberReader
    : public BufferedReader
{

public:
    typedef BufferedReader super;

private:
    int32_t lineNumber {  };
    int32_t markedLineNumber {  };
    bool markedSkipLF {  };
    static constexpr int32_t maxSkipBufferSize { int32_t(8192) };
    ::char16_tArray* skipBuffer {  };
    bool skipLF {  };

protected:
    void ctor(Reader* in);
    void ctor(Reader* in, int32_t sz);

public:
    virtual int32_t getLineNumber();
    void mark(int32_t readAheadLimit) override;
    int32_t read() override;
    int32_t read(::char16_tArray* cbuf, int32_t off, int32_t len) override;
    ::java::lang::String* readLine() override;
    void reset() override;
    virtual void setLineNumber(int32_t lineNumber);
    int64_t skip(int64_t n) override;

    // Generated
    LineNumberReader(Reader* in);
    LineNumberReader(Reader* in, int32_t sz);
protected:
    LineNumberReader(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

public: /* package */
    virtual ::java::lang::String* readLine(bool ignoreLF);

public:
    int32_t read(::java::nio::CharBuffer* target);
    virtual int32_t read(::char16_tArray* cbuf);

private:
    virtual ::java::lang::Class* getClass0();
};
