// Generated from /POI/java/org/apache/poi/ss/formula/functions/MathX.java

#pragma once

#include <fwd-POI.hpp>
#include <java/math/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/functions/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class poi::ss::formula::functions::MathX final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;
protected:
    void ctor();

public:
    static double round(double n, int32_t p);
    static double roundUp(double n, int32_t p);
    static double roundDown(double n, int32_t p);

private:
    static double round(double n, int32_t p, ::java::math::RoundingMode* rounding);

public:
    static int16_t sign(double d);
    static double average(::doubleArray* values);
    static double sum(::doubleArray* values);
    static double sumsq(::doubleArray* values);
    static double product(::doubleArray* values);
    static double min(::doubleArray* values);
    static double max(::doubleArray* values);
    static double floor(double n, double s);
    static double ceiling(double n, double s);
    static double factorial(int32_t n);
    static double mod(double n, double d);
    static double acosh(double d);
    static double asinh(double d);
    static double atanh(double d);
    static double cosh(double d);
    static double sinh(double d);
    static double tanh(double d);
    static double nChooseK(int32_t n, int32_t k);

    // Generated

private:
    MathX();
protected:
    MathX(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
