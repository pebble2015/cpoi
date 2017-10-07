// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/text/fwd-POI.hpp>
#include <java/lang/Cloneable.hpp>

struct java::text::CharacterIterator
    : public virtual ::java::lang::Cloneable
{
    static constexpr char16_t DONE { char16_t(0xffff) };

    /*virtual ::java::lang::Object* clone(); (already declared) */
    virtual char16_t current() = 0;
    virtual char16_t first() = 0;
    virtual int32_t getBeginIndex() = 0;
    virtual int32_t getEndIndex() = 0;
    virtual int32_t getIndex() = 0;
    virtual char16_t last() = 0;
    virtual char16_t next() = 0;
    virtual char16_t previous() = 0;
    virtual char16_t setIndex(int32_t position) = 0;

    // Generated
    static ::java::lang::Class *class_();
};
