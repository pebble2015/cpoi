// Generated from /POI/java/org/apache/poi/ss/formula/functions/Sumx2py2.java

#pragma once

#include <org/apache/poi/ss/formula/functions/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/functions/XYNumericFunction.hpp>

struct default_init_tag;

class org::apache::poi::ss::formula::functions::Sumx2py2 final
    : public XYNumericFunction
{

public:
    typedef XYNumericFunction super;

private:
    static XYNumericFunction_Accumulator* XSquaredPlusYSquaredAccumulator_;

public: /* protected */
    XYNumericFunction_Accumulator* createAccumulator() override;

    // Generated

public:
    Sumx2py2();
protected:
    Sumx2py2(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    static XYNumericFunction_Accumulator*& XSquaredPlusYSquaredAccumulator();
    virtual ::java::lang::Class* getClass0();
    friend class Sumx2py2_1;
};
