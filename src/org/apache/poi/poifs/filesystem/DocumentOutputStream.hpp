// Generated from /POI/java/org/apache/poi/poifs/filesystem/DocumentOutputStream.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <org/apache/poi/poifs/filesystem/fwd-POI.hpp>
#include <java/io/OutputStream.hpp>

struct default_init_tag;

class poi::poifs::filesystem::DocumentOutputStream final
    : public ::java::io::OutputStream
{

public:
    typedef ::java::io::OutputStream super;

private:
    ::java::io::OutputStream* _stream {  };
    int32_t _limit {  };
    int32_t _written {  };
protected:
    void ctor(::java::io::OutputStream* stream, int32_t limit);

public:
    void write(int32_t b) /* throws(IOException) */ override;
    void write(::int8_tArray* b) /* throws(IOException) */ override;
    void write(::int8_tArray* b, int32_t off, int32_t len) /* throws(IOException) */ override;
    void flush() /* throws(IOException) */ override;
    void close() override;

public: /* package */
    void writeFiller(int32_t totalLimit, int8_t fill) /* throws(IOException) */;

private:
    void limitCheck(int32_t toBeWritten) /* throws(IOException) */;

    // Generated

public: /* package */
    DocumentOutputStream(::java::io::OutputStream* stream, int32_t limit);
protected:
    DocumentOutputStream(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
