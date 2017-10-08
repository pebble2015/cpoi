// Generated from /POI/java/org/apache/poi/hssf/usermodel/HSSFDataBarFormatting.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/cf/fwd-POI.hpp>
#include <org/apache/poi/hssf/usermodel/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/ss/usermodel/DataBarFormatting.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFConditionalFormattingThreshold.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFExtendedColor.hpp>

struct default_init_tag;

class poi::hssf::usermodel::HSSFDataBarFormatting final
    : public virtual ::java::lang::Object
    , public ::poi::ss::usermodel::DataBarFormatting
{

public:
    typedef ::java::lang::Object super;

private:
    HSSFSheet* sheet {  };
    ::poi::hssf::record::CFRule12Record* cfRule12Record {  };
    ::poi::hssf::record::cf::DataBarFormatting* databarFormatting {  };
protected:
    void ctor(::poi::hssf::record::CFRule12Record* cfRule12Record, HSSFSheet* sheet);

public:
    bool isLeftToRight() override;
    void setLeftToRight(bool ltr) override;
    int32_t getWidthMin() override;
    void setWidthMin(int32_t width) override;
    int32_t getWidthMax() override;
    void setWidthMax(int32_t width) override;
    HSSFExtendedColor* getColor() override;
    void setColor(::poi::ss::usermodel::Color* color) override;
    HSSFConditionalFormattingThreshold* getMinThreshold() override;
    HSSFConditionalFormattingThreshold* getMaxThreshold() override;
    bool isIconOnly() override;
    void setIconOnly(bool only) override;
    HSSFConditionalFormattingThreshold* createThreshold();

    // Generated

public: /* protected */
    HSSFDataBarFormatting(::poi::hssf::record::CFRule12Record* cfRule12Record, HSSFSheet* sheet);
protected:
    HSSFDataBarFormatting(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
