// Generated from /POI/java/org/apache/poi/ss/formula/functions/LogicalFunction.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/eval/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/functions/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/functions/Fixed1ArgFunction.hpp>

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

class poi::ss::formula::functions::LogicalFunction
    : public Fixed1ArgFunction
{

public:
    typedef Fixed1ArgFunction super;
    ::poi::ss::formula::eval::ValueEval* evaluate(int32_t srcRowIndex, int32_t srcColumnIndex, ::poi::ss::formula::eval::ValueEval* arg0) override;

public: /* protected */
    virtual bool evaluate(::poi::ss::formula::eval::ValueEval* arg) = 0;

private:
    static Function* ISLOGICAL_;
    static Function* ISNONTEXT_;
    static Function* ISNUMBER_;
    static Function* ISTEXT_;
    static Function* ISBLANK_;
    static Function* ISERROR_;
    static Function* ISERR_;
    static Function* ISNA_;
    static Function* ISREF_;

    // Generated

public:
    LogicalFunction();
protected:
    LogicalFunction(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();
    ::poi::ss::formula::eval::ValueEval* evaluate(::poi::ss::formula::eval::ValueEvalArray* args, int32_t srcRowIndex, int32_t srcColumnIndex);
    static Function*& ISLOGICAL();
    static Function*& ISNONTEXT();
    static Function*& ISNUMBER();
    static Function*& ISTEXT();
    static Function*& ISBLANK();
    static Function*& ISERROR();
    static Function*& ISERR();
    static Function*& ISNA();
    static Function*& ISREF();

private:
    virtual ::java::lang::Class* getClass0();
    friend class LogicalFunction_1;
    friend class LogicalFunction_2;
    friend class LogicalFunction_3;
    friend class LogicalFunction_4;
    friend class LogicalFunction_5;
    friend class LogicalFunction_6;
    friend class LogicalFunction_7;
    friend class LogicalFunction_8;
    friend class LogicalFunction_9;
};
