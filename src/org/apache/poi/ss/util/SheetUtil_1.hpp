// Generated from /POI/java/org/apache/poi/ss/util/SheetUtil.java

#pragma once

#include <fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/fwd-POI.hpp>
#include <org/apache/poi/ss/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/ss/usermodel/FormulaEvaluator.hpp>

struct default_init_tag;

class poi::ss::util::SheetUtil_1
    : public virtual ::java::lang::Object
    , public virtual ::poi::ss::usermodel::FormulaEvaluator
{

public:
    typedef ::java::lang::Object super;
    void clearAllCachedResultValues() override;
    void notifySetFormula(::poi::ss::usermodel::Cell* cell) override;
    void notifyDeleteCell(::poi::ss::usermodel::Cell* cell) override;
    void notifyUpdateCell(::poi::ss::usermodel::Cell* cell) override;
    ::poi::ss::usermodel::CellValue* evaluate(::poi::ss::usermodel::Cell* cell) override;
    ::poi::ss::usermodel::Cell* evaluateInCell(::poi::ss::usermodel::Cell* cell) override;
    void setupReferencedWorkbooks(::java::util::Map* workbooks) override;
    void setDebugEvaluationOutputForNextEval(bool value) override;
    void setIgnoreMissingWorkbooks(bool ignore) override;
    void evaluateAll() override;
    int32_t evaluateFormulaCell(::poi::ss::usermodel::Cell* cell) override;
    ::poi::ss::usermodel::CellType* evaluateFormulaCellEnum(::poi::ss::usermodel::Cell* cell) override;

    // Generated
    SheetUtil_1();
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class SheetUtil;
};
