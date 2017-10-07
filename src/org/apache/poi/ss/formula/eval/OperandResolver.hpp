// Generated from /POI/java/org/apache/poi/ss/formula/eval/OperandResolver.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/eval/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class org::apache::poi::ss::formula::eval::OperandResolver final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    static ::java::lang::String* Digits_;
    static ::java::lang::String* Exp_;
    static ::java::lang::String* fpRegex_;
protected:
    void ctor();

public:
    static ValueEval* getSingleValue(ValueEval* arg, int32_t srcCellRow, int32_t srcCellCol) /* throws(EvaluationException) */;
    static ValueEval* chooseSingleElementFromArea(AreaEval* ae, int32_t srcCellRow, int32_t srcCellCol) /* throws(EvaluationException) */;

private:
    static ValueEval* chooseSingleElementFromAreaInternal(AreaEval* ae, int32_t srcCellRow, int32_t srcCellCol) /* throws(EvaluationException) */;
    static ValueEval* chooseSingleElementFromRef(RefEval* ref);

public:
    static int32_t coerceValueToInt(ValueEval* ev) /* throws(EvaluationException) */;
    static double coerceValueToDouble(ValueEval* ev) /* throws(EvaluationException) */;
    static ::java::lang::Double* parseDouble(::java::lang::String* pText);
    static ::java::lang::String* coerceValueToString(ValueEval* ve);
    static ::java::lang::Boolean* coerceValueToBoolean(ValueEval* ve, bool stringsAreBlanks) /* throws(EvaluationException) */;

    // Generated

private:
    OperandResolver();
protected:
    OperandResolver(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    static ::java::lang::String*& Digits();
    static ::java::lang::String*& Exp();
    static ::java::lang::String*& fpRegex();
    virtual ::java::lang::Class* getClass0();
};
