// Generated from /POI/java/org/apache/poi/ss/formula/DataValidationEvaluator.java
#include <org/apache/poi/ss/formula/DataValidationEvaluator_ValidationEnum_3.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/util/Iterator.hpp>
#include <java/util/List.hpp>
#include <org/apache/poi/ss/formula/DataValidationEvaluator_DataValidationContext.hpp>
#include <org/apache/poi/ss/formula/DataValidationEvaluator.hpp>
#include <org/apache/poi/ss/formula/eval/BlankEval.hpp>
#include <org/apache/poi/ss/formula/eval/BoolEval.hpp>
#include <org/apache/poi/ss/formula/eval/ErrorEval.hpp>
#include <org/apache/poi/ss/formula/eval/NumberEval.hpp>
#include <org/apache/poi/ss/formula/eval/RefEval.hpp>
#include <org/apache/poi/ss/formula/eval/StringEval.hpp>
#include <org/apache/poi/ss/formula/eval/ValueEval.hpp>
#include <org/apache/poi/ss/usermodel/Cell.hpp>
#include <org/apache/poi/ss/usermodel/CellType.hpp>

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

poi::ss::formula::DataValidationEvaluator_ValidationEnum_3::DataValidationEvaluator_ValidationEnum_3(::java::lang::String* name, int ordinal)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
    ctor(name, ordinal);
}

bool poi::ss::formula::DataValidationEvaluator_ValidationEnum_3::isValidValue(::poi::ss::usermodel::Cell* cell, DataValidationEvaluator_DataValidationContext* context)
{
    auto const valueList = DataValidationEvaluator::getValidationValuesForConstraint(context);
    if(valueList == nullptr)
        return true;

    for (auto _i = npc(valueList)->iterator(); _i->hasNext(); ) {
        ::poi::ss::formula::eval::ValueEval* listVal = java_cast< ::poi::ss::formula::eval::ValueEval* >(_i->next());
        {
            auto comp = dynamic_cast< ::poi::ss::formula::eval::RefEval* >(listVal) != nullptr ? npc((java_cast< ::poi::ss::formula::eval::RefEval* >(listVal)))->getInnerValueEval(npc(context)->getSheetIndex()) : listVal;
            if(dynamic_cast< ::poi::ss::formula::eval::BlankEval* >(comp) != nullptr)
                return true;

            if(dynamic_cast< ::poi::ss::formula::eval::ErrorEval* >(comp) != nullptr)
                continue;

            if(dynamic_cast< ::poi::ss::formula::eval::BoolEval* >(comp) != nullptr) {
                if(DataValidationEvaluator::isType(cell, ::poi::ss::usermodel::CellType::BOOLEAN) && npc((java_cast< ::poi::ss::formula::eval::BoolEval* >(comp)))->getBooleanValue() == npc(cell)->getBooleanCellValue()) {
                    return true;
                } else {
                    continue;
                }
            }
            if(dynamic_cast< ::poi::ss::formula::eval::NumberEval* >(comp) != nullptr) {
                if(DataValidationEvaluator::isType(cell, ::poi::ss::usermodel::CellType::NUMERIC) && npc((java_cast< ::poi::ss::formula::eval::NumberEval* >(comp)))->getNumberValue() == npc(cell)->getNumericCellValue()) {
                    return true;
                } else {
                    continue;
                }
            }
            if(dynamic_cast< ::poi::ss::formula::eval::StringEval* >(comp) != nullptr) {
                if(DataValidationEvaluator::isType(cell, ::poi::ss::usermodel::CellType::STRING) && npc(npc((java_cast< ::poi::ss::formula::eval::StringEval* >(comp)))->getStringValue())->equalsIgnoreCase(npc(cell)->getStringCellValue())) {
                    return true;
                } else {
                    continue;
                }
            }
        }
    }
    return false;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::DataValidationEvaluator_ValidationEnum_3::class_()
{
    static ::java::lang::Class* c = ::class_(u"", 0);
    return c;
}

java::lang::Class* poi::ss::formula::DataValidationEvaluator_ValidationEnum_3::getClass0()
{
    return class_();
}

