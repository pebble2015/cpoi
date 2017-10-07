// Generated from /POI/java/org/apache/poi/ss/util/cellwalk/CellHandler.java

#pragma once

#include <org/apache/poi/ss/usermodel/fwd-POI.hpp>
#include <org/apache/poi/ss/util/cellwalk/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct org::apache::poi::ss::util::cellwalk::CellHandler
    : public virtual ::java::lang::Object
{
    virtual void onCell(::org::apache::poi::ss::usermodel::Cell* cell, CellWalkContext* ctx) = 0;

    // Generated
    static ::java::lang::Class *class_();
};
