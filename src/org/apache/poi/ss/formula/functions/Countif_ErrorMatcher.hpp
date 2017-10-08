// Generated from /POI/java/org/apache/poi/ss/formula/functions/Countif.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/eval/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/functions/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/functions/Countif_MatcherBase.hpp>

struct default_init_tag;

class poi::ss::formula::functions::Countif_ErrorMatcher final
    : public Countif_MatcherBase
{

public:
    typedef Countif_MatcherBase super;

private:
    int32_t _value {  };
protected:
    void ctor(int32_t errorCode, Countif_CmpOp* operator_);

public: /* protected */
    ::java::lang::String* getValueText() override;

public:
    bool matches(::poi::ss::formula::eval::ValueEval* x) override;
    int32_t getValue();

    // Generated
    Countif_ErrorMatcher(int32_t errorCode, Countif_CmpOp* operator_);
protected:
    Countif_ErrorMatcher(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class Countif;
    friend class Countif_CmpOp;
    friend class Countif_MatcherBase;
    friend class Countif_NumberMatcher;
    friend class Countif_BooleanMatcher;
    friend class Countif_StringMatcher;
};
