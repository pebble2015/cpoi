// Generated from /POI/java/org/apache/poi/ss/formula/functions/Countif.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/functions/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/ss/formula/functions/CountUtils_I_MatchPredicate.hpp>

struct default_init_tag;

class org::apache::poi::ss::formula::functions::Countif_MatcherBase
    : public virtual ::java::lang::Object
    , public virtual CountUtils_I_MatchPredicate
{

public:
    typedef ::java::lang::Object super;

private:
    Countif_CmpOp* _operator {  };
protected:
    void ctor(Countif_CmpOp* operator_);

public: /* protected */
    int32_t getCode();
    bool evaluate(int32_t cmpResult);
    bool evaluate(bool cmpResult);

public:
    ::java::lang::String* toString() override;

public: /* protected */
    virtual ::java::lang::String* getValueText() = 0;

    // Generated

public: /* package */
    Countif_MatcherBase(Countif_CmpOp* operator_);
protected:
    Countif_MatcherBase(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class Countif;
    friend class Countif_CmpOp;
    friend class Countif_NumberMatcher;
    friend class Countif_BooleanMatcher;
    friend class Countif_ErrorMatcher;
    friend class Countif_StringMatcher;
};
