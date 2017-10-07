// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/lang/Number.hpp>
#include <java/lang/Comparable.hpp>

struct default_init_tag;

class java::lang::Byte final
    : public Number
    , public Comparable
{

public:
    typedef Number super;
    static constexpr int32_t BYTES { int32_t(1) };
    static constexpr int8_t MAX_VALUE { int8_t(127) };
    static constexpr int8_t MIN_VALUE { int8_t(-128) };
    static constexpr int32_t SIZE { int32_t(8) };

private:
    static Class* TYPE_;
    static constexpr int64_t serialVersionUID { int64_t(-7183698231559129828LL) };
    int8_t value {  };

protected:
    void ctor(int8_t value);
    void ctor(String* s);

public:
    int8_t byteValue() override;
    static int32_t compare(int8_t x, int8_t y);
    int32_t compareTo(Byte* anotherByte);
    static Byte* decode(String* nm);
    double doubleValue() override;
    bool equals(Object* obj) override;
    float floatValue() override;
    int32_t hashCode() override;
    static int32_t hashCode(int8_t value);
    int32_t intValue() override;
    int64_t longValue() override;
    static int8_t parseByte(String* s);
    static int8_t parseByte(String* s, int32_t radix);
    int16_t shortValue() override;
    String* toString() override;
    static String* toString(int8_t b);
    static int32_t toUnsignedInt(int8_t x);
    static int64_t toUnsignedLong(int8_t x);
    static Byte* valueOf(int8_t b);
    static Byte* valueOf(String* s);
    static Byte* valueOf(String* s, int32_t radix);

    // Generated
    Byte(int8_t value);
    Byte(String* s);
protected:
    Byte(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    virtual int32_t compareTo(Object* o) override;
    static Class*& TYPE();

private:
    virtual ::java::lang::Class* getClass0();
};
