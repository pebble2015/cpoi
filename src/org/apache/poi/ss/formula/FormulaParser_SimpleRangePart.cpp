// Generated from /POI/java/org/apache/poi/ss/formula/FormulaParser.java
#include <org/apache/poi/ss/formula/FormulaParser_SimpleRangePart.hpp>

#include <java/lang/Class.hpp>
#include <java/lang/IllegalStateException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <org/apache/poi/ss/formula/FormulaParser_SimpleRangePart_Type.hpp>
#include <org/apache/poi/ss/util/CellReference.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::ss::formula::FormulaParser_SimpleRangePart::FormulaParser_SimpleRangePart(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::formula::FormulaParser_SimpleRangePart::FormulaParser_SimpleRangePart(::java::lang::String* rep, bool hasLetters, bool hasNumbers) 
    : FormulaParser_SimpleRangePart(*static_cast< ::default_init_tag* >(0))
{
    ctor(rep,hasLetters,hasNumbers);
}

void org::apache::poi::ss::formula::FormulaParser_SimpleRangePart::ctor(::java::lang::String* rep, bool hasLetters, bool hasNumbers)
{
    super::ctor();
    _rep = rep;
    _type = FormulaParser_SimpleRangePart_Type::get(hasLetters, hasNumbers);
}

bool org::apache::poi::ss::formula::FormulaParser_SimpleRangePart::isCell()
{
    return _type == FormulaParser_SimpleRangePart_Type::CELL;
}

bool org::apache::poi::ss::formula::FormulaParser_SimpleRangePart::isRowOrColumn()
{
    return _type != FormulaParser_SimpleRangePart_Type::CELL;
}

org::apache::poi::ss::util::CellReference* org::apache::poi::ss::formula::FormulaParser_SimpleRangePart::getCellReference()
{
    if(_type != FormulaParser_SimpleRangePart_Type::CELL) {
        throw new ::java::lang::IllegalStateException(u"Not applicable to this type"_j);
    }
    return new ::org::apache::poi::ss::util::CellReference(_rep);
}

bool org::apache::poi::ss::formula::FormulaParser_SimpleRangePart::isColumn()
{
    return _type == FormulaParser_SimpleRangePart_Type::COLUMN;
}

bool org::apache::poi::ss::formula::FormulaParser_SimpleRangePart::isRow()
{
    return _type == FormulaParser_SimpleRangePart_Type::ROW;
}

java::lang::String* org::apache::poi::ss::formula::FormulaParser_SimpleRangePart::getRep()
{
    return _rep;
}

bool org::apache::poi::ss::formula::FormulaParser_SimpleRangePart::isCompatibleForArea(FormulaParser_SimpleRangePart* part2)
{
    return _type == npc(part2)->_type;
}

java::lang::String* org::apache::poi::ss::formula::FormulaParser_SimpleRangePart::toString()
{
    return ::java::lang::StringBuilder().append(npc(getClass())->getName())->append(u" ["_j)
        ->append(_rep)
        ->append(u"]"_j)->toString();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::formula::FormulaParser_SimpleRangePart::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.FormulaParser.SimpleRangePart", 55);
    return c;
}

java::lang::Class* org::apache::poi::ss::formula::FormulaParser_SimpleRangePart::getClass0()
{
    return class_();
}

