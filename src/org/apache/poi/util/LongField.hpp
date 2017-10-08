// Generated from /POI/java/org/apache/poi/util/LongField.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/util/FixedField.hpp>

struct default_init_tag;

class poi::util::LongField
    : public virtual ::java::lang::Object
    , public virtual FixedField
{

public:
    typedef ::java::lang::Object super;

private:
    int64_t _value {  };
    int32_t _offset {  };
protected:
    void ctor(int32_t offset) /* throws(ArrayIndexOutOfBoundsException) */;
    void ctor(int32_t offset, int64_t value) /* throws(ArrayIndexOutOfBoundsException) */;
    void ctor(int32_t offset, ::int8_tArray* data) /* throws(ArrayIndexOutOfBoundsException) */;
    void ctor(int32_t offset, int64_t value, ::int8_tArray* data) /* throws(ArrayIndexOutOfBoundsException) */;

public:
    virtual int64_t get();
    virtual void set(int64_t value);
    virtual void set(int64_t value, ::int8_tArray* data) /* throws(ArrayIndexOutOfBoundsException) */;
    void readFromBytes(::int8_tArray* data) /* throws(ArrayIndexOutOfBoundsException) */ override;
    void readFromStream(::java::io::InputStream* stream) /* throws(IOException) */ override;
    void writeToBytes(::int8_tArray* data) /* throws(ArrayIndexOutOfBoundsException) */ override;
    ::java::lang::String* toString() override;

    // Generated
    LongField(int32_t offset);
    LongField(int32_t offset, int64_t value);
    LongField(int32_t offset, ::int8_tArray* data);
    LongField(int32_t offset, int64_t value, ::int8_tArray* data);
protected:
    LongField(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
