// Generated from /POI/java/org/apache/poi/ss/formula/PlainCellCache.java
#include <org/apache/poi/ss/formula/PlainCellCache.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/util/HashMap.hpp>
#include <java/util/Map.hpp>
#include <org/apache/poi/ss/formula/PlainCellCache_Loc.hpp>
#include <org/apache/poi/ss/formula/PlainValueCellCacheEntry.hpp>

template<typename T, typename U>
static T java_cast(U* u)
{
    if(!u) return static_cast<T>(nullptr);
    auto t = dynamic_cast<T>(u);
    if(!t) throw new ::java::lang::ClassCastException();
    return t;
}

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::ss::formula::PlainCellCache::PlainCellCache(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::formula::PlainCellCache::PlainCellCache() 
    : PlainCellCache(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void poi::ss::formula::PlainCellCache::ctor()
{
    super::ctor();
    _plainValueEntriesByLoc = new ::java::util::HashMap();
}

void poi::ss::formula::PlainCellCache::put(PlainCellCache_Loc* key, PlainValueCellCacheEntry* cce)
{
    npc(_plainValueEntriesByLoc)->put(key, cce);
}

void poi::ss::formula::PlainCellCache::clear()
{
    npc(_plainValueEntriesByLoc)->clear();
}

poi::ss::formula::PlainValueCellCacheEntry* poi::ss::formula::PlainCellCache::get(PlainCellCache_Loc* key)
{
    return java_cast< PlainValueCellCacheEntry* >(npc(_plainValueEntriesByLoc)->get(key));
}

void poi::ss::formula::PlainCellCache::remove(PlainCellCache_Loc* key)
{
    npc(_plainValueEntriesByLoc)->remove(key);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::PlainCellCache::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.PlainCellCache", 40);
    return c;
}

java::lang::Class* poi::ss::formula::PlainCellCache::getClass0()
{
    return class_();
}

