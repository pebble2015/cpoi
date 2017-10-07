// Generated from /POI/java/org/apache/poi/hssf/usermodel/HSSFName.java
#include <org/apache/poi/hssf/usermodel/HSSFName.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/Character.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/IllegalStateException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <java/lang/StringBuilder.hpp>
#include <org/apache/poi/hssf/model/HSSFFormulaParser.hpp>
#include <org/apache/poi/hssf/model/InternalWorkbook.hpp>
#include <org/apache/poi/hssf/record/NameCommentRecord.hpp>
#include <org/apache/poi/hssf/record/NameRecord.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFWorkbook.hpp>
#include <org/apache/poi/ss/SpreadsheetVersion.hpp>
#include <org/apache/poi/ss/formula/FormulaType.hpp>
#include <org/apache/poi/ss/formula/ptg/Ptg.hpp>
#include <org/apache/poi/ss/util/CellReference.hpp>
#include <Array.hpp>
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

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::hssf::usermodel::HSSFName::HSSFName(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::usermodel::HSSFName::HSSFName(HSSFWorkbook* book, ::org::apache::poi::hssf::record::NameRecord* name) 
    : HSSFName(*static_cast< ::default_init_tag* >(0))
{
    ctor(book,name);
}

org::apache::poi::hssf::usermodel::HSSFName::HSSFName(HSSFWorkbook* book, ::org::apache::poi::hssf::record::NameRecord* name, ::org::apache::poi::hssf::record::NameCommentRecord* comment) 
    : HSSFName(*static_cast< ::default_init_tag* >(0))
{
    ctor(book,name,comment);
}

void org::apache::poi::hssf::usermodel::HSSFName::ctor(HSSFWorkbook* book, ::org::apache::poi::hssf::record::NameRecord* name)
{
    ctor(book, name, nullptr);
}

void org::apache::poi::hssf::usermodel::HSSFName::ctor(HSSFWorkbook* book, ::org::apache::poi::hssf::record::NameRecord* name, ::org::apache::poi::hssf::record::NameCommentRecord* comment)
{
    super::ctor();
    _book = book;
    _definedNameRec = name;
    _commentRec = comment;
}

java::lang::String* org::apache::poi::hssf::usermodel::HSSFName::getSheetName()
{
    auto indexToExternSheet = npc(_definedNameRec)->getExternSheetNumber();
    return npc(npc(_book)->getWorkbook())->findSheetFirstNameFromExternSheet(indexToExternSheet);
}

java::lang::String* org::apache::poi::hssf::usermodel::HSSFName::getNameName()
{
    return npc(_definedNameRec)->getNameText();
}

void org::apache::poi::hssf::usermodel::HSSFName::setNameName(::java::lang::String* nameName)
{
    validateName(nameName);
    auto wb = npc(_book)->getWorkbook();
    npc(_definedNameRec)->setNameText(nameName);
    auto sheetNumber = npc(_definedNameRec)->getSheetNumber();
    auto const lastNameIndex = npc(wb)->getNumNames() - int32_t(1);
    for (auto i = lastNameIndex; i >= 0; i--) {
        auto rec = npc(wb)->getNameRecord(i);
        if(rec != _definedNameRec) {
            if(npc(npc(rec)->getNameText())->equalsIgnoreCase(nameName) && sheetNumber == npc(rec)->getSheetNumber()) {
                auto msg = ::java::lang::StringBuilder().append(u"The "_j)->append((sheetNumber == 0 ? u"workbook"_j : u"sheet"_j))
                    ->append(u" already contains this name: "_j)
                    ->append(nameName)->toString();
                npc(_definedNameRec)->setNameText(::java::lang::StringBuilder().append(nameName)->append(u"(2)"_j)->toString());
                throw new ::java::lang::IllegalArgumentException(msg);
            }
        }
    }
    if(_commentRec != nullptr) {
        npc(_commentRec)->setNameText(nameName);
        npc(npc(_book)->getWorkbook())->updateNameCommentRecordCache(_commentRec);
    }
}

void org::apache::poi::hssf::usermodel::HSSFName::validateName(::java::lang::String* name)
{
    clinit();
    if(npc(name)->length() == 0) {
        throw new ::java::lang::IllegalArgumentException(u"Name cannot be blank"_j);
    }
    if(npc(name)->length() > 255) {
        throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(u"Invalid name: '"_j)->append(name)
            ->append(u"': cannot exceed 255 characters in length"_j)->toString());
    }
    if(npc(name)->equalsIgnoreCase(u"R"_j) || npc(name)->equalsIgnoreCase(u"C"_j)) {
        throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(u"Invalid name: '"_j)->append(name)
            ->append(u"': cannot be special shorthand R or C"_j)->toString());
    }
    auto c = npc(name)->charAt(int32_t(0));
    auto allowedSymbols = u"_\\"_j;
    auto characterIsValid = (::java::lang::Character::isLetter(c) || npc(allowedSymbols)->indexOf(static_cast< int32_t >(c)) != -int32_t(1));
    if(!characterIsValid) {
        throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(u"Invalid name: '"_j)->append(name)
            ->append(u"': first character must be underscore or a letter"_j)->toString());
    }
    allowedSymbols = u"_.\\"_j;
    for(auto ch : *npc(npc(name)->toCharArray_())) {
        characterIsValid = (::java::lang::Character::isLetterOrDigit(ch) || npc(allowedSymbols)->indexOf(static_cast< int32_t >(ch)) != -int32_t(1));
        if(!characterIsValid) {
            throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(u"Invalid name: '"_j)->append(name)
                ->append(u"': name must be letter, digit, period, or underscore"_j)->toString());
        }
    }
    if(npc(name)->matches(u"[A-Za-z]+\\d+"_j)) {
        auto col = npc(name)->replaceAll(u"\\d"_j, u""_j);
        auto row = npc(name)->replaceAll(u"[A-Za-z]"_j, u""_j);
        if(::org::apache::poi::ss::util::CellReference::cellReferenceIsWithinRange(col, row, ::org::apache::poi::ss::SpreadsheetVersion::EXCEL97)) {
            throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(u"Invalid name: '"_j)->append(name)
                ->append(u"': cannot be $A$1-style cell reference"_j)->toString());
        }
    }
    if(npc(name)->matches(u"[Rr]\\d+[Cc]\\d+"_j)) {
        throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(u"Invalid name: '"_j)->append(name)
            ->append(u"': cannot be R1C1-style cell reference"_j)->toString());
    }
}

