// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/text/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>

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
typedef ::SubArray< ::java::lang::Iterable, ObjectArray > IterableArray;
    } // lang

    namespace text
    {
typedef ::SubArray< ::java::text::AttributedCharacterIterator_Attribute, ::java::lang::ObjectArray, ::java::io::SerializableArray > AttributedCharacterIterator_AttributeArray;
typedef ::SubArray< ::java::text::CharacterIterator, ::java::lang::ObjectArray, ::java::lang::CloneableArray > CharacterIteratorArray;
typedef ::SubArray< ::java::text::AttributedCharacterIterator, ::java::lang::ObjectArray, CharacterIteratorArray > AttributedCharacterIteratorArray;
    } // text

    namespace util
    {
typedef ::SubArray< ::java::util::Collection, ::java::lang::ObjectArray, ::java::lang::IterableArray > CollectionArray;
typedef ::SubArray< ::java::util::AbstractCollection, ::java::lang::ObjectArray, CollectionArray > AbstractCollectionArray;
typedef ::SubArray< ::java::util::List, ::java::lang::ObjectArray, CollectionArray > ListArray;
typedef ::SubArray< ::java::util::AbstractList, AbstractCollectionArray, ListArray > AbstractListArray;
typedef ::SubArray< ::java::util::RandomAccess, ::java::lang::ObjectArray > RandomAccessArray;
typedef ::SubArray< ::java::util::Vector, AbstractListArray, ListArray, RandomAccessArray, ::java::lang::CloneableArray, ::java::io::SerializableArray > VectorArray;
    } // util
} // java

struct default_init_tag;

class java::text::AttributedString
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    static constexpr int32_t ARRAY_SIZE_INCREMENT { int32_t(10) };

public: /* package */
    int32_t runArraySize {  };
    ::java::util::VectorArray* runAttributeValues {  };
    ::java::util::VectorArray* runAttributes {  };
    int32_t runCount {  };
    ::int32_tArray* runStarts {  };
    ::java::lang::String* text {  };

protected:
    void ctor(AttributedCharacterIteratorArray* iterators);
    void ctor(::java::lang::String* text);
    void ctor(AttributedCharacterIterator* text);
    void ctor(::java::lang::String* text, ::java::util::Map* attributes);
    void ctor(AttributedCharacterIterator* text, int32_t beginIndex, int32_t endIndex);
    void ctor(AttributedCharacterIterator* text, int32_t beginIndex, int32_t endIndex, AttributedCharacterIterator_AttributeArray* attributes);

public:
    virtual void addAttribute(AttributedCharacterIterator_Attribute* attribute, ::java::lang::Object* value);
    virtual void addAttribute(AttributedCharacterIterator_Attribute* attribute, ::java::lang::Object* value, int32_t beginIndex, int32_t endIndex);
    /*void addAttributeImpl(AttributedCharacterIterator_Attribute* attribute, ::java::lang::Object* value, int32_t beginIndex, int32_t endIndex); (private) */
    /*void addAttributeRunData(AttributedCharacterIterator_Attribute* attribute, ::java::lang::Object* value, int32_t beginRunIndex, int32_t endRunIndex); (private) */
    virtual void addAttributes(::java::util::Map* attributes, int32_t beginIndex, int32_t endIndex);
    /*void appendContents(::java::lang::StringBuffer* buf, CharacterIterator* iterator); (private) */
    /*bool attributeValuesMatch(::java::util::Set* attributes, int32_t runIndex1, int32_t runIndex2); (private) */
    /*char16_t charAt(int32_t index); (private) */
    /*void createRunAttributeDataVectors(); (private) */
    /*int32_t ensureRunBreak(int32_t offset); (private) */
    /*int32_t ensureRunBreak(int32_t offset, bool copyAttrs); (private) */
    /*::java::lang::Object* getAttribute(AttributedCharacterIterator_Attribute* attribute, int32_t runIndex); (private) */
    /*::java::lang::Object* getAttributeCheckRange(AttributedCharacterIterator_Attribute* attribute, int32_t runIndex, int32_t beginIndex, int32_t endIndex); (private) */
    virtual AttributedCharacterIterator* getIterator();
    virtual AttributedCharacterIterator* getIterator(AttributedCharacterIterator_AttributeArray* attributes);
    virtual AttributedCharacterIterator* getIterator(AttributedCharacterIterator_AttributeArray* attributes, int32_t beginIndex, int32_t endIndex);

public: /* package */
    virtual int32_t length();
    /*static bool mapsDiffer(::java::util::Map* last, ::java::util::Map* attrs); (private) */
    /*void setAttributes(::java::util::Map* attrs, int32_t offset); (private) */
    /*static bool valuesMatch(::java::lang::Object* value1, ::java::lang::Object* value2); (private) */

    // Generated
    AttributedString(AttributedCharacterIteratorArray* iterators);

public:
    AttributedString(::java::lang::String* text);
    AttributedString(AttributedCharacterIterator* text);
    AttributedString(::java::lang::String* text, ::java::util::Map* attributes);
    AttributedString(AttributedCharacterIterator* text, int32_t beginIndex, int32_t endIndex);
    AttributedString(AttributedCharacterIterator* text, int32_t beginIndex, int32_t endIndex, AttributedCharacterIterator_AttributeArray* attributes);
protected:
    AttributedString(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
