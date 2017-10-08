// Generated from /POI/java/org/apache/poi/ss/formula/EvaluationWorkbook.java
#include <org/apache/poi/ss/formula/EvaluationWorkbook_ExternalSheetRange.hpp>

#include <java/lang/String.hpp>

poi::ss::formula::EvaluationWorkbook_ExternalSheetRange::EvaluationWorkbook_ExternalSheetRange(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::formula::EvaluationWorkbook_ExternalSheetRange::EvaluationWorkbook_ExternalSheetRange(::java::lang::String* workbookName, ::java::lang::String* firstSheetName, ::java::lang::String* lastSheetName) 
    : EvaluationWorkbook_ExternalSheetRange(*static_cast< ::default_init_tag* >(0))
{
    ctor(workbookName,firstSheetName,lastSheetName);
}

void poi::ss::formula::EvaluationWorkbook_ExternalSheetRange::ctor(::java::lang::String* workbookName, ::java::lang::String* firstSheetName, ::java::lang::String* lastSheetName)
{
    super::ctor(workbookName, firstSheetName);
    this->_lastSheetName = lastSheetName;
}

java::lang::String* poi::ss::formula::EvaluationWorkbook_ExternalSheetRange::getFirstSheetName()
{
    return getSheetName();
}

java::lang::String* poi::ss::formula::EvaluationWorkbook_ExternalSheetRange::getLastSheetName()
{
    return _lastSheetName;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::EvaluationWorkbook_ExternalSheetRange::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.EvaluationWorkbook.ExternalSheetRange", 63);
    return c;
}

java::lang::Class* poi::ss::formula::EvaluationWorkbook_ExternalSheetRange::getClass0()
{
    return class_();
}

