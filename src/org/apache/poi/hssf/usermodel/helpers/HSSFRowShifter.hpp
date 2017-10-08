// Generated from /POI/java/org/apache/poi/hssf/usermodel/helpers/HSSFRowShifter.java

#pragma once

#include <org/apache/poi/hssf/usermodel/fwd-POI.hpp>
#include <org/apache/poi/hssf/usermodel/helpers/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/helpers/RowShifter.hpp>

struct default_init_tag;

class poi::hssf::usermodel::helpers::HSSFRowShifter final
    : public ::poi::ss::usermodel::helpers::RowShifter
{

public:
    typedef ::poi::ss::usermodel::helpers::RowShifter super;

private:
    static ::poi::util::POILogger* logger_;
protected:
    void ctor(::poi::hssf::usermodel::HSSFSheet* sh);

public:
    void updateNamedRanges(::poi::ss::formula::FormulaShifter* shifter) override;
    void updateFormulas(::poi::ss::formula::FormulaShifter* shifter) override;
    void updateRowFormulas(::poi::ss::usermodel::Row* row, ::poi::ss::formula::FormulaShifter* shifter) override;
    void updateConditionalFormatting(::poi::ss::formula::FormulaShifter* shifter) override;
    void updateHyperlinks(::poi::ss::formula::FormulaShifter* shifter) override;

    // Generated
    HSSFRowShifter(::poi::hssf::usermodel::HSSFSheet* sh);
protected:
    HSSFRowShifter(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    static ::poi::util::POILogger*& logger();
    virtual ::java::lang::Class* getClass0();
};