void org::apache::poi::hssf::usermodel::HSSFName::setRefersToFormula(::java::lang::String* formulaText)
{
    auto ptgs = ::org::apache::poi::hssf::model::HSSFFormulaParser::parse(formulaText, _book, ::org::apache::poi::ss::formula::FormulaType::NAMEDRANGE, getSheetIndex());
    npc(_definedNameRec)->setNameDefinition(ptgs);
}

java::lang::String* org::apache::poi::hssf::usermodel::HSSFName::getRefersToFormula()
{
    if(npc(_definedNameRec)->isFunctionName()) {
        throw new ::java::lang::IllegalStateException(u"Only applicable to named ranges"_j);
    }
    auto ptgs = npc(_definedNameRec)->getNameDefinition();
    if(npc(ptgs)->length < 1) {
        return nullptr;
    }
    return ::org::apache::poi::hssf::model::HSSFFormulaParser::toFormulaString(_book, ptgs);
}

void org::apache::poi::hssf::usermodel::HSSFName::setNameDefinition(::org::apache::poi::ss::formula::ptg::PtgArray* ptgs)
{
    npc(_definedNameRec)->setNameDefinition(ptgs);
}

bool org::apache::poi::hssf::usermodel::HSSFName::isDeleted()
{
    auto ptgs = npc(_definedNameRec)->getNameDefinition();
    return ::org::apache::poi::ss::formula::ptg::Ptg::doesFormulaReferToDeletedCell(ptgs);
}

bool org::apache::poi::hssf::usermodel::HSSFName::isFunctionName()
{
    return npc(_definedNameRec)->isFunctionName();
}

java::lang::String* org::apache::poi::hssf::usermodel::HSSFName::toString()
{
    auto sb = new ::java::lang::StringBuffer(int32_t(64));
    npc(npc(sb)->append(npc(getClass())->getName()))->append(u" ["_j);
    npc(sb)->append(npc(_definedNameRec)->getNameText());
    npc(sb)->append(u"]"_j);
    return npc(sb)->toString();
}

void org::apache::poi::hssf::usermodel::HSSFName::setSheetIndex(int32_t index)
{
    auto lastSheetIx = npc(_book)->getNumberOfSheets() - int32_t(1);
    if(index < -int32_t(1) || index > lastSheetIx) {
        throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(u"Sheet index ("_j)->append(index)
            ->append(u") is out of range"_j)
            ->append((lastSheetIx == -int32_t(1) ? u""_j : (::java::lang::StringBuilder().append(u" (0.."_j)->append(lastSheetIx)
                ->append(u")"_j)->toString())))->toString());
    }
    npc(_definedNameRec)->setSheetNumber(index + int32_t(1));
}

int32_t org::apache::poi::hssf::usermodel::HSSFName::getSheetIndex()
{
    return npc(_definedNameRec)->getSheetNumber() - int32_t(1);
}

java::lang::String* org::apache::poi::hssf::usermodel::HSSFName::getComment()
{
    if(_commentRec != nullptr) {
        if(npc(_commentRec)->getCommentText() != nullptr && npc(npc(_commentRec)->getCommentText())->length() > 0) {
            return npc(_commentRec)->getCommentText();
        }
    }
    return npc(_definedNameRec)->getDescriptionText();
}

void org::apache::poi::hssf::usermodel::HSSFName::setComment(::java::lang::String* comment)
{
    npc(_definedNameRec)->setDescriptionText(comment);
    if(_commentRec != nullptr) {
        npc(_commentRec)->setCommentText(comment);
    }
}

void org::apache::poi::hssf::usermodel::HSSFName::setFunction(bool value)
{
    npc(_definedNameRec)->setFunction(value);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::usermodel::HSSFName::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.usermodel.HSSFName", 38);
    return c;
}

java::lang::Class* org::apache::poi::hssf::usermodel::HSSFName::getClass0()
{
    return class_();
}

