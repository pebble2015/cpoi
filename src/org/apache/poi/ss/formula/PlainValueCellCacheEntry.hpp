// Generated from /POI/java/org/apache/poi/ss/formula/PlainValueCellCacheEntry.java

#pragma once

#include <org/apache/poi/ss/formula/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/eval/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/CellCacheEntry.hpp>

struct default_init_tag;

class org::apache::poi::ss::formula::PlainValueCellCacheEntry final
    : public CellCacheEntry
{

public:
    typedef CellCacheEntry super;
protected:
    void ctor(::org::apache::poi::ss::formula::eval::ValueEval* value);

    // Generated

public:
    PlainValueCellCacheEntry(::org::apache::poi::ss::formula::eval::ValueEval* value);
protected:
    PlainValueCellCacheEntry(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
