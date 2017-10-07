// Generated from /POI/java/org/apache/poi/ss/formula/functions/LinearRegressionFunction.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/ss/formula/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/eval/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/functions/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/functions/LinearRegressionFunction_ValueArray.hpp>

struct default_init_tag;

class org::apache::poi::ss::formula::functions::LinearRegressionFunction_AreaValueArray final
    : public LinearRegressionFunction_ValueArray
{

public:
    typedef LinearRegressionFunction_ValueArray super;

private:
    ::org::apache::poi::ss::formula::TwoDEval* _ae {  };
    int32_t _width {  };
protected:
    void ctor(::org::apache::poi::ss::formula::TwoDEval* ae);

public: /* protected */
    ::org::apache::poi::ss::formula::eval::ValueEval* getItemInternal(int32_t index) override;

    // Generated

public:
    LinearRegressionFunction_AreaValueArray(::org::apache::poi::ss::formula::TwoDEval* ae);
protected:
    LinearRegressionFunction_AreaValueArray(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class LinearRegressionFunction;
    friend class LinearRegressionFunction_ValueArray;
    friend class LinearRegressionFunction_SingleCellValueArray;
    friend class LinearRegressionFunction_RefValueArray;
    friend class LinearRegressionFunction_FUNCTION;
};
