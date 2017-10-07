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

org::apache::poi::ss::util::SheetUtil_1::SheetUtil_1()
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
    ctor();
}

void org::apache::poi::ss::util::SheetUtil_1::clearAllCachedResultValues()
{
}

void org::apache::poi::ss::util::SheetUtil_1::notifySetFormula(::org::apache::poi::ss::usermodel::Cell* cell)
{
}

void org::apache::poi::ss::util::SheetUtil_1::notifyDeleteCell(::org::apache::poi::ss::usermodel::Cell* cell)
{
}

void org::apache::poi::ss::util::SheetUtil_1::notifyUpdateCell(::org::apache::poi::ss::usermodel::Cell* cell)
{
}

org::apache::poi::ss::usermodel::CellValue* org::apache::poi::ss::util::SheetUtil_1::evaluate(::org::apache::poi::ss::usermodel::Cell* cell)
{
    return nullptr;
}

org::apache::poi::ss::usermodel::Cell* org::apache::poi::ss::util::SheetUtil_1::evaluateInCell(::org::apache::poi::ss::usermodel::Cell* cell)
{
    return nullptr;
}

void org::apache::poi::ss::util::SheetUtil_1::setupReferencedWorkbooks(::java::util::Map* workbooks)
{
}

void org::apache::poi::ss::util::SheetUtil_1::setDebugEvaluationOutputForNextEval(bool value)
{
}

void org::apache::poi::ss::util::SheetUtil_1::setIgnoreMissingWorkbooks(bool ignore)
{
}

void org::apache::poi::ss::util::SheetUtil_1::evaluateAll()
{
}

int32_t org::apache::poi::ss::util::SheetUtil_1::evaluateFormulaCell(::org::apache::poi::ss::usermodel::Cell* cell)
{
    return npc(cell)->getCachedFormulaResultType();
}

org::apache::poi::ss::usermodel::CellType* org::apache::poi::ss::util::SheetUtil_1::evaluateFormulaCellEnum(::org::apache::poi::ss::usermodel::Cell* cell)
{
    return npc(cell)->getCachedFormulaResultTypeEnum();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::util::SheetUtil_1::class_()
{
    static ::java::lang::Class* c = ::class_(u"", 0);
    return c;
}

java::lang::Class* org::apache::poi::ss::util::SheetUtil_1::getClass0()
{
    return class_();
}

