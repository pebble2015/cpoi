// Generated from /POI/java/org/apache/poi/ss/formula/udf/UDFFinder.java

#pragma once

#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/functions/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/udf/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct poi::ss::formula::udf::UDFFinder
    : public virtual ::java::lang::Object
{

private:
    static UDFFinder* DEFAULT_;

public:
    virtual ::poi::ss::formula::functions::FreeRefFunction* findFunction(::java::lang::String* name) = 0;

    // Generated
    static ::java::lang::Class *class_();
    static UDFFinder*& DEFAULT();
};
