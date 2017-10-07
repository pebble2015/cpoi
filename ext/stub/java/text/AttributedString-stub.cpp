// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/text/AttributedString.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace io
    {
typedef ::SubArray< ::java::io::Serializable, ::java::lang::ObjectArray > SerializableArray;
    } // io

    namespace lang
    {
typedef ::SubArray< ::java::lang::Cloneable, ObjectArray > CloneableArray;
    } // lang

    namespace text
    {
typedef ::SubArray< ::java::text::AttributedCharacterIterator_Attribute, ::java::lang::ObjectArray, ::java::io::SerializableArray > AttributedCharacterIterator_AttributeArray;
typedef ::SubArray< ::java::text::CharacterIterator, ::java::lang::ObjectArray, ::java::lang::CloneableArray > CharacterIteratorArray;
typedef ::SubArray< ::java::text::AttributedCharacterIterator, ::java::lang::ObjectArray, CharacterIteratorArray > AttributedCharacterIteratorArray;
    } // text
} // java

extern void unimplemented_(const char16_t* name);
java::text::AttributedString::AttributedString(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::text::AttributedString::AttributedString(AttributedCharacterIteratorArray* iterators)
    : AttributedString(*static_cast< ::default_init_tag* >(0))
{
    ctor(iterators);
}

java::text::AttributedString::AttributedString(::java::lang::String* text)
    : AttributedString(*static_cast< ::default_init_tag* >(0))
{
    ctor(text);
}

java::text::AttributedString::AttributedString(AttributedCharacterIterator* text)
    : AttributedString(*static_cast< ::default_init_tag* >(0))
{
    ctor(text);
}

java::text::AttributedString::AttributedString(::java::lang::String* text, ::java::util::Map* attributes)
    : AttributedString(*static_cast< ::default_init_tag* >(0))
{
    ctor(text, attributes);
}

java::text::AttributedString::AttributedString(AttributedCharacterIterator* text, int32_t beginIndex, int32_t endIndex)
    : AttributedString(*static_cast< ::default_init_tag* >(0))
{
    ctor(text, beginIndex, endIndex);
}

java::text::AttributedString::AttributedString(AttributedCharacterIterator* text, int32_t beginIndex, int32_t endIndex, AttributedCharacterIterator_AttributeArray* attributes)
    : AttributedString(*static_cast< ::default_init_tag* >(0))
{
    ctor(text, beginIndex, endIndex, attributes);
}

constexpr int32_t java::text::AttributedString::ARRAY_SIZE_INCREMENT;

void ::java::text::AttributedString::ctor(AttributedCharacterIteratorArray* iterators)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::text::AttributedString::ctor(AttributedCharacterIteratorArray* iterators)");
}

void ::java::text::AttributedString::ctor(::java::lang::String* text)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::text::AttributedString::ctor(::java::lang::String* text)");
}

void ::java::text::AttributedString::ctor(AttributedCharacterIterator* text)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::text::AttributedString::ctor(AttributedCharacterIterator* text)");
}

void ::java::text::AttributedString::ctor(::java::lang::String* text, ::java::util::Map* attributes)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::text::AttributedString::ctor(::java::lang::String* text, ::java::util::Map* attributes)");
}

void ::java::text::AttributedString::ctor(AttributedCharacterIterator* text, int32_t beginIndex, int32_t endIndex)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::text::AttributedString::ctor(AttributedCharacterIterator* text, int32_t beginIndex, int32_t endIndex)");
}

void ::java::text::AttributedString::ctor(AttributedCharacterIterator* text, int32_t beginIndex, int32_t endIndex, AttributedCharacterIterator_AttributeArray* attributes)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::text::AttributedString::ctor(AttributedCharacterIterator* text, int32_t beginIndex, int32_t endIndex, AttributedCharacterIterator_AttributeArray* attributes)");
}

