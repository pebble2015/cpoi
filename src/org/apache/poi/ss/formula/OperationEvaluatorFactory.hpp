// Generated from /POI/java/org/apache/poi/ss/formula/OperationEvaluatorFactory.java

#pragma once

#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/eval/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/functions/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/ptg/fwd-POI.hpp>
#include <java/lang/Object.hpp>

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

class org::apache::poi::ss::formula::OperationEvaluatorFactory final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    static ::java::util::Map* _instancesByPtgClass_;
protected:
    void ctor();

private:
    static ::java::util::Map* initialiseInstancesMap();
    static void put(::java::util::Map* m, ::org::apache::poi::ss::formula::ptg::OperationPtg* ptgKey, ::org::apache::poi::ss::formula::functions::Function* instance);

public:
    static ::org::apache::poi::ss::formula::eval::ValueEval* evaluate(::org::apache::poi::ss::formula::ptg::OperationPtg* ptg, ::org::apache::poi::ss::formula::eval::ValueEvalArray* args, OperationEvaluationContext* ec);

    // Generated

private:
    OperationEvaluatorFactory();
protected:
    OperationEvaluatorFactory(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    static ::java::util::Map*& _instancesByPtgClass();
    virtual ::java::lang::Class* getClass0();
};
