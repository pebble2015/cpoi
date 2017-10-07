// Generated from /POI/java/org/apache/poi/ss/formula/functions/Countif.java
#include <org/apache/poi/ss/formula/functions/Countif_StringMatcher.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <java/util/regex/Matcher.hpp>
#include <java/util/regex/Pattern.hpp>
#include <org/apache/poi/ss/formula/eval/BlankEval.hpp>
#include <org/apache/poi/ss/formula/eval/StringEval.hpp>
#include <org/apache/poi/ss/formula/eval/ValueEval.hpp>
#include <org/apache/poi/ss/formula/functions/Countif_CmpOp.hpp>

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

org::apache::poi::ss::formula::functions::Countif_StringMatcher::Countif_StringMatcher(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::formula::functions::Countif_StringMatcher::Countif_StringMatcher(::java::lang::String* value, Countif_CmpOp* operator_) 
    : Countif_StringMatcher(*static_cast< ::default_init_tag* >(0))
{
    ctor(value,operator_);
}

void org::apache::poi::ss::formula::functions::Countif_StringMatcher::ctor(::java::lang::String* value, Countif_CmpOp* operator_)
{
    super::ctor(operator_);
    _value = value;
    switch (npc(operator_)->getCode()) {
    case Countif_CmpOp::NONE:
    case Countif_CmpOp::EQ:
    case Countif_CmpOp::NE:
        _pattern = getWildCardPattern(value);
        break;
    default:
        _pattern = nullptr;
    }

}

java::lang::String* org::apache::poi::ss::formula::functions::Countif_StringMatcher::getValueText()
{
    if(_pattern == nullptr) {
        return _value;
    }
    return npc(_pattern)->pattern();
}

bool org::apache::poi::ss::formula::functions::Countif_StringMatcher::matches(::org::apache::poi::ss::formula::eval::ValueEval* x)
{
    if(dynamic_cast< ::org::apache::poi::ss::formula::eval::BlankEval* >(x) != nullptr) {
        switch (getCode()) {
        case Countif_CmpOp::NONE:
        case Countif_CmpOp::EQ:
            return npc(_value)->length() == 0;
        case Countif_CmpOp::NE:
            return npc(_value)->length() != 0;
        }

        return false;
    }
    if(!(dynamic_cast< ::org::apache::poi::ss::formula::eval::StringEval* >(x) != nullptr)) {
        return false;
    }
    auto testedValue = npc((java_cast< ::org::apache::poi::ss::formula::eval::StringEval* >(x)))->getStringValue();
    if(npc(testedValue)->length() < 1 && npc(_value)->length() < 1) {
        switch (getCode()) {
        case Countif_CmpOp::NONE:
            return true;
        case Countif_CmpOp::EQ:
            return false;
        case Countif_CmpOp::NE:
            return true;
        }

        return false;
    }
    if(_pattern != nullptr) {
        return evaluate(npc(npc(_pattern)->matcher(testedValue))->matches());
    }
    return evaluate(npc(testedValue)->compareToIgnoreCase(_value));
}

java::util::regex::Pattern* org::apache::poi::ss::formula::functions::Countif_StringMatcher::getWildCardPattern(::java::lang::String* value)
{
    clinit();
    auto len = npc(value)->length();
    auto sb = new ::java::lang::StringBuffer(len);
    auto hasWildCard = false;
    for (auto i = int32_t(0); i < len; i++) {
        auto ch = npc(value)->charAt(i);
        switch (ch) {
        case u'?':
            hasWildCard = true;
            npc(sb)->append(u'.');
            continue;
        case u'*':
            hasWildCard = true;
            npc(sb)->append(u".*"_j);
            continue;
        case u'~':
            if(i + int32_t(1) < len) {
                ch = npc(value)->charAt(i + int32_t(1));
                switch (ch) {
                case u'?':
                case u'*':
                    hasWildCard = true;
                    npc(npc(npc(sb)->append(u'['))->append(ch))->append(u']');
                    i++;
                    continue;
                }

            }
            npc(sb)->append(u'~');
            continue;
        case u'.':
        case u'$':
        case u'^':
        case u'[':
        case u']':
        case u'(':
        case u')':
            npc(npc(sb)->append(u"\\"_j))->append(ch);
            continue;
        }

        npc(sb)->append(ch);
    }
    if(hasWildCard) {
        return ::java::util::regex::Pattern::compile(npc(sb)->toString(), ::java::util::regex::Pattern::CASE_INSENSITIVE);
    }
    return nullptr;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::formula::functions::Countif_StringMatcher::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.functions.Countif.StringMatcher", 57);
    return c;
}

java::lang::Class* org::apache::poi::ss::formula::functions::Countif_StringMatcher::getClass0()
{
    return class_();
}

