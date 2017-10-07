// Generated from /POI/java/org/apache/poi/hssf/usermodel/helpers/HSSFRowShifter.java

#pragma once

#include <org/apache/poi/hssf/usermodel/fwd-POI.hpp>
#include <org/apache/poi/hssf/usermodel/helpers/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/helpers/RowShifter.hpp>

struct default_init_tag;

class org::apache::poi::hssf::usermodel::helpers::HSSFRowShifter final
    : public ::org::apache::poi::ss::usermodel::helpers::RowShifter
{

public:
    typedef ::org::apache::poi::ss::usermodel::helpers::RowShifter super;

private:
    static ::org::apache::poi::util::POILogger* logger_;
protected:
    void ctor(::org::apache::poi::hssf::usermodel::HSSFSheet* sh);

public:
    void updateNamedRanges(::org::apache::poi::ss::formula::FormulaShifter* shifter) override;
    void updateFormulas(::org::apache::poi::ss::formula::FormulaShifter* shifter) override;
    void updateRowFormulas(::org::apache::poi::ss::usermodel::Row* row, ::org::apache::poi::ss::formula::FormulaShifter* shifter) override;
    void updateConditionalFormatting(::org::apache::poi::ss::formula::FormulaShifter* shifter) override;
    void updateHyperlinks(::org::apache::poi::ss::formula::FormulaShifter* shifter) override;

    // Generated
    HSSFRowShifter(::org::apache::poi::hssf::usermodel::HSSFSheet* sh);
protected:
    HSSFRowShifter(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    static ::org::apache::poi::util::POILogger*& logger();
    virtual ::java::lang::Class* getClass0();
};
