// Generated from /POI/java/org/apache/poi/ss/formula/FormulaParseException.java
#include <org/apache/poi/ss/formula/FormulaParseException.hpp>

poi::ss::formula::FormulaParseException::FormulaParseException(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::formula::FormulaParseException::FormulaParseException(::java::lang::String* msg) 
    : FormulaParseException(*static_cast< ::default_init_tag* >(0))
{
    ctor(msg);
}

void poi::ss::formula::FormulaParseException::ctor(::java::lang::String* msg)
{
    super::ctor(msg);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::FormulaParseException::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.FormulaParseException", 47);
    return c;
}

java::lang::Class* poi::ss::formula::FormulaParseException::getClass0()
{
    return class_();
}

