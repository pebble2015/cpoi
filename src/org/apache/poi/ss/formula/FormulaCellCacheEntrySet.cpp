// Generated from /POI/java/org/apache/poi/ss/formula/FormulaCellCacheEntrySet.java
#include <org/apache/poi/ss/formula/FormulaCellCacheEntrySet.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/IllegalStateException.hpp>
#include <java/lang/Math.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <org/apache/poi/ss/formula/CellCacheEntry.hpp>
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

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::ss::formula::FormulaCellCacheEntrySet::FormulaCellCacheEntrySet(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::formula::FormulaCellCacheEntrySet::FormulaCellCacheEntrySet() 
    : FormulaCellCacheEntrySet(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::ss::formula::FormulaCellCacheEntryArray*& org::apache::poi::ss::formula::FormulaCellCacheEntrySet::EMPTY_ARRAY()
{
    clinit();
    return EMPTY_ARRAY_;
}
org::apache::poi::ss::formula::FormulaCellCacheEntryArray* org::apache::poi::ss::formula::FormulaCellCacheEntrySet::EMPTY_ARRAY_;

void org::apache::poi::ss::formula::FormulaCellCacheEntrySet::ctor()
{
    super::ctor();
    _arr = EMPTY_ARRAY_;
}

org::apache::poi::ss::formula::FormulaCellCacheEntryArray* org::apache::poi::ss::formula::FormulaCellCacheEntrySet::toArray_()
{
    auto nItems = _size;
    if(nItems < 1) {
        return EMPTY_ARRAY_;
    }
    auto result = new FormulaCellCacheEntryArray(nItems);
    auto j = int32_t(0);
    for (auto i = int32_t(0); i < npc(_arr)->length; i++) {
        auto cce = (*_arr)[i];
        if(cce != nullptr) {
            result->set(j++, cce);
        }
    }
    if(j != nItems) {
        throw new ::java::lang::IllegalStateException(u"size mismatch"_j);
    }
    return result;
}

void org::apache::poi::ss::formula::FormulaCellCacheEntrySet::add(CellCacheEntry* cce)
{
    if(_size * int32_t(3) >= npc(_arr)->length * int32_t(2)) {
        auto prevArr = _arr;
        auto newArr = new FormulaCellCacheEntryArray(int32_t(4) + npc(_arr)->length * int32_t(3) / int32_t(2));
        for (auto i = int32_t(0); i < npc(prevArr)->length; i++) {
            auto prevCce = (*_arr)[i];
            if(prevCce != nullptr) {
                addInternal(newArr, prevCce);
            }
        }
        _arr = newArr;
    }
    if(addInternal(_arr, cce)) {
        _size++;
    }
}

bool org::apache::poi::ss::formula::FormulaCellCacheEntrySet::addInternal(CellCacheEntryArray* arr, CellCacheEntry* cce)
{
    clinit();
    auto startIx = ::java::lang::Math::abs(npc(cce)->hashCode() % npc(arr)->length);
    for (auto i = startIx; i < npc(arr)->length; i++) {
        auto item = (*arr)[i];
        if(item == cce) {
            return false;
        }
        if(item == nullptr) {
            arr->set(i, cce);
            return true;
        }
    }
    for (auto i = int32_t(0); i < startIx; i++) {
        auto item = (*arr)[i];
        if(item == cce) {
            return false;
        }
        if(item == nullptr) {
            arr->set(i, cce);
            return true;
        }
    }
    throw new ::java::lang::IllegalStateException(u"No empty space found"_j);
}

bool org::apache::poi::ss::formula::FormulaCellCacheEntrySet::remove(CellCacheEntry* cce)
{
    auto arr = _arr;
    if(_size * int32_t(3) < npc(_arr)->length && npc(_arr)->length > 8) {
        auto found = false;
        auto prevArr = _arr;
        auto newArr = new FormulaCellCacheEntryArray(npc(_arr)->length / int32_t(2));
        for (auto i = int32_t(0); i < npc(prevArr)->length; i++) {
            auto prevCce = (*_arr)[i];
            if(prevCce != nullptr) {
                if(static_cast< CellCacheEntry* >(prevCce) == cce) {
                    found = true;
                    _size--;
                    continue;
                }
                addInternal(newArr, prevCce);
            }
        }
        _arr = newArr;
        return found;
    }
    auto startIx = ::java::lang::Math::abs(npc(cce)->hashCode() % npc(arr)->length);
    for (auto i = startIx; i < npc(arr)->length; i++) {
        auto item = (*arr)[i];
        if(static_cast< CellCacheEntry* >(item) == cce) {
            arr->set(i, nullptr);
            _size--;
            return true;
        }
    }
    for (auto i = int32_t(0); i < startIx; i++) {
        auto item = (*arr)[i];
        if(static_cast< CellCacheEntry* >(item) == cce) {
            arr->set(i, nullptr);
            _size--;
            return true;
        }
    }
    return false;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::formula::FormulaCellCacheEntrySet::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.FormulaCellCacheEntrySet", 50);
    return c;
}

void org::apache::poi::ss::formula::FormulaCellCacheEntrySet::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        EMPTY_ARRAY_ = (new ::org::apache::poi::ss::formula::FormulaCellCacheEntryArray({}));
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* org::apache::poi::ss::formula::FormulaCellCacheEntrySet::getClass0()
{
    return class_();
}

