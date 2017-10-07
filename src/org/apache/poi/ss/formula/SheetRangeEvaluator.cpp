// Generated from /POI/java/org/apache/poi/ss/formula/SheetRangeEvaluator.java
#include <org/apache/poi/ss/formula/SheetRangeEvaluator.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <org/apache/poi/ss/formula/SheetRefEvaluator.hpp>
#include <org/apache/poi/ss/formula/eval/ValueEval.hpp>
#include <ObjectArray.hpp>
#include <SubArray.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace org
{
    namespace apache
    {
        namespace poi
        {
            namespace ss
            {
                namespace formula
                {
typedef ::SubArray< ::org::apache::poi::ss::formula::SheetRefEvaluator, ::java::lang::ObjectArray > SheetRefEvaluatorArray;
                } // formula
            } // ss
        } // poi
    } // apache
} // org

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::ss::formula::SheetRangeEvaluator::SheetRangeEvaluator(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::formula::SheetRangeEvaluator::SheetRangeEvaluator(int32_t firstSheetIndex, int32_t lastSheetIndex, SheetRefEvaluatorArray* sheetEvaluators) 
    : SheetRangeEvaluator(*static_cast< ::default_init_tag* >(0))
{
    ctor(firstSheetIndex,lastSheetIndex,sheetEvaluators);
}

org::apache::poi::ss::formula::SheetRangeEvaluator::SheetRangeEvaluator(int32_t onlySheetIndex, SheetRefEvaluator* sheetEvaluator) 
    : SheetRangeEvaluator(*static_cast< ::default_init_tag* >(0))
{
    ctor(onlySheetIndex,sheetEvaluator);
}

void org::apache::poi::ss::formula::SheetRangeEvaluator::ctor(int32_t firstSheetIndex, int32_t lastSheetIndex, SheetRefEvaluatorArray* sheetEvaluators)
{
    super::ctor();
    if(firstSheetIndex < 0) {
        throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(u"Invalid firstSheetIndex: "_j)->append(firstSheetIndex)
            ->append(u"."_j)->toString());
    }
    if(lastSheetIndex < firstSheetIndex) {
        throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(u"Invalid lastSheetIndex: "_j)->append(lastSheetIndex)
            ->append(u" for firstSheetIndex: "_j)
            ->append(firstSheetIndex)
            ->append(u"."_j)->toString());
    }
    _firstSheetIndex = firstSheetIndex;
    _lastSheetIndex = lastSheetIndex;
    _sheetEvaluators = npc(sheetEvaluators)->clone();
}

void org::apache::poi::ss::formula::SheetRangeEvaluator::ctor(int32_t onlySheetIndex, SheetRefEvaluator* sheetEvaluator)
{
    ctor(onlySheetIndex, onlySheetIndex, new SheetRefEvaluatorArray({sheetEvaluator}));
}

org::apache::poi::ss::formula::SheetRefEvaluator* org::apache::poi::ss::formula::SheetRangeEvaluator::getSheetEvaluator(int32_t sheetIndex)
{
    if(sheetIndex < _firstSheetIndex || sheetIndex > _lastSheetIndex) {
        throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(u"Invalid SheetIndex: "_j)->append(sheetIndex)
            ->append(u" - Outside range "_j)
            ->append(_firstSheetIndex)
            ->append(u" : "_j)
            ->append(_lastSheetIndex)->toString());
    }
    return (*_sheetEvaluators)[sheetIndex - _firstSheetIndex];
}

int32_t org::apache::poi::ss::formula::SheetRangeEvaluator::getFirstSheetIndex()
{
    return _firstSheetIndex;
}

int32_t org::apache::poi::ss::formula::SheetRangeEvaluator::getLastSheetIndex()
{
    return _lastSheetIndex;
}

java::lang::String* org::apache::poi::ss::formula::SheetRangeEvaluator::getSheetName(int32_t sheetIndex)
{
    return npc(getSheetEvaluator(sheetIndex))->getSheetName();
}

java::lang::String* org::apache::poi::ss::formula::SheetRangeEvaluator::getSheetNameRange()
{
    auto sb = new ::java::lang::StringBuilder();
    npc(sb)->append(getSheetName(_firstSheetIndex));
    if(_firstSheetIndex != _lastSheetIndex) {
        npc(sb)->append(u':');
        npc(sb)->append(getSheetName(_lastSheetIndex));
    }
    return npc(sb)->toString();
}

org::apache::poi::ss::formula::eval::ValueEval* org::apache::poi::ss::formula::SheetRangeEvaluator::getEvalForCell(int32_t sheetIndex, int32_t rowIndex, int32_t columnIndex)
{
    return npc(getSheetEvaluator(sheetIndex))->getEvalForCell(rowIndex, columnIndex);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::formula::SheetRangeEvaluator::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.SheetRangeEvaluator", 45);
    return c;
}

java::lang::Class* org::apache::poi::ss::formula::SheetRangeEvaluator::getClass0()
{
    return class_();
}

