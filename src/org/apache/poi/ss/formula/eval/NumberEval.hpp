// Generated from /POI/java/org/apache/poi/ss/formula/eval/NumberEval.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/eval/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/ptg/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/ss/formula/eval/NumericValueEval.hpp>
#include <org/apache/poi/ss/formula/eval/StringValueEval.hpp>

struct default_init_tag;

class org::apache::poi::ss::formula::eval::NumberEval final
    : public virtual ::java::lang::Object
    , public NumericValueEval
    , public StringValueEval
{

public:
    typedef ::java::lang::Object super;

private:
    static NumberEval* ZERO_;
    double _value {  };
    ::java::lang::String* _stringValue {  };
protected:
    void ctor(::org::apache::poi::ss::formula::ptg::Ptg* ptg);
    void ctor(double value);

public:
    double getNumberValue() override;
    ::java::lang::String* getStringValue() override;
    ::java::lang::String* toString() override;

    // Generated
    NumberEval(::org::apache::poi::ss::formula::ptg::Ptg* ptg);
    NumberEval(double value);
protected:
    NumberEval(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();
    static NumberEval*& ZERO();

private:
    virtual ::java::lang::Class* getClass0();
};
