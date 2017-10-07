// Generated from /POI/java/org/apache/poi/ss/formula/functions/TextFunction.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/eval/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/functions/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/functions/TextFunction_SingleArgTextFunc.hpp>

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

class org::apache::poi::ss::formula::functions::TextFunction_4
    : public TextFunction_SingleArgTextFunc
{

public:
    typedef TextFunction_SingleArgTextFunc super;

public: /* protected */
    ::org::apache::poi::ss::formula::eval::ValueEval* evaluate(::java::lang::String* arg) override;

    // Generated
    TextFunction_4();

public:
    static ::java::lang::Class *class_();
    ::org::apache::poi::ss::formula::eval::ValueEval* evaluate(int32_t srcRowIndex, int32_t srcColumnIndex, ::org::apache::poi::ss::formula::eval::ValueEval* arg0);
    ::org::apache::poi::ss::formula::eval::ValueEval* evaluate(::org::apache::poi::ss::formula::eval::ValueEvalArray* args, int32_t srcRowIndex, int32_t srcColumnIndex);

private:
    virtual ::java::lang::Class* getClass0();
    friend class TextFunction;
    friend class TextFunction_SingleArgTextFunc;
    friend class TextFunction_1;
    friend class TextFunction_2;
    friend class TextFunction_3;
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
