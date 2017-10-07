// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct java::util::Map_Entry
    : public virtual ::java::lang::Object
{

    static Comparator* comparingByKey();
    static Comparator* comparingByKey(Comparator* cmp);
    static Comparator* comparingByValue();
    static Comparator* comparingByValue(Comparator* cmp);
    /*virtual bool equals(::java::lang::Object* o); (already declared) */
    virtual ::java::lang::Object* getKey() = 0;
    virtual ::java::lang::Object* getValue() = 0;
    /*virtual int32_t hashCode(); (already declared) */
    virtual ::java::lang::Object* setValue(::java::lang::Object* value) = 0;

    // Generated
    static ::java::lang::Class *class_();
};
