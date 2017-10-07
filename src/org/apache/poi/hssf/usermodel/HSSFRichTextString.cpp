// Generated from /POI/java/org/apache/poi/hssf/usermodel/HSSFRichTextString.java
#include <org/apache/poi/hssf/usermodel/HSSFRichTextString.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/util/Iterator.hpp>
#include <org/apache/poi/hssf/model/InternalWorkbook.hpp>
#include <org/apache/poi/hssf/record/LabelSSTRecord.hpp>
#include <org/apache/poi/hssf/record/common/UnicodeString_FormatRun.hpp>
#include <org/apache/poi/hssf/record/common/UnicodeString.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFFont.hpp>
#include <org/apache/poi/ss/usermodel/Font.hpp>

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

org::apache::poi::hssf::usermodel::HSSFRichTextString::HSSFRichTextString(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::usermodel::HSSFRichTextString::HSSFRichTextString() 
    : HSSFRichTextString(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::hssf::usermodel::HSSFRichTextString::HSSFRichTextString(::java::lang::String* string) 
    : HSSFRichTextString(*static_cast< ::default_init_tag* >(0))
{
    ctor(string);
}

org::apache::poi::hssf::usermodel::HSSFRichTextString::HSSFRichTextString(::org::apache::poi::hssf::model::InternalWorkbook* book, ::org::apache::poi::hssf::record::LabelSSTRecord* record) 
    : HSSFRichTextString(*static_cast< ::default_init_tag* >(0))
{
    ctor(book,record);
}

constexpr int16_t org::apache::poi::hssf::usermodel::HSSFRichTextString::NO_FONT;

void org::apache::poi::hssf::usermodel::HSSFRichTextString::ctor()
{
    ctor(u""_j);
}

void org::apache::poi::hssf::usermodel::HSSFRichTextString::ctor(::java::lang::String* string)
{
    super::ctor();
    if(string == nullptr) {
        _string = new ::org::apache::poi::hssf::record::common::UnicodeString(u""_j);
    } else {
        _string = new ::org::apache::poi::hssf::record::common::UnicodeString(string);
    }
}

void org::apache::poi::hssf::usermodel::HSSFRichTextString::ctor(::org::apache::poi::hssf::model::InternalWorkbook* book, ::org::apache::poi::hssf::record::LabelSSTRecord* record)
{
    super::ctor();
    setWorkbookReferences(book, record);
    _string = npc(book)->getSSTString(npc(record)->getSSTIndex());
}

void org::apache::poi::hssf::usermodel::HSSFRichTextString::setWorkbookReferences(::org::apache::poi::hssf::model::InternalWorkbook* book, ::org::apache::poi::hssf::record::LabelSSTRecord* record)
{
    _book = book;
    _record = record;
}

org::apache::poi::hssf::record::common::UnicodeString* org::apache::poi::hssf::usermodel::HSSFRichTextString::cloneStringIfRequired()
{
    if(_book == nullptr)
        return _string;

    auto s = java_cast< ::org::apache::poi::hssf::record::common::UnicodeString* >(npc(_string)->clone());
    return s;
}

void org::apache::poi::hssf::usermodel::HSSFRichTextString::addToSSTIfRequired()
{
    if(_book != nullptr) {
        auto index = npc(_book)->addSSTString(_string);
        npc(_record)->setSSTIndex(index);
        _string = npc(_book)->getSSTString(index);
    }
}

void org::apache::poi::hssf::usermodel::HSSFRichTextString::applyFont(int32_t startIndex, int32_t endIndex, int16_t fontIndex)
{
    if(startIndex > endIndex)
        throw new ::java::lang::IllegalArgumentException(u"Start index must be less than end index."_j);

    if(startIndex < 0 || endIndex > length())
        throw new ::java::lang::IllegalArgumentException(u"Start and end index not in range."_j);

    if(startIndex == endIndex)
        return;

    auto currentFont = HSSFRichTextString::NO_FONT;
    if(endIndex != length()) {
        currentFont = this->getFontAtIndex(endIndex);
    }
    _string = cloneStringIfRequired();
    auto formatting = npc(_string)->formatIterator();
    if(formatting != nullptr) {
        while (npc(formatting)->hasNext()) {
            auto r = java_cast< ::org::apache::poi::hssf::record::common::UnicodeString_FormatRun* >(npc(formatting)->next());
            if((npc(r)->getCharacterPos() >= startIndex) && (npc(r)->getCharacterPos() < endIndex))
                npc(formatting)->remove();

        }
    }
    npc(_string)->addFormatRun(new ::org::apache::poi::hssf::record::common::UnicodeString_FormatRun(static_cast< int16_t >(startIndex), fontIndex));
    if(endIndex != length())
        npc(_string)->addFormatRun(new ::org::apache::poi::hssf::record::common::UnicodeString_FormatRun(static_cast< int16_t >(endIndex), currentFont));

    addToSSTIfRequired();
}

void org::apache::poi::hssf::usermodel::HSSFRichTextString::applyFont(int32_t startIndex, int32_t endIndex, ::org::apache::poi::ss::usermodel::Font* font)
{
    applyFont(startIndex, endIndex, npc((java_cast< HSSFFont* >(font)))->getIndex());
}

void org::apache::poi::hssf::usermodel::HSSFRichTextString::applyFont(::org::apache::poi::ss::usermodel::Font* font)
{
    applyFont(int32_t(0), npc(_string)->getCharCount(), font);
}

void org::apache::poi::hssf::usermodel::HSSFRichTextString::clearFormatting()
{
    _string = cloneStringIfRequired();
    npc(_string)->clearFormatting();
    addToSSTIfRequired();
}

java::lang::String* org::apache::poi::hssf::usermodel::HSSFRichTextString::getString()
{
    return npc(_string)->getString();
}

org::apache::poi::hssf::record::common::UnicodeString* org::apache::poi::hssf::usermodel::HSSFRichTextString::getUnicodeString()
{
    return cloneStringIfRequired();
}

org::apache::poi::hssf::record::common::UnicodeString* org::apache::poi::hssf::usermodel::HSSFRichTextString::getRawUnicodeString()
{
    return _string;
}

void org::apache::poi::hssf::usermodel::HSSFRichTextString::setUnicodeString(::org::apache::poi::hssf::record::common::UnicodeString* str)
{
    this->_string = str;
}

int32_t org::apache::poi::hssf::usermodel::HSSFRichTextString::length()
{
    return npc(_string)->getCharCount();
}

int16_t org::apache::poi::hssf::usermodel::HSSFRichTextString::getFontAtIndex(int32_t index)
{
    auto size = npc(_string)->getFormatRunCount();
    ::org::apache::poi::hssf::record::common::UnicodeString_FormatRun* currentRun = nullptr;
    for (auto i = int32_t(0); i < size; i++) {
        auto r = npc(_string)->getFormatRun(i);
        if(npc(r)->getCharacterPos() > index) {
            break;
        }
        currentRun = r;
    }
    if(currentRun == nullptr) {
        return NO_FONT;
    }
    return npc(currentRun)->getFontIndex();
}

int32_t org::apache::poi::hssf::usermodel::HSSFRichTextString::numFormattingRuns()
{
    return npc(_string)->getFormatRunCount();
}

int32_t org::apache::poi::hssf::usermodel::HSSFRichTextString::getIndexOfFormattingRun(int32_t index)
{
    auto r = npc(_string)->getFormatRun(index);
    return npc(r)->getCharacterPos();
}

int16_t org::apache::poi::hssf::usermodel::HSSFRichTextString::getFontOfFormattingRun(int32_t index)
{
    auto r = npc(_string)->getFormatRun(index);
    return npc(r)->getFontIndex();
}

int32_t org::apache::poi::hssf::usermodel::HSSFRichTextString::compareTo(HSSFRichTextString* r)
{
    return npc(_string)->compareTo(npc(r)->_string);
}

int32_t org::apache::poi::hssf::usermodel::HSSFRichTextString::compareTo(::java::lang::Object* o)
{ 
    return compareTo(dynamic_cast< HSSFRichTextString* >(o));
}

bool org::apache::poi::hssf::usermodel::HSSFRichTextString::equals(::java::lang::Object* o)
{
    if(dynamic_cast< HSSFRichTextString* >(o) != nullptr) {
        return npc(_string)->equals(static_cast< ::java::lang::Object* >(npc((java_cast< HSSFRichTextString* >(o)))->_string));
    }
    return false;
}

int32_t org::apache::poi::hssf::usermodel::HSSFRichTextString::hashCode()
{
    /* assert(false : u"hashCode not designed"_j) */ ;
    return 42;
}

java::lang::String* org::apache::poi::hssf::usermodel::HSSFRichTextString::toString()
{
    return npc(_string)->toString();
}

void org::apache::poi::hssf::usermodel::HSSFRichTextString::applyFont(int16_t fontIndex)
{
    applyFont(int32_t(0), npc(_string)->getCharCount(), fontIndex);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::usermodel::HSSFRichTextString::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.usermodel.HSSFRichTextString", 48);
    return c;
}

java::lang::Class* org::apache::poi::hssf::usermodel::HSSFRichTextString::getClass0()
{
    return class_();
}

