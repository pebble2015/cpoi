// Generated from /POI/java/org/apache/poi/hssf/usermodel/DVConstraint.java
#include <org/apache/poi/hssf/usermodel/DVConstraint_FormulaValuePair.hpp>

#include <java/lang/Double.hpp>
#include <java/lang/String.hpp>

poi::hssf::usermodel::DVConstraint_FormulaValuePair::DVConstraint_FormulaValuePair(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::usermodel::DVConstraint_FormulaValuePair::DVConstraint_FormulaValuePair()
    : DVConstraint_FormulaValuePair(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

java::lang::String* poi::hssf::usermodel::DVConstraint_FormulaValuePair::formula()
{
    return _formula;
}

java::lang::Double* poi::hssf::usermodel::DVConstraint_FormulaValuePair::value()
{
    if(_value == nullptr) {
        return nullptr;
    }
    return new ::java::lang::Double(_value);
}

java::lang::String* poi::hssf::usermodel::DVConstraint_FormulaValuePair::string()
{
    if(_formula != nullptr) {
        return _formula;
    }
    if(_value != nullptr) {
        return _value;
    }
    return nullptr;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::usermodel::DVConstraint_FormulaValuePair::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.usermodel.DVConstraint.FormulaValuePair", 59);
    return c;
}

java::lang::Class* poi::hssf::usermodel::DVConstraint_FormulaValuePair::getClass0()
{
    return class_();
}

