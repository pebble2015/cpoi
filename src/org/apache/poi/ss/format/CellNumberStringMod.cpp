// Generated from /POI/java/org/apache/poi/ss/format/CellNumberStringMod.java
#include <org/apache/poi/ss/format/CellNumberStringMod.hpp>

#include <java/lang/CharSequence.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <org/apache/poi/ss/format/CellNumberFormatter_Special.hpp>

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

org::apache::poi::ss::format::CellNumberStringMod::CellNumberStringMod(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::format::CellNumberStringMod::CellNumberStringMod(CellNumberFormatter_Special* special, ::java::lang::CharSequence* toAdd, int32_t op) 
    : CellNumberStringMod(*static_cast< ::default_init_tag* >(0))
{
    ctor(special,toAdd,op);
}

org::apache::poi::ss::format::CellNumberStringMod::CellNumberStringMod(CellNumberFormatter_Special* start, bool startInclusive, CellNumberFormatter_Special* end, bool endInclusive, char16_t toAdd) 
    : CellNumberStringMod(*static_cast< ::default_init_tag* >(0))
{
    ctor(start,startInclusive,end,endInclusive,toAdd);
}

org::apache::poi::ss::format::CellNumberStringMod::CellNumberStringMod(CellNumberFormatter_Special* start, bool startInclusive, CellNumberFormatter_Special* end, bool endInclusive) 
    : CellNumberStringMod(*static_cast< ::default_init_tag* >(0))
{
    ctor(start,startInclusive,end,endInclusive);
}

constexpr int32_t org::apache::poi::ss::format::CellNumberStringMod::BEFORE;

constexpr int32_t org::apache::poi::ss::format::CellNumberStringMod::AFTER;

constexpr int32_t org::apache::poi::ss::format::CellNumberStringMod::REPLACE;

void org::apache::poi::ss::format::CellNumberStringMod::ctor(CellNumberFormatter_Special* special, ::java::lang::CharSequence* toAdd, int32_t op)
{
    super::ctor();
    this->special = special;
    this->toAdd = toAdd;
    this->op = op;
}

void org::apache::poi::ss::format::CellNumberStringMod::ctor(CellNumberFormatter_Special* start, bool startInclusive, CellNumberFormatter_Special* end, bool endInclusive, char16_t toAdd)
{
    ctor(start, startInclusive, end, endInclusive);
    this->toAdd = ::java::lang::StringBuilder().append(toAdd)->append(u""_j)->toString();
}

void org::apache::poi::ss::format::CellNumberStringMod::ctor(CellNumberFormatter_Special* start, bool startInclusive, CellNumberFormatter_Special* end, bool endInclusive)
{
    super::ctor();
    special = start;
    this->startInclusive = startInclusive;
    this->end = end;
    this->endInclusive = endInclusive;
    op = REPLACE;
    toAdd = u""_j;
}

int32_t org::apache::poi::ss::format::CellNumberStringMod::compareTo(CellNumberStringMod* that)
{
    auto diff = npc(special)->pos - npc(npc(that)->special)->pos;
    return (diff != 0) ? diff : (op - npc(that)->op);
}

int32_t org::apache::poi::ss::format::CellNumberStringMod::compareTo(::java::lang::Object* o)
{ 
    return compareTo(dynamic_cast< CellNumberStringMod* >(o));
}

bool org::apache::poi::ss::format::CellNumberStringMod::equals(::java::lang::Object* that)
{
    return (dynamic_cast< CellNumberStringMod* >(that) != nullptr) && compareTo(java_cast< CellNumberStringMod* >(that)) == 0;
}

int32_t org::apache::poi::ss::format::CellNumberStringMod::hashCode()
{
    return npc(special)->hashCode() + op;
}

org::apache::poi::ss::format::CellNumberFormatter_Special* org::apache::poi::ss::format::CellNumberStringMod::getSpecial()
{
    return special;
}

int32_t org::apache::poi::ss::format::CellNumberStringMod::getOp()
{
    return op;
}

java::lang::CharSequence* org::apache::poi::ss::format::CellNumberStringMod::getToAdd()
{
    return toAdd;
}

org::apache::poi::ss::format::CellNumberFormatter_Special* org::apache::poi::ss::format::CellNumberStringMod::getEnd()
{
    return end;
}

bool org::apache::poi::ss::format::CellNumberStringMod::isStartInclusive()
{
    return startInclusive;
}

bool org::apache::poi::ss::format::CellNumberStringMod::isEndInclusive()
{
    return endInclusive;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::format::CellNumberStringMod::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.format.CellNumberStringMod", 44);
    return c;
}

java::lang::Class* org::apache::poi::ss::format::CellNumberStringMod::getClass0()
{
    return class_();
}

