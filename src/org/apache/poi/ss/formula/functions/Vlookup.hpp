// Generated from /POI/java/org/apache/poi/ss/formula/functions/Vlookup.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/eval/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/functions/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/functions/Var3or4ArgFunction.hpp>

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

class org::apache::poi::ss::formula::functions::Vlookup final
    : public Var3or4ArgFunction
{

public:
    typedef Var3or4ArgFunction super;

private:
    static ::org::apache::poi::ss::formula::eval::ValueEval* DEFAULT_ARG3_;

public:
    ::org::apache::poi::ss::formula::eval::ValueEval* evaluate(int32_t srcRowIndex, int32_t srcColumnIndex, ::org::apache::poi::ss::formula::eval::ValueEval* arg0, ::org::apache::poi::ss::formula::eval::ValueEval* arg1, ::org::apache::poi::ss::formula::eval::ValueEval* arg2) override;
    ::org::apache::poi::ss::formula::eval::ValueEval* evaluate(int32_t srcRowIndex, int32_t srcColumnIndex, ::org::apache::poi::ss::formula::eval::ValueEval* lookup_value, ::org::apache::poi::ss::formula::eval::ValueEval* table_array, ::org::apache::poi::ss::formula::eval::ValueEval* col_index, ::org::apache::poi::ss::formula::eval::ValueEval* range_lookup) override;

private:
    LookupUtils_ValueVector* createResultColumnVector(::org::apache::poi::ss::formula::TwoDEval* tableArray_, int32_t colIndex) /* throws(EvaluationException) */;

    // Generated

public:
    Vlookup();
protected:
    Vlookup(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();
    ::org::apache::poi::ss::formula::eval::ValueEval* evaluate(::org::apache::poi::ss::formula::eval::ValueEvalArray* args, int32_t srcRowIndex, int32_t srcColumnIndex);

private:
    static ::org::apache::poi::ss::formula::eval::ValueEval*& DEFAULT_ARG3();
    virtual ::java::lang::Class* getClass0();
};
