// Generated from /POI/java/org/apache/poi/ss/formula/ptg/Deleted3DPxg.java
#include <org/apache/poi/ss/formula/ptg/Deleted3DPxg.hpp>

#include <java/lang/Class.hpp>
#include <java/lang/IllegalStateException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <org/apache/poi/ss/formula/SheetNameFormatter.hpp>
#include <org/apache/poi/ss/formula/ptg/Ptg.hpp>
#include <org/apache/poi/ss/usermodel/FormulaError.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::ss::formula::ptg::Deleted3DPxg::Deleted3DPxg(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::formula::ptg::Deleted3DPxg::Deleted3DPxg(int32_t externalWorkbookNumber, ::java::lang::String* sheetName) 
    : Deleted3DPxg(*static_cast< ::default_init_tag* >(0))
{
    ctor(externalWorkbookNumber,sheetName);
}

poi::ss::formula::ptg::Deleted3DPxg::Deleted3DPxg(::java::lang::String* sheetName) 
    : Deleted3DPxg(*static_cast< ::default_init_tag* >(0))
{
    ctor(sheetName);
}

void poi::ss::formula::ptg::Deleted3DPxg::init()
{
    externalWorkbookNumber = -int32_t(1);
}

void poi::ss::formula::ptg::Deleted3DPxg::ctor(int32_t externalWorkbookNumber, ::java::lang::String* sheetName)
{
    super::ctor();
    init();
    this->externalWorkbookNumber = externalWorkbookNumber;
    this->sheetName = sheetName;
}

void poi::ss::formula::ptg::Deleted3DPxg::ctor(::java::lang::String* sheetName)
{
    ctor(-int32_t(1), sheetName);
}

java::lang::String* poi::ss::formula::ptg::Deleted3DPxg::toString()
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
    npc(sb)->append(npc(::poi::ss::usermodel::FormulaError::REF)->getString());
    npc(sb)->append(u"]"_j);
    return npc(sb)->toString();
}

int32_t poi::ss::formula::ptg::Deleted3DPxg::getExternalWorkbookNumber()
{
    return externalWorkbookNumber;
}

java::lang::String* poi::ss::formula::ptg::Deleted3DPxg::getSheetName()
{
    return sheetName;
}

void poi::ss::formula::ptg::Deleted3DPxg::setSheetName(::java::lang::String* sheetName)
{
    this->sheetName = sheetName;
}

java::lang::String* poi::ss::formula::ptg::Deleted3DPxg::toFormulaString()
{
    auto sb = new ::java::lang::StringBuffer();
    if(externalWorkbookNumber >= 0) {
        npc(sb)->append(u'[');
        npc(sb)->append(externalWorkbookNumber);
        npc(sb)->append(u']');
    }
    if(sheetName != nullptr) {
        ::poi::ss::formula::SheetNameFormatter::appendFormat(sb, sheetName);
    }
    npc(sb)->append(u'!');
    npc(sb)->append(npc(::poi::ss::usermodel::FormulaError::REF)->getString());
    return npc(sb)->toString();
}

int8_t poi::ss::formula::ptg::Deleted3DPxg::getDefaultOperandClass()
{
    return Ptg::CLASS_VALUE;
}

int32_t poi::ss::formula::ptg::Deleted3DPxg::getSize()
{
    return 1;
}

void poi::ss::formula::ptg::Deleted3DPxg::write(::poi::util::LittleEndianOutput* out)
{
    throw new ::java::lang::IllegalStateException(u"XSSF-only Ptg, should not be serialised"_j);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::ptg::Deleted3DPxg::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.ptg.Deleted3DPxg", 42);
    return c;
}

java::lang::Class* poi::ss::formula::ptg::Deleted3DPxg::getClass0()
{
    return class_();
}

