// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/io/FilterInputStream.hpp>
#include <java/io/DataInput.hpp>

struct default_init_tag;

class java::io::DataInputStream
    : public FilterInputStream
    , public virtual DataInput
{

public:
    typedef FilterInputStream super;

private:
    ::int8_tArray* bytearr {  };
    ::char16_tArray* chararr {  };
    ::char16_tArray* lineBuffer {  };
    ::int8_tArray* readBuffer {  };

protected:
    void ctor(InputStream* in);

public:
    int32_t read(::int8_tArray* b) override;
    int32_t read(::int8_tArray* b, int32_t off, int32_t len) override;
    bool readBoolean() override;
    int8_t readByte() override;
    char16_t readChar() override;
    double readDouble() override;
    float readFloat() override;
    void readFully(::int8_tArray* b) override;
    void readFully(::int8_tArray* b, int32_t off, int32_t len) override;
    int32_t readInt() override;
    ::java::lang::String* readLine() override;
    int64_t readLong() override;
    int16_t readShort() override;
    ::java::lang::String* readUTF() override;
    static ::java::lang::String* readUTF(DataInput* in);
    int32_t readUnsignedByte() override;
    int32_t readUnsignedShort() override;
    int32_t skipBytes(int32_t n) override;

    // Generated
    DataInputStream(InputStream* in);
protected:
    DataInputStream(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    int32_t read();

private:
    virtual ::java::lang::Class* getClass0();
};
