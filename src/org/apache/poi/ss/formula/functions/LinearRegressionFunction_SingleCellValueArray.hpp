// Generated from /POI/java/org/apache/poi/ss/formula/functions/LinearRegressionFunction.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/ss/formula/eval/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/functions/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/functions/LinearRegressionFunction_ValueArray.hpp>

struct default_init_tag;

class org::apache::poi::ss::formula::functions::LinearRegressionFunction_SingleCellValueArray final
    : public LinearRegressionFunction_ValueArray
{

public:
    typedef LinearRegressionFunction_ValueArray super;

private:
    ::org::apache::poi::ss::formula::eval::ValueEval* _value {  };
protected:
    void ctor(::org::apache::poi::ss::formula::eval::ValueEval* value);

public: /* protected */
    ::org::apache::poi::ss::formula::eval::ValueEval* getItemInternal(int32_t index) override;

    // Generated

public:
    LinearRegressionFunction_SingleCellValueArray(::org::apache::poi::ss::formula::eval::ValueEval* value);
protected:
    LinearRegressionFunction_SingleCellValueArray(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class LinearRegressionFunction;
    friend class LinearRegressionFunction_ValueArray;
    friend class LinearRegressionFunction_RefValueArray;
    friend class LinearRegressionFunction_AreaValueArray;
    friend class LinearRegressionFunction_FUNCTION;
};
