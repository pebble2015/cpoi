// Generated from /POI/java/org/apache/poi/ss/formula/IStabilityClassifier.java
#include <org/apache/poi/ss/formula/IStabilityClassifier_1.hpp>

#include <org/apache/poi/ss/formula/IStabilityClassifier.hpp>

poi::ss::formula::IStabilityClassifier_1::IStabilityClassifier_1(IStabilityClassifier *IStabilityClassifier_this)
    : super(*static_cast< ::default_init_tag* >(0))
    , IStabilityClassifier_this(IStabilityClassifier_this)
{
    clinit();
    ctor();
}

bool poi::ss::formula::IStabilityClassifier_1::isCellFinal(int32_t sheetIndex, int32_t rowIndex, int32_t columnIndex)
{
    return true;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::IStabilityClassifier_1::class_()
{
    static ::java::lang::Class* c = ::class_(u"", 0);
    return c;
}

java::lang::Class* poi::ss::formula::IStabilityClassifier_1::getClass0()
{
    return class_();
}

