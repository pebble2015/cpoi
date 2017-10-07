// Generated from /POI/java/org/apache/poi/ss/formula/FormulaCellCache.java
#include <org/apache/poi/ss/formula/FormulaCellCache.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/util/Collection.hpp>
#include <java/util/HashMap.hpp>
#include <java/util/Iterator.hpp>
#include <java/util/Map.hpp>
#include <org/apache/poi/ss/formula/CellCacheEntry.hpp>
#include <org/apache/poi/ss/formula/EvaluationCell.hpp>
#include <org/apache/poi/ss/formula/FormulaCellCache_IEntryOperation.hpp>
#include <org/apache/poi/ss/formula/FormulaCellCacheEntry.hpp>
#include <org/apache/poi/ss/formula/IEvaluationListener_ICacheEntry.hpp>
#include <ObjectArray.hpp>
#include <SubArray.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace org
{
    namespace apache
    {
        namespace poi
        {
            namespace ss
            {
                namespace formula
                {
typedef ::SubArray< ::org::apache::poi::ss::formula::IEvaluationListener_ICacheEntry, ::java::lang::ObjectArray > IEvaluationListener_ICacheEntryArray;
typedef ::SubArray< ::org::apache::poi::ss::formula::CellCacheEntry, ::java::lang::ObjectArray, IEvaluationListener_ICacheEntryArray > CellCacheEntryArray;
typedef ::SubArray< ::org::apache::poi::ss::formula::FormulaCellCacheEntry, CellCacheEntryArray > FormulaCellCacheEntryArray;
                } // formula
            } // ss
        } // poi
    } // apache
} // org

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

org::apache::poi::ss::formula::FormulaCellCache::FormulaCellCache(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::formula::FormulaCellCache::FormulaCellCache() 
    : FormulaCellCache(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void org::apache::poi::ss::formula::FormulaCellCache::ctor()
{
    super::ctor();
    _formulaEntriesByCell = new ::java::util::HashMap();
}

org::apache::poi::ss::formula::CellCacheEntryArray* org::apache::poi::ss::formula::FormulaCellCache::getCacheEntries()
{
    auto result = new FormulaCellCacheEntryArray(npc(_formulaEntriesByCell)->size());
    npc(npc(_formulaEntriesByCell)->values())->toArray_(result);
    return result;
}

void org::apache::poi::ss::formula::FormulaCellCache::clear()
{
    npc(_formulaEntriesByCell)->clear();
}

org::apache::poi::ss::formula::FormulaCellCacheEntry* org::apache::poi::ss::formula::FormulaCellCache::get(EvaluationCell* cell)
{
    return java_cast< FormulaCellCacheEntry* >(npc(_formulaEntriesByCell)->get(npc(cell)->getIdentityKey()));
}

void org::apache::poi::ss::formula::FormulaCellCache::put(EvaluationCell* cell, FormulaCellCacheEntry* entry)
{
    npc(_formulaEntriesByCell)->put(npc(cell)->getIdentityKey(), entry);
}

org::apache::poi::ss::formula::FormulaCellCacheEntry* org::apache::poi::ss::formula::FormulaCellCache::remove(EvaluationCell* cell)
{
    return java_cast< FormulaCellCacheEntry* >(npc(_formulaEntriesByCell)->remove(npc(cell)->getIdentityKey()));
}

void org::apache::poi::ss::formula::FormulaCellCache::applyOperation(FormulaCellCache_IEntryOperation* operation)
{
    auto i = npc(npc(_formulaEntriesByCell)->values())->iterator();
    while (npc(i)->hasNext()) {
        npc(operation)->processEntry(java_cast< FormulaCellCacheEntry* >(npc(i)->next()));
    }
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::formula::FormulaCellCache::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.FormulaCellCache", 42);
    return c;
}

java::lang::Class* org::apache::poi::ss::formula::FormulaCellCache::getClass0()
{
    return class_();
}

