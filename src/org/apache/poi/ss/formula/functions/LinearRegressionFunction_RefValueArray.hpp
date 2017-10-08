// Generated from /POI/java/org/apache/poi/ss/formula/functions/LinearRegressionFunction.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/ss/formula/eval/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/functions/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/functions/LinearRegressionFunction_ValueArray.hpp>

struct default_init_tag;

class poi::ss::formula::functions::LinearRegressionFunction_RefValueArray final
    : public LinearRegressionFunction_ValueArray
{

public:
    typedef LinearRegressionFunction_ValueArray super;

private:
    ::poi::ss::formula::eval::RefEval* _ref {  };
    int32_t _width {  };
protected:
    void ctor(::poi::ss::formula::eval::RefEval* ref);

public: /* protected */
    ::poi::ss::formula::eval::ValueEval* getItemInternal(int32_t index) override;

    // Generated

public:
    LinearRegressionFunction_RefValueArray(::poi::ss::formula::eval::RefEval* ref);
protected:
    LinearRegressionFunction_RefValueArray(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class LinearRegressionFunction;
    friend class LinearRegressionFunction_ValueArray;
    friend class LinearRegressionFunction_SingleCellValueArray;
    friend class LinearRegressionFunction_AreaValueArray;
    friend class LinearRegressionFunction_FUNCTION;
};
