// Generated from /POI/java/org/apache/poi/ss/formula/FormulaShifter.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/ptg/fwd-POI.hpp>
#include <java/lang/Object.hpp>

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

class org::apache::poi::ss::formula::FormulaShifter final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    int32_t _externSheetIndex {  };
    ::java::lang::String* _sheetName {  };
    int32_t _firstMovedIndex {  };
    int32_t _lastMovedIndex {  };
    int32_t _amountToMove {  };
    int32_t _srcSheetIndex {  };
    int32_t _dstSheetIndex {  };
    ::org::apache::poi::ss::SpreadsheetVersion* _version {  };
    FormulaShifter_ShiftMode* _mode {  };
protected:
    void ctor(int32_t externSheetIndex, ::java::lang::String* sheetName, int32_t firstMovedIndex, int32_t lastMovedIndex, int32_t amountToMove, FormulaShifter_ShiftMode* mode, ::org::apache::poi::ss::SpreadsheetVersion* version);
    void ctor(int32_t srcSheetIndex, int32_t dstSheetIndex);

public:
    static FormulaShifter* createForRowShift(int32_t externSheetIndex, ::java::lang::String* sheetName, int32_t firstMovedRowIndex, int32_t lastMovedRowIndex, int32_t numberOfRowsToMove, ::org::apache::poi::ss::SpreadsheetVersion* version);
    static FormulaShifter* createForRowCopy(int32_t externSheetIndex, ::java::lang::String* sheetName, int32_t firstMovedRowIndex, int32_t lastMovedRowIndex, int32_t numberOfRowsToMove, ::org::apache::poi::ss::SpreadsheetVersion* version);
    static FormulaShifter* createForSheetShift(int32_t srcSheetIndex, int32_t dstSheetIndex);
    ::java::lang::String* toString() override;
    bool adjustFormula(::org::apache::poi::ss::formula::ptg::PtgArray* ptgs, int32_t currentExternSheetIx);

private:
    ::org::apache::poi::ss::formula::ptg::Ptg* adjustPtg(::org::apache::poi::ss::formula::ptg::Ptg* ptg, int32_t currentExternSheetIx);
    ::org::apache::poi::ss::formula::ptg::Ptg* adjustPtgDueToRowMove(::org::apache::poi::ss::formula::ptg::Ptg* ptg, int32_t currentExternSheetIx);
    ::org::apache::poi::ss::formula::ptg::Ptg* adjustPtgDueToRowCopy(::org::apache::poi::ss::formula::ptg::Ptg* ptg);
    ::org::apache::poi::ss::formula::ptg::Ptg* adjustPtgDueToSheetMove(::org::apache::poi::ss::formula::ptg::Ptg* ptg);
    ::org::apache::poi::ss::formula::ptg::Ptg* rowMoveRefPtg(::org::apache::poi::ss::formula::ptg::RefPtgBase* rptg);
    ::org::apache::poi::ss::formula::ptg::Ptg* rowMoveAreaPtg(::org::apache::poi::ss::formula::ptg::AreaPtgBase* aptg);
    ::org::apache::poi::ss::formula::ptg::Ptg* rowCopyRefPtg(::org::apache::poi::ss::formula::ptg::RefPtgBase* rptg);
    ::org::apache::poi::ss::formula::ptg::Ptg* rowCopyAreaPtg(::org::apache::poi::ss::formula::ptg::AreaPtgBase* aptg);
    static ::org::apache::poi::ss::formula::ptg::Ptg* createDeletedRef(::org::apache::poi::ss::formula::ptg::Ptg* ptg);

    // Generated
    FormulaShifter(int32_t externSheetIndex, ::java::lang::String* sheetName, int32_t firstMovedIndex, int32_t lastMovedIndex, int32_t amountToMove, FormulaShifter_ShiftMode* mode, ::org::apache::poi::ss::SpreadsheetVersion* version);
    FormulaShifter(int32_t srcSheetIndex, int32_t dstSheetIndex);
protected:
    FormulaShifter(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class FormulaShifter_ShiftMode;
};
