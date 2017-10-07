// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/text/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <java/text/AttributedCharacterIterator.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace io
    {
typedef ::SubArray< ::java::io::Serializable, ::java::lang::ObjectArray > SerializableArray;
    } // io

    namespace text
    {
typedef ::SubArray< ::java::text::AttributedCharacterIterator_Attribute, ::java::lang::ObjectArray, ::java::io::SerializableArray > AttributedCharacterIterator_AttributeArray;
    } // text
} // java

struct default_init_tag;

class java::text::AttributedString_AttributedStringIterator final
    : public virtual ::java::lang::Object
    , public AttributedCharacterIterator
{

public:
    typedef ::java::lang::Object super;

private:
    int32_t beginIndex {  };
    int32_t currentIndex {  };
    int32_t currentRunIndex {  };
    int32_t currentRunLimit {  };
    int32_t currentRunStart {  };
    int32_t endIndex {  };
    AttributedCharacterIterator_AttributeArray* relevantAttributes {  };

public: /* package */
    AttributedString* this$0 {  };

protected:
    void ctor(AttributedCharacterIterator_AttributeArray* attributes, int32_t beginIndex, int32_t endIndex);

public:
    ::java::lang::Object* clone() override;
    char16_t current() override;
    bool equals(::java::lang::Object* obj) override;
    char16_t first() override;
    ::java::util::Set* getAllAttributeKeys() override;
    ::java::lang::Object* getAttribute(AttributedCharacterIterator_Attribute* attribute) override;
    ::java::util::Map* getAttributes() override;
    int32_t getBeginIndex() override;
    int32_t getEndIndex() override;
    int32_t getIndex() override;
    int32_t getRunLimit() override;
    int32_t getRunLimit(AttributedCharacterIterator_Attribute* attribute) override;
    int32_t getRunLimit(::java::util::Set* attributes) override;
    int32_t getRunStart() override;
    int32_t getRunStart(AttributedCharacterIterator_Attribute* attribute) override;
    int32_t getRunStart(::java::util::Set* attributes) override;
    /*AttributedString* getString(); (private) */
    int32_t hashCode() override;
    /*char16_t internalSetIndex(int32_t position); (private) */
    char16_t last() override;
    char16_t next() override;
    char16_t previous() override;
    char16_t setIndex(int32_t position) override;
    /*void updateRunInfo(); (private) */

    // Generated

public: /* package */
    AttributedString_AttributedStringIterator(AttributedString *AttributedString_this, AttributedCharacterIterator_AttributeArray* attributes, int32_t beginIndex, int32_t endIndex);
protected:
    AttributedString_AttributedStringIterator(AttributedString *AttributedString_this, const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    AttributedString *AttributedString_this;

private:
    virtual ::java::lang::Class* getClass0();
};
