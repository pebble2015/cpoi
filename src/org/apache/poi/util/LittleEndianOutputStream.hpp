// Generated from /POI/java/org/apache/poi/util/LittleEndianOutputStream.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <java/io/FilterOutputStream.hpp>
#include <org/apache/poi/util/LittleEndianOutput.hpp>

struct default_init_tag;

class org::apache::poi::util::LittleEndianOutputStream final
    : public ::java::io::FilterOutputStream
    , public LittleEndianOutput
{

public:
    typedef ::java::io::FilterOutputStream super;
protected:
    void ctor(::java::io::OutputStream* out);

public:
    void writeByte(int32_t v) override;
    void writeDouble(double v) override;
    void writeInt(int32_t v) override;
    void writeLong(int64_t v) override;
    void writeShort(int32_t v) override;
    void write(::int8_tArray* b) override;
    void write(::int8_tArray* b, int32_t off, int32_t len) override;

    // Generated
    LittleEndianOutputStream(::java::io::OutputStream* out);
protected:
    LittleEndianOutputStream(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    void write(int32_t b);

private:
    virtual ::java::lang::Class* getClass0();
};
