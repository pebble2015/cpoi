// Generated from /POI/java/org/apache/poi/ss/formula/FormulaCellCache.java

#pragma once

#include <org/apache/poi/ss/formula/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct poi::ss::formula::FormulaCellCache_IEntryOperation
    : public virtual ::java::lang::Object
{
    virtual void processEntry(FormulaCellCacheEntry* entry) = 0;

    // Generated
    static ::java::lang::Class *class_();
};
