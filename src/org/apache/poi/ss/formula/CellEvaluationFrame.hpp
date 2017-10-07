// Generated from /POI/java/org/apache/poi/ss/formula/CellEvaluationFrame.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/eval/fwd-POI.hpp>
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
typedef ::SubArray< ::org::apache::poi::ss::formula::IEvaluationListener_ICacheEntry, ::java::lang::ObjectArray > IEvaluationListener_ICacheEntryArray;
typedef ::SubArray< ::org::apache::poi::ss::formula::CellCacheEntry, ::java::lang::ObjectArray, IEvaluationListener_ICacheEntryArray > CellCacheEntryArray;
                } // formula
            } // ss
        } // poi
    } // apache
} // org

struct default_init_tag;

class org::apache::poi::ss::formula::CellEvaluationFrame final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    FormulaCellCacheEntry* _cce {  };
    ::java::util::Set* _sensitiveInputCells {  };
    FormulaUsedBlankCellSet* _usedBlankCellGroup {  };
protected:
    void ctor(FormulaCellCacheEntry* cce);

public:
    CellCacheEntry* getCCE();
    ::java::lang::String* toString() override;
    void addSensitiveInputCell(CellCacheEntry* inputCell);

private:
    CellCacheEntryArray* getSensitiveInputCells();

public:
    void addUsedBlankCell(int32_t bookIndex, int32_t sheetIndex, int32_t rowIndex, int32_t columnIndex);
    void updateFormulaResult(::org::apache::poi::ss::formula::eval::ValueEval* result);

    // Generated
    CellEvaluationFrame(FormulaCellCacheEntry* cce);
protected:
    CellEvaluationFrame(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
