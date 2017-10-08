// Generated from /POI/java/org/apache/poi/util/BoundedInputStream.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <java/io/InputStream.hpp>

struct default_init_tag;

class poi::util::BoundedInputStream
    : public ::java::io::InputStream
{

public:
    typedef ::java::io::InputStream super;

private:
    ::java::io::InputStream* in {  };
    int64_t max {  };
    int64_t pos {  };
    int64_t mark_ {  };
    bool propagateClose {  };
protected:
    void ctor(::java::io::InputStream* in, int64_t size);
    void ctor(::java::io::InputStream* in);

public:
    int32_t read() /* throws(IOException) */ override;
    int32_t read(::int8_tArray* b) /* throws(IOException) */ override;
    int32_t read(::int8_tArray* b, int32_t off, int32_t len) /* throws(IOException) */ override;
    int64_t skip(int64_t n) /* throws(IOException) */ override;
    int32_t available() /* throws(IOException) */ override;
    ::java::lang::String* toString() override;
    void close() /* throws(IOException) */ override;
    void reset() /* throws(IOException) */ override;
    void mark(int32_t readlimit) override;
    bool markSupported() override;
    virtual bool isPropagateClose();
    virtual void setPropagateClose(bool propagateClose);

    // Generated
    BoundedInputStream(::java::io::InputStream* in, int64_t size);
    BoundedInputStream(::java::io::InputStream* in);
protected:
    BoundedInputStream(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    void init();
    virtual ::java::lang::Class* getClass0();
};
