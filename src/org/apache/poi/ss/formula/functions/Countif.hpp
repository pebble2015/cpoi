// Generated from /POI/java/org/apache/poi/ss/formula/functions/Countif.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/eval/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/functions/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/functions/Fixed2ArgFunction.hpp>

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

class org::apache::poi::ss::formula::functions::Countif final
    : public Fixed2ArgFunction
{

public:
    typedef Fixed2ArgFunction super;
    ::org::apache::poi::ss::formula::eval::ValueEval* evaluate(int32_t srcRowIndex, int32_t srcColumnIndex, ::org::apache::poi::ss::formula::eval::ValueEval* arg0, ::org::apache::poi::ss::formula::eval::ValueEval* arg1) override;

private:
    double countMatchingCellsInArea(::org::apache::poi::ss::formula::eval::ValueEval* rangeArg, CountUtils_I_MatchPredicate* criteriaPredicate);

public: /* package */
    static CountUtils_I_MatchPredicate* createCriteriaPredicate(::org::apache::poi::ss::formula::eval::ValueEval* arg, int32_t srcRowIndex, int32_t srcColumnIndex);

private:
    static ::org::apache::poi::ss::formula::eval::ValueEval* evaluateCriteriaArg(::org::apache::poi::ss::formula::eval::ValueEval* arg, int32_t srcRowIndex, int32_t srcColumnIndex);
    static CountUtils_I_MatchPredicate* createGeneralMatchPredicate(::org::apache::poi::ss::formula::eval::StringEval* stringEval);
    static ::org::apache::poi::ss::formula::eval::ErrorEval* parseError(::java::lang::String* value);

public: /* package */
    static ::java::lang::Boolean* parseBoolean(::java::lang::String* strRep);

    // Generated

public:
    Countif();
protected:
    Countif(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    ::org::apache::poi::ss::formula::eval::ValueEval* evaluate(::org::apache::poi::ss::formula::eval::ValueEvalArray* args, int32_t srcRowIndex, int32_t srcColumnIndex);

private:
    virtual ::java::lang::Class* getClass0();
    friend class Countif_CmpOp;
    friend class Countif_MatcherBase;
    friend class Countif_NumberMatcher;
    friend class Countif_BooleanMatcher;
    friend class Countif_ErrorMatcher;
    friend class Countif_StringMatcher;
};
