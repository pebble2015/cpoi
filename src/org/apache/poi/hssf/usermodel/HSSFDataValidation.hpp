// Generated from /POI/java/org/apache/poi/hssf/usermodel/HSSFDataValidation.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/hssf/usermodel/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/fwd-POI.hpp>
#include <org/apache/poi/ss/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/ss/usermodel/DataValidation.hpp>

struct default_init_tag;

class org::apache::poi::hssf::usermodel::HSSFDataValidation final
    : public virtual ::java::lang::Object
    , public ::org::apache::poi::ss::usermodel::DataValidation
{

public:
    typedef ::java::lang::Object super;

private:
    ::java::lang::String* _prompt_title {  };
    ::java::lang::String* _prompt_text {  };
    ::java::lang::String* _error_title {  };
    ::java::lang::String* _error_text {  };
    int32_t _errorStyle {  };
    bool _emptyCellAllowed {  };
    bool _suppress_dropdown_arrow {  };
    bool _showPromptBox {  };
    bool _showErrorBox {  };
    ::org::apache::poi::ss::util::CellRangeAddressList* _regions {  };
    DVConstraint* _constraint {  };
protected:
    void ctor(::org::apache::poi::ss::util::CellRangeAddressList* regions, ::org::apache::poi::ss::usermodel::DataValidationConstraint* constraint);

public:
    ::org::apache::poi::ss::usermodel::DataValidationConstraint* getValidationConstraint() override;
    DVConstraint* getConstraint();
    ::org::apache::poi::ss::util::CellRangeAddressList* getRegions() override;
    void setErrorStyle(int32_t error_style) override;
    int32_t getErrorStyle() override;
    void setEmptyCellAllowed(bool allowed) override;
    bool getEmptyCellAllowed() override;
    void setSuppressDropDownArrow(bool suppress) override;
    bool getSuppressDropDownArrow() override;
    void setShowPromptBox(bool show) override;
    bool getShowPromptBox() override;
    void setShowErrorBox(bool show) override;
    bool getShowErrorBox() override;
    void createPromptBox(::java::lang::String* title, ::java::lang::String* text) override;
    ::java::lang::String* getPromptBoxTitle() override;
    ::java::lang::String* getPromptBoxText() override;
    void createErrorBox(::java::lang::String* title, ::java::lang::String* text) override;
    ::java::lang::String* getErrorBoxTitle() override;
    ::java::lang::String* getErrorBoxText() override;
    ::org::apache::poi::hssf::record::DVRecord* createDVRecord(HSSFSheet* sheet);

    // Generated
    HSSFDataValidation(::org::apache::poi::ss::util::CellRangeAddressList* regions, ::org::apache::poi::ss::usermodel::DataValidationConstraint* constraint);
protected:
    HSSFDataValidation(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    void init();
    virtual ::java::lang::Class* getClass0();
};
