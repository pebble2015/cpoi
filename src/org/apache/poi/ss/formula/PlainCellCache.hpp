// Generated from /POI/java/org/apache/poi/ss/formula/PlainCellCache.java

#pragma once

#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class org::apache::poi::ss::formula::PlainCellCache final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    ::java::util::Map* _plainValueEntriesByLoc {  };
protected:
    void ctor();

public:
    void put(PlainCellCache_Loc* key, PlainValueCellCacheEntry* cce);
    void clear();
    PlainValueCellCacheEntry* get(PlainCellCache_Loc* key);
    void remove(PlainCellCache_Loc* key);

    // Generated
    PlainCellCache();
protected:
    PlainCellCache(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class PlainCellCache_Loc;
};
