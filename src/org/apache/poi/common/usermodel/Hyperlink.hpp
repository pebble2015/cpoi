// Generated from /POI/java/org/apache/poi/common/usermodel/Hyperlink.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/common/usermodel/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct org::apache::poi::common::usermodel::Hyperlink
    : public virtual ::java::lang::Object
{
    virtual ::java::lang::String* getAddress() = 0;
    virtual void setAddress(::java::lang::String* address) = 0;
    virtual ::java::lang::String* getLabel() = 0;
    virtual void setLabel(::java::lang::String* label) = 0;
    virtual int32_t getType() = 0;
    virtual HyperlinkType* getTypeEnum() = 0;

    // Generated
    static ::java::lang::Class *class_();
};
