// Generated from /POI/java/org/apache/poi/ss/util/SSCellRange.java
#include <org/apache/poi/ss/util/SSCellRange_ArrayIterator.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/UnsupportedOperationException.hpp>
#include <java/util/NoSuchElementException.hpp>
#include <ObjectArray.hpp>

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

org::apache::poi::ss::util::SSCellRange_ArrayIterator::SSCellRange_ArrayIterator(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::util::SSCellRange_ArrayIterator::SSCellRange_ArrayIterator(::java::lang::ObjectArray* array) 
    : SSCellRange_ArrayIterator(*static_cast< ::default_init_tag* >(0))
{
    ctor(array);
}

void org::apache::poi::ss::util::SSCellRange_ArrayIterator::ctor(::java::lang::ObjectArray* array)
{
    super::ctor();
    _array = java_cast< ::java::lang::ObjectArray* >(npc(array)->clone());
    _index = 0;
}

bool org::apache::poi::ss::util::SSCellRange_ArrayIterator::hasNext()
{
    return _index < npc(_array)->length;
}

java::lang::Object* org::apache::poi::ss::util::SSCellRange_ArrayIterator::next()
{
    if(_index >= npc(_array)->length) {
        throw new ::java::util::NoSuchElementException(::java::lang::String::valueOf(_index));
    }
    return (*_array)[_index++];
}

void org::apache::poi::ss::util::SSCellRange_ArrayIterator::remove()
{
    throw new ::java::lang::UnsupportedOperationException(u"Cannot remove cells from this CellRange."_j);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::util::SSCellRange_ArrayIterator::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.util.SSCellRange.ArrayIterator", 48);
    return c;
}

java::lang::Class* org::apache::poi::ss::util::SSCellRange_ArrayIterator::getClass0()
{
    return class_();
}

