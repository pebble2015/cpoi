// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/io/InputStream.hpp>

struct default_init_tag;

class java::io::ByteArrayInputStream
    : public InputStream
{

public:
    typedef InputStream super;

public: /* protected */
    ::int8_tArray* buf {  };
    int32_t count {  };
    int32_t mark_ {  };
    int32_t pos {  };

protected:
    void ctor(::int8_tArray* buf);
    void ctor(::int8_tArray* buf, int32_t offset, int32_t length);

public:
    int32_t available() override;
    void close() override;
    void mark(int32_t readAheadLimit) override;
    bool markSupported() override;
    int32_t read() override;
    int32_t read(::int8_tArray* b, int32_t off, int32_t len) override;
    void reset() override;
    int64_t skip(int64_t n) override;

    // Generated
    ByteArrayInputStream(::int8_tArray* buf);
    ByteArrayInputStream(::int8_tArray* buf, int32_t offset, int32_t length);
protected:
    ByteArrayInputStream(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    virtual int32_t read(::int8_tArray* b);

private:
    virtual ::java::lang::Class* getClass0();
};
