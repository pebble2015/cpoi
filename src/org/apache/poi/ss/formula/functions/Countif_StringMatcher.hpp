// Generated from /POI/java/org/apache/poi/ss/formula/functions/Countif.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/regex/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/eval/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/functions/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/functions/Countif_MatcherBase.hpp>

struct default_init_tag;

class org::apache::poi::ss::formula::functions::Countif_StringMatcher final
    : public Countif_MatcherBase
{

public:
    typedef Countif_MatcherBase super;

private:
    ::java::lang::String* _value {  };
    ::java::util::regex::Pattern* _pattern {  };
protected:
    void ctor(::java::lang::String* value, Countif_CmpOp* operator_);

public: /* protected */
    ::java::lang::String* getValueText() override;

public:
    bool matches(::org::apache::poi::ss::formula::eval::ValueEval* x) override;
    static ::java::util::regex::Pattern* getWildCardPattern(::java::lang::String* value);

    // Generated
    Countif_StringMatcher(::java::lang::String* value, Countif_CmpOp* operator_);
protected:
    Countif_StringMatcher(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class Countif;
    friend class Countif_CmpOp;
    friend class Countif_MatcherBase;
    friend class Countif_NumberMatcher;
    friend class Countif_BooleanMatcher;
    friend class Countif_ErrorMatcher;
};
