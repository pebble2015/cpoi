// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <java/util/EnumMap_EnumMapIterator.hpp>

struct default_init_tag;

class java::util::EnumMap_ValueIterator
    : public EnumMap_EnumMapIterator
{

public:
    typedef EnumMap_EnumMapIterator super;

public: /* package */
    EnumMap* this$0 {  };

    /*void ctor(); (private) */

public:
    ::java::lang::Object* next() override;

    // Generated
    EnumMap_ValueIterator(EnumMap *EnumMap_this);
protected:
    EnumMap_ValueIterator(EnumMap *EnumMap_this, const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
