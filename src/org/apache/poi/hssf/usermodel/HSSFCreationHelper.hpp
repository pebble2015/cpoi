// Generated from /POI/java/org/apache/poi/hssf/usermodel/HSSFCreationHelper.java

#pragma once

#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/common/usermodel/fwd-POI.hpp>
#include <org/apache/poi/hssf/usermodel/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/fwd-POI.hpp>
#include <org/apache/poi/ss/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/ss/usermodel/CreationHelper.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFClientAnchor.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFDataFormat.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFExtendedColor.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFHyperlink.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFRichTextString.hpp>

struct default_init_tag;

class org::apache::poi::hssf::usermodel::HSSFCreationHelper
    : public virtual ::java::lang::Object
    , public virtual ::org::apache::poi::ss::usermodel::CreationHelper
{

public:
    typedef ::java::lang::Object super;

private:
    HSSFWorkbook* workbook {  };
protected:
    void ctor(HSSFWorkbook* wb);

public:
    HSSFRichTextString* createRichTextString(::java::lang::String* text) override;
    HSSFDataFormat* createDataFormat() override;
    HSSFHyperlink* createHyperlink(::org::apache::poi::common::usermodel::HyperlinkType* type) override;
    HSSFExtendedColor* createExtendedColor() override;
    ::org::apache::poi::ss::usermodel::FormulaEvaluator* createFormulaEvaluator() override;
    HSSFClientAnchor* createClientAnchor() override;
    ::org::apache::poi::ss::util::AreaReference* createAreaReference(::java::lang::String* reference) override;
    ::org::apache::poi::ss::util::AreaReference* createAreaReference(::org::apache::poi::ss::util::CellReference* topLeft, ::org::apache::poi::ss::util::CellReference* bottomRight) override;

    // Generated

public: /* package */
    HSSFCreationHelper(HSSFWorkbook* wb);
protected:
    HSSFCreationHelper(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
