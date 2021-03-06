// Generated from /POI/java/org/apache/poi/ss/formula/eval/forked/ForkedEvaluator.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/eval/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/eval/forked/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/udf/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/fwd-POI.hpp>
#include <java/lang/Object.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace io
    {
typedef ::SubArray< ::java::io::Serializable, ::java::lang::ObjectArray > SerializableArray;
    } // io

    namespace lang
    {
typedef ::SubArray< ::java::lang::CharSequence, ObjectArray > CharSequenceArray;
typedef ::SubArray< ::java::lang::Comparable, ObjectArray > ComparableArray;
typedef ::SubArray< ::java::lang::String, ObjectArray, ::java::io::SerializableArray, ComparableArray, CharSequenceArray > StringArray;
    } // lang
} // java

namespace poi
{
    namespace ss
    {
        namespace formula
        {
            namespace eval
            {
                namespace forked
                {
typedef ::SubArray< ::poi::ss::formula::eval::forked::ForkedEvaluator, ::java::lang::ObjectArray > ForkedEvaluatorArray;
                } // forked
            } // eval
        } // formula
    } // ss
} // poi

struct default_init_tag;

class poi::ss::formula::eval::forked::ForkedEvaluator final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    ::poi::ss::formula::WorkbookEvaluator* _evaluator {  };
    ForkedEvaluationWorkbook* _sewb {  };
protected:
    void ctor(::poi::ss::formula::EvaluationWorkbook* masterWorkbook, ::poi::ss::formula::IStabilityClassifier* stabilityClassifier, ::poi::ss::formula::udf::UDFFinder* udfFinder);

private:
    static ::poi::ss::formula::EvaluationWorkbook* createEvaluationWorkbook(::poi::ss::usermodel::Workbook* wb);

public:
    static ForkedEvaluator* create(::poi::ss::usermodel::Workbook* wb, ::poi::ss::formula::IStabilityClassifier* stabilityClassifier, ::poi::ss::formula::udf::UDFFinder* udfFinder);
    void updateCell(::java::lang::String* sheetName, int32_t rowIndex, int32_t columnIndex, ::poi::ss::formula::eval::ValueEval* value);
    void copyUpdatedCells(::poi::ss::usermodel::Workbook* workbook);
    ::poi::ss::formula::eval::ValueEval* evaluate(::java::lang::String* sheetName, int32_t rowIndex, int32_t columnIndex);
    static void setupEnvironment(::java::lang::StringArray* workbookNames, ForkedEvaluatorArray* evaluators);

    // Generated

private:
    ForkedEvaluator(::poi::ss::formula::EvaluationWorkbook* masterWorkbook, ::poi::ss::formula::IStabilityClassifier* stabilityClassifier, ::poi::ss::formula::udf::UDFFinder* udfFinder);
protected:
    ForkedEvaluator(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
