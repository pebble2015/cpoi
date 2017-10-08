// Generated from /POI/java/org/apache/poi/ss/formula/FormulaCellCache.java

#pragma once

#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/fwd-POI.hpp>
#include <java/lang/Object.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace poi
{
    namespace ss
    {
        namespace formula
        {
typedef ::SubArray< ::poi::ss::formula::IEvaluationListener_ICacheEntry, ::java::lang::ObjectArray > IEvaluationListener_ICacheEntryArray;
typedef ::SubArray< ::poi::ss::formula::CellCacheEntry, ::java::lang::ObjectArray, IEvaluationListener_ICacheEntryArray > CellCacheEntryArray;
        } // formula
    } // ss
} // poi

struct default_init_tag;

class poi::ss::formula::FormulaCellCache final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    ::java::util::Map* _formulaEntriesByCell {  };
protected:
    void ctor();

public:
    CellCacheEntryArray* getCacheEntries();
    void clear();
    FormulaCellCacheEntry* get(EvaluationCell* cell);
    void put(EvaluationCell* cell, FormulaCellCacheEntry* entry);
    FormulaCellCacheEntry* remove(EvaluationCell* cell);
    void applyOperation(FormulaCellCache_IEntryOperation* operation);

    // Generated
    FormulaCellCache();
protected:
    FormulaCellCache(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class FormulaCellCache_IEntryOperation;
};
