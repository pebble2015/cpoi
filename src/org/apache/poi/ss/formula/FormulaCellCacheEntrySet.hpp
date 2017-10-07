// Generated from /POI/java/org/apache/poi/ss/formula/FormulaCellCacheEntrySet.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/fwd-POI.hpp>
#include <java/lang/Object.hpp>

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

struct default_init_tag;

class org::apache::poi::ss::formula::FormulaCellCacheEntrySet final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    static FormulaCellCacheEntryArray* EMPTY_ARRAY_;
    int32_t _size {  };
    FormulaCellCacheEntryArray* _arr {  };
protected:
    void ctor();

public:
    FormulaCellCacheEntryArray* toArray_();
    void add(CellCacheEntry* cce);

private:
    static bool addInternal(CellCacheEntryArray* arr, CellCacheEntry* cce);

public:
    bool remove(CellCacheEntry* cce);

    // Generated
    FormulaCellCacheEntrySet();
protected:
    FormulaCellCacheEntrySet(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    static FormulaCellCacheEntryArray*& EMPTY_ARRAY();
    virtual ::java::lang::Class* getClass0();
};
