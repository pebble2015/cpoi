// Generated from /POI/java/org/apache/poi/hssf/usermodel/HSSFHeader.java
#include <org/apache/poi/hssf/usermodel/HSSFHeader.hpp>

#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <org/apache/poi/hssf/record/HeaderRecord.hpp>
#include <org/apache/poi/hssf/record/aggregates/PageSettingsBlock.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::hssf::usermodel::HSSFHeader::HSSFHeader(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::usermodel::HSSFHeader::HSSFHeader(::poi::hssf::record::aggregates::PageSettingsBlock* psb) 
    : HSSFHeader(*static_cast< ::default_init_tag* >(0))
{
    ctor(psb);
}

void poi::hssf::usermodel::HSSFHeader::ctor(::poi::hssf::record::aggregates::PageSettingsBlock* psb)
{
    super::ctor();
    _psb = psb;
}

java::lang::String* poi::hssf::usermodel::HSSFHeader::getRawText()
{
    auto hf = npc(_psb)->getHeader();
    if(hf == nullptr) {
        return u""_j;
    }
    return npc(hf)->getText();
}

void poi::hssf::usermodel::HSSFHeader::setHeaderFooterText(::java::lang::String* text)
{
    auto hfr = npc(_psb)->getHeader();
    if(hfr == nullptr) {
        hfr = new ::poi::hssf::record::HeaderRecord(text);
        npc(_psb)->setHeader(hfr);
    } else {
        npc(hfr)->setText(text);
    }
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::usermodel::HSSFHeader::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.usermodel.HSSFHeader", 40);
    return c;
}

java::lang::String* poi::hssf::usermodel::HSSFHeader::getCenter()
{
    return HeaderFooter::getCenter();
}

java::lang::String* poi::hssf::usermodel::HSSFHeader::getLeft()
{
    return HeaderFooter::getLeft();
}

java::lang::String* poi::hssf::usermodel::HSSFHeader::getRight()
{
    return HeaderFooter::getRight();
}

void poi::hssf::usermodel::HSSFHeader::setCenter(::java::lang::String* newCenter)
{
    HeaderFooter::setCenter(newCenter);
}

void poi::hssf::usermodel::HSSFHeader::setLeft(::java::lang::String* newLeft)
{
    HeaderFooter::setLeft(newLeft);
}

void poi::hssf::usermodel::HSSFHeader::setRight(::java::lang::String* newRight)
{
    HeaderFooter::setRight(newRight);
}

java::lang::Class* poi::hssf::usermodel::HSSFHeader::getClass0()
{
    return class_();
}

