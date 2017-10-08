// Generated from /POI/java/org/apache/poi/ss/formula/functions/Offset.java
#include <org/apache/poi/ss/formula/functions/Offset_BaseRef.hpp>

#include <java/lang/NullPointerException.hpp>
#include <org/apache/poi/ss/formula/eval/AreaEval.hpp>
#include <org/apache/poi/ss/formula/eval/RefEval.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::ss::formula::functions::Offset_BaseRef::Offset_BaseRef(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::formula::functions::Offset_BaseRef::Offset_BaseRef(::poi::ss::formula::eval::RefEval* re) 
    : Offset_BaseRef(*static_cast< ::default_init_tag* >(0))
{
    ctor(re);
}

poi::ss::formula::functions::Offset_BaseRef::Offset_BaseRef(::poi::ss::formula::eval::AreaEval* ae) 
    : Offset_BaseRef(*static_cast< ::default_init_tag* >(0))
{
    ctor(ae);
}

void poi::ss::formula::functions::Offset_BaseRef::ctor(::poi::ss::formula::eval::RefEval* re)
{
    super::ctor();
    _refEval = re;
    _areaEval = nullptr;
    _firstRowIndex = npc(re)->getRow();
    _firstColumnIndex = npc(re)->getColumn();
    _height = 1;
    _width = 1;
}

void poi::ss::formula::functions::Offset_BaseRef::ctor(::poi::ss::formula::eval::AreaEval* ae)
{
    super::ctor();
    _refEval = nullptr;
    _areaEval = ae;
    _firstRowIndex = npc(ae)->getFirstRow();
    _firstColumnIndex = npc(ae)->getFirstColumn();
    _height = npc(ae)->getLastRow() - npc(ae)->getFirstRow() + int32_t(1);
    _width = npc(ae)->getLastColumn() - npc(ae)->getFirstColumn() + int32_t(1);
}

int32_t poi::ss::formula::functions::Offset_BaseRef::getWidth()
{
    return _width;
}

int32_t poi::ss::formula::functions::Offset_BaseRef::getHeight()
{
    return _height;
}

int32_t poi::ss::formula::functions::Offset_BaseRef::getFirstRowIndex()
{
    return _firstRowIndex;
}

int32_t poi::ss::formula::functions::Offset_BaseRef::getFirstColumnIndex()
{
    return _firstColumnIndex;
}

poi::ss::formula::eval::AreaEval* poi::ss::formula::functions::Offset_BaseRef::offset(int32_t relFirstRowIx, int32_t relLastRowIx, int32_t relFirstColIx, int32_t relLastColIx)
{
    if(_refEval == nullptr) {
        return npc(_areaEval)->offset(relFirstRowIx, relLastRowIx, relFirstColIx, relLastColIx);
    }
    return npc(_refEval)->offset(relFirstRowIx, relLastRowIx, relFirstColIx, relLastColIx);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::functions::Offset_BaseRef::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.functions.Offset.BaseRef", 50);
    return c;
}

java::lang::Class* poi::ss::formula::functions::Offset_BaseRef::getClass0()
{
    return class_();
}

