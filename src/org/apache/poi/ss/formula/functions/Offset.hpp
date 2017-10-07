// Generated from /POI/java/org/apache/poi/ss/formula/functions/Offset.java

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

class org::apache::poi::ss::formula::functions::Offset final
    : public virtual ::java::lang::Object
    , public Function
{

public:
    typedef ::java::lang::Object super;

private:
    static constexpr int32_t LAST_VALID_ROW_INDEX { int32_t(65535) };
    static constexpr int32_t LAST_VALID_COLUMN_INDEX { int32_t(255) };

public:
    ::org::apache::poi::ss::formula::eval::ValueEval* evaluate(::org::apache::poi::ss::formula::eval::ValueEvalArray* args, int32_t srcCellRow, int32_t srcCellCol) override;

private:
    static ::org::apache::poi::ss::formula::eval::AreaEval* createOffset(Offset_BaseRef* baseRef, Offset_LinearOffsetRange* orRow, Offset_LinearOffsetRange* orCol) /* throws(EvaluationException) */;
    static Offset_BaseRef* evaluateBaseRef(::org::apache::poi::ss::formula::eval::ValueEval* eval) /* throws(EvaluationException) */;

public: /* package */
    static int32_t evaluateIntArg(::org::apache::poi::ss::formula::eval::ValueEval* eval, int32_t srcCellRow, int32_t srcCellCol) /* throws(EvaluationException) */;

    // Generated

public:
    Offset();
protected:
    Offset(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class Offset_LinearOffsetRange;
    friend class Offset_BaseRef;
};
