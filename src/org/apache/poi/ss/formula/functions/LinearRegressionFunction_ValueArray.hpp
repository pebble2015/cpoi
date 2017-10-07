// Generated from /POI/java/org/apache/poi/ss/formula/functions/LinearRegressionFunction.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/ss/formula/eval/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/functions/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/ss/formula/functions/LookupUtils_ValueVector.hpp>

struct default_init_tag;

class org::apache::poi::ss::formula::functions::LinearRegressionFunction_ValueArray
    : public virtual ::java::lang::Object
    , public virtual LookupUtils_ValueVector
{

public:
    typedef ::java::lang::Object super;

private:
    int32_t _size {  };
protected:
    void ctor(int32_t size);

public:
    ::org::apache::poi::ss::formula::eval::ValueEval* getItem(int32_t index) override;

public: /* protected */
    virtual ::org::apache::poi::ss::formula::eval::ValueEval* getItemInternal(int32_t index) = 0;

public:
    int32_t getSize() override;

    // Generated

public: /* protected */
    LinearRegressionFunction_ValueArray(int32_t size);
protected:
    LinearRegressionFunction_ValueArray(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class LinearRegressionFunction;
    friend class LinearRegressionFunction_SingleCellValueArray;
    friend class LinearRegressionFunction_RefValueArray;
    friend class LinearRegressionFunction_AreaValueArray;
    friend class LinearRegressionFunction_FUNCTION;
};
