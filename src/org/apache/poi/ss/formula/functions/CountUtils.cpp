// Generated from /POI/java/org/apache/poi/ss/formula/functions/CountUtils.java
#include <org/apache/poi/ss/formula/functions/CountUtils.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <org/apache/poi/ss/formula/ThreeDEval.hpp>
#include <org/apache/poi/ss/formula/TwoDEval.hpp>
#include <org/apache/poi/ss/formula/eval/RefEval.hpp>
#include <org/apache/poi/ss/formula/eval/ValueEval.hpp>
#include <org/apache/poi/ss/formula/functions/CountUtils_I_MatchAreaPredicate.hpp>
#include <org/apache/poi/ss/formula/functions/CountUtils_I_MatchPredicate.hpp>

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

poi::ss::formula::functions::CountUtils::CountUtils(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::formula::functions::CountUtils::CountUtils() 
    : CountUtils(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void poi::ss::formula::functions::CountUtils::ctor()
{
    super::ctor();
}

int32_t poi::ss::formula::functions::CountUtils::countMatchingCellsInArea(::poi::ss::formula::ThreeDEval* areaEval, CountUtils_I_MatchPredicate* criteriaPredicate)
{
    clinit();
    auto result = int32_t(0);
    auto const firstSheetIndex = npc(areaEval)->getFirstSheetIndex();
    auto const lastSheetIndex = npc(areaEval)->getLastSheetIndex();
    for (auto sIx = firstSheetIndex; sIx <= lastSheetIndex; sIx++) {
        auto height = npc(areaEval)->getHeight();
        auto width = npc(areaEval)->getWidth();
        for (auto rrIx = int32_t(0); rrIx < height; rrIx++) {
            for (auto rcIx = int32_t(0); rcIx < width; rcIx++) {
                auto ve = npc(areaEval)->getValue(sIx, rrIx, rcIx);
                if(dynamic_cast< CountUtils_I_MatchAreaPredicate* >(criteriaPredicate) != nullptr) {
                    auto areaPredicate = java_cast< CountUtils_I_MatchAreaPredicate* >(criteriaPredicate);
                    if(!npc(areaPredicate)->matches(areaEval, rrIx, rcIx))
                        continue;

                }
                if(npc(criteriaPredicate)->matches(ve)) {
                    result++;
                }
            }
        }
    }
    return result;
}

int32_t poi::ss::formula::functions::CountUtils::countMatchingCellsInRef(::poi::ss::formula::eval::RefEval* refEval, CountUtils_I_MatchPredicate* criteriaPredicate)
{
    clinit();
    auto result = int32_t(0);
    auto const firstSheetIndex = npc(refEval)->getFirstSheetIndex();
    auto const lastSheetIndex = npc(refEval)->getLastSheetIndex();
    for (auto sIx = firstSheetIndex; sIx <= lastSheetIndex; sIx++) {
        auto ve = npc(refEval)->getInnerValueEval(sIx);
        if(npc(criteriaPredicate)->matches(ve)) {
            result++;
        }
    }
    return result;
}

int32_t poi::ss::formula::functions::CountUtils::countArg(::poi::ss::formula::eval::ValueEval* eval, CountUtils_I_MatchPredicate* criteriaPredicate)
{
    clinit();
    if(eval == nullptr) {
        throw new ::java::lang::IllegalArgumentException(u"eval must not be null"_j);
    }
    if(dynamic_cast< ::poi::ss::formula::ThreeDEval* >(eval) != nullptr) {
        return countMatchingCellsInArea(java_cast< ::poi::ss::formula::ThreeDEval* >(eval), criteriaPredicate);
    }
    if(dynamic_cast< ::poi::ss::formula::TwoDEval* >(eval) != nullptr) {
        throw new ::java::lang::IllegalArgumentException(u"Count requires 3D Evals, 2D ones aren't supported"_j);
    }
    if(dynamic_cast< ::poi::ss::formula::eval::RefEval* >(eval) != nullptr) {
        return CountUtils::countMatchingCellsInRef(java_cast< ::poi::ss::formula::eval::RefEval* >(eval), criteriaPredicate);
    }
    return npc(criteriaPredicate)->matches(eval) ? int32_t(1) : int32_t(0);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::functions::CountUtils::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.functions.CountUtils", 46);
    return c;
}

java::lang::Class* poi::ss::formula::functions::CountUtils::getClass0()
{
    return class_();
}

