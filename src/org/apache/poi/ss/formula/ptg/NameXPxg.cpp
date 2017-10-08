// Generated from /POI/java/org/apache/poi/ss/formula/ptg/NameXPxg.java
#include <org/apache/poi/ss/formula/ptg/NameXPxg.hpp>

#include <java/lang/Class.hpp>
#include <java/lang/IllegalStateException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <org/apache/poi/ss/formula/SheetNameFormatter.hpp>
#include <org/apache/poi/ss/formula/ptg/Ptg.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::ss::formula::ptg::NameXPxg::NameXPxg(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::formula::ptg::NameXPxg::NameXPxg(int32_t externalWorkbookNumber, ::java::lang::String* sheetName, ::java::lang::String* nameName) 
    : NameXPxg(*static_cast< ::default_init_tag* >(0))
{
    ctor(externalWorkbookNumber,sheetName,nameName);
}

poi::ss::formula::ptg::NameXPxg::NameXPxg(::java::lang::String* sheetName, ::java::lang::String* nameName) 
    : NameXPxg(*static_cast< ::default_init_tag* >(0))
{
    ctor(sheetName,nameName);
}

poi::ss::formula::ptg::NameXPxg::NameXPxg(::java::lang::String* nameName) 
    : NameXPxg(*static_cast< ::default_init_tag* >(0))
{
    ctor(nameName);
}

void poi::ss::formula::ptg::NameXPxg::init()
{
    externalWorkbookNumber = -int32_t(1);
}

void poi::ss::formula::ptg::NameXPxg::ctor(int32_t externalWorkbookNumber, ::java::lang::String* sheetName, ::java::lang::String* nameName)
{
    super::ctor();
    init();
    this->externalWorkbookNumber = externalWorkbookNumber;
    this->sheetName = sheetName;
    this->nameName = nameName;
}

void poi::ss::formula::ptg::NameXPxg::ctor(::java::lang::String* sheetName, ::java::lang::String* nameName)
{
    ctor(-int32_t(1), sheetName, nameName);
}

void poi::ss::formula::ptg::NameXPxg::ctor(::java::lang::String* nameName)
{
    ctor(-int32_t(1), nullptr, nameName);
}

java::lang::String* poi::ss::formula::ptg::NameXPxg::toString()
{
    auto sb = new ::java::lang::StringBuffer();
    npc(sb)->append(npc(getClass())->getName());
    npc(sb)->append(u" ["_j);
    if(externalWorkbookNumber >= 0) {
        npc(sb)->append(u" ["_j);
        npc(npc(sb)->append(u"workbook="_j))->append(getExternalWorkbookNumber());
        npc(sb)->append(u"] "_j);
    }
    npc(npc(sb)->append(u"sheet="_j))->append(getSheetName());
    npc(sb)->append(u" ! "_j);
    npc(sb)->append(u"name="_j);
    npc(sb)->append(nameName);
    npc(sb)->append(u"]"_j);
    return npc(sb)->toString();
}

int32_t poi::ss::formula::ptg::NameXPxg::getExternalWorkbookNumber()
{
    return externalWorkbookNumber;
}

java::lang::String* poi::ss::formula::ptg::NameXPxg::getSheetName()
{
    return sheetName;
}

java::lang::String* poi::ss::formula::ptg::NameXPxg::getNameName()
{
    return nameName;
}

void poi::ss::formula::ptg::NameXPxg::setSheetName(::java::lang::String* sheetName)
{
    this->sheetName = sheetName;
}

java::lang::String* poi::ss::formula::ptg::NameXPxg::toFormulaString()
{
    auto sb = new ::java::lang::StringBuffer();
    auto needsExclamation = false;
    if(externalWorkbookNumber >= 0) {
        npc(sb)->append(u'[');
        npc(sb)->append(externalWorkbookNumber);
        npc(sb)->append(u']');
        needsExclamation = true;
    }
    if(sheetName != nullptr) {
        ::poi::ss::formula::SheetNameFormatter::appendFormat(sb, sheetName);
        needsExclamation = true;
    }
    if(needsExclamation) {
        npc(sb)->append(u'!');
    }
    npc(sb)->append(nameName);
    return npc(sb)->toString();
}

int8_t poi::ss::formula::ptg::NameXPxg::getDefaultOperandClass()
{
    return Ptg::CLASS_VALUE;
}

int32_t poi::ss::formula::ptg::NameXPxg::getSize()
{
    return 1;
}

void poi::ss::formula::ptg::NameXPxg::write(::poi::util::LittleEndianOutput* out)
{
    throw new ::java::lang::IllegalStateException(u"XSSF-only Ptg, should not be serialised"_j);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::ptg::NameXPxg::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.ptg.NameXPxg", 38);
    return c;
}

java::lang::Class* poi::ss::formula::ptg::NameXPxg::getClass0()
{
    return class_();
}

