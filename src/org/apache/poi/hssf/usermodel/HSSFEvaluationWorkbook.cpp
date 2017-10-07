// Generated from /POI/java/org/apache/poi/hssf/usermodel/HSSFEvaluationWorkbook.java
#include <org/apache/poi/hssf/usermodel/HSSFEvaluationWorkbook.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/IllegalStateException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <org/apache/poi/hssf/model/InternalWorkbook.hpp>
#include <org/apache/poi/hssf/record/CellValueRecordInterface.hpp>
#include <org/apache/poi/hssf/record/NameRecord.hpp>
#include <org/apache/poi/hssf/record/aggregates/FormulaRecordAggregate.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFCell.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFEvaluationCell.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFEvaluationSheet.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFEvaluationWorkbook_Name.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFName.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFSheet.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFWorkbook.hpp>
#include <org/apache/poi/ss/SpreadsheetVersion.hpp>
#include <org/apache/poi/ss/formula/EvaluationCell.hpp>
#include <org/apache/poi/ss/formula/EvaluationName.hpp>
#include <org/apache/poi/ss/formula/EvaluationSheet.hpp>
#include <org/apache/poi/ss/formula/EvaluationWorkbook_ExternalName.hpp>
#include <org/apache/poi/ss/formula/EvaluationWorkbook_ExternalSheet.hpp>
#include <org/apache/poi/ss/formula/EvaluationWorkbook_ExternalSheetRange.hpp>
#include <org/apache/poi/ss/formula/NameIdentifier.hpp>
#include <org/apache/poi/ss/formula/SheetIdentifier.hpp>
#include <org/apache/poi/ss/formula/SheetRangeIdentifier.hpp>
#include <org/apache/poi/ss/formula/ptg/Area3DPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/NamePtg.hpp>
#include <org/apache/poi/ss/formula/ptg/NameXPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/Ptg.hpp>
#include <org/apache/poi/ss/formula/ptg/Ref3DPtg.hpp>
#include <org/apache/poi/ss/formula/udf/UDFFinder.hpp>
#include <org/apache/poi/ss/usermodel/Sheet.hpp>
#include <ObjectArray.hpp>
#include <SubArray.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace org
{
    namespace apache
    {
        namespace poi
        {
            namespace ss
            {
                namespace formula
                {
                    namespace ptg
                    {
typedef ::SubArray< ::org::apache::poi::ss::formula::ptg::Ptg, ::java::lang::ObjectArray > PtgArray;
                    } // ptg
                } // formula
            } // ss
        } // poi
    } // apache
} // org

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

