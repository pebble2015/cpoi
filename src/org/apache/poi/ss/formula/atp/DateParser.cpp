// Generated from /POI/java/org/apache/poi/ss/formula/atp/DateParser.java
#include <org/apache/poi/ss/formula/atp/DateParser.hpp>

#include <java/io/Serializable.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/Integer.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/NumberFormatException.hpp>
#include <java/lang/RuntimeException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/util/Calendar.hpp>
#include <java/util/regex/Pattern.hpp>
#include <org/apache/poi/ss/formula/eval/ErrorEval.hpp>
#include <org/apache/poi/ss/formula/eval/EvaluationException.hpp>
#include <org/apache/poi/util/LocaleUtil.hpp>
#include <SubArray.hpp>
#include <ObjectArray.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace io
    {
typedef ::SubArray< ::java::io::Serializable, ::java::lang::ObjectArray > SerializableArray;
    } // io

    namespace lang
    {
typedef ::SubArray< ::java::lang::CharSequence, ObjectArray > CharSequenceArray;
typedef ::SubArray< ::java::lang::Comparable, ObjectArray > ComparableArray;
typedef ::SubArray< ::java::lang::String, ObjectArray, ::java::io::SerializableArray, ComparableArray, CharSequenceArray > StringArray;
    } // lang
} // java

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::ss::formula::atp::DateParser::DateParser(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::formula::atp::DateParser::DateParser() 
    : DateParser(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void org::apache::poi::ss::formula::atp::DateParser::ctor()
{
    super::ctor();
}

java::util::Calendar* org::apache::poi::ss::formula::atp::DateParser::parseDate(::java::lang::String* strVal) /* throws(EvaluationException) */
{
    clinit();
    auto parts = npc(::java::util::regex::Pattern::compile(u"/"_j))->split(strVal);
    if(npc(parts)->length != 3) {
        throw new ::org::apache::poi::ss::formula::eval::EvaluationException(::org::apache::poi::ss::formula::eval::ErrorEval::VALUE_INVALID());
    }
    auto part2 = (*parts)[int32_t(2)];
    auto spacePos = npc(part2)->indexOf(static_cast< int32_t >(u' '));
    if(spacePos > 0) {
        part2 = npc(part2)->substring(0, spacePos);
    }
    int32_t f0;
    int32_t f1;
    int32_t f2;
    try {
        f0 = ::java::lang::Integer::parseInt((*parts)[int32_t(0)]);
        f1 = ::java::lang::Integer::parseInt((*parts)[int32_t(1)]);
        f2 = ::java::lang::Integer::parseInt(part2);
    } catch (::java::lang::NumberFormatException* e) {
        throw new ::org::apache::poi::ss::formula::eval::EvaluationException(::org::apache::poi::ss::formula::eval::ErrorEval::VALUE_INVALID());
    }
    if(f0 < 0 || f1 < 0 || f2 < 0 || (f0 > 12 && f1 > 12 && f2 > 12)) {
        throw new ::org::apache::poi::ss::formula::eval::EvaluationException(::org::apache::poi::ss::formula::eval::ErrorEval::VALUE_INVALID());
    }
    if(f0 >= 1900 && f0 < 9999) {
        return makeDate(f0, f1, f2);
    }
    throw new ::java::lang::RuntimeException(::java::lang::StringBuilder().append(u"Unable to determine date format for text '"_j)->append(strVal)
        ->append(u"'"_j)->toString());
}

java::util::Calendar* org::apache::poi::ss::formula::atp::DateParser::makeDate(int32_t year, int32_t month, int32_t day) /* throws(EvaluationException) */
{
    clinit();
    if(month < 1 || month > 12) {
        throw new ::org::apache::poi::ss::formula::eval::EvaluationException(::org::apache::poi::ss::formula::eval::ErrorEval::VALUE_INVALID());
    }
    auto cal = ::org::apache::poi::util::LocaleUtil::getLocaleCalendar(year, month - int32_t(1), 1, 0, 0, 0);
    if(day < 1 || day > npc(cal)->getActualMaximum(::java::util::Calendar::DAY_OF_MONTH)) {
        throw new ::org::apache::poi::ss::formula::eval::EvaluationException(::org::apache::poi::ss::formula::eval::ErrorEval::VALUE_INVALID());
    }
    npc(cal)->set(::java::util::Calendar::DAY_OF_MONTH, day);
    return cal;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::formula::atp::DateParser::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.atp.DateParser", 40);
    return c;
}

java::lang::Class* org::apache::poi::ss::formula::atp::DateParser::getClass0()
{
    return class_();
}

