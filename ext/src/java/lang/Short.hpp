// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/lang/Number.hpp>
#include <java/lang/Comparable.hpp>

struct default_init_tag;

class java::lang::Short final
    : public Number
    , public Comparable
{

public:
    typedef Number super;
    static constexpr int32_t BYTES { int32_t(2) };
    static constexpr int16_t MAX_VALUE { int16_t(32767) };
    static constexpr int16_t MIN_VALUE { int16_t(-32768) };
    static constexpr int32_t SIZE { int32_t(16) };

private:
    static Class* TYPE_;
    static constexpr int64_t serialVersionUID { int64_t(7515723908773894738LL) };
    int16_t value {  };

protected:
    void ctor(int16_t value);
    void ctor(String* s);

public:
    int8_t byteValue() override;
    static int32_t compare(int16_t x, int16_t y);
    int32_t compareTo(Short* anotherShort);
    static Short* decode(String* nm);
    double doubleValue() override;
    bool equals(Object* obj) override;
    float floatValue() override;
    int32_t hashCode() override;
    static int32_t hashCode(int16_t value);
    int32_t intValue() override;
    int64_t longValue() override;
    static int16_t parseShort(String* s);
    static int16_t parseShort(String* s, int32_t radix);
    static int16_t reverseBytes(int16_t i);
    int16_t shortValue() override;
    String* toString() override;
    static String* toString(int16_t s);
    static int32_t toUnsignedInt(int16_t x);
    static int64_t toUnsignedLong(int16_t x);
    static Short* valueOf(String* s);
    static Short* valueOf(int16_t s);
    static Short* valueOf(String* s, int32_t radix);

    // Generated
    Short(int16_t value);
    Short(String* s);
protected:
    Short(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    virtual int32_t compareTo(Object* o) override;
    static Class*& TYPE();

private:
    virtual ::java::lang::Class* getClass0();
};