void java::text::AttributedString::addAttribute(AttributedCharacterIterator_Attribute* attribute, ::java::lang::Object* value)
{ /* stub */
    unimplemented_(u"void java::text::AttributedString::addAttribute(AttributedCharacterIterator_Attribute* attribute, ::java::lang::Object* value)");
}

void java::text::AttributedString::addAttribute(AttributedCharacterIterator_Attribute* attribute, ::java::lang::Object* value, int32_t beginIndex, int32_t endIndex)
{ /* stub */
    unimplemented_(u"void java::text::AttributedString::addAttribute(AttributedCharacterIterator_Attribute* attribute, ::java::lang::Object* value, int32_t beginIndex, int32_t endIndex)");
}

/* private: void java::text::AttributedString::addAttributeImpl(AttributedCharacterIterator_Attribute* attribute, ::java::lang::Object* value, int32_t beginIndex, int32_t endIndex) */
/* private: void java::text::AttributedString::addAttributeRunData(AttributedCharacterIterator_Attribute* attribute, ::java::lang::Object* value, int32_t beginRunIndex, int32_t endRunIndex) */
void java::text::AttributedString::addAttributes(::java::util::Map* attributes, int32_t beginIndex, int32_t endIndex)
{ /* stub */
    unimplemented_(u"void java::text::AttributedString::addAttributes(::java::util::Map* attributes, int32_t beginIndex, int32_t endIndex)");
}

/* private: void java::text::AttributedString::appendContents(::java::lang::StringBuffer* buf, CharacterIterator* iterator) */
/* private: bool java::text::AttributedString::attributeValuesMatch(::java::util::Set* attributes, int32_t runIndex1, int32_t runIndex2) */
/* private: char16_t java::text::AttributedString::charAt(int32_t index) */
/* private: void java::text::AttributedString::createRunAttributeDataVectors() */
/* private: int32_t java::text::AttributedString::ensureRunBreak(int32_t offset) */
/* private: int32_t java::text::AttributedString::ensureRunBreak(int32_t offset, bool copyAttrs) */
/* private: java::lang::Object* java::text::AttributedString::getAttribute(AttributedCharacterIterator_Attribute* attribute, int32_t runIndex) */
/* private: java::lang::Object* java::text::AttributedString::getAttributeCheckRange(AttributedCharacterIterator_Attribute* attribute, int32_t runIndex, int32_t beginIndex, int32_t endIndex) */
java::text::AttributedCharacterIterator* java::text::AttributedString::getIterator()
{ /* stub */
    unimplemented_(u"java::text::AttributedCharacterIterator* java::text::AttributedString::getIterator()");
    return 0;
}

java::text::AttributedCharacterIterator* java::text::AttributedString::getIterator(AttributedCharacterIterator_AttributeArray* attributes)
{ /* stub */
    unimplemented_(u"java::text::AttributedCharacterIterator* java::text::AttributedString::getIterator(AttributedCharacterIterator_AttributeArray* attributes)");
    return 0;
}

java::text::AttributedCharacterIterator* java::text::AttributedString::getIterator(AttributedCharacterIterator_AttributeArray* attributes, int32_t beginIndex, int32_t endIndex)
{ /* stub */
    unimplemented_(u"java::text::AttributedCharacterIterator* java::text::AttributedString::getIterator(AttributedCharacterIterator_AttributeArray* attributes, int32_t beginIndex, int32_t endIndex)");
    return 0;
}

int32_t java::text::AttributedString::length()
{ /* stub */
    unimplemented_(u"int32_t java::text::AttributedString::length()");
    return 0;
}

/* private: bool java::text::AttributedString::mapsDiffer(::java::util::Map* last, ::java::util::Map* attrs) */
/* private: void java::text::AttributedString::setAttributes(::java::util::Map* attrs, int32_t offset) */
/* private: bool java::text::AttributedString::valuesMatch(::java::lang::Object* value1, ::java::lang::Object* value2) */
extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::text::AttributedString::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.text.AttributedString", 26);
    return c;
}

java::lang::Class* java::text::AttributedString::getClass0()
{
    return class_();
}

