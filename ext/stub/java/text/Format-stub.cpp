// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/text/Format.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace lang
    {
typedef ::SubArray< ::java::lang::Cloneable, ObjectArray > CloneableArray;
    } // lang

    namespace text
    {
typedef ::SubArray< ::java::text::CharacterIterator, ::java::lang::ObjectArray, ::java::lang::CloneableArray > CharacterIteratorArray;
typedef ::SubArray< ::java::text::AttributedCharacterIterator, ::java::lang::ObjectArray, CharacterIteratorArray > AttributedCharacterIteratorArray;
    } // text
} // java

extern void unimplemented_(const char16_t* name);
java::text::Format::Format(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::text::Format::Format()
    : Format(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

constexpr int64_t java::text::Format::serialVersionUID;

void ::java::text::Format::ctor()
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::text::Format::ctor()");
}

java::lang::Object* java::text::Format::clone()
{ /* stub */
    unimplemented_(u"java::lang::Object* java::text::Format::clone()");
    return 0;
}

java::text::AttributedCharacterIterator* java::text::Format::createAttributedCharacterIterator(::java::lang::String* s)
{ /* stub */
    unimplemented_(u"java::text::AttributedCharacterIterator* java::text::Format::createAttributedCharacterIterator(::java::lang::String* s)");
    return 0;
}

java::text::AttributedCharacterIterator* java::text::Format::createAttributedCharacterIterator(AttributedCharacterIteratorArray* iterators)
{ /* stub */
    unimplemented_(u"java::text::AttributedCharacterIterator* java::text::Format::createAttributedCharacterIterator(AttributedCharacterIteratorArray* iterators)");
    return 0;
}

java::text::AttributedCharacterIterator* java::text::Format::createAttributedCharacterIterator(::java::lang::String* string, AttributedCharacterIterator_Attribute* key, ::java::lang::Object* value)
{ /* stub */
    unimplemented_(u"java::text::AttributedCharacterIterator* java::text::Format::createAttributedCharacterIterator(::java::lang::String* string, AttributedCharacterIterator_Attribute* key, ::java::lang::Object* value)");
    return 0;
}

java::text::AttributedCharacterIterator* java::text::Format::createAttributedCharacterIterator(AttributedCharacterIterator* iterator, AttributedCharacterIterator_Attribute* key, ::java::lang::Object* value)
{ /* stub */
    unimplemented_(u"java::text::AttributedCharacterIterator* java::text::Format::createAttributedCharacterIterator(AttributedCharacterIterator* iterator, AttributedCharacterIterator_Attribute* key, ::java::lang::Object* value)");
    return 0;
}

java::lang::String* java::text::Format::format(::java::lang::Object* obj)
{ /* stub */
    unimplemented_(u"java::lang::String* java::text::Format::format(::java::lang::Object* obj)");
    return 0;
}

java::text::AttributedCharacterIterator* java::text::Format::formatToCharacterIterator(::java::lang::Object* obj)
{ /* stub */
    unimplemented_(u"java::text::AttributedCharacterIterator* java::text::Format::formatToCharacterIterator(::java::lang::Object* obj)");
    return 0;
}

java::lang::Object* java::text::Format::parseObject(::java::lang::String* source)
{ /* stub */
    unimplemented_(u"java::lang::Object* java::text::Format::parseObject(::java::lang::String* source)");
    return 0;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::text::Format::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.text.Format", 16);
    return c;
}

java::lang::Class* java::text::Format::getClass0()
{
    return class_();
}

