// Generated from /POI/java/org/apache/poi/ss/formula/functions/TextFunction.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/eval/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/functions/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/ss/formula/functions/Function.hpp>

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

class poi::ss::formula::functions::TextFunction
    : public virtual ::java::lang::Object
    , public virtual Function
{

public:
    typedef ::java::lang::Object super;

private:
    static ::poi::ss::usermodel::DataFormatter* formatter_;

public: /* protected */
    static ::java::lang::String* evaluateStringArg(::poi::ss::formula::eval::ValueEval* eval, int32_t srcRow, int32_t srcCol) /* throws(EvaluationException) */;
    static int32_t evaluateIntArg(::poi::ss::formula::eval::ValueEval* arg, int32_t srcCellRow, int32_t srcCellCol) /* throws(EvaluationException) */;
    static double evaluateDoubleArg(::poi::ss::formula::eval::ValueEval* arg, int32_t srcCellRow, int32_t srcCellCol) /* throws(EvaluationException) */;

public:
    ::poi::ss::formula::eval::ValueEval* evaluate(::poi::ss::formula::eval::ValueEvalArray* args, int32_t srcCellRow, int32_t srcCellCol) override;

public: /* protected */
    virtual ::poi::ss::formula::eval::ValueEval* evaluateFunc(::poi::ss::formula::eval::ValueEvalArray* args, int32_t srcCellRow, int32_t srcCellCol) /* throws(EvaluationException) */ = 0;

private:
    static Function* CHAR_;
    static Function* LEN_;
    static Function* LOWER_;
    static Function* UPPER_;
    static Function* PROPER_;
    static Function* TRIM_;
    static Function* CLEAN_;
    static Function* MID_;
    static Function* LEFT_;
    static Function* RIGHT_;
    static Function* CONCATENATE_;
    static Function* EXACT_;
    static Function* TEXT_;
    static Function* FIND_;
    static Function* SEARCH_;

    // Generated

public:
    TextFunction();
protected:
    TextFunction(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

public: /* protected */
    static ::poi::ss::usermodel::DataFormatter*& formatter();

public:
    static Function*& CHAR();
    static Function*& LEN();
    static Function*& LOWER();
    static Function*& UPPER();
    static Function*& PROPER();
    static Function*& TRIM();
    static Function*& CLEAN();
    static Function*& MID();
    static Function*& LEFT();
    static Function*& RIGHT();
    static Function*& CONCATENATE();
    static Function*& EXACT();
    static Function*& TEXT();
    static Function*& FIND();
    static Function*& SEARCH();

private:
    virtual ::java::lang::Class* getClass0();
    friend class TextFunction_SingleArgTextFunc;
    friend class TextFunction_1;
    friend class TextFunction_2;
    friend class TextFunction_3;
    friend class TextFunction_4;
    friend class TextFunction_5;
    friend class TextFunction_6;
    friend class TextFunction_7;
    friend class TextFunction_8;
    friend class TextFunction_LeftRight;
    friend class TextFunction_9;
    friend class TextFunction_10;
    friend class TextFunction_11;
    friend class TextFunction_SearchFind;
};
