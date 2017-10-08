// Generated from /POI/java/org/apache/poi/ss/formula/ptg/Area3DPxg.java
#include <org/apache/poi/ss/formula/ptg/Area3DPxg.hpp>

#include <java/lang/Class.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/IllegalStateException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <org/apache/poi/ss/SpreadsheetVersion.hpp>
#include <org/apache/poi/ss/formula/NameIdentifier.hpp>
#include <org/apache/poi/ss/formula/SheetIdentifier.hpp>
#include <org/apache/poi/ss/formula/SheetNameFormatter.hpp>
#include <org/apache/poi/ss/formula/SheetRangeIdentifier.hpp>
#include <org/apache/poi/ss/util/AreaReference.hpp>

template<typename T, typename U>
static T java_cast(U* u)
{
    if(!u) return static_cast<T>(nullptr);
    auto t = dynamic_cast<T>(u);
    if(!t) throw new ::java::lang::ClassCastException();
    return t;
}

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::ss::formula::ptg::Area3DPxg::Area3DPxg(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::formula::ptg::Area3DPxg::Area3DPxg(int32_t externalWorkbookNumber, ::poi::ss::formula::SheetIdentifier* sheetName, ::java::lang::String* arearef) 
    : Area3DPxg(*static_cast< ::default_init_tag* >(0))
{
    ctor(externalWorkbookNumber,sheetName,arearef);
}

poi::ss::formula::ptg::Area3DPxg::Area3DPxg(int32_t externalWorkbookNumber, ::poi::ss::formula::SheetIdentifier* sheetName, ::poi::ss::util::AreaReference* arearef) 
    : Area3DPxg(*static_cast< ::default_init_tag* >(0))
{
    ctor(externalWorkbookNumber,sheetName,arearef);
}

poi::ss::formula::ptg::Area3DPxg::Area3DPxg(::poi::ss::formula::SheetIdentifier* sheetName, ::java::lang::String* arearef) 
    : Area3DPxg(*static_cast< ::default_init_tag* >(0))
{
    ctor(sheetName,arearef);
}

poi::ss::formula::ptg::Area3DPxg::Area3DPxg(::poi::ss::formula::SheetIdentifier* sheetName, ::poi::ss::util::AreaReference* arearef) 
    : Area3DPxg(*static_cast< ::default_init_tag* >(0))
{
    ctor(sheetName,arearef);
}

void poi::ss::formula::ptg::Area3DPxg::init()
{
    externalWorkbookNumber = -int32_t(1);
}

void poi::ss::formula::ptg::Area3DPxg::ctor(int32_t externalWorkbookNumber, ::poi::ss::formula::SheetIdentifier* sheetName, ::java::lang::String* arearef)
{
    ctor(externalWorkbookNumber, sheetName, new ::poi::ss::util::AreaReference(arearef, ::poi::ss::SpreadsheetVersion::EXCEL2007));
}

void poi::ss::formula::ptg::Area3DPxg::ctor(int32_t externalWorkbookNumber, ::poi::ss::formula::SheetIdentifier* sheetName, ::poi::ss::util::AreaReference* arearef)
{
    super::ctor(arearef);
    init();
    this->externalWorkbookNumber = externalWorkbookNumber;
    this->firstSheetName = npc(npc(sheetName)->getSheetIdentifier())->getName();
    if(dynamic_cast< ::poi::ss::formula::SheetRangeIdentifier* >(sheetName) != nullptr) {
        this->lastSheetName = npc(npc((java_cast< ::poi::ss::formula::SheetRangeIdentifier* >(sheetName)))->getLastSheetIdentifier())->getName();
    } else {
        this->lastSheetName = nullptr;
    }
}

void poi::ss::formula::ptg::Area3DPxg::ctor(::poi::ss::formula::SheetIdentifier* sheetName, ::java::lang::String* arearef)
{
    ctor(sheetName, new ::poi::ss::util::AreaReference(arearef, ::poi::ss::SpreadsheetVersion::EXCEL2007));
}

void poi::ss::formula::ptg::Area3DPxg::ctor(::poi::ss::formula::SheetIdentifier* sheetName, ::poi::ss::util::AreaReference* arearef)
{
    ctor(-int32_t(1), sheetName, arearef);
}

java::lang::String* poi::ss::formula::ptg::Area3DPxg::toString()
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
    if(lastSheetName != nullptr) {
        npc(sb)->append(u" : "_j);
        npc(npc(sb)->append(u"sheet="_j))->append(lastSheetName);
    }
    npc(sb)->append(u" ! "_j);
    npc(sb)->append(formatReferenceAsString());
    npc(sb)->append(u"]"_j);
    return npc(sb)->toString();
}

int32_t poi::ss::formula::ptg::Area3DPxg::getExternalWorkbookNumber()
{
    return externalWorkbookNumber;
}

java::lang::String* poi::ss::formula::ptg::Area3DPxg::getSheetName()
{
    return firstSheetName;
}

java::lang::String* poi::ss::formula::ptg::Area3DPxg::getLastSheetName()
{
    return lastSheetName;
}

void poi::ss::formula::ptg::Area3DPxg::setSheetName(::java::lang::String* sheetName)
{
    this->firstSheetName = sheetName;
}

void poi::ss::formula::ptg::Area3DPxg::setLastSheetName(::java::lang::String* sheetName)
{
    this->lastSheetName = sheetName;
}

java::lang::String* poi::ss::formula::ptg::Area3DPxg::format2DRefAsString()
{
    return formatReferenceAsString();
}

java::lang::String* poi::ss::formula::ptg::Area3DPxg::toFormulaString()
{
    auto sb = new ::java::lang::StringBuffer();
    if(externalWorkbookNumber >= 0) {
        npc(sb)->append(u'[');
        npc(sb)->append(externalWorkbookNumber);
        npc(sb)->append(u']');
    }
    ::poi::ss::formula::SheetNameFormatter::appendFormat(sb, firstSheetName);
    if(lastSheetName != nullptr) {
        npc(sb)->append(u':');
        ::poi::ss::formula::SheetNameFormatter::appendFormat(sb, lastSheetName);
    }
    npc(sb)->append(u'!');
    npc(sb)->append(formatReferenceAsString());
    return npc(sb)->toString();
}

int32_t poi::ss::formula::ptg::Area3DPxg::getSize()
{
    return 1;
}

void poi::ss::formula::ptg::Area3DPxg::write(::poi::util::LittleEndianOutput* out)
{
    throw new ::java::lang::IllegalStateException(u"XSSF-only Ptg, should not be serialised"_j);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::ptg::Area3DPxg::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.ptg.Area3DPxg", 39);
    return c;
}

java::lang::Class* poi::ss::formula::ptg::Area3DPxg::getClass0()
{
    return class_();
}

