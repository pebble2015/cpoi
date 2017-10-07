// Generated from /POI/java/org/apache/poi/hssf/usermodel/FontDetails.java
#include <org/apache/poi/hssf/usermodel/FontDetails.hpp>

#include <java/io/Serializable.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/Character.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/Integer.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/RuntimeException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/util/HashMap.hpp>
#include <java/util/Map.hpp>
#include <java/util/Properties.hpp>
#include <java/util/StringTokenizer.hpp>
#include <Array.hpp>
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

org::apache::poi::hssf::usermodel::FontDetails::FontDetails(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::usermodel::FontDetails::FontDetails(::java::lang::String* fontName, int32_t height) 
    : FontDetails(*static_cast< ::default_init_tag* >(0))
{
    ctor(fontName,height);
}

void org::apache::poi::hssf::usermodel::FontDetails::init()
{
    charWidths = new ::java::util::HashMap();
}

void org::apache::poi::hssf::usermodel::FontDetails::ctor(::java::lang::String* fontName, int32_t height)
{
    super::ctor();
    init();
    _fontName = fontName;
    _height = height;
}

java::lang::String* org::apache::poi::hssf::usermodel::FontDetails::getFontName()
{
    return _fontName;
}

int32_t org::apache::poi::hssf::usermodel::FontDetails::getHeight()
{
    return _height;
}

void org::apache::poi::hssf::usermodel::FontDetails::addChar(char16_t c, int32_t width)
{
    npc(charWidths)->put(::java::lang::Character::valueOf(c), ::java::lang::Integer::valueOf(width));
}

int32_t org::apache::poi::hssf::usermodel::FontDetails::getCharWidth(char16_t c)
{
    auto widthInteger = java_cast< ::java::lang::Integer* >(npc(charWidths)->get(::java::lang::Character::valueOf(c)));
    if(widthInteger == nullptr) {
        return u'W' == c ? int32_t(0) : getCharWidth(u'W');
    }
    return (npc(widthInteger))->intValue();
}

void org::apache::poi::hssf::usermodel::FontDetails::addChars(::char16_tArray* characters, ::int32_tArray* widths)
{
    for (auto i = int32_t(0); i < npc(characters)->length; i++) {
        npc(charWidths)->put(::java::lang::Character::valueOf((*characters)[i]), ::java::lang::Integer::valueOf((*widths)[i]));
    }
}

java::lang::String* org::apache::poi::hssf::usermodel::FontDetails::buildFontHeightProperty(::java::lang::String* fontName)
{
    clinit();
    return ::java::lang::StringBuilder().append(u"font."_j)->append(fontName)
        ->append(u".height"_j)->toString();
}

java::lang::String* org::apache::poi::hssf::usermodel::FontDetails::buildFontWidthsProperty(::java::lang::String* fontName)
{
    clinit();
    return ::java::lang::StringBuilder().append(u"font."_j)->append(fontName)
        ->append(u".widths"_j)->toString();
}

java::lang::String* org::apache::poi::hssf::usermodel::FontDetails::buildFontCharactersProperty(::java::lang::String* fontName)
{
    clinit();
    return ::java::lang::StringBuilder().append(u"font."_j)->append(fontName)
        ->append(u".characters"_j)->toString();
}

org::apache::poi::hssf::usermodel::FontDetails* org::apache::poi::hssf::usermodel::FontDetails::create(::java::lang::String* fontName, ::java::util::Properties* fontMetricsProps)
{
    clinit();
    auto heightStr = npc(fontMetricsProps)->getProperty(buildFontHeightProperty(fontName));
    auto widthsStr = npc(fontMetricsProps)->getProperty(buildFontWidthsProperty(fontName));
    auto charactersStr = npc(fontMetricsProps)->getProperty(buildFontCharactersProperty(fontName));
    if(heightStr == nullptr || widthsStr == nullptr || charactersStr == nullptr) {
        throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(u"The supplied FontMetrics doesn't know about the font '"_j)->append(fontName)
            ->append(u"', so we can't use it. Please add it to your font metrics file (see StaticFontMetrics.getFontDetails"_j)->toString());
    }
    auto height = ::java::lang::Integer::parseInt(heightStr);
    auto d = new FontDetails(fontName, height);
    auto charactersStrArray_ = split(charactersStr, u","_j, -int32_t(1));
    auto widthsStrArray_ = split(widthsStr, u","_j, -int32_t(1));
    if(npc(charactersStrArray_)->length != npc(widthsStrArray_)->length)
        throw new ::java::lang::RuntimeException(::java::lang::StringBuilder().append(u"Number of characters does not number of widths for font "_j)->append(fontName)->toString());

    for (auto i = int32_t(0); i < npc(widthsStrArray_)->length; i++) {
        if(npc((*charactersStrArray_)[i])->length() != 0)
            npc(d)->addChar(npc((*charactersStrArray_)[i])->charAt(int32_t(0)), ::java::lang::Integer::parseInt((*widthsStrArray_)[i]));

    }
    return d;
}

int32_t org::apache::poi::hssf::usermodel::FontDetails::getStringWidth(::java::lang::String* str)
{
    auto width = int32_t(0);
    for (auto i = int32_t(0); i < npc(str)->length(); i++) {
        width += getCharWidth(npc(str)->charAt(i));
    }
    return width;
}

java::lang::StringArray* org::apache::poi::hssf::usermodel::FontDetails::split(::java::lang::String* text, ::java::lang::String* separator, int32_t max)
{
    clinit();
    auto tok = new ::java::util::StringTokenizer(text, separator);
    auto listSize = npc(tok)->countTokens();
    if(max != -int32_t(1) && listSize > max)
        listSize = max;

    auto list = new ::java::lang::StringArray(listSize);
    for (auto i = int32_t(0); npc(tok)->hasMoreTokens(); i++) {
        if(max != -int32_t(1) && i == listSize - int32_t(1)) {
            auto buf = new ::java::lang::StringBuffer((npc(text)->length() * (listSize - i)) / listSize);
            while (npc(tok)->hasMoreTokens()) {
                npc(buf)->append(npc(tok)->nextToken());
                if(npc(tok)->hasMoreTokens())
                    npc(buf)->append(separator);

            }
            list->set(i, npc(npc(buf)->toString())->trim());
            break;
        }
        list->set(i, npc(npc(tok)->nextToken())->trim());
    }
    return list;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::usermodel::FontDetails::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.usermodel.FontDetails", 41);
    return c;
}

java::lang::Class* org::apache::poi::hssf::usermodel::FontDetails::getClass0()
{
    return class_();
}

