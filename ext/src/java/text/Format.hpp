// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/text/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <java/io/Serializable.hpp>
#include <java/lang/Cloneable.hpp>

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

struct default_init_tag;

class java::text::Format
    : public virtual ::java::lang::Object
    , public virtual ::java::io::Serializable
    , public virtual ::java::lang::Cloneable
{

public:
    typedef ::java::lang::Object super;

private:
    static constexpr int64_t serialVersionUID { int64_t(-299282585814624189LL) };

protected:
    void ctor();

public:
    ::java::lang::Object* clone() override;

public: /* package */
    virtual AttributedCharacterIterator* createAttributedCharacterIterator(::java::lang::String* s);
    virtual AttributedCharacterIterator* createAttributedCharacterIterator(AttributedCharacterIteratorArray* iterators);
    virtual AttributedCharacterIterator* createAttributedCharacterIterator(::java::lang::String* string, AttributedCharacterIterator_Attribute* key, ::java::lang::Object* value);
    virtual AttributedCharacterIterator* createAttributedCharacterIterator(AttributedCharacterIterator* iterator, AttributedCharacterIterator_Attribute* key, ::java::lang::Object* value);

public:
    ::java::lang::String* format(::java::lang::Object* obj);
    virtual ::java::lang::StringBuffer* format(::java::lang::Object* obj, ::java::lang::StringBuffer* toAppendTo, FieldPosition* pos) = 0;
    virtual AttributedCharacterIterator* formatToCharacterIterator(::java::lang::Object* obj);
    virtual ::java::lang::Object* parseObject(::java::lang::String* source);
    virtual ::java::lang::Object* parseObject(::java::lang::String* source, ParsePosition* pos) = 0;

    // Generated

public: /* protected */
    Format();
protected:
    Format(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
