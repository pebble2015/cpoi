// Generated from /POI/java/org/apache/poi/ss/formula/functions/XYNumericFunction.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/ss/formula/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/eval/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/functions/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/functions/XYNumericFunction_ValueArray.hpp>

struct default_init_tag;

class org::apache::poi::ss::formula::functions::XYNumericFunction_AreaValueArray final
    : public XYNumericFunction_ValueArray
{

public:
    typedef XYNumericFunction_ValueArray super;

private:
    ::org::apache::poi::ss::formula::TwoDEval* _ae {  };
    int32_t _width {  };
protected:
    void ctor(::org::apache::poi::ss::formula::TwoDEval* ae);

public: /* protected */
    ::org::apache::poi::ss::formula::eval::ValueEval* getItemInternal(int32_t index) override;

    // Generated

public:
    XYNumericFunction_AreaValueArray(::org::apache::poi::ss::formula::TwoDEval* ae);
protected:
    XYNumericFunction_AreaValueArray(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class XYNumericFunction;
    friend class XYNumericFunction_ValueArray;
    friend class XYNumericFunction_SingleCellValueArray;
    friend class XYNumericFunction_RefValueArray;
    friend class XYNumericFunction_Accumulator;
};
