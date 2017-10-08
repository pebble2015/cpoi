// Generated from /POI/java/org/apache/poi/ss/formula/functions/Counta.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/ss/formula/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/eval/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/functions/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/ss/formula/functions/CountUtils_I_MatchAreaPredicate.hpp>

struct default_init_tag;

class poi::ss::formula::functions::Counta_2
    : public virtual ::java::lang::Object
    , public virtual CountUtils_I_MatchAreaPredicate
{

public:
    typedef ::java::lang::Object super;
    bool matches(::poi::ss::formula::eval::ValueEval* valueEval) override;
    bool matches(::poi::ss::formula::TwoDEval* areEval, int32_t rowIndex, int32_t columnIndex) override;

    // Generated
    Counta_2();
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class Counta;
    friend class Counta_1;
};
