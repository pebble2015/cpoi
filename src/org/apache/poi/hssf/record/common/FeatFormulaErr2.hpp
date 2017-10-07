// Generated from /POI/java/org/apache/poi/hssf/record/common/FeatFormulaErr2.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/common/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/hssf/record/common/SharedFeature.hpp>

struct default_init_tag;

class org::apache::poi::hssf::record::common::FeatFormulaErr2 final
    : public virtual ::java::lang::Object
    , public SharedFeature
{

public:
    typedef ::java::lang::Object super;

private:
    static ::org::apache::poi::util::BitField* CHECK_CALCULATION_ERRORS_;
    static ::org::apache::poi::util::BitField* CHECK_EMPTY_CELL_REF_;
    static ::org::apache::poi::util::BitField* CHECK_NUMBERS_AS_TEXT_;
    static ::org::apache::poi::util::BitField* CHECK_INCONSISTENT_RANGES_;
    static ::org::apache::poi::util::BitField* CHECK_INCONSISTENT_FORMULAS_;
    static ::org::apache::poi::util::BitField* CHECK_DATETIME_FORMATS_;
    static ::org::apache::poi::util::BitField* CHECK_UNPROTECTED_FORMULAS_;
    static ::org::apache::poi::util::BitField* PERFORM_DATA_VALIDATION_;
    int32_t errorCheck {  };
protected:
    void ctor();
    void ctor(::org::apache::poi::hssf::record::RecordInputStream* in);

public:
    ::java::lang::String* toString() override;
    void serialize(::org::apache::poi::util::LittleEndianOutput* out) override;
    int32_t getDataSize() override;
    int32_t _getRawErrorCheckValue();
    bool getCheckCalculationErrors();
    void setCheckCalculationErrors(bool checkCalculationErrors);
    bool getCheckEmptyCellRef();
    void setCheckEmptyCellRef(bool checkEmptyCellRef);
    bool getCheckNumbersAsText();
    void setCheckNumbersAsText(bool checkNumbersAsText);
    bool getCheckInconsistentRanges();
    void setCheckInconsistentRanges(bool checkInconsistentRanges);
    bool getCheckInconsistentFormulas();
    void setCheckInconsistentFormulas(bool checkInconsistentFormulas);
    bool getCheckDateTimeFormats();
    void setCheckDateTimeFormats(bool checkDateTimeFormats);
    bool getCheckUnprotectedFormulas();
    void setCheckUnprotectedFormulas(bool checkUnprotectedFormulas);
    bool getPerformDataValidation();
    void setPerformDataValidation(bool performDataValidation);

    // Generated
    FeatFormulaErr2();
    FeatFormulaErr2(::org::apache::poi::hssf::record::RecordInputStream* in);
protected:
    FeatFormulaErr2(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    static ::org::apache::poi::util::BitField*& CHECK_CALCULATION_ERRORS();
    static ::org::apache::poi::util::BitField*& CHECK_EMPTY_CELL_REF();
    static ::org::apache::poi::util::BitField*& CHECK_NUMBERS_AS_TEXT();
    static ::org::apache::poi::util::BitField*& CHECK_INCONSISTENT_RANGES();
    static ::org::apache::poi::util::BitField*& CHECK_INCONSISTENT_FORMULAS();
    static ::org::apache::poi::util::BitField*& CHECK_DATETIME_FORMATS();
    static ::org::apache::poi::util::BitField*& CHECK_UNPROTECTED_FORMULAS();
    static ::org::apache::poi::util::BitField*& PERFORM_DATA_VALIDATION();
    virtual ::java::lang::Class* getClass0();
};
