// Generated from /POI/java/org/apache/poi/util/IntList.java
#include <org/apache/poi/util/IntList.hpp>

#include <java/lang/Class.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/IndexOutOfBoundsException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/lang/System.hpp>
#include <Array.hpp>

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

org::apache::poi::util::IntList::IntList(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::util::IntList::IntList() 
    : IntList(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::util::IntList::IntList(int32_t initialCapacity) 
    : IntList(*static_cast< ::default_init_tag* >(0))
{
    ctor(initialCapacity);
}

org::apache::poi::util::IntList::IntList(IntList* list) 
    : IntList(*static_cast< ::default_init_tag* >(0))
{
    ctor(list);
}

org::apache::poi::util::IntList::IntList(int32_t initialCapacity, int32_t fillvalue) 
    : IntList(*static_cast< ::default_init_tag* >(0))
{
    ctor(initialCapacity,fillvalue);
}

void org::apache::poi::util::IntList::init()
{
    fillval = int32_t(0);
}

constexpr int32_t org::apache::poi::util::IntList::_default_size;

void org::apache::poi::util::IntList::ctor()
{
    ctor(_default_size);
}

void org::apache::poi::util::IntList::ctor(int32_t initialCapacity)
{
    ctor(initialCapacity, int32_t(0));
}

void org::apache::poi::util::IntList::ctor(IntList* list)
{
    ctor(npc(npc(list)->_array)->length);
    ::java::lang::System::arraycopy(npc(list)->_array, 0, _array, 0, npc(_array)->length);
    _limit = npc(list)->_limit;
}

void org::apache::poi::util::IntList::ctor(int32_t initialCapacity, int32_t fillvalue)
{
    super::ctor();
    init();
    _array = new ::int32_tArray(initialCapacity);
    if(fillval != 0) {
        fillval = fillvalue;
        fillArray_(fillval, _array, 0);
    }
    _limit = 0;
}

void org::apache::poi::util::IntList::fillArray_(int32_t val, ::int32_tArray* array, int32_t index)
{
    for (auto k = index; k < npc(array)->length; k++) {
        (*array)[k] = val;
    }
}

void org::apache::poi::util::IntList::add(int32_t index, int32_t value)
{
    if(index > _limit) {
        throw new ::java::lang::IndexOutOfBoundsException();
    } else if(index == _limit) {
        add(value);
    } else {
        if(_limit == npc(_array)->length) {
            growArray_(_limit * int32_t(2));
        }
        ::java::lang::System::arraycopy(_array, index, _array, index + int32_t(1), _limit - index);
        (*_array)[index] = value;
        _limit++;
    }
}

bool org::apache::poi::util::IntList::add(int32_t value)
{
    if(_limit == npc(_array)->length) {
        growArray_(_limit * int32_t(2));
    }
    (*_array)[_limit++] = value;
    return true;
}

bool org::apache::poi::util::IntList::addAll(IntList* c)
{
    if(npc(c)->_limit != 0) {
        if((_limit + npc(c)->_limit) > npc(_array)->length) {
            growArray_(_limit + npc(c)->_limit);
        }
        ::java::lang::System::arraycopy(npc(c)->_array, 0, _array, _limit, npc(c)->_limit);
        _limit += npc(c)->_limit;
    }
    return true;
}

bool org::apache::poi::util::IntList::addAll(int32_t index, IntList* c)
{
    if(index > _limit) {
        throw new ::java::lang::IndexOutOfBoundsException();
    }
    if(npc(c)->_limit != 0) {
        if((_limit + npc(c)->_limit) > npc(_array)->length) {
            growArray_(_limit + npc(c)->_limit);
        }
        ::java::lang::System::arraycopy(_array, index, _array, index + npc(c)->_limit, _limit - index);
        ::java::lang::System::arraycopy(npc(c)->_array, 0, _array, index, npc(c)->_limit);
        _limit += npc(c)->_limit;
    }
    return true;
}

void org::apache::poi::util::IntList::clear()
{
    _limit = 0;
}

bool org::apache::poi::util::IntList::contains(int32_t o)
{
    auto rval = false;
    for (auto j = int32_t(0); !rval && (j < _limit); j++) {
        if((*_array)[j] == o) {
            rval = true;
        }
    }
    return rval;
}

bool org::apache::poi::util::IntList::containsAll(IntList* c)
{
    auto rval = true;
    if(this != c) {
        for (auto j = int32_t(0); rval && (j < npc(c)->_limit); j++) {
            if(!contains((*npc(c)->_array)[j])) {
                rval = false;
            }
        }
    }
    return rval;
}

bool org::apache::poi::util::IntList::equals(::java::lang::Object* o)
{
    auto rval = static_cast< ::java::lang::Object* >(this) == o;
    if(!rval && (o != nullptr) && (static_cast< ::java::lang::Object* >(npc(o)->getClass()) == static_cast< ::java::lang::Object* >(this->getClass()))) {
        auto other = java_cast< IntList* >(o);
        if(npc(other)->_limit == _limit) {
            rval = true;
            for (auto j = int32_t(0); rval && (j < _limit); j++) {
                rval = (*_array)[j] == (*npc(other)->_array)[j];
            }
        }
    }
    return rval;
}

int32_t org::apache::poi::util::IntList::get(int32_t index)
{
    if(index >= _limit) {
        throw new ::java::lang::IndexOutOfBoundsException(::java::lang::StringBuilder().append(index)->append(u" not accessible in a list of length "_j)
            ->append(_limit)->toString());
    }
    return (*_array)[index];
}

int32_t org::apache::poi::util::IntList::hashCode()
{
    auto hash = int32_t(0);
    for (auto j = int32_t(0); j < _limit; j++) {
        hash = (int32_t(31) * hash) + (*_array)[j];
    }
    return hash;
}

int32_t org::apache::poi::util::IntList::indexOf(int32_t o)
{
    auto rval = int32_t(0);
    for (; rval < _limit; rval++) {
        if(o == (*_array)[rval]) {
            break;
        }
    }
    if(rval == _limit) {
        rval = -int32_t(1);
    }
    return rval;
}

bool org::apache::poi::util::IntList::isEmpty()
{
    return _limit == 0;
}

int32_t org::apache::poi::util::IntList::lastIndexOf(int32_t o)
{
    auto rval = _limit - int32_t(1);
    for (; rval >= 0; rval--) {
        if(o == (*_array)[rval]) {
            break;
        }
    }
    return rval;
}

int32_t org::apache::poi::util::IntList::remove(int32_t index)
{
    if(index >= _limit) {
        throw new ::java::lang::IndexOutOfBoundsException();
    }
    auto rval = (*_array)[index];
    ::java::lang::System::arraycopy(_array, index + int32_t(1), _array, index, _limit - index);
    _limit--;
    return rval;
}

bool org::apache::poi::util::IntList::removeValue(int32_t o)
{
    auto rval = false;
    for (auto j = int32_t(0); !rval && (j < _limit); j++) {
        if(o == (*_array)[j]) {
            if(j + int32_t(1) < _limit) {
                ::java::lang::System::arraycopy(_array, j + int32_t(1), _array, j, _limit - j);
            }
            _limit--;
            rval = true;
        }
    }
    return rval;
}

bool org::apache::poi::util::IntList::removeAll(IntList* c)
{
    auto rval = false;
    for (auto j = int32_t(0); j < npc(c)->_limit; j++) {
        if(removeValue((*npc(c)->_array)[j])) {
            rval = true;
        }
    }
    return rval;
}

bool org::apache::poi::util::IntList::retainAll(IntList* c)
{
    auto rval = false;
    for (auto j = int32_t(0); j < _limit; ) {
        if(!npc(c)->contains((*_array)[j])) {
            remove(j);
            rval = true;
        } else {
            j++;
        }
    }
    return rval;
}

int32_t org::apache::poi::util::IntList::set(int32_t index, int32_t element)
{
    if(index >= _limit) {
        throw new ::java::lang::IndexOutOfBoundsException();
    }
    auto rval = (*_array)[index];
    (*_array)[index] = element;
    return rval;
}

int32_t org::apache::poi::util::IntList::size()
{
    return _limit;
}

int32_tArray* org::apache::poi::util::IntList::toArray_()
{
    auto rval = new ::int32_tArray(_limit);
    ::java::lang::System::arraycopy(_array, 0, rval, 0, _limit);
    return rval;
}

int32_tArray* org::apache::poi::util::IntList::toArray_(::int32_tArray* a)
{
    ::int32_tArray* rval;
    if(npc(a)->length == _limit) {
        ::java::lang::System::arraycopy(_array, 0, a, 0, _limit);
        rval = a;
    } else {
        rval = toArray_();
    }
    return rval;
}

void org::apache::poi::util::IntList::growArray_(int32_t new_size)
{
    auto size = (new_size == npc(_array)->length) ? new_size + int32_t(1) : new_size;
    auto new_array = new ::int32_tArray(size);
    if(fillval != 0) {
        fillArray_(fillval, new_array, npc(_array)->length);
    }
    ::java::lang::System::arraycopy(_array, 0, new_array, 0, _limit);
    _array = new_array;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::util::IntList::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.util.IntList", 27);
    return c;
}

java::lang::Class* org::apache::poi::util::IntList::getClass0()
{
    return class_();
}

