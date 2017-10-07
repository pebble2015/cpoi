// Generated from /POI/java/org/apache/poi/hssf/usermodel/HeaderFooter.java
#include <org/apache/poi/hssf/usermodel/HeaderFooter.hpp>

#include <java/io/Serializable.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/Enum.hpp>
#include <java/lang/Math.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <org/apache/poi/hssf/usermodel/HeaderFooter_MarkupTag.hpp>
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
typedef ::SubArray< ::java::lang::Enum, ObjectArray, ComparableArray, ::java::io::SerializableArray > EnumArray;
typedef ::SubArray< ::java::lang::String, ObjectArray, ::java::io::SerializableArray, ComparableArray, CharSequenceArray > StringArray;
    } // lang
} // java

namespace org
{
    namespace apache
    {
        namespace poi
        {
            namespace hssf
            {
                namespace usermodel
                {
typedef ::SubArray< ::org::apache::poi::hssf::usermodel::HeaderFooter_MarkupTag, ::java::lang::EnumArray > HeaderFooter_MarkupTagArray;
                } // usermodel
            } // hssf
        } // poi
    } // apache
} // org

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::hssf::usermodel::HeaderFooter::HeaderFooter(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::usermodel::HeaderFooter::HeaderFooter() 
    : HeaderFooter(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void org::apache::poi::hssf::usermodel::HeaderFooter::ctor()
{
    super::ctor();
}

java::lang::StringArray* org::apache::poi::hssf::usermodel::HeaderFooter::splitParts()
{
    auto text = getRawText();
    auto _left = u""_j;
    auto _center = u""_j;
    auto _right = u""_j;
    while (npc(text)->length() > 1) {
        bool outer0_continue = false;
        if(npc(text)->charAt(int32_t(0)) != u'&') {
            _center = text;
            break;
        }
        auto pos = npc(text)->length();
        switch (npc(text)->charAt(int32_t(1))) {
        case u'L':
            if(npc(text)->contains(u"&C"_j)) {
                pos = ::java::lang::Math::min(pos, npc(text)->indexOf(u"&C"_j));
            }
            if(npc(text)->contains(u"&R"_j)) {
                pos = ::java::lang::Math::min(pos, npc(text)->indexOf(u"&R"_j));
            }
            _left = npc(text)->substring(2, pos);
            text = npc(text)->substring(pos);
            break;
        case u'C':
            if(npc(text)->contains(u"&L"_j)) {
                pos = ::java::lang::Math::min(pos, npc(text)->indexOf(u"&L"_j));
            }
            if(npc(text)->contains(u"&R"_j)) {
                pos = ::java::lang::Math::min(pos, npc(text)->indexOf(u"&R"_j));
            }
            _center = npc(text)->substring(2, pos);
            text = npc(text)->substring(pos);
            break;
        case u'R':
            if(npc(text)->contains(u"&C"_j)) {
                pos = ::java::lang::Math::min(pos, npc(text)->indexOf(u"&C"_j));
            }
            if(npc(text)->contains(u"&L"_j)) {
                pos = ::java::lang::Math::min(pos, npc(text)->indexOf(u"&L"_j));
            }
            _right = npc(text)->substring(2, pos);
            text = npc(text)->substring(pos);
            break;
        default:
            _center = text;
            goto outer0_break;
        }


    }

outer0_break:;
    return new ::java::lang::StringArray({
        _left
        , _center
        , _right
    });
}

java::lang::String* org::apache::poi::hssf::usermodel::HeaderFooter::getLeft()
{
    return (*splitParts())[int32_t(0)];
}

void org::apache::poi::hssf::usermodel::HeaderFooter::setLeft(::java::lang::String* newLeft)
{
    updatePart(0, newLeft);
}

java::lang::String* org::apache::poi::hssf::usermodel::HeaderFooter::getCenter()
{
    return (*splitParts())[int32_t(1)];
}

void org::apache::poi::hssf::usermodel::HeaderFooter::setCenter(::java::lang::String* newCenter)
{
    updatePart(1, newCenter);
}

java::lang::String* org::apache::poi::hssf::usermodel::HeaderFooter::getRight()
{
    return (*splitParts())[int32_t(2)];
}

void org::apache::poi::hssf::usermodel::HeaderFooter::setRight(::java::lang::String* newRight)
{
    updatePart(2, newRight);
}

void org::apache::poi::hssf::usermodel::HeaderFooter::updatePart(int32_t partIndex, ::java::lang::String* newValue)
{
    auto parts = splitParts();
    parts->set(partIndex, newValue == nullptr ? u""_j : newValue);
    updateHeaderFooterText(parts);
}

void org::apache::poi::hssf::usermodel::HeaderFooter::updateHeaderFooterText(::java::lang::StringArray* parts)
{
    auto _left = (*parts)[int32_t(0)];
    auto _center = (*parts)[int32_t(1)];
    auto _right = (*parts)[int32_t(2)];
    if(npc(_center)->length() < 1 && npc(_left)->length() < 1 && npc(_right)->length() < 1) {
        setHeaderFooterText(u""_j);
        return;
    }
    auto sb = new ::java::lang::StringBuilder(int32_t(64));
    npc(sb)->append(u"&C"_j);
    npc(sb)->append(_center);
    npc(sb)->append(u"&L"_j);
    npc(sb)->append(_left);
    npc(sb)->append(u"&R"_j);
    npc(sb)->append(_right);
    auto text = npc(sb)->toString();
    setHeaderFooterText(text);
}

java::lang::String* org::apache::poi::hssf::usermodel::HeaderFooter::fontSize(int16_t size)
{
    clinit();
    return ::java::lang::StringBuilder().append(u"&"_j)->append(size)->toString();
}

java::lang::String* org::apache::poi::hssf::usermodel::HeaderFooter::font(::java::lang::String* font, ::java::lang::String* style)
{
    clinit();
    return ::java::lang::StringBuilder().append(u"&\""_j)->append(font)
        ->append(u","_j)
        ->append(style)
        ->append(u"\""_j)->toString();
}

java::lang::String* org::apache::poi::hssf::usermodel::HeaderFooter::page()
{
    clinit();
    return npc(HeaderFooter_MarkupTag::PAGE_FIELD)->getRepresentation();
}

java::lang::String* org::apache::poi::hssf::usermodel::HeaderFooter::numPages()
{
    clinit();
    return npc(HeaderFooter_MarkupTag::NUM_PAGES_FIELD)->getRepresentation();
}

java::lang::String* org::apache::poi::hssf::usermodel::HeaderFooter::date()
{
    clinit();
    return npc(HeaderFooter_MarkupTag::DATE_FIELD)->getRepresentation();
}

java::lang::String* org::apache::poi::hssf::usermodel::HeaderFooter::time()
{
    clinit();
    return npc(HeaderFooter_MarkupTag::TIME_FIELD)->getRepresentation();
}

java::lang::String* org::apache::poi::hssf::usermodel::HeaderFooter::file()
{
    clinit();
    return npc(HeaderFooter_MarkupTag::FILE_FIELD)->getRepresentation();
}

java::lang::String* org::apache::poi::hssf::usermodel::HeaderFooter::tab()
{
    clinit();
    return npc(HeaderFooter_MarkupTag::SHEET_NAME_FIELD)->getRepresentation();
}

java::lang::String* org::apache::poi::hssf::usermodel::HeaderFooter::startBold()
{
    clinit();
    return npc(HeaderFooter_MarkupTag::BOLD_FIELD)->getRepresentation();
}

java::lang::String* org::apache::poi::hssf::usermodel::HeaderFooter::endBold()
{
    clinit();
    return npc(HeaderFooter_MarkupTag::BOLD_FIELD)->getRepresentation();
}

java::lang::String* org::apache::poi::hssf::usermodel::HeaderFooter::startUnderline()
{
    clinit();
    return npc(HeaderFooter_MarkupTag::UNDERLINE_FIELD)->getRepresentation();
}

java::lang::String* org::apache::poi::hssf::usermodel::HeaderFooter::endUnderline()
{
    clinit();
    return npc(HeaderFooter_MarkupTag::UNDERLINE_FIELD)->getRepresentation();
}

java::lang::String* org::apache::poi::hssf::usermodel::HeaderFooter::startDoubleUnderline()
{
    clinit();
    return npc(HeaderFooter_MarkupTag::DOUBLE_UNDERLINE_FIELD)->getRepresentation();
}

java::lang::String* org::apache::poi::hssf::usermodel::HeaderFooter::endDoubleUnderline()
{
    clinit();
    return npc(HeaderFooter_MarkupTag::DOUBLE_UNDERLINE_FIELD)->getRepresentation();
}

java::lang::String* org::apache::poi::hssf::usermodel::HeaderFooter::stripFields(::java::lang::String* pText)
{
    clinit();
    int32_t pos;
    if(pText == nullptr || npc(pText)->length() == 0) {
        return pText;
    }
    auto text = pText;
    for(auto mt : *npc(HeaderFooter_MarkupTag::values())) {
        auto seq = npc(mt)->getRepresentation();
        while ((pos = npc(text)->indexOf(seq)) >= 0) {
            text = ::java::lang::StringBuilder().append(npc(text)->substring(0, pos))->append(npc(text)->substring(pos + npc(seq)->length()))->toString();
        }
    }
    text = npc(text)->replaceAll(u"\\&\\d+"_j, u""_j);
    text = npc(text)->replaceAll(u"\\&\".*?,.*?\""_j, u""_j);
    return text;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::usermodel::HeaderFooter::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.usermodel.HeaderFooter", 42);
    return c;
}

java::lang::Class* org::apache::poi::hssf::usermodel::HeaderFooter::getClass0()
{
    return class_();
}

