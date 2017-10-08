// Generated from /POI/java/org/apache/poi/ss/util/NumberComparer.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class poi::ss::util::NumberComparer final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;
    static int32_t compare(double a, double b);

private:
    static int32_t compareSubnormalNumbers(int64_t fracA, int64_t fracB, bool isNegative);
    static int32_t compareAcrossSubnormalThreshold(int64_t normalRawBitsA, int64_t subnormalRawBitsB, bool isNegative);
    static ::java::lang::String* toHex(double a);

    // Generated

public:
    NumberComparer();
protected:
    NumberComparer(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
