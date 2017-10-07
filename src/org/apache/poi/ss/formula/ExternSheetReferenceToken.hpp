// Generated from /POI/java/org/apache/poi/ss/formula/ExternSheetReferenceToken.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct org::apache::poi::ss::formula::ExternSheetReferenceToken
    : public virtual ::java::lang::Object
{
    virtual int32_t getExternSheetIndex() = 0;
    virtual ::java::lang::String* format2DRefAsString() = 0;

    // Generated
    static ::java::lang::Class *class_();
};
