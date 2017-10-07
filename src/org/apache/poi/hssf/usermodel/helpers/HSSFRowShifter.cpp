// Generated from /POI/java/org/apache/poi/hssf/usermodel/helpers/HSSFRowShifter.java
#include <org/apache/poi/hssf/usermodel/helpers/HSSFRowShifter.hpp>

#include <java/lang/Class.hpp>
#include <java/lang/String.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFSheet.hpp>
#include <org/apache/poi/ss/formula/eval/NotImplementedException.hpp>
#include <org/apache/poi/util/POILogFactory.hpp>

org::apache::poi::hssf::usermodel::helpers::HSSFRowShifter::HSSFRowShifter(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::usermodel::helpers::HSSFRowShifter::HSSFRowShifter(::org::apache::poi::hssf::usermodel::HSSFSheet* sh) 
    : HSSFRowShifter(*static_cast< ::default_init_tag* >(0))
{
    ctor(sh);
}

org::apache::poi::util::POILogger*& org::apache::poi::hssf::usermodel::helpers::HSSFRowShifter::logger()
{
    clinit();
    return logger_;
}
org::apache::poi::util::POILogger* org::apache::poi::hssf::usermodel::helpers::HSSFRowShifter::logger_;

void org::apache::poi::hssf::usermodel::helpers::HSSFRowShifter::ctor(::org::apache::poi::hssf::usermodel::HSSFSheet* sh)
{
    super::ctor(sh);
}

void org::apache::poi::hssf::usermodel::helpers::HSSFRowShifter::updateNamedRanges(::org::apache::poi::ss::formula::FormulaShifter* shifter)
{
    throw new ::org::apache::poi::ss::formula::eval::NotImplementedException(u"HSSFRowShifter.updateNamedRanges"_j);
}

void org::apache::poi::hssf::usermodel::helpers::HSSFRowShifter::updateFormulas(::org::apache::poi::ss::formula::FormulaShifter* shifter)
{
    throw new ::org::apache::poi::ss::formula::eval::NotImplementedException(u"updateFormulas"_j);
}

void org::apache::poi::hssf::usermodel::helpers::HSSFRowShifter::updateRowFormulas(::org::apache::poi::ss::usermodel::Row* row, ::org::apache::poi::ss::formula::FormulaShifter* shifter)
{
    throw new ::org::apache::poi::ss::formula::eval::NotImplementedException(u"updateRowFormulas"_j);
}

void org::apache::poi::hssf::usermodel::helpers::HSSFRowShifter::updateConditionalFormatting(::org::apache::poi::ss::formula::FormulaShifter* shifter)
{
    throw new ::org::apache::poi::ss::formula::eval::NotImplementedException(u"updateConditionalFormatting"_j);
}

void org::apache::poi::hssf::usermodel::helpers::HSSFRowShifter::updateHyperlinks(::org::apache::poi::ss::formula::FormulaShifter* shifter)
{
    throw new ::org::apache::poi::ss::formula::eval::NotImplementedException(u"updateHyperlinks"_j);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::usermodel::helpers::HSSFRowShifter::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.usermodel.helpers.HSSFRowShifter", 52);
    return c;
}

void org::apache::poi::hssf::usermodel::helpers::HSSFRowShifter::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        logger_ = ::org::apache::poi::util::POILogFactory::getLogger(static_cast< ::java::lang::Class* >(HSSFRowShifter::class_()));
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* org::apache::poi::hssf::usermodel::helpers::HSSFRowShifter::getClass0()
{
    return class_();
}

