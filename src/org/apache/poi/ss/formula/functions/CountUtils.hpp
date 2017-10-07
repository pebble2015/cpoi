// Generated from /POI/java/org/apache/poi/ss/formula/functions/CountUtils.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/ss/formula/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/eval/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/functions/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class org::apache::poi::ss::formula::functions::CountUtils final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;
protected:
    void ctor();

public:
    static int32_t countMatchingCellsInArea(::org::apache::poi::ss::formula::ThreeDEval* areaEval, CountUtils_I_MatchPredicate* criteriaPredicate);
    static int32_t countMatchingCellsInRef(::org::apache::poi::ss::formula::eval::RefEval* refEval, CountUtils_I_MatchPredicate* criteriaPredicate);
    static int32_t countArg(::org::apache::poi::ss::formula::eval::ValueEval* eval, CountUtils_I_MatchPredicate* criteriaPredicate);

    // Generated

private:
    CountUtils();
protected:
    CountUtils(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class CountUtils_I_MatchPredicate;
    friend class CountUtils_I_MatchAreaPredicate;
};
