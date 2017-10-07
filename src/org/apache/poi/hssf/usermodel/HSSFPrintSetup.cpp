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

org::apache::poi::hssf::usermodel::HSSFPrintSetup::HSSFPrintSetup(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::usermodel::HSSFPrintSetup::HSSFPrintSetup(::org::apache::poi::hssf::record::PrintSetupRecord* printSetupRecord) 
    : HSSFPrintSetup(*static_cast< ::default_init_tag* >(0))
{
    ctor(printSetupRecord);
}

void org::apache::poi::hssf::usermodel::HSSFPrintSetup::ctor(::org::apache::poi::hssf::record::PrintSetupRecord* printSetupRecord)
{
    super::ctor();
    this->printSetupRecord = printSetupRecord;
}

void org::apache::poi::hssf::usermodel::HSSFPrintSetup::setPaperSize(int16_t size)
{
    npc(printSetupRecord)->setPaperSize(size);
}

void org::apache::poi::hssf::usermodel::HSSFPrintSetup::setScale(int16_t scale)
{
    npc(printSetupRecord)->setScale(scale);
}

void org::apache::poi::hssf::usermodel::HSSFPrintSetup::setPageStart(int16_t start)
{
    npc(printSetupRecord)->setPageStart(start);
}

void org::apache::poi::hssf::usermodel::HSSFPrintSetup::setFitWidth(int16_t width)
{
    npc(printSetupRecord)->setFitWidth(width);
}

void org::apache::poi::hssf::usermodel::HSSFPrintSetup::setFitHeight(int16_t height)
{
    npc(printSetupRecord)->setFitHeight(height);
}

void org::apache::poi::hssf::usermodel::HSSFPrintSetup::setOptions(int16_t options)
{
    npc(printSetupRecord)->setOptions(options);
}

void org::apache::poi::hssf::usermodel::HSSFPrintSetup::setLeftToRight(bool ltor)
{
    npc(printSetupRecord)->setLeftToRight(ltor);
}

void org::apache::poi::hssf::usermodel::HSSFPrintSetup::setLandscape(bool ls)
{
    npc(printSetupRecord)->setLandscape(!ls);
}

void org::apache::poi::hssf::usermodel::HSSFPrintSetup::setValidSettings(bool valid)
{
    npc(printSetupRecord)->setValidSettings(valid);
}

void org::apache::poi::hssf::usermodel::HSSFPrintSetup::setNoColor(bool mono)
{
    npc(printSetupRecord)->setNoColor(mono);
}

void org::apache::poi::hssf::usermodel::HSSFPrintSetup::setDraft(bool d)
{
    npc(printSetupRecord)->setDraft(d);
}

void org::apache::poi::hssf::usermodel::HSSFPrintSetup::setNotes(bool printnotes)
{
    npc(printSetupRecord)->setNotes(printnotes);
}

void org::apache::poi::hssf::usermodel::HSSFPrintSetup::setNoOrientation(bool orientation)
{
    npc(printSetupRecord)->setNoOrientation(orientation);
}

void org::apache::poi::hssf::usermodel::HSSFPrintSetup::setUsePage(bool page)
{
    npc(printSetupRecord)->setUsePage(page);
}

void org::apache::poi::hssf::usermodel::HSSFPrintSetup::setHResolution(int16_t resolution)
{
    npc(printSetupRecord)->setHResolution(resolution);
}

void org::apache::poi::hssf::usermodel::HSSFPrintSetup::setVResolution(int16_t resolution)
{
    npc(printSetupRecord)->setVResolution(resolution);
}

void org::apache::poi::hssf::usermodel::HSSFPrintSetup::setHeaderMargin(double headermargin)
{
    npc(printSetupRecord)->setHeaderMargin(headermargin);
}

void org::apache::poi::hssf::usermodel::HSSFPrintSetup::setFooterMargin(double footermargin)
{
    npc(printSetupRecord)->setFooterMargin(footermargin);
}

void org::apache::poi::hssf::usermodel::HSSFPrintSetup::setCopies(int16_t copies)
{
    npc(printSetupRecord)->setCopies(copies);
}

int16_t org::apache::poi::hssf::usermodel::HSSFPrintSetup::getPaperSize()
{
    return npc(printSetupRecord)->getPaperSize();
}

int16_t org::apache::poi::hssf::usermodel::HSSFPrintSetup::getScale()
{
    return npc(printSetupRecord)->getScale();
}

int16_t org::apache::poi::hssf::usermodel::HSSFPrintSetup::getPageStart()
{
    return npc(printSetupRecord)->getPageStart();
}

int16_t org::apache::poi::hssf::usermodel::HSSFPrintSetup::getFitWidth()
{
    return npc(printSetupRecord)->getFitWidth();
}

int16_t org::apache::poi::hssf::usermodel::HSSFPrintSetup::getFitHeight()
{
    return npc(printSetupRecord)->getFitHeight();
}

int16_t org::apache::poi::hssf::usermodel::HSSFPrintSetup::getOptions()
{
    return npc(printSetupRecord)->getOptions();
}

bool org::apache::poi::hssf::usermodel::HSSFPrintSetup::getLeftToRight()
{
    return npc(printSetupRecord)->getLeftToRight();
}

bool org::apache::poi::hssf::usermodel::HSSFPrintSetup::getLandscape()
{
    return !npc(printSetupRecord)->getLandscape();
}

bool org::apache::poi::hssf::usermodel::HSSFPrintSetup::getValidSettings()
{
    return npc(printSetupRecord)->getValidSettings();
}

bool org::apache::poi::hssf::usermodel::HSSFPrintSetup::getNoColor()
{
    return npc(printSetupRecord)->getNoColor();
}

bool org::apache::poi::hssf::usermodel::HSSFPrintSetup::getDraft()
{
    return npc(printSetupRecord)->getDraft();
}

bool org::apache::poi::hssf::usermodel::HSSFPrintSetup::getNotes()
{
    return npc(printSetupRecord)->getNotes();
}

bool org::apache::poi::hssf::usermodel::HSSFPrintSetup::getNoOrientation()
{
    return npc(printSetupRecord)->getNoOrientation();
}

bool org::apache::poi::hssf::usermodel::HSSFPrintSetup::getUsePage()
{
    return npc(printSetupRecord)->getUsePage();
}

int16_t org::apache::poi::hssf::usermodel::HSSFPrintSetup::getHResolution()
{
    return npc(printSetupRecord)->getHResolution();
}

int16_t org::apache::poi::hssf::usermodel::HSSFPrintSetup::getVResolution()
{
    return npc(printSetupRecord)->getVResolution();
}

double org::apache::poi::hssf::usermodel::HSSFPrintSetup::getHeaderMargin()
{
    return npc(printSetupRecord)->getHeaderMargin();
}

double org::apache::poi::hssf::usermodel::HSSFPrintSetup::getFooterMargin()
{
    return npc(printSetupRecord)->getFooterMargin();
}

int16_t org::apache::poi::hssf::usermodel::HSSFPrintSetup::getCopies()
{
    return npc(printSetupRecord)->getCopies();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::usermodel::HSSFPrintSetup::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.usermodel.HSSFPrintSetup", 44);
    return c;
}

java::lang::Class* org::apache::poi::hssf::usermodel::HSSFPrintSetup::getClass0()
{
    return class_();
}

