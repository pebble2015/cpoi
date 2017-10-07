// Generated from /POI/java/org/apache/poi/ss/formula/SheetRangeEvaluator.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/eval/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/ss/formula/SheetRange.hpp>

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
typedef ::SubArray< ::org::apache::poi::ss::formula::SheetRefEvaluator, ::java::lang::ObjectArray > SheetRefEvaluatorArray;
                } // formula
            } // ss
        } // poi
    } // apache
} // org

struct default_init_tag;

class org::apache::poi::ss::formula::SheetRangeEvaluator final
    : public virtual ::java::lang::Object
    , public SheetRange
{

public:
    typedef ::java::lang::Object super;

private:
    int32_t _firstSheetIndex {  };
    int32_t _lastSheetIndex {  };
    SheetRefEvaluatorArray* _sheetEvaluators {  };
protected:
    void ctor(int32_t firstSheetIndex, int32_t lastSheetIndex, SheetRefEvaluatorArray* sheetEvaluators);
    void ctor(int32_t onlySheetIndex, SheetRefEvaluator* sheetEvaluator);

public:
    SheetRefEvaluator* getSheetEvaluator(int32_t sheetIndex);
    int32_t getFirstSheetIndex() override;
    int32_t getLastSheetIndex() override;
    ::java::lang::String* getSheetName(int32_t sheetIndex);
    ::java::lang::String* getSheetNameRange();
    ::org::apache::poi::ss::formula::eval::ValueEval* getEvalForCell(int32_t sheetIndex, int32_t rowIndex, int32_t columnIndex);

    // Generated
    SheetRangeEvaluator(int32_t firstSheetIndex, int32_t lastSheetIndex, SheetRefEvaluatorArray* sheetEvaluators);
    SheetRangeEvaluator(int32_t onlySheetIndex, SheetRefEvaluator* sheetEvaluator);
protected:
    SheetRangeEvaluator(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
