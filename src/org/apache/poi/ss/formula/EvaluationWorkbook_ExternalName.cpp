// Generated from /POI/java/org/apache/poi/ss/formula/EvaluationWorkbook.java
#include <org/apache/poi/ss/formula/EvaluationWorkbook_ExternalName.hpp>

#include <java/lang/String.hpp>

poi::ss::formula::EvaluationWorkbook_ExternalName::EvaluationWorkbook_ExternalName(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::formula::EvaluationWorkbook_ExternalName::EvaluationWorkbook_ExternalName(::java::lang::String* nameName, int32_t nameNumber, int32_t ix) 
    : EvaluationWorkbook_ExternalName(*static_cast< ::default_init_tag* >(0))
{
    ctor(nameName,nameNumber,ix);
}

void poi::ss::formula::EvaluationWorkbook_ExternalName::ctor(::java::lang::String* nameName, int32_t nameNumber, int32_t ix)
{
    super::ctor();
    _nameName = nameName;
    _nameNumber = nameNumber;
    _ix = ix;
}

java::lang::String* poi::ss::formula::EvaluationWorkbook_ExternalName::getName()
{
    return _nameName;
}

int32_t poi::ss::formula::EvaluationWorkbook_ExternalName::getNumber()
{
    return _nameNumber;
}

int32_t poi::ss::formula::EvaluationWorkbook_ExternalName::getIx()
{
    return _ix;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::EvaluationWorkbook_ExternalName::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.EvaluationWorkbook.ExternalName", 57);
    return c;
}

java::lang::Class* poi::ss::formula::EvaluationWorkbook_ExternalName::getClass0()
{
    return class_();
}

