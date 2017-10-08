// Generated from /POI/java/org/apache/poi/ss/formula/EvaluationConditionalFormatRule.java
#include <org/apache/poi/ss/formula/EvaluationConditionalFormatRule_ValueAndFormat.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/lang/Double.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>

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

poi::ss::formula::EvaluationConditionalFormatRule_ValueAndFormat::EvaluationConditionalFormatRule_ValueAndFormat(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::formula::EvaluationConditionalFormatRule_ValueAndFormat::EvaluationConditionalFormatRule_ValueAndFormat(::java::lang::Double* value, ::java::lang::String* format) 
    : EvaluationConditionalFormatRule_ValueAndFormat(*static_cast< ::default_init_tag* >(0))
{
    ctor(value,format);
}

poi::ss::formula::EvaluationConditionalFormatRule_ValueAndFormat::EvaluationConditionalFormatRule_ValueAndFormat(::java::lang::String* value, ::java::lang::String* format) 
    : EvaluationConditionalFormatRule_ValueAndFormat(*static_cast< ::default_init_tag* >(0))
{
    ctor(value,format);
}

void poi::ss::formula::EvaluationConditionalFormatRule_ValueAndFormat::ctor(::java::lang::Double* value, ::java::lang::String* format)
{
    super::ctor();
    this->value = value;
    this->format = format;
    string = nullptr;
}

void poi::ss::formula::EvaluationConditionalFormatRule_ValueAndFormat::ctor(::java::lang::String* value, ::java::lang::String* format)
{
    super::ctor();
    this->value = nullptr;
    this->format = format;
    string = value;
}

bool poi::ss::formula::EvaluationConditionalFormatRule_ValueAndFormat::isNumber()
{
    return value != nullptr;
}

java::lang::Double* poi::ss::formula::EvaluationConditionalFormatRule_ValueAndFormat::getValue()
{
    return value;
}

java::lang::String* poi::ss::formula::EvaluationConditionalFormatRule_ValueAndFormat::getString()
{
    return string;
}

bool poi::ss::formula::EvaluationConditionalFormatRule_ValueAndFormat::equals(::java::lang::Object* obj)
{
    if(!(dynamic_cast< EvaluationConditionalFormatRule_ValueAndFormat* >(obj) != nullptr)) {
        return false;
    }
    auto o = java_cast< EvaluationConditionalFormatRule_ValueAndFormat* >(obj);
    return (value == npc(o)->value || npc(value)->equals(static_cast< ::java::lang::Object* >(npc(o)->value))) && (format == npc(o)->format || npc(format)->equals(static_cast< ::java::lang::Object* >(npc(o)->format))) && (string == npc(o)->string || npc(string)->equals(static_cast< ::java::lang::Object* >(npc(o)->string)));
}

int32_t poi::ss::formula::EvaluationConditionalFormatRule_ValueAndFormat::compareTo(EvaluationConditionalFormatRule_ValueAndFormat* o)
{
    if(value == nullptr && npc(o)->value != nullptr) {
        return 1;
    }
    if(npc(o)->value == nullptr && value != nullptr) {
        return -int32_t(1);
    }
    auto cmp = value == nullptr ? int32_t(0) : npc(value)->compareTo(npc(o)->value);
    if(cmp != 0) {
        return cmp;
    }
    if(string == nullptr && npc(o)->string != nullptr) {
        return 1;
    }
    if(npc(o)->string == nullptr && string != nullptr) {
        return -int32_t(1);
    }
    return string == nullptr ? int32_t(0) : npc(string)->compareTo(npc(o)->string);
}

int32_t poi::ss::formula::EvaluationConditionalFormatRule_ValueAndFormat::compareTo(::java::lang::Object* o)
{ 
    return compareTo(dynamic_cast< EvaluationConditionalFormatRule_ValueAndFormat* >(o));
}

int32_t poi::ss::formula::EvaluationConditionalFormatRule_ValueAndFormat::hashCode()
{
    return (string == nullptr ? int32_t(0) : npc(string)->hashCode()) * int32_t(37) * int32_t(37) + int32_t(37) * (value == nullptr ? int32_t(0) : npc(value)->hashCode()) + (format == nullptr ? int32_t(0) : npc(format)->hashCode());
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::EvaluationConditionalFormatRule_ValueAndFormat::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.EvaluationConditionalFormatRule.ValueAndFormat", 72);
    return c;
}

java::lang::Class* poi::ss::formula::EvaluationConditionalFormatRule_ValueAndFormat::getClass0()
{
    return class_();
}

