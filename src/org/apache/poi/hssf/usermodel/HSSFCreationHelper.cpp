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

poi::hssf::usermodel::HSSFCreationHelper::HSSFCreationHelper(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::usermodel::HSSFCreationHelper::HSSFCreationHelper(HSSFWorkbook* wb) 
    : HSSFCreationHelper(*static_cast< ::default_init_tag* >(0))
{
    ctor(wb);
}

void poi::hssf::usermodel::HSSFCreationHelper::ctor(HSSFWorkbook* wb)
{
    super::ctor();
    workbook = wb;
}

poi::hssf::usermodel::HSSFRichTextString* poi::hssf::usermodel::HSSFCreationHelper::createRichTextString(::java::lang::String* text)
{
    return new HSSFRichTextString(text);
}

poi::hssf::usermodel::HSSFDataFormat* poi::hssf::usermodel::HSSFCreationHelper::createDataFormat()
{
    return npc(workbook)->createDataFormat();
}

poi::hssf::usermodel::HSSFHyperlink* poi::hssf::usermodel::HSSFCreationHelper::createHyperlink(::poi::common::usermodel::HyperlinkType* type)
{
    return new HSSFHyperlink(type);
}

poi::hssf::usermodel::HSSFExtendedColor* poi::hssf::usermodel::HSSFCreationHelper::createExtendedColor()
{
    return new HSSFExtendedColor(new ::poi::hssf::record::common::ExtendedColor());
}

poi::ss::usermodel::FormulaEvaluator* poi::hssf::usermodel::HSSFCreationHelper::createFormulaEvaluator()
{
    return new HSSFFormulaEvaluator(workbook);
}

poi::hssf::usermodel::HSSFClientAnchor* poi::hssf::usermodel::HSSFCreationHelper::createClientAnchor()
{
    return new HSSFClientAnchor();
}

poi::ss::util::AreaReference* poi::hssf::usermodel::HSSFCreationHelper::createAreaReference(::java::lang::String* reference)
{
    return new ::poi::ss::util::AreaReference(reference, npc(workbook)->getSpreadsheetVersion());
}

poi::ss::util::AreaReference* poi::hssf::usermodel::HSSFCreationHelper::createAreaReference(::poi::ss::util::CellReference* topLeft, ::poi::ss::util::CellReference* bottomRight)
{
    return new ::poi::ss::util::AreaReference(topLeft, bottomRight, npc(workbook)->getSpreadsheetVersion());
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::usermodel::HSSFCreationHelper::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.usermodel.HSSFCreationHelper", 48);
    return c;
}

java::lang::Class* poi::hssf::usermodel::HSSFCreationHelper::getClass0()
{
    return class_();
}

