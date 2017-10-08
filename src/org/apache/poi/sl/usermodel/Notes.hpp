// Generated from /POI/java/org/apache/poi/sl/usermodel/Notes.java

#pragma once

#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/sl/usermodel/fwd-POI.hpp>
#include <org/apache/poi/sl/usermodel/Sheet.hpp>

struct poi::sl::usermodel::Notes
    : public virtual Sheet
{
    virtual ::java::util::List* getTextParagraphs() = 0;

    // Generated
    static ::java::lang::Class *class_();
};
