// Generated from /POI/java/org/apache/poi/ss/formula/functions/Counta.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/eval/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/functions/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/ss/formula/functions/Function.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace org
{
    namespace apache
    {
        namespace poi
        {
            namespace ss
            {
                namespace formula
                {
                    namespace eval
                    {
typedef ::SubArray< ::org::apache::poi::ss::formula::eval::ValueEval, ::java::lang::ObjectArray > ValueEvalArray;
                    } // eval
                } // formula
            } // ss
        } // poi
    } // apache
} // org

struct default_init_tag;

class org::apache::poi::ss::formula::functions::Counta final
    : public virtual ::java::lang::Object
    , public Function
{

public:
    typedef ::java::lang::Object super;

private:
    CountUtils_I_MatchPredicate* _predicate {  };
protected:
    void ctor();
    void ctor(CountUtils_I_MatchPredicate* criteriaPredicate);

public:
    ::org::apache::poi::ss::formula::eval::ValueEval* evaluate(::org::apache::poi::ss::formula::eval::ValueEvalArray* args, int32_t srcCellRow, int32_t srcCellCol) override;

private:
    static CountUtils_I_MatchPredicate* defaultPredicate_;
    static CountUtils_I_MatchPredicate* subtotalPredicate_;

public:
    static Counta* subtotalInstance();

    // Generated
    Counta();

private:
    Counta(CountUtils_I_MatchPredicate* criteriaPredicate);
protected:
    Counta(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    static CountUtils_I_MatchPredicate*& defaultPredicate();
    static CountUtils_I_MatchPredicate*& subtotalPredicate();
    virtual ::java::lang::Class* getClass0();
    friend class Counta_1;
    friend class Counta_2;
};
