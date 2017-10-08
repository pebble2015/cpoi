// Generated from /POI/java/org/apache/poi/ss/util/SheetUtil.java
#include <org/apache/poi/ss/util/SheetUtil_1.hpp>

#include <java/lang/NullPointerException.hpp>
#include <org/apache/poi/ss/usermodel/Cell.hpp>
#include <org/apache/poi/ss/usermodel/CellType.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::ss::util::SheetUtil_1::SheetUtil_1()
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
    ctor();
}

void poi::ss::util::SheetUtil_1::clearAllCachedResultValues()
{
}

void poi::ss::util::SheetUtil_1::notifySetFormula(::poi::ss::usermodel::Cell* cell)
{
}

void poi::ss::util::SheetUtil_1::notifyDeleteCell(::poi::ss::usermodel::Cell* cell)
{
}

void poi::ss::util::SheetUtil_1::notifyUpdateCell(::poi::ss::usermodel::Cell* cell)
{
}

poi::ss::usermodel::CellValue* poi::ss::util::SheetUtil_1::evaluate(::poi::ss::usermodel::Cell* cell)
{
    return nullptr;
}

poi::ss::usermodel::Cell* poi::ss::util::SheetUtil_1::evaluateInCell(::poi::ss::usermodel::Cell* cell)
{
    return nullptr;
}

void poi::ss::util::SheetUtil_1::setupReferencedWorkbooks(::java::util::Map* workbooks)
{
}

void poi::ss::util::SheetUtil_1::setDebugEvaluationOutputForNextEval(bool value)
{
}

void poi::ss::util::SheetUtil_1::setIgnoreMissingWorkbooks(bool ignore)
{
}

void poi::ss::util::SheetUtil_1::evaluateAll()
{
}

int32_t poi::ss::util::SheetUtil_1::evaluateFormulaCell(::poi::ss::usermodel::Cell* cell)
{
    return npc(cell)->getCachedFormulaResultType();
}

poi::ss::usermodel::CellType* poi::ss::util::SheetUtil_1::evaluateFormulaCellEnum(::poi::ss::usermodel::Cell* cell)
{
    return npc(cell)->getCachedFormulaResultTypeEnum();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::util::SheetUtil_1::class_()
{
    static ::java::lang::Class* c = ::class_(u"", 0);
    return c;
}

java::lang::Class* poi::ss::util::SheetUtil_1::getClass0()
{
    return class_();
}

