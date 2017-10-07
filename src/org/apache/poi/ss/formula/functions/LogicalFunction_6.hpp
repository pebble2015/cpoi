// Generated from /POI/java/org/apache/poi/ss/formula/functions/LogicalFunction.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/eval/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/functions/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/functions/LogicalFunction.hpp>

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

class org::apache::poi::ss::formula::functions::LogicalFunction_6
    : public LogicalFunction
{

public:
    typedef LogicalFunction super;

public: /* protected */
    bool evaluate(::org::apache::poi::ss::formula::eval::ValueEval* arg) override;

    // Generated

public:
    LogicalFunction_6();
    static ::java::lang::Class *class_();
    ::org::apache::poi::ss::formula::eval::ValueEval* evaluate(int32_t srcRowIndex, int32_t srcColumnIndex, ::org::apache::poi::ss::formula::eval::ValueEval* arg0);
    ::org::apache::poi::ss::formula::eval::ValueEval* evaluate(::org::apache::poi::ss::formula::eval::ValueEvalArray* args, int32_t srcRowIndex, int32_t srcColumnIndex);

private:
    virtual ::java::lang::Class* getClass0();
    friend class LogicalFunction;
    friend class LogicalFunction_1;
    friend class LogicalFunction_2;
    friend class LogicalFunction_3;
    friend class LogicalFunction_4;
    friend class LogicalFunction_5;
    friend class LogicalFunction_7;
    friend class LogicalFunction_8;
    friend class LogicalFunction_9;
};