org::apache::poi::hssf::usermodel::HSSFEvaluationWorkbook::HSSFEvaluationWorkbook(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::usermodel::HSSFEvaluationWorkbook::HSSFEvaluationWorkbook(HSSFWorkbook* book) 
    : HSSFEvaluationWorkbook(*static_cast< ::default_init_tag* >(0))
{
    ctor(book);
}

org::apache::poi::hssf::usermodel::HSSFEvaluationWorkbook* org::apache::poi::hssf::usermodel::HSSFEvaluationWorkbook::create(HSSFWorkbook* book)
{
    clinit();
    if(book == nullptr) {
        return nullptr;
    }
    return new HSSFEvaluationWorkbook(book);
}

void org::apache::poi::hssf::usermodel::HSSFEvaluationWorkbook::ctor(HSSFWorkbook* book)
{
    super::ctor();
    _uBook = book;
    _iBook = npc(book)->getWorkbook();
}

void org::apache::poi::hssf::usermodel::HSSFEvaluationWorkbook::clearAllCachedResultValues()
{
}

org::apache::poi::hssf::usermodel::HSSFName* org::apache::poi::hssf::usermodel::HSSFEvaluationWorkbook::createName()
{
    return npc(_uBook)->createName();
}

int32_t org::apache::poi::hssf::usermodel::HSSFEvaluationWorkbook::getExternalSheetIndex(::java::lang::String* sheetName)
{
    auto sheetIndex = npc(_uBook)->getSheetIndex(sheetName);
    return npc(_iBook)->checkExternSheet(sheetIndex);
}

int32_t org::apache::poi::hssf::usermodel::HSSFEvaluationWorkbook::getExternalSheetIndex(::java::lang::String* workbookName, ::java::lang::String* sheetName)
{
    return npc(_iBook)->getExternalSheetIndex(workbookName, sheetName);
}

org::apache::poi::ss::formula::ptg::Ptg* org::apache::poi::hssf::usermodel::HSSFEvaluationWorkbook::get3DReferencePtg(::org::apache::poi::ss::util::CellReference* cr, ::org::apache::poi::ss::formula::SheetIdentifier* sheet)
{
    auto extIx = getSheetExtIx(sheet);
    return new ::org::apache::poi::ss::formula::ptg::Ref3DPtg(cr, extIx);
}

org::apache::poi::ss::formula::ptg::Ptg* org::apache::poi::hssf::usermodel::HSSFEvaluationWorkbook::get3DReferencePtg(::org::apache::poi::ss::util::AreaReference* areaRef, ::org::apache::poi::ss::formula::SheetIdentifier* sheet)
{
    auto extIx = getSheetExtIx(sheet);
    return new ::org::apache::poi::ss::formula::ptg::Area3DPtg(areaRef, extIx);
}

org::apache::poi::ss::formula::ptg::NameXPtg* org::apache::poi::hssf::usermodel::HSSFEvaluationWorkbook::getNameXPtg(::java::lang::String* name, ::org::apache::poi::ss::formula::SheetIdentifier* sheet)
{
    auto sheetRefIndex = getSheetExtIx(sheet);
    return npc(_iBook)->getNameXPtg(name, sheetRefIndex, npc(_uBook)->getUDFFinder());
}

org::apache::poi::ss::formula::EvaluationName* org::apache::poi::hssf::usermodel::HSSFEvaluationWorkbook::getName(::java::lang::String* name, int32_t sheetIndex)
{
    for (auto i = int32_t(0); i < npc(_iBook)->getNumNames(); i++) {
        auto nr = npc(_iBook)->getNameRecord(i);
        if(npc(nr)->getSheetNumber() == sheetIndex + int32_t(1) && npc(name)->equalsIgnoreCase(npc(nr)->getNameText())) {
            return new HSSFEvaluationWorkbook_Name(nr, i);
        }
    }
    return sheetIndex == -int32_t(1) ? static_cast< ::org::apache::poi::ss::formula::EvaluationName* >(nullptr) : getName(name, -int32_t(1));
}

int32_t org::apache::poi::hssf::usermodel::HSSFEvaluationWorkbook::getSheetIndex(::org::apache::poi::ss::formula::EvaluationSheet* evalSheet)
{
    auto sheet = npc((java_cast< HSSFEvaluationSheet* >(evalSheet)))->getHSSFSheet();
    return npc(_uBook)->getSheetIndex(static_cast< ::org::apache::poi::ss::usermodel::Sheet* >(sheet));
}

int32_t org::apache::poi::hssf::usermodel::HSSFEvaluationWorkbook::getSheetIndex(::java::lang::String* sheetName)
{
    return npc(_uBook)->getSheetIndex(sheetName);
}

java::lang::String* org::apache::poi::hssf::usermodel::HSSFEvaluationWorkbook::getSheetName(int32_t sheetIndex)
{
    return npc(_uBook)->getSheetName(sheetIndex);
}

org::apache::poi::ss::formula::EvaluationSheet* org::apache::poi::hssf::usermodel::HSSFEvaluationWorkbook::getSheet(int32_t sheetIndex)
{
    return new HSSFEvaluationSheet(java_cast< HSSFSheet* >(npc(_uBook)->getSheetAt(sheetIndex)));
}

int32_t org::apache::poi::hssf::usermodel::HSSFEvaluationWorkbook::convertFromExternSheetIndex(int32_t externSheetIndex)
{
    return npc(_iBook)->getFirstSheetIndexFromExternSheetIndex(externSheetIndex);
}

org::apache::poi::ss::formula::EvaluationWorkbook_ExternalSheet* org::apache::poi::hssf::usermodel::HSSFEvaluationWorkbook::getExternalSheet(int32_t externSheetIndex)
{
    auto sheet = npc(_iBook)->getExternalSheet(externSheetIndex);
    if(sheet == nullptr) {
        auto localSheetIndex = convertFromExternSheetIndex(externSheetIndex);
        if(localSheetIndex == -int32_t(1)) {
            return nullptr;
        }
        if(localSheetIndex == -int32_t(2)) {
            return nullptr;
        }
        auto sheetName = getSheetName(localSheetIndex);
        auto lastLocalSheetIndex = npc(_iBook)->getLastSheetIndexFromExternSheetIndex(externSheetIndex);
        if(lastLocalSheetIndex == localSheetIndex) {
            sheet = new ::org::apache::poi::ss::formula::EvaluationWorkbook_ExternalSheet(nullptr, sheetName);
        } else {
            auto lastSheetName = getSheetName(lastLocalSheetIndex);
            sheet = new ::org::apache::poi::ss::formula::EvaluationWorkbook_ExternalSheetRange(nullptr, sheetName, lastSheetName);
        }
    }
    return sheet;
}

org::apache::poi::ss::formula::EvaluationWorkbook_ExternalSheet* org::apache::poi::hssf::usermodel::HSSFEvaluationWorkbook::getExternalSheet(::java::lang::String* firstSheetName, ::java::lang::String* lastSheetName, int32_t externalWorkbookNumber)
{
    throw new ::java::lang::IllegalStateException(u"XSSF-style external references are not supported for HSSF"_j);
}

org::apache::poi::ss::formula::EvaluationWorkbook_ExternalName* org::apache::poi::hssf::usermodel::HSSFEvaluationWorkbook::getExternalName(int32_t externSheetIndex, int32_t externNameIndex)
{
    return npc(_iBook)->getExternalName(externSheetIndex, externNameIndex);
}

org::apache::poi::ss::formula::EvaluationWorkbook_ExternalName* org::apache::poi::hssf::usermodel::HSSFEvaluationWorkbook::getExternalName(::java::lang::String* nameName, ::java::lang::String* sheetName, int32_t externalWorkbookNumber)
{
    throw new ::java::lang::IllegalStateException(u"XSSF-style external names are not supported for HSSF"_j);
}

java::lang::String* org::apache::poi::hssf::usermodel::HSSFEvaluationWorkbook::resolveNameXText(::org::apache::poi::ss::formula::ptg::NameXPtg* n)
{
    return npc(_iBook)->resolveNameXText(npc(n)->getSheetRefIndex(), npc(n)->getNameIndex());
}

java::lang::String* org::apache::poi::hssf::usermodel::HSSFEvaluationWorkbook::getSheetFirstNameByExternSheet(int32_t externSheetIndex)
{
    return npc(_iBook)->findSheetFirstNameFromExternSheet(externSheetIndex);
}

java::lang::String* org::apache::poi::hssf::usermodel::HSSFEvaluationWorkbook::getSheetLastNameByExternSheet(int32_t externSheetIndex)
{
    return npc(_iBook)->findSheetLastNameFromExternSheet(externSheetIndex);
}

java::lang::String* org::apache::poi::hssf::usermodel::HSSFEvaluationWorkbook::getNameText(::org::apache::poi::ss::formula::ptg::NamePtg* namePtg)
{
    return npc(npc(_iBook)->getNameRecord(npc(namePtg)->getIndex()))->getNameText();
}

org::apache::poi::ss::formula::EvaluationName* org::apache::poi::hssf::usermodel::HSSFEvaluationWorkbook::getName(::org::apache::poi::ss::formula::ptg::NamePtg* namePtg)
{
    auto ix = npc(namePtg)->getIndex();
    return new HSSFEvaluationWorkbook_Name(npc(_iBook)->getNameRecord(ix), ix);
}

org::apache::poi::ss::formula::ptg::PtgArray* org::apache::poi::hssf::usermodel::HSSFEvaluationWorkbook::getFormulaTokens(::org::apache::poi::ss::formula::EvaluationCell* evalCell)
{
    auto cell = npc((java_cast< HSSFEvaluationCell* >(evalCell)))->getHSSFCell();
    auto fra = java_cast< ::org::apache::poi::hssf::record::aggregates::FormulaRecordAggregate* >(npc(cell)->getCellValueRecord());
    return npc(fra)->getFormulaTokens();
}

org::apache::poi::ss::formula::udf::UDFFinder* org::apache::poi::hssf::usermodel::HSSFEvaluationWorkbook::getUDFFinder()
{
    return npc(_uBook)->getUDFFinder();
}

int32_t org::apache::poi::hssf::usermodel::HSSFEvaluationWorkbook::getSheetExtIx(::org::apache::poi::ss::formula::SheetIdentifier* sheetIden)
{
    int32_t extIx;
    if(sheetIden == nullptr) {
        extIx = -int32_t(1);
    } else {
        auto workbookName = npc(sheetIden)->getBookName();
        auto firstSheetName = npc(npc(sheetIden)->getSheetIdentifier())->getName();
        auto lastSheetName = firstSheetName;
        if(dynamic_cast< ::org::apache::poi::ss::formula::SheetRangeIdentifier* >(sheetIden) != nullptr) {
            lastSheetName = npc(npc((java_cast< ::org::apache::poi::ss::formula::SheetRangeIdentifier* >(sheetIden)))->getLastSheetIdentifier())->getName();
        }
        if(workbookName == nullptr) {
            auto firstSheetIndex = npc(_uBook)->getSheetIndex(firstSheetName);
            auto lastSheetIndex = npc(_uBook)->getSheetIndex(lastSheetName);
            extIx = npc(_iBook)->checkExternSheet(firstSheetIndex, lastSheetIndex);
        } else {
            extIx = npc(_iBook)->getExternalSheetIndex(workbookName, firstSheetName, lastSheetName);
        }
    }
    return extIx;
}

org::apache::poi::ss::SpreadsheetVersion* org::apache::poi::hssf::usermodel::HSSFEvaluationWorkbook::getSpreadsheetVersion()
{
    return ::org::apache::poi::ss::SpreadsheetVersion::EXCEL97;
}

org::apache::poi::ss::usermodel::Table* org::apache::poi::hssf::usermodel::HSSFEvaluationWorkbook::getTable(::java::lang::String* name)
{
    throw new ::java::lang::IllegalStateException(u"XSSF-style tables are not supported for HSSF"_j);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::usermodel::HSSFEvaluationWorkbook::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.usermodel.HSSFEvaluationWorkbook", 52);
    return c;
}

java::lang::Class* org::apache::poi::hssf::usermodel::HSSFEvaluationWorkbook::getClass0()
{
    return class_();
}

