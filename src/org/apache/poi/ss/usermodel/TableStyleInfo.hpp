// Generated from /POI/java/org/apache/poi/ss/usermodel/TableStyleInfo.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct org::apache::poi::ss::usermodel::TableStyleInfo
    : public virtual ::java::lang::Object
{
    virtual bool isShowColumnStripes() = 0;
    virtual bool isShowRowStripes() = 0;
    virtual bool isShowFirstColumn() = 0;
    virtual bool isShowLastColumn() = 0;
    virtual ::java::lang::String* getName() = 0;
    virtual TableStyle* getStyle() = 0;

    // Generated
    static ::java::lang::Class *class_();
};
