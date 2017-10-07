// Generated from /POI/java/org/apache/poi/ss/formula/eval/forked/ForkedEvaluationSheet.java
#include <org/apache/poi/ss/formula/eval/forked/ForkedEvaluationSheet_RowColKey.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>

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

org::apache::poi::ss::formula::eval::forked::ForkedEvaluationSheet_RowColKey::ForkedEvaluationSheet_RowColKey(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::formula::eval::forked::ForkedEvaluationSheet_RowColKey::ForkedEvaluationSheet_RowColKey(int32_t rowIndex, int32_t columnIndex) 
    : ForkedEvaluationSheet_RowColKey(*static_cast< ::default_init_tag* >(0))
{
    ctor(rowIndex,columnIndex);
}

void org::apache::poi::ss::formula::eval::forked::ForkedEvaluationSheet_RowColKey::ctor(int32_t rowIndex, int32_t columnIndex)
{
    super::ctor();
    _rowIndex = rowIndex;
    _columnIndex = columnIndex;
}

bool org::apache::poi::ss::formula::eval::forked::ForkedEvaluationSheet_RowColKey::equals(::java::lang::Object* obj)
{
    if(!(dynamic_cast< ForkedEvaluationSheet_RowColKey* >(obj) != nullptr)) {
        return false;
    }
    auto other = java_cast< ForkedEvaluationSheet_RowColKey* >(obj);
    return _rowIndex == npc(other)->_rowIndex && _columnIndex == npc(other)->_columnIndex;
}

int32_t org::apache::poi::ss::formula::eval::forked::ForkedEvaluationSheet_RowColKey::hashCode()
{
    return _rowIndex ^ _columnIndex;
}

int32_t org::apache::poi::ss::formula::eval::forked::ForkedEvaluationSheet_RowColKey::compareTo(ForkedEvaluationSheet_RowColKey* o)
{
    auto cmp = _rowIndex - npc(o)->_rowIndex;
    if(cmp != 0) {
        return cmp;
    }
    return _columnIndex - npc(o)->_columnIndex;
}

int32_t org::apache::poi::ss::formula::eval::forked::ForkedEvaluationSheet_RowColKey::compareTo(::java::lang::Object* o)
{ 
    return compareTo(dynamic_cast< ForkedEvaluationSheet_RowColKey* >(o));
}

int32_t org::apache::poi::ss::formula::eval::forked::ForkedEvaluationSheet_RowColKey::getRowIndex()
{
    return _rowIndex;
}

int32_t org::apache::poi::ss::formula::eval::forked::ForkedEvaluationSheet_RowColKey::getColumnIndex()
{
    return _columnIndex;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::formula::eval::forked::ForkedEvaluationSheet_RowColKey::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.eval.forked.ForkedEvaluationSheet.RowColKey", 69);
    return c;
}

java::lang::Class* org::apache::poi::ss::formula::eval::forked::ForkedEvaluationSheet_RowColKey::getClass0()
{
    return class_();
}

