// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/text/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <java/text/CharacterIterator.hpp>

struct java::text::AttributedCharacterIterator
    : public virtual CharacterIterator
{

    virtual ::java::util::Set* getAllAttributeKeys() = 0;
    virtual ::java::lang::Object* getAttribute(AttributedCharacterIterator_Attribute* attribute) = 0;
    virtual ::java::util::Map* getAttributes() = 0;
    virtual int32_t getRunLimit() = 0;
    virtual int32_t getRunLimit(AttributedCharacterIterator_Attribute* attribute) = 0;
    virtual int32_t getRunLimit(::java::util::Set* attributes) = 0;
    virtual int32_t getRunStart() = 0;
    virtual int32_t getRunStart(AttributedCharacterIterator_Attribute* attribute) = 0;
    virtual int32_t getRunStart(::java::util::Set* attributes) = 0;

    // Generated
    static ::java::lang::Class *class_();
};
