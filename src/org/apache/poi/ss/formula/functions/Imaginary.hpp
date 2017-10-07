// Generated from /POI/java/org/apache/poi/ss/formula/functions/Imaginary.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/regex/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/eval/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/functions/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/functions/Fixed1ArgFunction.hpp>
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

class org::apache::poi::ss::formula::functions::Imaginary
    : public Fixed1ArgFunction
    , public virtual FreeRefFunction
{

public:
    typedef Fixed1ArgFunction super;

private:
    static FreeRefFunction* instance_;
    static ::java::lang::String* GROUP1_REAL_SIGN_REGEX_;
    static ::java::lang::String* GROUP2_REAL_INTEGER_OR_DOUBLE_REGEX_;
    static ::java::lang::String* GROUP3_IMAGINARY_SIGN_REGEX_;
    static ::java::lang::String* GROUP4_IMAGINARY_INTEGER_OR_DOUBLE_REGEX_;
    static ::java::lang::String* GROUP5_IMAGINARY_GROUP_REGEX_;
    static ::java::util::regex::Pattern* COMPLEX_NUMBER_PATTERN_;

public:
    static constexpr int32_t GROUP1_REAL_SIGN { int32_t(1) };
    static constexpr int32_t GROUP2_IMAGINARY_INTEGER_OR_DOUBLE { int32_t(2) };
    static constexpr int32_t GROUP3_IMAGINARY_SIGN { int32_t(3) };
    static constexpr int32_t GROUP4_IMAGINARY_INTEGER_OR_DOUBLE { int32_t(4) };
    ::org::apache::poi::ss::formula::eval::ValueEval* evaluate(int32_t srcRowIndex, int32_t srcColumnIndex, ::org::apache::poi::ss::formula::eval::ValueEval* inumberVE) override;
    ::org::apache::poi::ss::formula::eval::ValueEval* evaluate(::org::apache::poi::ss::formula::eval::ValueEvalArray* args, ::org::apache::poi::ss::formula::OperationEvaluationContext* ec) override;

    // Generated
    Imaginary();
protected:
    Imaginary(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();
    ::org::apache::poi::ss::formula::eval::ValueEval* evaluate(::org::apache::poi::ss::formula::eval::ValueEvalArray* args, int32_t srcRowIndex, int32_t srcColumnIndex);
    static FreeRefFunction*& instance();
    static ::java::lang::String*& GROUP1_REAL_SIGN_REGEX();
    static ::java::lang::String*& GROUP2_REAL_INTEGER_OR_DOUBLE_REGEX();
    static ::java::lang::String*& GROUP3_IMAGINARY_SIGN_REGEX();
    static ::java::lang::String*& GROUP4_IMAGINARY_INTEGER_OR_DOUBLE_REGEX();
    static ::java::lang::String*& GROUP5_IMAGINARY_GROUP_REGEX();
    static ::java::util::regex::Pattern*& COMPLEX_NUMBER_PATTERN();

private:
    virtual ::java::lang::Class* getClass0();
};
