// Generated from /POI/java/org/apache/poi/ss/formula/functions/AggregateFunction.java

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

class org::apache::poi::ss::formula::functions::AggregateFunction_Percentile final
    : public Fixed2ArgFunction
{

public:
    typedef Fixed2ArgFunction super;
protected:
    void ctor();

public:
    ::org::apache::poi::ss::formula::eval::ValueEval* evaluate(int32_t srcRowIndex, int32_t srcColumnIndex, ::org::apache::poi::ss::formula::eval::ValueEval* arg0, ::org::apache::poi::ss::formula::eval::ValueEval* arg1) override;

    // Generated

public: /* protected */
    AggregateFunction_Percentile();
protected:
    AggregateFunction_Percentile(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    ::org::apache::poi::ss::formula::eval::ValueEval* evaluate(::org::apache::poi::ss::formula::eval::ValueEvalArray* args, int32_t srcRowIndex, int32_t srcColumnIndex);

private:
    virtual ::java::lang::Class* getClass0();
    friend class AggregateFunction;
    friend class AggregateFunction_LargeSmall;
    friend class AggregateFunction_ValueCollector;
    friend class AggregateFunction_subtotalInstance_13;
    friend class AggregateFunction_1;
    friend class AggregateFunction_2;
    friend class AggregateFunction_3;
    friend class AggregateFunction_4;
    friend class AggregateFunction_5;
    friend class AggregateFunction_6;
    friend class AggregateFunction_7;
    friend class AggregateFunction_8;
    friend class AggregateFunction_9;
    friend class AggregateFunction_10;
    friend class AggregateFunction_11;
    friend class AggregateFunction_12;
};
