// Generated from /POI/java/org/apache/poi/ss/formula/FormulaShifter.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/ptg/fwd-POI.hpp>
#include <java/lang/Object.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace poi
{
    namespace ss
    {
        namespace formula
        {
            namespace ptg
            {
typedef ::SubArray< ::poi::ss::formula::ptg::Ptg, ::java::lang::ObjectArray > PtgArray;
            } // ptg
        } // formula
    } // ss
} // poi

struct default_init_tag;

class poi::ss::formula::FormulaShifter final
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
    ::poi::ss::SpreadsheetVersion* _version {  };
    FormulaShifter_ShiftMode* _mode {  };
protected:
    void ctor(int32_t externSheetIndex, ::java::lang::String* sheetName, int32_t firstMovedIndex, int32_t lastMovedIndex, int32_t amountToMove, FormulaShifter_ShiftMode* mode, ::poi::ss::SpreadsheetVersion* version);
    void ctor(int32_t srcSheetIndex, int32_t dstSheetIndex);

public:
    static FormulaShifter* createForRowShift(int32_t externSheetIndex, ::java::lang::String* sheetName, int32_t firstMovedRowIndex, int32_t lastMovedRowIndex, int32_t numberOfRowsToMove, ::poi::ss::SpreadsheetVersion* version);
    static FormulaShifter* createForRowCopy(int32_t externSheetIndex, ::java::lang::String* sheetName, int32_t firstMovedRowIndex, int32_t lastMovedRowIndex, int32_t numberOfRowsToMove, ::poi::ss::SpreadsheetVersion* version);
    static FormulaShifter* createForSheetShift(int32_t srcSheetIndex, int32_t dstSheetIndex);
    ::java::lang::String* toString() override;
    bool adjustFormula(::poi::ss::formula::ptg::PtgArray* ptgs, int32_t currentExternSheetIx);

private:
    ::poi::ss::formula::ptg::Ptg* adjustPtg(::poi::ss::formula::ptg::Ptg* ptg, int32_t currentExternSheetIx);
    ::poi::ss::formula::ptg::Ptg* adjustPtgDueToRowMove(::poi::ss::formula::ptg::Ptg* ptg, int32_t currentExternSheetIx);
    ::poi::ss::formula::ptg::Ptg* adjustPtgDueToRowCopy(::poi::ss::formula::ptg::Ptg* ptg);
    ::poi::ss::formula::ptg::Ptg* adjustPtgDueToSheetMove(::poi::ss::formula::ptg::Ptg* ptg);
    ::poi::ss::formula::ptg::Ptg* rowMoveRefPtg(::poi::ss::formula::ptg::RefPtgBase* rptg);
    ::poi::ss::formula::ptg::Ptg* rowMoveAreaPtg(::poi::ss::formula::ptg::AreaPtgBase* aptg);
    ::poi::ss::formula::ptg::Ptg* rowCopyRefPtg(::poi::ss::formula::ptg::RefPtgBase* rptg);
    ::poi::ss::formula::ptg::Ptg* rowCopyAreaPtg(::poi::ss::formula::ptg::AreaPtgBase* aptg);
    static ::poi::ss::formula::ptg::Ptg* createDeletedRef(::poi::ss::formula::ptg::Ptg* ptg);

    // Generated
    FormulaShifter(int32_t externSheetIndex, ::java::lang::String* sheetName, int32_t firstMovedIndex, int32_t lastMovedIndex, int32_t amountToMove, FormulaShifter_ShiftMode* mode, ::poi::ss::SpreadsheetVersion* version);
    FormulaShifter(int32_t srcSheetIndex, int32_t dstSheetIndex);
protected:
    FormulaShifter(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class FormulaShifter_ShiftMode;
};
