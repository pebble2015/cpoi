// Generated from /POI/java/org/apache/poi/ss/formula/ptg/Pxg3D.java

#pragma once

#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/ptg/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/ptg/Pxg.hpp>

struct poi::ss::formula::ptg::Pxg3D
    : public virtual Pxg
{
    virtual ::java::lang::String* getLastSheetName() = 0;
    virtual void setLastSheetName(::java::lang::String* sheetName) = 0;

    // Generated
    static ::java::lang::Class *class_();
};
