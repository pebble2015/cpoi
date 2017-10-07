// Generated from /POI/java/org/apache/poi/ss/formula/functions/Countif.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/eval/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/functions/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/functions/Countif_MatcherBase.hpp>

struct default_init_tag;

class org::apache::poi::ss::formula::functions::Countif_NumberMatcher final
    : public Countif_MatcherBase
{

public:
    typedef Countif_MatcherBase super;

private:
    double _value {  };
protected:
    void ctor(double value, Countif_CmpOp* operator_);

public: /* protected */
    ::java::lang::String* getValueText() override;

public:
    bool matches(::org::apache::poi::ss::formula::eval::ValueEval* x) override;

    // Generated
    Countif_NumberMatcher(double value, Countif_CmpOp* operator_);
protected:
    Countif_NumberMatcher(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class Countif;
    friend class Countif_CmpOp;
    friend class Countif_MatcherBase;
    friend class Countif_BooleanMatcher;
    friend class Countif_ErrorMatcher;
    friend class Countif_StringMatcher;
};
