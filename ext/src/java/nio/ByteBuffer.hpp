// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/nio/fwd-POI.hpp>
#include <java/nio/Buffer.hpp>
#include <java/lang/Comparable.hpp>
#include <Array.hpp>

struct default_init_tag;

class java::nio::ByteBuffer
    : public Buffer
    , public virtual ::java::lang::Comparable
{

public:
    typedef Buffer super;

public: /* package */
    bool bigEndian {  };
    ::int8_tArray* hb {  };
    bool isReadOnly_ {  };
    bool nativeByteOrder {  };
    int32_t offset {  };

protected:
    void ctor(int32_t mark, int32_t pos, int32_t lim, int32_t cap);
    void ctor(int32_t mark, int32_t pos, int32_t lim, int32_t cap, ::int8_tArray* hb, int32_t offset);

public: /* package */
    virtual int8_t _get(int32_t i) = 0;
    virtual void _put(int32_t i, int8_t b) = 0;

public:
    static ByteBuffer* allocate(int32_t capacity);
    static ByteBuffer* allocateDirect(int32_t capacity);
    ::int8_tArray* array() override;
    int32_t arrayOffset() override;
    virtual CharBuffer* asCharBuffer() = 0;
    virtual DoubleBuffer* asDoubleBuffer() = 0;
    virtual FloatBuffer* asFloatBuffer() = 0;
    virtual IntBuffer* asIntBuffer() = 0;
    virtual LongBuffer* asLongBuffer() = 0;
    virtual ByteBuffer* asReadOnlyBuffer() = 0;
    virtual ShortBuffer* asShortBuffer() = 0;
    virtual ByteBuffer* compact() = 0;
    /*static int32_t compare(int8_t x, int8_t y); (private) */
    virtual int32_t compareTo(ByteBuffer* that);
    virtual ByteBuffer* duplicate() = 0;
    bool equals(::java::lang::Object* ob) override;
    /*static bool equals(int8_t x, int8_t y); (private) */
    virtual int8_t get() = 0;
    virtual int8_t get(int32_t index) = 0;
    virtual ByteBuffer* get(::int8_tArray* dst);
    virtual ByteBuffer* get(::int8_tArray* dst, int32_t offset, int32_t length);
    virtual char16_t getChar() = 0;
    virtual char16_t getChar(int32_t index) = 0;
    virtual double getDouble() = 0;
    virtual double getDouble(int32_t index) = 0;
    virtual float getFloat() = 0;
    virtual float getFloat(int32_t index) = 0;
    virtual int32_t getInt() = 0;
    virtual int32_t getInt(int32_t index) = 0;
    virtual int64_t getLong() = 0;
    virtual int64_t getLong(int32_t index) = 0;
    virtual int16_t getShort() = 0;
    virtual int16_t getShort(int32_t index) = 0;
    bool hasArray_() override;
    int32_t hashCode() override;
    bool isDirect() = 0;
    ByteOrder* order();
    ByteBuffer* order(ByteOrder* bo);
    virtual ByteBuffer* put(int8_t b) = 0;
    virtual ByteBuffer* put(ByteBuffer* src);
    ByteBuffer* put(::int8_tArray* src);
    virtual ByteBuffer* put(int32_t index, int8_t b) = 0;
    virtual ByteBuffer* put(::int8_tArray* src, int32_t offset, int32_t length);
    virtual ByteBuffer* putChar(char16_t value) = 0;
    virtual ByteBuffer* putChar(int32_t index, char16_t value) = 0;
    virtual ByteBuffer* putDouble(double value) = 0;
    virtual ByteBuffer* putDouble(int32_t index, double value) = 0;
    virtual ByteBuffer* putFloat(float value) = 0;
    virtual ByteBuffer* putFloat(int32_t index, float value) = 0;
    virtual ByteBuffer* putInt(int32_t value) = 0;
    virtual ByteBuffer* putInt(int32_t index, int32_t value) = 0;
    virtual ByteBuffer* putLong(int64_t value) = 0;
    virtual ByteBuffer* putLong(int32_t index, int64_t value) = 0;
    virtual ByteBuffer* putShort(int16_t value) = 0;
    virtual ByteBuffer* putShort(int32_t index, int16_t value) = 0;
    virtual ByteBuffer* slice() = 0;
    ::java::lang::String* toString() override;
    static ByteBuffer* wrap(::int8_tArray* array);
    static ByteBuffer* wrap(::int8_tArray* array, int32_t offset, int32_t length);

    // Generated

public: /* package */
    ByteBuffer(int32_t mark, int32_t pos, int32_t lim, int32_t cap);
    ByteBuffer(int32_t mark, int32_t pos, int32_t lim, int32_t cap, ::int8_tArray* hb, int32_t offset);
protected:
    ByteBuffer(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    virtual int32_t compareTo(::java::lang::Object* o) override;

private:
    virtual ::java::lang::Class* getClass0();
};
