// Generated from /POI/java/org/apache/poi/util/IntegerField.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/util/FixedField.hpp>

struct default_init_tag;

class org::apache::poi::util::IntegerField
    : public virtual ::java::lang::Object
    , public virtual FixedField
{

public:
    typedef ::java::lang::Object super;

private:
    int32_t _value {  };
    int32_t _offset {  };
protected:
    void ctor(int32_t offset) /* throws(ArrayIndexOutOfBoundsException) */;
    void ctor(int32_t offset, int32_t value) /* throws(ArrayIndexOutOfBoundsException) */;
    void ctor(int32_t offset, ::int8_tArray* data) /* throws(ArrayIndexOutOfBoundsException) */;
    void ctor(int32_t offset, int32_t value, ::int8_tArray* data) /* throws(ArrayIndexOutOfBoundsException) */;

public:
    virtual int32_t get();
    virtual void set(int32_t value);
    virtual void set(int32_t value, ::int8_tArray* data) /* throws(ArrayIndexOutOfBoundsException) */;
    void readFromBytes(::int8_tArray* data) /* throws(ArrayIndexOutOfBoundsException) */ override;
    void readFromStream(::java::io::InputStream* stream) /* throws(IOException) */ override;
    void writeToBytes(::int8_tArray* data) /* throws(ArrayIndexOutOfBoundsException) */ override;
    ::java::lang::String* toString() override;

    // Generated
    IntegerField(int32_t offset);
    IntegerField(int32_t offset, int32_t value);
    IntegerField(int32_t offset, ::int8_tArray* data);
    IntegerField(int32_t offset, int32_t value, ::int8_tArray* data);
protected:
    IntegerField(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
