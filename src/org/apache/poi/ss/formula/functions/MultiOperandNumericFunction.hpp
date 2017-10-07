// Generated from /POI/java/org/apache/poi/ss/formula/functions/MultiOperandNumericFunction.java

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

class org::apache::poi::ss::formula::functions::MultiOperandNumericFunction
    : public virtual ::java::lang::Object
    , public virtual Function
{

public:
    typedef ::java::lang::Object super;

private:
    bool _isReferenceBoolCounted {  };
    bool _isBlankCounted {  };
protected:
    void ctor(bool isReferenceBoolCounted, bool isBlankCounted);

private:
    static ::doubleArray* EMPTY_DOUBLE_ARRAY_;
    static int32_t DEFAULT_MAX_NUM_OPERANDS_;

public:
    ::org::apache::poi::ss::formula::eval::ValueEval* evaluate(::org::apache::poi::ss::formula::eval::ValueEvalArray* args, int32_t srcCellRow, int32_t srcCellCol) override;

public: /* protected */
    virtual double evaluate(::doubleArray* values) /* throws(EvaluationException) */ = 0;
    virtual int32_t getMaxNumOperands();
    ::doubleArray* getNumberArray_(::org::apache::poi::ss::formula::eval::ValueEvalArray* operands) /* throws(EvaluationException) */;

public:
    virtual bool isSubtotalCounted();

private:
    void collectValues(::org::apache::poi::ss::formula::eval::ValueEval* operand, MultiOperandNumericFunction_DoubleList* temp) /* throws(EvaluationException) */;
    void collectValue(::org::apache::poi::ss::formula::eval::ValueEval* ve, bool isViaReference, MultiOperandNumericFunction_DoubleList* temp) /* throws(EvaluationException) */;

    // Generated

public: /* protected */
    MultiOperandNumericFunction(bool isReferenceBoolCounted, bool isBlankCounted);
protected:
    MultiOperandNumericFunction(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

public: /* package */
    static ::doubleArray*& EMPTY_DOUBLE_ARRAY();

private:
    static int32_t& DEFAULT_MAX_NUM_OPERANDS();
    virtual ::java::lang::Class* getClass0();
    friend class MultiOperandNumericFunction_DoubleList;
};
