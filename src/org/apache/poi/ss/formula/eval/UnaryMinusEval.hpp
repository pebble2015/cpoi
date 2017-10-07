// Generated from /POI/java/org/apache/poi/ss/formula/eval/UnaryMinusEval.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/eval/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/functions/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/functions/Fixed1ArgFunction.hpp>

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

class org::apache::poi::ss::formula::eval::UnaryMinusEval final
    : public ::org::apache::poi::ss::formula::functions::Fixed1ArgFunction
{

public:
    typedef ::org::apache::poi::ss::formula::functions::Fixed1ArgFunction super;

private:
    static ::org::apache::poi::ss::formula::functions::Function* instance_;
protected:
    void ctor();

public:
    ValueEval* evaluate(int32_t srcRowIndex, int32_t srcColumnIndex, ValueEval* arg0) override;

    // Generated

private:
    UnaryMinusEval();
protected:
    UnaryMinusEval(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();
    ValueEval* evaluate(ValueEvalArray* args, int32_t srcRowIndex, int32_t srcColumnIndex);
    static ::org::apache::poi::ss::formula::functions::Function*& instance();

private:
    virtual ::java::lang::Class* getClass0();
};
