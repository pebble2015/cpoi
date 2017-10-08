// Generated from /POI/java/org/apache/poi/ss/formula/FormulaCellCacheEntry.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/eval/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/CellCacheEntry.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace poi
{
    namespace ss
    {
        namespace formula
        {
typedef ::SubArray< ::poi::ss::formula::IEvaluationListener_ICacheEntry, ::java::lang::ObjectArray > IEvaluationListener_ICacheEntryArray;
typedef ::SubArray< ::poi::ss::formula::CellCacheEntry, ::java::lang::ObjectArray, IEvaluationListener_ICacheEntryArray > CellCacheEntryArray;
        } // formula
    } // ss
} // poi

struct default_init_tag;

class poi::ss::formula::FormulaCellCacheEntry final
    : public CellCacheEntry
{

public:
    typedef CellCacheEntry super;

private:
    CellCacheEntryArray* _sensitiveInputCells {  };
    FormulaUsedBlankCellSet* _usedBlankCellGroup {  };
protected:
    void ctor();

public:
    bool isInputSensitive();
    void setSensitiveInputCells(CellCacheEntryArray* sensitiveInputCells);
    void clearFormulaEntry();

private:
    void changeConsumingCells(CellCacheEntryArray* usedCells);

public:
    void updateFormulaResult(::poi::ss::formula::eval::ValueEval* result, CellCacheEntryArray* sensitiveInputCells, FormulaUsedBlankCellSet* usedBlankAreas);
    void notifyUpdatedBlankCell(FormulaUsedBlankCellSet_BookSheetKey* bsk, int32_t rowIndex, int32_t columnIndex, IEvaluationListener* evaluationListener);

    // Generated
    FormulaCellCacheEntry();
protected:
    FormulaCellCacheEntry(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
