// Generated from /POI/java/org/apache/poi/hssf/usermodel/HSSFCreationHelper.java
#include <org/apache/poi/hssf/usermodel/HSSFCreationHelper.hpp>

#include <java/lang/NullPointerException.hpp>
#include <org/apache/poi/hssf/record/common/ExtendedColor.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFClientAnchor.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFDataFormat.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFExtendedColor.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFFormulaEvaluator.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFHyperlink.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFRichTextString.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFWorkbook.hpp>
#include <org/apache/poi/ss/util/AreaReference.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::hssf::usermodel::HSSFCreationHelper::HSSFCreationHelper(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::usermodel::HSSFCreationHelper::HSSFCreationHelper(HSSFWorkbook* wb) 
    : HSSFCreationHelper(*static_cast< ::default_init_tag* >(0))
{
    ctor(wb);
}

void org::apache::poi::hssf::usermodel::HSSFCreationHelper::ctor(HSSFWorkbook* wb)
{
    super::ctor();
    workbook = wb;
}

org::apache::poi::hssf::usermodel::HSSFRichTextString* org::apache::poi::hssf::usermodel::HSSFCreationHelper::createRichTextString(::java::lang::String* text)
{
    return new HSSFRichTextString(text);
}

org::apache::poi::hssf::usermodel::HSSFDataFormat* org::apache::poi::hssf::usermodel::HSSFCreationHelper::createDataFormat()
{
    return npc(workbook)->createDataFormat();
}

org::apache::poi::hssf::usermodel::HSSFHyperlink* org::apache::poi::hssf::usermodel::HSSFCreationHelper::createHyperlink(::org::apache::poi::common::usermodel::HyperlinkType* type)
{
    return new HSSFHyperlink(type);
}

org::apache::poi::hssf::usermodel::HSSFExtendedColor* org::apache::poi::hssf::usermodel::HSSFCreationHelper::createExtendedColor()
{
    return new HSSFExtendedColor(new ::org::apache::poi::hssf::record::common::ExtendedColor());
}

org::apache::poi::ss::usermodel::FormulaEvaluator* org::apache::poi::hssf::usermodel::HSSFCreationHelper::createFormulaEvaluator()
{
    return new HSSFFormulaEvaluator(workbook);
}

org::apache::poi::hssf::usermodel::HSSFClientAnchor* org::apache::poi::hssf::usermodel::HSSFCreationHelper::createClientAnchor()
{
    return new HSSFClientAnchor();
}

org::apache::poi::ss::util::AreaReference* org::apache::poi::hssf::usermodel::HSSFCreationHelper::createAreaReference(::java::lang::String* reference)
{
    return new ::org::apache::poi::ss::util::AreaReference(reference, npc(workbook)->getSpreadsheetVersion());
}

org::apache::poi::ss::util::AreaReference* org::apache::poi::hssf::usermodel::HSSFCreationHelper::createAreaReference(::org::apache::poi::ss::util::CellReference* topLeft, ::org::apache::poi::ss::util::CellReference* bottomRight)
{
    return new ::org::apache::poi::ss::util::AreaReference(topLeft, bottomRight, npc(workbook)->getSpreadsheetVersion());
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::usermodel::HSSFCreationHelper::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.usermodel.HSSFCreationHelper", 48);
    return c;
}

java::lang::Class* org::apache::poi::hssf::usermodel::HSSFCreationHelper::getClass0()
{
    return class_();
}

