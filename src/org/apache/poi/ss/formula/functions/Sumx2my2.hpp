// Generated from /POI/java/org/apache/poi/ss/formula/functions/Sumx2my2.java

#pragma once

#include <org/apache/poi/ss/formula/functions/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/functions/XYNumericFunction.hpp>

struct default_init_tag;

class org::apache::poi::ss::formula::functions::Sumx2my2 final
    : public XYNumericFunction
{

public:
    typedef XYNumericFunction super;

private:
    static XYNumericFunction_Accumulator* XSquaredMinusYSquaredAccumulator_;

public: /* protected */
    XYNumericFunction_Accumulator* createAccumulator() override;

    // Generated

public:
    Sumx2my2();
protected:
    Sumx2my2(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    static XYNumericFunction_Accumulator*& XSquaredMinusYSquaredAccumulator();
    virtual ::java::lang::Class* getClass0();
    friend class Sumx2my2_1;
};
