// Generated from /POI/java/org/apache/poi/hssf/usermodel/HSSFPrintSetup.java
#include <org/apache/poi/hssf/usermodel/HSSFPrintSetup.hpp>

#include <java/lang/NullPointerException.hpp>
#include <org/apache/poi/hssf/record/PrintSetupRecord.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::hssf::usermodel::HSSFPrintSetup::HSSFPrintSetup(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::usermodel::HSSFPrintSetup::HSSFPrintSetup(::poi::hssf::record::PrintSetupRecord* printSetupRecord) 
    : HSSFPrintSetup(*static_cast< ::default_init_tag* >(0))
{
    ctor(printSetupRecord);
}

void poi::hssf::usermodel::HSSFPrintSetup::ctor(::poi::hssf::record::PrintSetupRecord* printSetupRecord)
{
    super::ctor();
    this->printSetupRecord = printSetupRecord;
}

void poi::hssf::usermodel::HSSFPrintSetup::setPaperSize(int16_t size)
{
    npc(printSetupRecord)->setPaperSize(size);
}

void poi::hssf::usermodel::HSSFPrintSetup::setScale(int16_t scale)
{
    npc(printSetupRecord)->setScale(scale);
}

void poi::hssf::usermodel::HSSFPrintSetup::setPageStart(int16_t start)
{
    npc(printSetupRecord)->setPageStart(start);
}

void poi::hssf::usermodel::HSSFPrintSetup::setFitWidth(int16_t width)
{
    npc(printSetupRecord)->setFitWidth(width);
}

void poi::hssf::usermodel::HSSFPrintSetup::setFitHeight(int16_t height)
{
    npc(printSetupRecord)->setFitHeight(height);
}

void poi::hssf::usermodel::HSSFPrintSetup::setOptions(int16_t options)
{
    npc(printSetupRecord)->setOptions(options);
}

void poi::hssf::usermodel::HSSFPrintSetup::setLeftToRight(bool ltor)
{
    npc(printSetupRecord)->setLeftToRight(ltor);
}

void poi::hssf::usermodel::HSSFPrintSetup::setLandscape(bool ls)
{
    npc(printSetupRecord)->setLandscape(!ls);
}

void poi::hssf::usermodel::HSSFPrintSetup::setValidSettings(bool valid)
{
    npc(printSetupRecord)->setValidSettings(valid);
}

void poi::hssf::usermodel::HSSFPrintSetup::setNoColor(bool mono)
{
    npc(printSetupRecord)->setNoColor(mono);
}

void poi::hssf::usermodel::HSSFPrintSetup::setDraft(bool d)
{
    npc(printSetupRecord)->setDraft(d);
}

void poi::hssf::usermodel::HSSFPrintSetup::setNotes(bool printnotes)
{
    npc(printSetupRecord)->setNotes(printnotes);
}

void poi::hssf::usermodel::HSSFPrintSetup::setNoOrientation(bool orientation)
{
    npc(printSetupRecord)->setNoOrientation(orientation);
}

void poi::hssf::usermodel::HSSFPrintSetup::setUsePage(bool page)
{
    npc(printSetupRecord)->setUsePage(page);
}

void poi::hssf::usermodel::HSSFPrintSetup::setHResolution(int16_t resolution)
{
    npc(printSetupRecord)->setHResolution(resolution);
}

void poi::hssf::usermodel::HSSFPrintSetup::setVResolution(int16_t resolution)
{
    npc(printSetupRecord)->setVResolution(resolution);
}

void poi::hssf::usermodel::HSSFPrintSetup::setHeaderMargin(double headermargin)
{
    npc(printSetupRecord)->setHeaderMargin(headermargin);
}

void poi::hssf::usermodel::HSSFPrintSetup::setFooterMargin(double footermargin)
{
    npc(printSetupRecord)->setFooterMargin(footermargin);
}

void poi::hssf::usermodel::HSSFPrintSetup::setCopies(int16_t copies)
{
    npc(printSetupRecord)->setCopies(copies);
}

int16_t poi::hssf::usermodel::HSSFPrintSetup::getPaperSize()
{
    return npc(printSetupRecord)->getPaperSize();
}

int16_t poi::hssf::usermodel::HSSFPrintSetup::getScale()
{
    return npc(printSetupRecord)->getScale();
}

int16_t poi::hssf::usermodel::HSSFPrintSetup::getPageStart()
{
    return npc(printSetupRecord)->getPageStart();
}

int16_t poi::hssf::usermodel::HSSFPrintSetup::getFitWidth()
{
    return npc(printSetupRecord)->getFitWidth();
}

int16_t poi::hssf::usermodel::HSSFPrintSetup::getFitHeight()
{
    return npc(printSetupRecord)->getFitHeight();
}

int16_t poi::hssf::usermodel::HSSFPrintSetup::getOptions()
{
    return npc(printSetupRecord)->getOptions();
}

bool poi::hssf::usermodel::HSSFPrintSetup::getLeftToRight()
{
    return npc(printSetupRecord)->getLeftToRight();
}

bool poi::hssf::usermodel::HSSFPrintSetup::getLandscape()
{
    return !npc(printSetupRecord)->getLandscape();
}

bool poi::hssf::usermodel::HSSFPrintSetup::getValidSettings()
{
    return npc(printSetupRecord)->getValidSettings();
}

bool poi::hssf::usermodel::HSSFPrintSetup::getNoColor()
{
    return npc(printSetupRecord)->getNoColor();
}

bool poi::hssf::usermodel::HSSFPrintSetup::getDraft()
{
    return npc(printSetupRecord)->getDraft();
}

bool poi::hssf::usermodel::HSSFPrintSetup::getNotes()
{
    return npc(printSetupRecord)->getNotes();
}

bool poi::hssf::usermodel::HSSFPrintSetup::getNoOrientation()
{
    return npc(printSetupRecord)->getNoOrientation();
}

bool poi::hssf::usermodel::HSSFPrintSetup::getUsePage()
{
    return npc(printSetupRecord)->getUsePage();
}

int16_t poi::hssf::usermodel::HSSFPrintSetup::getHResolution()
{
    return npc(printSetupRecord)->getHResolution();
}

int16_t poi::hssf::usermodel::HSSFPrintSetup::getVResolution()
{
    return npc(printSetupRecord)->getVResolution();
}

double poi::hssf::usermodel::HSSFPrintSetup::getHeaderMargin()
{
    return npc(printSetupRecord)->getHeaderMargin();
}

double poi::hssf::usermodel::HSSFPrintSetup::getFooterMargin()
{
    return npc(printSetupRecord)->getFooterMargin();
}

int16_t poi::hssf::usermodel::HSSFPrintSetup::getCopies()
{
    return npc(printSetupRecord)->getCopies();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::usermodel::HSSFPrintSetup::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.usermodel.HSSFPrintSetup", 44);
    return c;
}

java::lang::Class* poi::hssf::usermodel::HSSFPrintSetup::getClass0()
{
    return class_();
}

