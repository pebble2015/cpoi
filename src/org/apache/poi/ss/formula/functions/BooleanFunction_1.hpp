// Generated from /POI/java/org/apache/poi/ss/formula/functions/BooleanFunction.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/ss/formula/functions/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/functions/BooleanFunction.hpp>

struct default_init_tag;

class org::apache::poi::ss::formula::functions::BooleanFunction_1
    : public BooleanFunction
{

public:
    typedef BooleanFunction super;

public: /* protected */
    bool getInitialResultValue() override;
    bool partialEvaluate(bool cumulativeResult, bool currentValue) override;

    // Generated

public:
    BooleanFunction_1();
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class BooleanFunction;
    friend class BooleanFunction_2;
    friend class BooleanFunction_3;
    friend class BooleanFunction_4;
    friend class BooleanFunction_5;
};
