// Generated from /POI/java/org/apache/poi/ss/formula/functions/Dec2Hex.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/eval/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/functions/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/functions/Var1or2ArgFunction.hpp>
#include <org/apache/poi/ss/formula/functions/FreeRefFunction.hpp>

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

class org::apache::poi::ss::formula::functions::Dec2Hex final
    : public Var1or2ArgFunction
    , public FreeRefFunction
{

public:
    typedef Var1or2ArgFunction super;

private:
    static FreeRefFunction* instance_;
    static int64_t MIN_VALUE_;
    static int64_t MAX_VALUE_;
    static constexpr int32_t DEFAULT_PLACES_VALUE { int32_t(10) };

public:
    ::org::apache::poi::ss::formula::eval::ValueEval* evaluate(int32_t srcRowIndex, int32_t srcColumnIndex, ::org::apache::poi::ss::formula::eval::ValueEval* number, ::org::apache::poi::ss::formula::eval::ValueEval* places) override;
    ::org::apache::poi::ss::formula::eval::ValueEval* evaluate(int32_t srcRowIndex, int32_t srcColumnIndex, ::org::apache::poi::ss::formula::eval::ValueEval* arg0) override;
    ::org::apache::poi::ss::formula::eval::ValueEval* evaluate(::org::apache::poi::ss::formula::eval::ValueEvalArray* args, ::org::apache::poi::ss::formula::OperationEvaluationContext* ec) override;

    // Generated
    Dec2Hex();
protected:
    Dec2Hex(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();
    ::org::apache::poi::ss::formula::eval::ValueEval* evaluate(::org::apache::poi::ss::formula::eval::ValueEvalArray* args, int32_t srcRowIndex, int32_t srcColumnIndex);
    static FreeRefFunction*& instance();

private:
    static int64_t& MIN_VALUE();
    static int64_t& MAX_VALUE();
    virtual ::java::lang::Class* getClass0();
};
