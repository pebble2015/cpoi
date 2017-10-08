// Generated from /POI/java/org/apache/poi/hssf/usermodel/HSSFFont.java
#include <org/apache/poi/hssf/usermodel/HSSFFont.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <org/apache/poi/hssf/record/FontRecord.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFPalette.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFWorkbook.hpp>
#include <org/apache/poi/hssf/util/HSSFColor.hpp>

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

poi::hssf::usermodel::HSSFFont::HSSFFont(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::usermodel::HSSFFont::HSSFFont(int16_t index, ::poi::hssf::record::FontRecord* rec) 
    : HSSFFont(*static_cast< ::default_init_tag* >(0))
{
    ctor(index,rec);
}

constexpr int16_t poi::hssf::usermodel::HSSFFont::BOLDWEIGHT_NORMAL;

constexpr int16_t poi::hssf::usermodel::HSSFFont::BOLDWEIGHT_BOLD;

java::lang::String*& poi::hssf::usermodel::HSSFFont::FONT_ARIAL()
{
    clinit();
    return FONT_ARIAL_;
}
java::lang::String* poi::hssf::usermodel::HSSFFont::FONT_ARIAL_;

void poi::hssf::usermodel::HSSFFont::ctor(int16_t index, ::poi::hssf::record::FontRecord* rec)
{
    super::ctor();
    font = rec;
    this->index = index;
}

void poi::hssf::usermodel::HSSFFont::setFontName(::java::lang::String* name)
{
    npc(font)->setFontName(name);
}

java::lang::String* poi::hssf::usermodel::HSSFFont::getFontName()
{
    return npc(font)->getFontName();
}

int16_t poi::hssf::usermodel::HSSFFont::getIndex()
{
    return index;
}

void poi::hssf::usermodel::HSSFFont::setFontHeight(int16_t height)
{
    npc(font)->setFontHeight(height);
}

void poi::hssf::usermodel::HSSFFont::setFontHeightInPoints(int16_t height)
{
    npc(font)->setFontHeight(static_cast< int16_t >((height * int32_t(20))));
}

int16_t poi::hssf::usermodel::HSSFFont::getFontHeight()
{
    return npc(font)->getFontHeight();
}

int16_t poi::hssf::usermodel::HSSFFont::getFontHeightInPoints()
{
    return static_cast< int16_t >((npc(font)->getFontHeight() / int32_t(20)));
}

void poi::hssf::usermodel::HSSFFont::setItalic(bool italic)
{
    npc(font)->setItalic(italic);
}

bool poi::hssf::usermodel::HSSFFont::getItalic()
{
    return npc(font)->isItalic();
}

void poi::hssf::usermodel::HSSFFont::setStrikeout(bool strikeout)
{
    npc(font)->setStrikeout(strikeout);
}

bool poi::hssf::usermodel::HSSFFont::getStrikeout()
{
    return npc(font)->isStruckout();
}

void poi::hssf::usermodel::HSSFFont::setColor(int16_t color)
{
    npc(font)->setColorPaletteIndex(color);
}

int16_t poi::hssf::usermodel::HSSFFont::getColor()
{
    return npc(font)->getColorPaletteIndex();
}

poi::hssf::util::HSSFColor* poi::hssf::usermodel::HSSFFont::getHSSFColor(HSSFWorkbook* wb)
{
    auto pallette = npc(wb)->getCustomPalette();
    return npc(pallette)->getColor(getColor());
}

void poi::hssf::usermodel::HSSFFont::setBold(bool bold)
{
    if(bold)
        npc(font)->setBoldWeight(BOLDWEIGHT_BOLD);
    else
        npc(font)->setBoldWeight(BOLDWEIGHT_NORMAL);
}

bool poi::hssf::usermodel::HSSFFont::getBold()
{
    return npc(font)->getBoldWeight() == BOLDWEIGHT_BOLD;
}

void poi::hssf::usermodel::HSSFFont::setTypeOffset(int16_t offset)
{
    npc(font)->setSuperSubScript(offset);
}

int16_t poi::hssf::usermodel::HSSFFont::getTypeOffset()
{
    return npc(font)->getSuperSubScript();
}

void poi::hssf::usermodel::HSSFFont::setUnderline(int8_t underline)
{
    npc(font)->setUnderline(underline);
}

int8_t poi::hssf::usermodel::HSSFFont::getUnderline()
{
    return npc(font)->getUnderline();
}

int32_t poi::hssf::usermodel::HSSFFont::getCharSet()
{
    auto charset = npc(font)->getCharset();
    if(charset >= 0) {
        return charset;
    } else {
        return charset + int32_t(256);
    }
}

void poi::hssf::usermodel::HSSFFont::setCharSet(int32_t charset)
{
    auto cs = static_cast< int8_t >(charset);
    if(charset > 127) {
        cs = static_cast< int8_t >((charset - int32_t(256)));
    }
    setCharSet(cs);
}

void poi::hssf::usermodel::HSSFFont::setCharSet(int8_t charset)
{
    npc(font)->setCharset(charset);
}

java::lang::String* poi::hssf::usermodel::HSSFFont::toString()
{
    return ::java::lang::StringBuilder().append(u"org.apache.poi.hssf.usermodel.HSSFFont{"_j)->append(static_cast< ::java::lang::Object* >(font))
        ->append(u"}"_j)->toString();
}

int32_t poi::hssf::usermodel::HSSFFont::hashCode()
{
    auto const prime = int32_t(31);
    auto result = int32_t(1);
    result = prime * result + ((font == nullptr) ? int32_t(0) : npc(font)->hashCode());
    result = prime * result + index;
    return result;
}

bool poi::hssf::usermodel::HSSFFont::equals(::java::lang::Object* obj)
{
    if(static_cast< ::java::lang::Object* >(this) == obj)
        return true;

    if(obj == nullptr)
        return false;

    if(dynamic_cast< HSSFFont* >(obj) != nullptr) {
        auto const other = java_cast< HSSFFont* >(obj);
        if(font == nullptr) {
            if(npc(other)->font != nullptr)
                return false;

        } else if(!npc(font)->equals(static_cast< ::java::lang::Object* >(npc(other)->font)))
            return false;

        if(index != npc(other)->index)
            return false;

        return true;
    }
    return false;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::usermodel::HSSFFont::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.usermodel.HSSFFont", 38);
    return c;
}

void poi::hssf::usermodel::HSSFFont::clinit()
{
struct string_init_ {
    string_init_() {
    FONT_ARIAL_ = u"Arial"_j;
    }
};

    static string_init_ string_init_instance;

    super::clinit();
}

java::lang::Class* poi::hssf::usermodel::HSSFFont::getClass0()
{
    return class_();
}

