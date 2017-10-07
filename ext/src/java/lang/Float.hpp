// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/lang/Number.hpp>
#include <java/lang/Comparable.hpp>

struct default_init_tag;

class java::lang::Float final
    : public Number
    , public Comparable
{

public:
    typedef Number super;
    static constexpr int32_t BYTES { int32_t(4) };
    static constexpr int32_t MAX_EXPONENT { int32_t(127) };
    static constexpr float MAX_VALUE { 3.4028235E38f };
    static constexpr int32_t MIN_EXPONENT { int32_t(-126) };
    static constexpr float MIN_NORMAL { 1.17549435E-38f };
    static constexpr float MIN_VALUE { 1.4E-45f };
    static constexpr float NEGATIVE_INFINITY { (-std::numeric_limits<float>::infinity()) };
    static constexpr float NaN { std::numeric_limits<float>::quiet_NaN() };
    static constexpr float POSITIVE_INFINITY { std::numeric_limits<float>::infinity() };
    static constexpr int32_t SIZE { int32_t(32) };

private:
    static Class* TYPE_;
    static constexpr int64_t serialVersionUID { int64_t(-2671257302660747028LL) };
    float value {  };

protected:
    void ctor(float value);
    void ctor(double value);
    void ctor(String* s);

public:
    int8_t byteValue() override;
    static int32_t compare(float f1, float f2);
    int32_t compareTo(Float* anotherFloat);
    double doubleValue() override;
    bool equals(Object* obj) override;
    static int32_t floatToIntBits(float value);
    static int32_t floatToRawIntBits(float value);
    float floatValue() override;
    int32_t hashCode() override;
    static int32_t hashCode(float value);
    static float intBitsToFloat(int32_t bits);
    int32_t intValue() override;
    static bool isFinite(float f);
    bool isInfinite();
    static bool isInfinite(float v);
    bool isNaN();
    static bool isNaN(float v);
    int64_t longValue() override;
    static float max(float a, float b);
    static float min(float a, float b);
    static float parseFloat(String* s);
    int16_t shortValue() override;
    static float sum(float a, float b);
    static String* toHexString(float f);
    String* toString() override;
    static String* toString(float f);
    static Float* valueOf(String* s);
    static Float* valueOf(float f);

    // Generated
    Float(float value);
    Float(double value);
    Float(String* s);
protected:
    Float(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    virtual int32_t compareTo(Object* o) override;
    static Class*& TYPE();

private:
    virtual ::java::lang::Class* getClass0();
};
