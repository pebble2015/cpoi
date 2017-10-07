// Generated from /POI/java/org/apache/poi/hssf/record/aggregates/FormulaRecordAggregate.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/aggregates/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/ptg/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/fwd-POI.hpp>
#include <org/apache/poi/ss/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/aggregates/RecordAggregate.hpp>
#include <org/apache/poi/hssf/record/CellValueRecordInterface.hpp>

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
                    namespace ptg
                    {
typedef ::SubArray< ::org::apache::poi::ss::formula::ptg::Ptg, ::java::lang::ObjectArray > PtgArray;
                    } // ptg
                } // formula
            } // ss
        } // poi
    } // apache
} // org

struct default_init_tag;

class org::apache::poi::hssf::record::aggregates::FormulaRecordAggregate final
    : public RecordAggregate
    , public ::org::apache::poi::hssf::record::CellValueRecordInterface
{

public:
    typedef RecordAggregate super;

private:
    ::org::apache::poi::hssf::record::FormulaRecord* _formulaRecord {  };
    SharedValueManager* _sharedValueManager {  };
    ::org::apache::poi::hssf::record::StringRecord* _stringRecord {  };
    ::org::apache::poi::hssf::record::SharedFormulaRecord* _sharedFormulaRecord {  };
protected:
    void ctor(::org::apache::poi::hssf::record::FormulaRecord* formulaRec, ::org::apache::poi::hssf::record::StringRecord* stringRec, SharedValueManager* svm);

private:
    static void handleMissingSharedFormulaRecord(::org::apache::poi::hssf::record::FormulaRecord* formula);

public:
    ::org::apache::poi::hssf::record::FormulaRecord* getFormulaRecord();
    ::org::apache::poi::hssf::record::StringRecord* getStringRecord();
    int16_t getXFIndex() override;
    void setXFIndex(int16_t xf) override;
    void setColumn(int16_t col) override;
    void setRow(int32_t row) override;
    int16_t getColumn() override;
    int32_t getRow() override;
    ::java::lang::String* toString() override;
    void visitContainedRecords(RecordAggregate_RecordVisitor* rv) override;
    ::java::lang::String* getStringValue();
    void setCachedStringResult(::java::lang::String* value);
    void setCachedBooleanResult(bool value);
    void setCachedErrorResult(int32_t errorCode);
    void setCachedErrorResult(::org::apache::poi::ss::usermodel::FormulaError* error);
    void setCachedDoubleResult(double value);
    ::org::apache::poi::ss::formula::ptg::PtgArray* getFormulaTokens();
    void setParsedExpression(::org::apache::poi::ss::formula::ptg::PtgArray* ptgs);
    void unlinkSharedFormula();
    void notifyFormulaChanging();
    bool isPartOfArrayFormula();
    ::org::apache::poi::ss::util::CellRangeAddress* getArrayFormulaRange();
    void setArrayFormula(::org::apache::poi::ss::util::CellRangeAddress* r, ::org::apache::poi::ss::formula::ptg::PtgArray* ptgs);
    ::org::apache::poi::ss::util::CellRangeAddress* removeArrayFormula(int32_t rowIndex, int32_t columnIndex);

    // Generated
    FormulaRecordAggregate(::org::apache::poi::hssf::record::FormulaRecord* formulaRec, ::org::apache::poi::hssf::record::StringRecord* stringRec, SharedValueManager* svm);
protected:
    FormulaRecordAggregate(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
