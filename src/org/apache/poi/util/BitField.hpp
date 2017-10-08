// Generated from /POI/java/org/apache/poi/util/BitField.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class poi::util::BitField
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    int32_t _mask {  };
    int32_t _shift_count {  };
protected:
    void ctor(int32_t mask);

public:
    virtual int32_t getValue(int32_t holder);
    virtual int16_t getShortValue(int16_t holder);
    virtual int32_t getRawValue(int32_t holder);
    virtual int16_t getShortRawValue(int16_t holder);
    virtual bool isSet(int32_t holder);
    virtual bool isAllSet(int32_t holder);
    virtual int32_t setValue(int32_t holder, int32_t value);
    virtual int16_t setShortValue(int16_t holder, int16_t value);
    virtual int32_t clear(int32_t holder);
    virtual int16_t clearShort(int16_t holder);
    virtual int8_t clearByte(int8_t holder);
    virtual int32_t set(int32_t holder);
    virtual int16_t setShort(int16_t holder);
    virtual int8_t setByte(int8_t holder);
    virtual int32_t setBoolean(int32_t holder, bool flag);
    virtual int16_t setShortBoolean(int16_t holder, bool flag);
    virtual int8_t setByteBoolean(int8_t holder, bool flag);

    // Generated
    BitField(int32_t mask);
protected:
    BitField(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
