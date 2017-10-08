// Generated from /POI/java/org/apache/poi/ss/format/CellFormatPart.java

#pragma once

#include <java/lang/fwd-POI.hpp>
#include <java/util/regex/fwd-POI.hpp>
#include <org/apache/poi/ss/format/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct poi::ss::format::CellFormatPart_PartHandler
    : public virtual ::java::lang::Object
{
    virtual ::java::lang::String* handlePart(::java::util::regex::Matcher* m, ::java::lang::String* part, CellFormatType* type, ::java::lang::StringBuffer* desc) = 0;

    // Generated
    static ::java::lang::Class *class_();
};
