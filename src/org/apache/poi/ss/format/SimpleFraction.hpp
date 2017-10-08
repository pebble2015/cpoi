// Generated from /POI/java/org/apache/poi/ss/format/SimpleFraction.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/ss/format/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class poi::ss::format::SimpleFraction
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    int32_t denominator {  };
    int32_t numerator {  };

public:
    static SimpleFraction* buildFractionExactDenominator(double val, int32_t exactDenom);
    static SimpleFraction* buildFractionMaxDenominator(double value, int32_t maxDenominator);

private:
    static SimpleFraction* buildFractionMaxDenominator(double value, double epsilon, int32_t maxDenominator, int32_t maxIterations);
protected:
    void ctor(int32_t numerator, int32_t denominator);

public:
    virtual int32_t getDenominator();
    virtual int32_t getNumerator();

    // Generated
    SimpleFraction(int32_t numerator, int32_t denominator);
protected:
    SimpleFraction(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
