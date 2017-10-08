// Generated from /POI/java/org/apache/poi/hssf/usermodel/HSSFDataValidation.java
#include <org/apache/poi/hssf/usermodel/HSSFDataValidation.hpp>

#include <java/io/Serializable.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/IllegalStateException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <org/apache/poi/hssf/record/DVRecord.hpp>
#include <org/apache/poi/hssf/usermodel/DVConstraint_FormulaPair.hpp>
#include <org/apache/poi/hssf/usermodel/DVConstraint.hpp>
#include <org/apache/poi/ss/usermodel/DataValidation_ErrorStyle.hpp>
#include <org/apache/poi/ss/usermodel/DataValidationConstraint_ValidationType.hpp>
#include <org/apache/poi/ss/usermodel/DataValidationConstraint.hpp>
#include <org/apache/poi/ss/util/CellRangeAddressList.hpp>
#include <SubArray.hpp>
#include <ObjectArray.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace io
    {
typedef ::SubArray< ::java::io::Serializable, ::java::lang::ObjectArray > SerializableArray;
    } // io

    namespace lang
    {
typedef ::SubArray< ::java::lang::CharSequence, ObjectArray > CharSequenceArray;
typedef ::SubArray< ::java::lang::Comparable, ObjectArray > ComparableArray;
typedef ::SubArray< ::java::lang::String, ObjectArray, ::java::io::SerializableArray, ComparableArray, CharSequenceArray > StringArray;
    } // lang
} // java

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

poi::hssf::usermodel::HSSFDataValidation::HSSFDataValidation(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::usermodel::HSSFDataValidation::HSSFDataValidation(::poi::ss::util::CellRangeAddressList* regions, ::poi::ss::usermodel::DataValidationConstraint* constraint) 
    : HSSFDataValidation(*static_cast< ::default_init_tag* >(0))
{
    ctor(regions,constraint);
}

void poi::hssf::usermodel::HSSFDataValidation::init()
{
    _errorStyle = ::poi::ss::usermodel::DataValidation_ErrorStyle::STOP;
    _emptyCellAllowed = true;
    _suppress_dropdown_arrow = false;
    _showPromptBox = true;
    _showErrorBox = true;
}

void poi::hssf::usermodel::HSSFDataValidation::ctor(::poi::ss::util::CellRangeAddressList* regions, ::poi::ss::usermodel::DataValidationConstraint* constraint)
{
    super::ctor();
    init();
    _regions = regions;
    _constraint = java_cast< DVConstraint* >(constraint);
}

poi::ss::usermodel::DataValidationConstraint* poi::hssf::usermodel::HSSFDataValidation::getValidationConstraint()
{
    return _constraint;
}

poi::hssf::usermodel::DVConstraint* poi::hssf::usermodel::HSSFDataValidation::getConstraint()
{
    return _constraint;
}

poi::ss::util::CellRangeAddressList* poi::hssf::usermodel::HSSFDataValidation::getRegions()
{
    return _regions;
}

void poi::hssf::usermodel::HSSFDataValidation::setErrorStyle(int32_t error_style)
{
    _errorStyle = error_style;
}

int32_t poi::hssf::usermodel::HSSFDataValidation::getErrorStyle()
{
    return _errorStyle;
}

void poi::hssf::usermodel::HSSFDataValidation::setEmptyCellAllowed(bool allowed)
{
    _emptyCellAllowed = allowed;
}

bool poi::hssf::usermodel::HSSFDataValidation::getEmptyCellAllowed()
{
    return _emptyCellAllowed;
}

void poi::hssf::usermodel::HSSFDataValidation::setSuppressDropDownArrow(bool suppress)
{
    _suppress_dropdown_arrow = suppress;
}

bool poi::hssf::usermodel::HSSFDataValidation::getSuppressDropDownArrow()
{
    if(npc(_constraint)->getValidationType() == ::poi::ss::usermodel::DataValidationConstraint_ValidationType::LIST) {
        return _suppress_dropdown_arrow;
    }
    return false;
}

void poi::hssf::usermodel::HSSFDataValidation::setShowPromptBox(bool show)
{
    _showPromptBox = show;
}

bool poi::hssf::usermodel::HSSFDataValidation::getShowPromptBox()
{
    return _showPromptBox;
}

void poi::hssf::usermodel::HSSFDataValidation::setShowErrorBox(bool show)
{
    _showErrorBox = show;
}

bool poi::hssf::usermodel::HSSFDataValidation::getShowErrorBox()
{
    return _showErrorBox;
}

void poi::hssf::usermodel::HSSFDataValidation::createPromptBox(::java::lang::String* title, ::java::lang::String* text)
{
    if(title != nullptr && npc(title)->length() > 32) {
        throw new ::java::lang::IllegalStateException(::java::lang::StringBuilder().append(u"Prompt-title cannot be longer than 32 characters, but had: "_j)->append(title)->toString());
    }
    if(text != nullptr && npc(text)->length() > 255) {
        throw new ::java::lang::IllegalStateException(::java::lang::StringBuilder().append(u"Prompt-text cannot be longer than 255 characters, but had: "_j)->append(text)->toString());
    }
    _prompt_title = title;
    _prompt_text = text;
    this->setShowPromptBox(true);
}

java::lang::String* poi::hssf::usermodel::HSSFDataValidation::getPromptBoxTitle()
{
    return _prompt_title;
}

java::lang::String* poi::hssf::usermodel::HSSFDataValidation::getPromptBoxText()
{
    return _prompt_text;
}

void poi::hssf::usermodel::HSSFDataValidation::createErrorBox(::java::lang::String* title, ::java::lang::String* text)
{
    if(title != nullptr && npc(title)->length() > 32) {
        throw new ::java::lang::IllegalStateException(::java::lang::StringBuilder().append(u"Error-title cannot be longer than 32 characters, but had: "_j)->append(title)->toString());
    }
    if(text != nullptr && npc(text)->length() > 255) {
        throw new ::java::lang::IllegalStateException(::java::lang::StringBuilder().append(u"Error-text cannot be longer than 255 characters, but had: "_j)->append(text)->toString());
    }
    _error_title = title;
    _error_text = text;
    this->setShowErrorBox(true);
}

java::lang::String* poi::hssf::usermodel::HSSFDataValidation::getErrorBoxTitle()
{
    return _error_title;
}

java::lang::String* poi::hssf::usermodel::HSSFDataValidation::getErrorBoxText()
{
    return _error_text;
}

poi::hssf::record::DVRecord* poi::hssf::usermodel::HSSFDataValidation::createDVRecord(HSSFSheet* sheet)
{
    auto fp = npc(_constraint)->createFormulas(sheet);
    return new ::poi::hssf::record::DVRecord(npc(_constraint)->getValidationType(), npc(_constraint)->getOperator(), _errorStyle, _emptyCellAllowed, getSuppressDropDownArrow(), npc(_constraint)->getValidationType() == ::poi::ss::usermodel::DataValidationConstraint_ValidationType::LIST && npc(_constraint)->getExplicitListValues() != nullptr, _showPromptBox, _prompt_title, _prompt_text, _showErrorBox, _error_title, _error_text, npc(fp)->getFormula1(), npc(fp)->getFormula2(), _regions);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::usermodel::HSSFDataValidation::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.usermodel.HSSFDataValidation", 48);
    return c;
}

java::lang::Class* poi::hssf::usermodel::HSSFDataValidation::getClass0()
{
    return class_();
}

