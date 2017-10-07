// Generated from /POI/java/org/apache/poi/hssf/usermodel/HSSFFooter.java
#include <org/apache/poi/hssf/usermodel/HSSFFooter.hpp>

#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <org/apache/poi/hssf/record/FooterRecord.hpp>
#include <org/apache/poi/hssf/record/aggregates/PageSettingsBlock.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::hssf::usermodel::HSSFFooter::HSSFFooter(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::usermodel::HSSFFooter::HSSFFooter(::org::apache::poi::hssf::record::aggregates::PageSettingsBlock* psb) 
    : HSSFFooter(*static_cast< ::default_init_tag* >(0))
{
    ctor(psb);
}

void org::apache::poi::hssf::usermodel::HSSFFooter::ctor(::org::apache::poi::hssf::record::aggregates::PageSettingsBlock* psb)
{
    super::ctor();
    _psb = psb;
}

java::lang::String* org::apache::poi::hssf::usermodel::HSSFFooter::getRawText()
{
    auto hf = npc(_psb)->getFooter();
    if(hf == nullptr) {
        return u""_j;
    }
    return npc(hf)->getText();
}

void org::apache::poi::hssf::usermodel::HSSFFooter::setHeaderFooterText(::java::lang::String* text)
{
    auto hfr = npc(_psb)->getFooter();
    if(hfr == nullptr) {
        hfr = new ::org::apache::poi::hssf::record::FooterRecord(text);
        npc(_psb)->setFooter(hfr);
    } else {
        npc(hfr)->setText(text);
    }
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::usermodel::HSSFFooter::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.usermodel.HSSFFooter", 40);
    return c;
}

java::lang::String* org::apache::poi::hssf::usermodel::HSSFFooter::getCenter()
{
    return HeaderFooter::getCenter();
}

java::lang::String* org::apache::poi::hssf::usermodel::HSSFFooter::getLeft()
{
    return HeaderFooter::getLeft();
}

java::lang::String* org::apache::poi::hssf::usermodel::HSSFFooter::getRight()
{
    return HeaderFooter::getRight();
}

void org::apache::poi::hssf::usermodel::HSSFFooter::setCenter(::java::lang::String* newCenter)
{
    HeaderFooter::setCenter(newCenter);
}

void org::apache::poi::hssf::usermodel::HSSFFooter::setLeft(::java::lang::String* newLeft)
{
    HeaderFooter::setLeft(newLeft);
}

void org::apache::poi::hssf::usermodel::HSSFFooter::setRight(::java::lang::String* newRight)
{
    HeaderFooter::setRight(newRight);
}

java::lang::Class* org::apache::poi::hssf::usermodel::HSSFFooter::getClass0()
{
    return class_();
}

