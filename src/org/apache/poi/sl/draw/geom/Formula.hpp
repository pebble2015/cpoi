// Generated from /POI/java/org/apache/poi/sl/draw/geom/Formula.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/sl/draw/geom/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct org::apache::poi::sl::draw::geom::Formula
    : public virtual ::java::lang::Object
{
    static constexpr double OOXML_DEGREE { 60000.0 };
    virtual double evaluate(Context* ctx) = 0;

    // Generated
    static ::java::lang::Class *class_();
};
