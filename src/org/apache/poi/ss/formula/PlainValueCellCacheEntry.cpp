// Generated from /POI/java/org/apache/poi/ss/formula/PlainValueCellCacheEntry.java
#include <org/apache/poi/ss/formula/PlainValueCellCacheEntry.hpp>

poi::ss::formula::PlainValueCellCacheEntry::PlainValueCellCacheEntry(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::formula::PlainValueCellCacheEntry::PlainValueCellCacheEntry(::poi::ss::formula::eval::ValueEval* value) 
    : PlainValueCellCacheEntry(*static_cast< ::default_init_tag* >(0))
{
    ctor(value);
}

void poi::ss::formula::PlainValueCellCacheEntry::ctor(::poi::ss::formula::eval::ValueEval* value)
{
    super::ctor();
    updateValue(value);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::PlainValueCellCacheEntry::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.PlainValueCellCacheEntry", 50);
    return c;
}

java::lang::Class* poi::ss::formula::PlainValueCellCacheEntry::getClass0()
{
    return class_();
}

