// Generated from /POI/java/org/apache/poi/ss/formula/functions/Countblank.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/ss/formula/eval/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/functions/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/ss/formula/functions/CountUtils_I_MatchPredicate.hpp>

struct default_init_tag;

class poi::ss::formula::functions::Countblank_1
    : public virtual ::java::lang::Object
    , public virtual CountUtils_I_MatchPredicate
{

public:
    typedef ::java::lang::Object super;
    bool matches(::poi::ss::formula::eval::ValueEval* valueEval) override;

    // Generated
    Countblank_1();
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class Countblank;
};
