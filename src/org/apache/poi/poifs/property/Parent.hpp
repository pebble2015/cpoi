// Generated from /POI/java/org/apache/poi/poifs/property/Parent.java

#pragma once

#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/poifs/property/fwd-POI.hpp>
#include <org/apache/poi/poifs/property/Child.hpp>
#include <java/lang/Iterable.hpp>

struct poi::poifs::property::Parent
    : public virtual Child
    , public virtual ::java::lang::Iterable
{
    virtual ::java::util::Iterator* getChildren() = 0;
    virtual void addChild(Property* property) /* throws(IOException) */ = 0;
    /*void setPreviousChild(Child* child); (already declared) */
    /*void setNextChild(Child* child); (already declared) */

    // Generated
    static ::java::lang::Class *class_();
};
