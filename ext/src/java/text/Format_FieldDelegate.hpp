// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/text/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct java::text::Format_FieldDelegate
    : public virtual ::java::lang::Object
{

    virtual void formatted(Format_Field* attr, ::java::lang::Object* value, int32_t start, int32_t end, ::java::lang::StringBuffer* buffer) = 0;
    virtual void formatted(int32_t fieldID, Format_Field* attr, ::java::lang::Object* value, int32_t start, int32_t end, ::java::lang::StringBuffer* buffer) = 0;

    // Generated
    static ::java::lang::Class *class_();
};
