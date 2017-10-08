// Generated from /POI/java/org/apache/poi/ss/formula/functions/LookupUtils.java
#include <org/apache/poi/ss/formula/functions/LookupUtils_BinarySearchIndexes.hpp>

poi::ss::formula::functions::LookupUtils_BinarySearchIndexes::LookupUtils_BinarySearchIndexes(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::formula::functions::LookupUtils_BinarySearchIndexes::LookupUtils_BinarySearchIndexes(int32_t highIx) 
    : LookupUtils_BinarySearchIndexes(*static_cast< ::default_init_tag* >(0))
{
    ctor(highIx);
}

void poi::ss::formula::functions::LookupUtils_BinarySearchIndexes::ctor(int32_t highIx)
{
    super::ctor();
    _lowIx = -int32_t(1);
    _highIx = highIx;
}

int32_t poi::ss::formula::functions::LookupUtils_BinarySearchIndexes::getMidIx()
{
    auto ixDiff = _highIx - _lowIx;
    if(ixDiff < 2) {
        return -int32_t(1);
    }
    return _lowIx + (ixDiff / int32_t(2));
}

int32_t poi::ss::formula::functions::LookupUtils_BinarySearchIndexes::getLowIx()
{
    return _lowIx;
}

int32_t poi::ss::formula::functions::LookupUtils_BinarySearchIndexes::getHighIx()
{
    return _highIx;
}

void poi::ss::formula::functions::LookupUtils_BinarySearchIndexes::narrowSearch(int32_t midIx, bool isLessThan)
{
    if(isLessThan) {
        _highIx = midIx;
    } else {
        _lowIx = midIx;
    }
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::functions::LookupUtils_BinarySearchIndexes::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.functions.LookupUtils.BinarySearchIndexes", 67);
    return c;
}

java::lang::Class* poi::ss::formula::functions::LookupUtils_BinarySearchIndexes::getClass0()
{
    return class_();
}

