// Generated from /POI/java/org/apache/poi/util/LittleEndian.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/util/LittleEndianConsts.hpp>

struct default_init_tag;

class poi::util::LittleEndian
    : public virtual ::java::lang::Object
    , public virtual LittleEndianConsts
{

public:
    typedef ::java::lang::Object super;
    static ::int8_tArray* getByteArray_(::int8_tArray* data, int32_t offset, int32_t size);
    static double getDouble(::int8_tArray* data);
    static double getDouble(::int8_tArray* data, int32_t offset);
    static float getFloat(::int8_tArray* data);
    static float getFloat(::int8_tArray* data, int32_t offset);
    static int32_t getInt(::int8_tArray* data);
    static int32_t getInt(::int8_tArray* data, int32_t offset);
    static int64_t getLong(::int8_tArray* data);
    static int64_t getLong(::int8_tArray* data, int32_t offset);
    static int16_t getShort(::int8_tArray* data);
    static int16_t getShort(::int8_tArray* data, int32_t offset);
    static ::int16_tArray* getShortArray_(::int8_tArray* data, int32_t offset, int32_t size);
    static int16_t getUByte(::int8_tArray* data);
    static int16_t getUByte(::int8_tArray* data, int32_t offset);
    static int64_t getUInt(::int8_tArray* data);
    static int64_t getUInt(::int8_tArray* data, int32_t offset);
    static int32_t getUShort(::int8_tArray* data);
    static int32_t getUShort(::int8_tArray* data, int32_t offset);
    static void putByte(::int8_tArray* data, int32_t offset, int32_t value);
    static void putDouble(::int8_tArray* data, int32_t offset, double value);
    static void putDouble(double value, ::java::io::OutputStream* outputStream) /* throws(IOException) */;
    static void putFloat(::int8_tArray* data, int32_t offset, float value);
    static void putFloat(float value, ::java::io::OutputStream* outputStream) /* throws(IOException) */;
    static void putInt(::int8_tArray* data, int32_t offset, int32_t value);
    static void putInt(int32_t value, ::java::io::OutputStream* outputStream) /* throws(IOException) */;
    static void putLong(::int8_tArray* data, int32_t offset, int64_t value);
    static void putLong(int64_t value, ::java::io::OutputStream* outputStream) /* throws(IOException) */;
    static void putShort(::int8_tArray* data, int32_t offset, int16_t value);
    static void putShort(::java::io::OutputStream* outputStream, int16_t value) /* throws(IOException) */;
    static void putShortArray_(::int8_tArray* data, int32_t startOffset, ::int16_tArray* value);
    static void putUByte(::int8_tArray* data, int32_t offset, int16_t value);
    static void putUInt(::int8_tArray* data, int32_t offset, int64_t value);
    static void putUInt(int64_t value, ::java::io::OutputStream* outputStream) /* throws(IOException) */;
    static void putUShort(::int8_tArray* data, int32_t offset, int32_t value);
    static void putUShort(int32_t value, ::java::io::OutputStream* outputStream) /* throws(IOException) */;
    static int32_t readInt(::java::io::InputStream* stream) /* throws(IOException, BufferUnderrunException) */;
    static int64_t readUInt(::java::io::InputStream* stream) /* throws(IOException, BufferUnderrunException) */;
    static int64_t readLong(::java::io::InputStream* stream) /* throws(IOException, BufferUnderrunException) */;
    static int16_t readShort(::java::io::InputStream* stream) /* throws(IOException, BufferUnderrunException) */;
    static int32_t readUShort(::java::io::InputStream* stream) /* throws(IOException, BufferUnderrunException) */;
    static int32_t ubyteToInt(int8_t b);
protected:
    void ctor();

    // Generated

private:
    LittleEndian();
protected:
    LittleEndian(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class LittleEndian_BufferUnderrunException;
};
