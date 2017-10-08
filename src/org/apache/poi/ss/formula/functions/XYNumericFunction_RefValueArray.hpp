// Generated from /POI/java/org/apache/poi/ss/formula/functions/XYNumericFunction.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/ss/formula/eval/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/functions/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/functions/XYNumericFunction_ValueArray.hpp>

struct default_init_tag;

class poi::ss::formula::functions::XYNumericFunction_RefValueArray final
    : public XYNumericFunction_ValueArray
{

public:
    typedef XYNumericFunction_ValueArray super;

private:
    ::poi::ss::formula::eval::RefEval* _ref {  };
    int32_t _width {  };
protected:
    void ctor(::poi::ss::formula::eval::RefEval* ref);

public: /* protected */
    ::poi::ss::formula::eval::ValueEval* getItemInternal(int32_t index) override;

    // Generated

public:
    XYNumericFunction_RefValueArray(::poi::ss::formula::eval::RefEval* ref);
protected:
    XYNumericFunction_RefValueArray(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class XYNumericFunction;
    friend class XYNumericFunction_ValueArray;
    friend class XYNumericFunction_SingleCellValueArray;
    friend class XYNumericFunction_AreaValueArray;
    friend class XYNumericFunction_Accumulator;
};
