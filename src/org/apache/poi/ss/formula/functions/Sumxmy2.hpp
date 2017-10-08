// Generated from /POI/java/org/apache/poi/ss/formula/functions/Sumxmy2.java

#pragma once

#include <org/apache/poi/ss/formula/functions/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/functions/XYNumericFunction.hpp>

struct default_init_tag;

class poi::ss::formula::functions::Sumxmy2 final
    : public XYNumericFunction
{

public:
    typedef XYNumericFunction super;

private:
    static XYNumericFunction_Accumulator* XMinusYSquaredAccumulator_;

public: /* protected */
    XYNumericFunction_Accumulator* createAccumulator() override;

    // Generated

public:
    Sumxmy2();
protected:
    Sumxmy2(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    static XYNumericFunction_Accumulator*& XMinusYSquaredAccumulator();
    virtual ::java::lang::Class* getClass0();
    friend class Sumxmy2_1;
};
