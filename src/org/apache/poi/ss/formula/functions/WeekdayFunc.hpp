// Generated from /POI/java/org/apache/poi/ss/formula/functions/WeekdayFunc.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/eval/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/functions/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/ss/formula/functions/Function.hpp>

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

class org::apache::poi::ss::formula::functions::WeekdayFunc final
    : public virtual ::java::lang::Object
    , public Function
{

public:
    typedef ::java::lang::Object super;

private:
    static Function* instance_;
protected:
    void ctor();

public:
    ::org::apache::poi::ss::formula::eval::ValueEval* evaluate(::org::apache::poi::ss::formula::eval::ValueEvalArray* args, int32_t srcRowIndex, int32_t srcColumnIndex) override;

    // Generated

private:
    WeekdayFunc();
protected:
    WeekdayFunc(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();
    static Function*& instance();

private:
    virtual ::java::lang::Class* getClass0();
};
