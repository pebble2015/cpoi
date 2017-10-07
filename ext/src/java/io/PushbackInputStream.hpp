// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/io/FilterInputStream.hpp>

struct default_init_tag;

class java::io::PushbackInputStream
    : public FilterInputStream
{

public:
    typedef FilterInputStream super;

public: /* protected */
    ::int8_tArray* buf {  };
    int32_t pos {  };

protected:
    void ctor(InputStream* in);
    void ctor(InputStream* in, int32_t size);

public:
    int32_t available() override;
    void close() override;
    /*void ensureOpen(); (private) */
    void mark(int32_t readlimit) override;
    bool markSupported() override;
    int32_t read() override;
    int32_t read(::int8_tArray* b, int32_t off, int32_t len) override;
    void reset() override;
    int64_t skip(int64_t n) override;
    virtual void unread(int32_t b);
    virtual void unread(::int8_tArray* b);
    virtual void unread(::int8_tArray* b, int32_t off, int32_t len);

    // Generated
    PushbackInputStream(InputStream* in);
    PushbackInputStream(InputStream* in, int32_t size);
protected:
    PushbackInputStream(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    int32_t read(::int8_tArray* b);

private:
    virtual ::java::lang::Class* getClass0();
};
