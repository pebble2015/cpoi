// Generated from /POI/java/org/apache/poi/poifs/nio/ByteArrayBackedDataSource.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/nio/fwd-POI.hpp>
#include <org/apache/poi/poifs/nio/fwd-POI.hpp>
#include <org/apache/poi/poifs/nio/DataSource.hpp>

struct default_init_tag;

class org::apache::poi::poifs::nio::ByteArrayBackedDataSource
    : public DataSource
{

public:
    typedef DataSource super;

private:
    ::int8_tArray* buffer {  };
    int64_t size_ {  };
protected:
    void ctor(::int8_tArray* data, int32_t size);
    void ctor(::int8_tArray* data);

public:
    ::java::nio::ByteBuffer* read(int32_t length, int64_t position) override;
    void write(::java::nio::ByteBuffer* src, int64_t position) override;

private:
    void extend(int64_t length);

public:
    void copyTo(::java::io::OutputStream* stream) /* throws(IOException) */ override;
    int64_t size() override;
    void close() override;

    // Generated
    ByteArrayBackedDataSource(::int8_tArray* data, int32_t size);
    ByteArrayBackedDataSource(::int8_tArray* data);
protected:
    ByteArrayBackedDataSource(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
