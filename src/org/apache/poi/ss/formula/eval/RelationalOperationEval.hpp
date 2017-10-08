// Generated from /POI/java/org/apache/poi/ss/formula/eval/RelationalOperationEval.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/eval/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/functions/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/functions/Fixed2ArgFunction.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace poi
{
    namespace ss
    {
        namespace formula
        {
            namespace eval
            {
typedef ::SubArray< ::poi::ss::formula::eval::ValueEval, ::java::lang::ObjectArray > ValueEvalArray;
            } // eval
        } // formula
    } // ss
} // poi

struct default_init_tag;

class poi::ss::formula::eval::RelationalOperationEval
    : public ::poi::ss::formula::functions::Fixed2ArgFunction
{

public:
    typedef ::poi::ss::formula::functions::Fixed2ArgFunction super;

public: /* protected */
    virtual bool convertComparisonResult(int32_t cmpResult) = 0;

public:
    ValueEval* evaluate(int32_t srcRowIndex, int32_t srcColumnIndex, ValueEval* arg0, ValueEval* arg1) override;

private:
    static int32_t doCompare(ValueEval* va, ValueEval* vb);
    static int32_t compareBlank(ValueEval* v);
    static ::poi::ss::formula::functions::Function* EqualEval_;
    static ::poi::ss::formula::functions::Function* GreaterEqualEval_;
    static ::poi::ss::formula::functions::Function* GreaterThanEval_;
    static ::poi::ss::formula::functions::Function* LessEqualEval_;
    static ::poi::ss::formula::functions::Function* LessThanEval_;
    static ::poi::ss::formula::functions::Function* NotEqualEval_;

    // Generated

public:
    RelationalOperationEval();
protected:
    RelationalOperationEval(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();
    ValueEval* evaluate(ValueEvalArray* args, int32_t srcRowIndex, int32_t srcColumnIndex);
    static ::poi::ss::formula::functions::Function*& EqualEval();
    static ::poi::ss::formula::functions::Function*& GreaterEqualEval();
    static ::poi::ss::formula::functions::Function*& GreaterThanEval();
    static ::poi::ss::formula::functions::Function*& LessEqualEval();
    static ::poi::ss::formula::functions::Function*& LessThanEval();
    static ::poi::ss::formula::functions::Function*& NotEqualEval();

private:
    virtual ::java::lang::Class* getClass0();
    friend class RelationalOperationEval_1;
    friend class RelationalOperationEval_2;
    friend class RelationalOperationEval_3;
    friend class RelationalOperationEval_4;
    friend class RelationalOperationEval_5;
    friend class RelationalOperationEval_6;
};
