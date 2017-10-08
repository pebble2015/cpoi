// Generated from /POI/java/org/apache/poi/ss/usermodel/ExcelNumberFormat.java
#include <org/apache/poi/ss/usermodel/ExcelNumberFormat.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/util/Iterator.hpp>
#include <java/util/List.hpp>
#include <org/apache/poi/ss/formula/ConditionalFormattingEvaluator.hpp>
#include <org/apache/poi/ss/formula/EvaluationConditionalFormatRule.hpp>
#include <org/apache/poi/ss/usermodel/Cell.hpp>
#include <org/apache/poi/ss/usermodel/CellStyle.hpp>

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

poi::ss::usermodel::ExcelNumberFormat::ExcelNumberFormat(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::usermodel::ExcelNumberFormat::ExcelNumberFormat(int32_t idx, ::java::lang::String* format) 
    : ExcelNumberFormat(*static_cast< ::default_init_tag* >(0))
{
    ctor(idx,format);
}

poi::ss::usermodel::ExcelNumberFormat* poi::ss::usermodel::ExcelNumberFormat::from(CellStyle* style)
{
    clinit();
    if(style == nullptr)
        return nullptr;

    return new ExcelNumberFormat(npc(style)->getDataFormat(), npc(style)->getDataFormatString());
}

poi::ss::usermodel::ExcelNumberFormat* poi::ss::usermodel::ExcelNumberFormat::from(Cell* cell, ::poi::ss::formula::ConditionalFormattingEvaluator* cfEvaluator)
{
    clinit();
    if(cell == nullptr)
        return nullptr;

    ExcelNumberFormat* nf = nullptr;
    if(cfEvaluator != nullptr) {
        auto rules = npc(cfEvaluator)->getConditionalFormattingForCell(cell);
        for (auto _i = npc(rules)->iterator(); _i->hasNext(); ) {
            ::poi::ss::formula::EvaluationConditionalFormatRule* rule = java_cast< ::poi::ss::formula::EvaluationConditionalFormatRule* >(_i->next());
            {
                nf = npc(rule)->getNumberFormat();
                if(nf != nullptr)
                    break;

            }
        }
    }
    if(nf == nullptr) {
        auto style = npc(cell)->getCellStyle();
        nf = ExcelNumberFormat::from(style);
    }
    return nf;
}

void poi::ss::usermodel::ExcelNumberFormat::ctor(int32_t idx, ::java::lang::String* format)
{
    super::ctor();
    this->idx = idx;
    this->format = format;
}

int32_t poi::ss::usermodel::ExcelNumberFormat::getIdx()
{
    return idx;
}

java::lang::String* poi::ss::usermodel::ExcelNumberFormat::getFormat()
{
    return format;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::usermodel::ExcelNumberFormat::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.usermodel.ExcelNumberFormat", 45);
    return c;
}

java::lang::Class* poi::ss::usermodel::ExcelNumberFormat::getClass0()
{
    return class_();
}

