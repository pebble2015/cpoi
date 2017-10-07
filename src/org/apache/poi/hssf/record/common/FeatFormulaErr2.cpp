// Generated from /POI/java/org/apache/poi/hssf/record/common/FeatFormulaErr2.java
#include <org/apache/poi/hssf/record/common/FeatFormulaErr2.hpp>

#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <org/apache/poi/hssf/record/RecordInputStream.hpp>
#include <org/apache/poi/util/BitField.hpp>
#include <org/apache/poi/util/BitFieldFactory.hpp>
#include <org/apache/poi/util/LittleEndianOutput.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::hssf::record::common::FeatFormulaErr2::FeatFormulaErr2(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::record::common::FeatFormulaErr2::FeatFormulaErr2() 
    : FeatFormulaErr2(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::hssf::record::common::FeatFormulaErr2::FeatFormulaErr2(::org::apache::poi::hssf::record::RecordInputStream* in) 
    : FeatFormulaErr2(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

org::apache::poi::util::BitField*& org::apache::poi::hssf::record::common::FeatFormulaErr2::CHECK_CALCULATION_ERRORS()
{
    clinit();
    return CHECK_CALCULATION_ERRORS_;
}
org::apache::poi::util::BitField* org::apache::poi::hssf::record::common::FeatFormulaErr2::CHECK_CALCULATION_ERRORS_;

org::apache::poi::util::BitField*& org::apache::poi::hssf::record::common::FeatFormulaErr2::CHECK_EMPTY_CELL_REF()
{
    clinit();
    return CHECK_EMPTY_CELL_REF_;
}
org::apache::poi::util::BitField* org::apache::poi::hssf::record::common::FeatFormulaErr2::CHECK_EMPTY_CELL_REF_;

org::apache::poi::util::BitField*& org::apache::poi::hssf::record::common::FeatFormulaErr2::CHECK_NUMBERS_AS_TEXT()
{
    clinit();
    return CHECK_NUMBERS_AS_TEXT_;
}
org::apache::poi::util::BitField* org::apache::poi::hssf::record::common::FeatFormulaErr2::CHECK_NUMBERS_AS_TEXT_;

org::apache::poi::util::BitField*& org::apache::poi::hssf::record::common::FeatFormulaErr2::CHECK_INCONSISTENT_RANGES()
{
    clinit();
    return CHECK_INCONSISTENT_RANGES_;
}
org::apache::poi::util::BitField* org::apache::poi::hssf::record::common::FeatFormulaErr2::CHECK_INCONSISTENT_RANGES_;

org::apache::poi::util::BitField*& org::apache::poi::hssf::record::common::FeatFormulaErr2::CHECK_INCONSISTENT_FORMULAS()
{
    clinit();
    return CHECK_INCONSISTENT_FORMULAS_;
}
org::apache::poi::util::BitField* org::apache::poi::hssf::record::common::FeatFormulaErr2::CHECK_INCONSISTENT_FORMULAS_;

org::apache::poi::util::BitField*& org::apache::poi::hssf::record::common::FeatFormulaErr2::CHECK_DATETIME_FORMATS()
{
    clinit();
    return CHECK_DATETIME_FORMATS_;
}
org::apache::poi::util::BitField* org::apache::poi::hssf::record::common::FeatFormulaErr2::CHECK_DATETIME_FORMATS_;

org::apache::poi::util::BitField*& org::apache::poi::hssf::record::common::FeatFormulaErr2::CHECK_UNPROTECTED_FORMULAS()
{
    clinit();
    return CHECK_UNPROTECTED_FORMULAS_;
}
org::apache::poi::util::BitField* org::apache::poi::hssf::record::common::FeatFormulaErr2::CHECK_UNPROTECTED_FORMULAS_;

org::apache::poi::util::BitField*& org::apache::poi::hssf::record::common::FeatFormulaErr2::PERFORM_DATA_VALIDATION()
{
    clinit();
    return PERFORM_DATA_VALIDATION_;
}
org::apache::poi::util::BitField* org::apache::poi::hssf::record::common::FeatFormulaErr2::PERFORM_DATA_VALIDATION_;

void org::apache::poi::hssf::record::common::FeatFormulaErr2::ctor()
{
    super::ctor();
}

void org::apache::poi::hssf::record::common::FeatFormulaErr2::ctor(::org::apache::poi::hssf::record::RecordInputStream* in)
{
    super::ctor();
    errorCheck = npc(in)->readInt();
}

java::lang::String* org::apache::poi::hssf::record::common::FeatFormulaErr2::toString()
{
    auto buffer = new ::java::lang::StringBuffer();
    npc(buffer)->append(u" [FEATURE FORMULA ERRORS]\n"_j);
    npc(buffer)->append(u"  checkCalculationErrors    = "_j);
    npc(buffer)->append(u"  checkEmptyCellRef         = "_j);
    npc(buffer)->append(u"  checkNumbersAsText        = "_j);
    npc(buffer)->append(u"  checkInconsistentRanges   = "_j);
    npc(buffer)->append(u"  checkInconsistentFormulas = "_j);
    npc(buffer)->append(u"  checkDateTimeFormats      = "_j);
    npc(buffer)->append(u"  checkUnprotectedFormulas  = "_j);
    npc(buffer)->append(u"  performDataValidation     = "_j);
    npc(buffer)->append(u" [/FEATURE FORMULA ERRORS]\n"_j);
    return npc(buffer)->toString();
}

void org::apache::poi::hssf::record::common::FeatFormulaErr2::serialize(::org::apache::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeInt(errorCheck);
}

int32_t org::apache::poi::hssf::record::common::FeatFormulaErr2::getDataSize()
{
    return 4;
}

int32_t org::apache::poi::hssf::record::common::FeatFormulaErr2::_getRawErrorCheckValue()
{
    return errorCheck;
}

bool org::apache::poi::hssf::record::common::FeatFormulaErr2::getCheckCalculationErrors()
{
    return npc(CHECK_CALCULATION_ERRORS_)->isSet(errorCheck);
}

void org::apache::poi::hssf::record::common::FeatFormulaErr2::setCheckCalculationErrors(bool checkCalculationErrors)
{
    errorCheck = npc(CHECK_CALCULATION_ERRORS_)->setBoolean(errorCheck, checkCalculationErrors);
}

bool org::apache::poi::hssf::record::common::FeatFormulaErr2::getCheckEmptyCellRef()
{
    return npc(CHECK_EMPTY_CELL_REF_)->isSet(errorCheck);
}

void org::apache::poi::hssf::record::common::FeatFormulaErr2::setCheckEmptyCellRef(bool checkEmptyCellRef)
{
    errorCheck = npc(CHECK_EMPTY_CELL_REF_)->setBoolean(errorCheck, checkEmptyCellRef);
}

bool org::apache::poi::hssf::record::common::FeatFormulaErr2::getCheckNumbersAsText()
{
    return npc(CHECK_NUMBERS_AS_TEXT_)->isSet(errorCheck);
}

void org::apache::poi::hssf::record::common::FeatFormulaErr2::setCheckNumbersAsText(bool checkNumbersAsText)
{
    errorCheck = npc(CHECK_NUMBERS_AS_TEXT_)->setBoolean(errorCheck, checkNumbersAsText);
}

bool org::apache::poi::hssf::record::common::FeatFormulaErr2::getCheckInconsistentRanges()
{
    return npc(CHECK_INCONSISTENT_RANGES_)->isSet(errorCheck);
}

void org::apache::poi::hssf::record::common::FeatFormulaErr2::setCheckInconsistentRanges(bool checkInconsistentRanges)
{
    errorCheck = npc(CHECK_INCONSISTENT_RANGES_)->setBoolean(errorCheck, checkInconsistentRanges);
}

bool org::apache::poi::hssf::record::common::FeatFormulaErr2::getCheckInconsistentFormulas()
{
    return npc(CHECK_INCONSISTENT_FORMULAS_)->isSet(errorCheck);
}

void org::apache::poi::hssf::record::common::FeatFormulaErr2::setCheckInconsistentFormulas(bool checkInconsistentFormulas)
{
    errorCheck = npc(CHECK_INCONSISTENT_FORMULAS_)->setBoolean(errorCheck, checkInconsistentFormulas);
}

bool org::apache::poi::hssf::record::common::FeatFormulaErr2::getCheckDateTimeFormats()
{
    return npc(CHECK_DATETIME_FORMATS_)->isSet(errorCheck);
}

void org::apache::poi::hssf::record::common::FeatFormulaErr2::setCheckDateTimeFormats(bool checkDateTimeFormats)
{
    errorCheck = npc(CHECK_DATETIME_FORMATS_)->setBoolean(errorCheck, checkDateTimeFormats);
}

bool org::apache::poi::hssf::record::common::FeatFormulaErr2::getCheckUnprotectedFormulas()
{
    return npc(CHECK_UNPROTECTED_FORMULAS_)->isSet(errorCheck);
}

void org::apache::poi::hssf::record::common::FeatFormulaErr2::setCheckUnprotectedFormulas(bool checkUnprotectedFormulas)
{
    errorCheck = npc(CHECK_UNPROTECTED_FORMULAS_)->setBoolean(errorCheck, checkUnprotectedFormulas);
}

bool org::apache::poi::hssf::record::common::FeatFormulaErr2::getPerformDataValidation()
{
    return npc(PERFORM_DATA_VALIDATION_)->isSet(errorCheck);
}

void org::apache::poi::hssf::record::common::FeatFormulaErr2::setPerformDataValidation(bool performDataValidation)
{
    errorCheck = npc(PERFORM_DATA_VALIDATION_)->setBoolean(errorCheck, performDataValidation);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::record::common::FeatFormulaErr2::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.common.FeatFormulaErr2", 49);
    return c;
}

void org::apache::poi::hssf::record::common::FeatFormulaErr2::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        CHECK_CALCULATION_ERRORS_ = ::org::apache::poi::util::BitFieldFactory::getInstance(1);
        CHECK_EMPTY_CELL_REF_ = ::org::apache::poi::util::BitFieldFactory::getInstance(2);
        CHECK_NUMBERS_AS_TEXT_ = ::org::apache::poi::util::BitFieldFactory::getInstance(4);
        CHECK_INCONSISTENT_RANGES_ = ::org::apache::poi::util::BitFieldFactory::getInstance(8);
        CHECK_INCONSISTENT_FORMULAS_ = ::org::apache::poi::util::BitFieldFactory::getInstance(16);
        CHECK_DATETIME_FORMATS_ = ::org::apache::poi::util::BitFieldFactory::getInstance(32);
        CHECK_UNPROTECTED_FORMULAS_ = ::org::apache::poi::util::BitFieldFactory::getInstance(64);
        PERFORM_DATA_VALIDATION_ = ::org::apache::poi::util::BitFieldFactory::getInstance(128);
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* org::apache::poi::hssf::record::common::FeatFormulaErr2::getClass0()
{
    return class_();
}

