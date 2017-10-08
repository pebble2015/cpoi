// Generated from /POI/java/org/apache/poi/poifs/nio/DataSource.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/nio/fwd-POI.hpp>
#include <org/apache/poi/poifs/nio/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class poi::poifs::nio::DataSource
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;
    virtual ::java::nio::ByteBuffer* read(int32_t length, int64_t position) /* throws(IOException) */ = 0;
    virtual void write(::java::nio::ByteBuffer* src, int64_t position) /* throws(IOException) */ = 0;
    virtual int64_t size() /* throws(IOException) */ = 0;
    virtual void close() /* throws(IOException) */ = 0;
    virtual void copyTo(::java::io::OutputStream* stream) /* throws(IOException) */ = 0;

    // Generated
    DataSource();
protected:
    DataSource(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
