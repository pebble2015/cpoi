// Generated from /POI/java/org/apache/poi/ss/formula/EvaluationWorkbook.java
#include <org/apache/poi/ss/formula/EvaluationWorkbook_ExternalSheet.hpp>

#include <java/lang/String.hpp>

poi::ss::formula::EvaluationWorkbook_ExternalSheet::EvaluationWorkbook_ExternalSheet(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::formula::EvaluationWorkbook_ExternalSheet::EvaluationWorkbook_ExternalSheet(::java::lang::String* workbookName, ::java::lang::String* sheetName) 
    : EvaluationWorkbook_ExternalSheet(*static_cast< ::default_init_tag* >(0))
{
    ctor(workbookName,sheetName);
}

void poi::ss::formula::EvaluationWorkbook_ExternalSheet::ctor(::java::lang::String* workbookName, ::java::lang::String* sheetName)
{
    super::ctor();
    _workbookName = workbookName;
    _sheetName = sheetName;
}

java::lang::String* poi::ss::formula::EvaluationWorkbook_ExternalSheet::getWorkbookName()
{
    return _workbookName;
}

java::lang::String* poi::ss::formula::EvaluationWorkbook_ExternalSheet::getSheetName()
{
    return _sheetName;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::EvaluationWorkbook_ExternalSheet::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.EvaluationWorkbook.ExternalSheet", 58);
    return c;
}

java::lang::Class* poi::ss::formula::EvaluationWorkbook_ExternalSheet::getClass0()
{
    return class_();
}

