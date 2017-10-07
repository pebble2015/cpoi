// Generated from /POI/java/org/apache/poi/ss/format/CellNumberFormatter.java
#include <org/apache/poi/ss/format/CellNumberFormatter.hpp>

#include <java/lang/Appendable.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/Character.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Double.hpp>
#include <java/lang/IllegalStateException.hpp>
#include <java/lang/Integer.hpp>
#include <java/lang/Iterable.hpp>
#include <java/lang/Math.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Number.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/RuntimeException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/text/DecimalFormat.hpp>
#include <java/text/DecimalFormatSymbols.hpp>
#include <java/text/FieldPosition.hpp>
#include <java/util/ArrayList.hpp>
#include <java/util/BitSet.hpp>
#include <java/util/Collection.hpp>
#include <java/util/Collections.hpp>
#include <java/util/Formatter.hpp>
#include <java/util/Iterator.hpp>
#include <java/util/List.hpp>
#include <java/util/ListIterator.hpp>
#include <java/util/Set.hpp>
#include <java/util/TreeSet.hpp>
#include <org/apache/poi/ss/format/CellFormatPart.hpp>
#include <org/apache/poi/ss/format/CellFormatType.hpp>
#include <org/apache/poi/ss/format/CellFormatter.hpp>
#include <org/apache/poi/ss/format/CellNumberFormatter_GeneralNumberFormatter.hpp>
#include <org/apache/poi/ss/format/CellNumberFormatter_Special.hpp>
#include <org/apache/poi/ss/format/CellNumberPartHandler.hpp>
#include <org/apache/poi/ss/format/CellNumberStringMod.hpp>
#include <org/apache/poi/ss/format/SimpleFraction.hpp>
#include <org/apache/poi/util/LocaleUtil.hpp>
#include <org/apache/poi/util/POILogFactory.hpp>
#include <org/apache/poi/util/POILogger.hpp>
#include <Array.hpp>
#include <SubArray.hpp>
#include <ObjectArray.hpp>
#include <cmath>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace lang
    {
typedef ::SubArray< ::java::lang::Iterable, ObjectArray > IterableArray;
    } // lang

    namespace util
    {
typedef ::SubArray< ::java::util::Collection, ::java::lang::ObjectArray, ::java::lang::IterableArray > CollectionArray;
typedef ::SubArray< ::java::util::List, ::java::lang::ObjectArray, CollectionArray > ListArray;
    } // util
} // java

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

namespace
{
    template<typename F>
    struct finally_
    {
        finally_(F f) : f(f), moved(false) { }
        finally_(finally_ &&x) : f(x.f), moved(false) { x.moved = true; }
        ~finally_() { if(!moved) f(); }
    private:
        finally_(const finally_&); finally_& operator=(const finally_&);
        F f;
        bool moved;
    };

    template<typename F> finally_<F> finally(F f) { return finally_<F>(f); }
}
org::apache::poi::ss::format::CellNumberFormatter::CellNumberFormatter(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::format::CellNumberFormatter::CellNumberFormatter(::java::lang::String* format) 
    : CellNumberFormatter(*static_cast< ::default_init_tag* >(0))
{
    ctor(format);
}

org::apache::poi::ss::format::CellNumberFormatter::CellNumberFormatter(::java::util::Locale* locale, ::java::lang::String* format) 
    : CellNumberFormatter(*static_cast< ::default_init_tag* >(0))
{
    ctor(locale,format);
}

void org::apache::poi::ss::format::CellNumberFormatter::init()
{
    specials = new ::java::util::ArrayList();
    integerSpecials = new ::java::util::ArrayList();
    fractionalSpecials = new ::java::util::ArrayList();
    numeratorSpecials = new ::java::util::ArrayList();
    denominatorSpecials = new ::java::util::ArrayList();
    exponentSpecials = new ::java::util::ArrayList();
    exponentDigitSpecials = new ::java::util::ArrayList();
    SIMPLE_NUMBER = new CellNumberFormatter_GeneralNumberFormatter(locale);
}

org::apache::poi::util::POILogger*& org::apache::poi::ss::format::CellNumberFormatter::LOG()
{
    clinit();
    return LOG_;
}
org::apache::poi::util::POILogger* org::apache::poi::ss::format::CellNumberFormatter::LOG_;

void org::apache::poi::ss::format::CellNumberFormatter::ctor(::java::lang::String* format)
{
    ctor(::org::apache::poi::util::LocaleUtil::getUserLocale(), format);
}

void org::apache::poi::ss::format::CellNumberFormatter::ctor(::java::util::Locale* locale, ::java::lang::String* format)
{
    super::ctor(locale, format);
    init();
    auto ph = new CellNumberPartHandler();
    auto descBuf = CellFormatPart::parseFormat(format, CellFormatType::NUMBER, ph);
    exponent = npc(ph)->getExponent();
    npc(specials)->addAll(static_cast< ::java::util::Collection* >(npc(ph)->getSpecials()));
    improperFraction = npc(ph)->isImproperFraction();
    if((npc(ph)->getDecimalPoint() != nullptr || npc(ph)->getExponent() != nullptr) && npc(ph)->getSlash() != nullptr) {
        slash = nullptr;
        numerator = nullptr;
    } else {
        slash = npc(ph)->getSlash();
        numerator = npc(ph)->getNumerator();
    }
    auto const precision = interpretPrecision(npc(ph)->getDecimalPoint(), specials);
    auto fractionPartWidth = int32_t(0);
    if(npc(ph)->getDecimalPoint() != nullptr) {
        fractionPartWidth = int32_t(1) + precision;
        if(precision == 0) {
            npc(specials)->remove(static_cast< ::java::lang::Object* >(npc(ph)->getDecimalPoint()));
            decimalPoint = nullptr;
        } else {
            decimalPoint = npc(ph)->getDecimalPoint();
        }
    } else {
        decimalPoint = nullptr;
    }
    if(decimalPoint != nullptr) {
        afterInteger = decimalPoint;
    } else if(exponent != nullptr) {
        afterInteger = exponent;
    } else if(numerator != nullptr) {
        afterInteger = numerator;
    } else {
        afterInteger = nullptr;
    }
    if(exponent != nullptr) {
        afterFractional = exponent;
    } else if(numerator != nullptr) {
        afterFractional = numerator;
    } else {
        afterFractional = nullptr;
    }
    auto scaleByRef = (new ::doubleArray({npc(ph)->getScale()}));
    showGroupingSeparator = interpretIntegerCommas(descBuf, specials, decimalPoint, integerEnd(), fractionalEnd(), scaleByRef);
    if(exponent == nullptr) {
        scale = (*scaleByRef)[int32_t(0)];
    } else {
        scale = 1;
    }
    if(precision != 0) {
        npc(fractionalSpecials)->addAll(static_cast< ::java::util::Collection* >(npc(specials)->subList(npc(specials)->indexOf(decimalPoint) + int32_t(1), fractionalEnd())));
    }
    if(exponent != nullptr) {
        auto exponentPos = npc(specials)->indexOf(exponent);
        npc(exponentSpecials)->addAll(static_cast< ::java::util::Collection* >(specialsFor(exponentPos, 2)));
        npc(exponentDigitSpecials)->addAll(static_cast< ::java::util::Collection* >(specialsFor(exponentPos + int32_t(2))));
    }
    if(slash != nullptr) {
        if(numerator != nullptr) {
            npc(numeratorSpecials)->addAll(static_cast< ::java::util::Collection* >(specialsFor(npc(specials)->indexOf(numerator))));
        }
        npc(denominatorSpecials)->addAll(static_cast< ::java::util::Collection* >(specialsFor(npc(specials)->indexOf(slash) + int32_t(1))));
        if(npc(denominatorSpecials)->isEmpty()) {
            npc(numeratorSpecials)->clear();
            maxDenominator = 1;
            numeratorFmt = nullptr;
            denominatorFmt = nullptr;
        } else {
            maxDenominator = maxValue(denominatorSpecials);
            numeratorFmt = singleNumberFormat(numeratorSpecials);
            denominatorFmt = singleNumberFormat(denominatorSpecials);
        }
    } else {
        maxDenominator = 1;
        numeratorFmt = nullptr;
        denominatorFmt = nullptr;
    }
    npc(integerSpecials)->addAll(static_cast< ::java::util::Collection* >(npc(specials)->subList(0, integerEnd())));
    if(exponent == nullptr) {
        auto fmtBuf = new ::java::lang::StringBuffer(u"%"_j);
        auto integerPartWidth = calculateIntegerPartWidth();
        auto totalWidth = integerPartWidth + fractionPartWidth;
        npc(npc(npc(npc(fmtBuf)->append(u'0'))->append(totalWidth))->append(u'.'))->append(precision);
        npc(fmtBuf)->append(u"f"_j);
        printfFmt = npc(fmtBuf)->toString();
        decimalFmt = nullptr;
    } else {
        auto fmtBuf = new ::java::lang::StringBuffer();
        auto first = true;
        auto specialList = integerSpecials;
        if(npc(integerSpecials)->size() == 1) {
            npc(fmtBuf)->append(u"0"_j);
            first = false;
        } else
            for (auto _i = npc(specialList)->iterator(); _i->hasNext(); ) {
                CellNumberFormatter_Special* s = java_cast< CellNumberFormatter_Special* >(_i->next());
                {
                    if(isDigitFmt(s)) {
                        npc(fmtBuf)->append(first ? u'#' : u'0');
                        first = false;
                    }
                }
            }
        if(npc(fractionalSpecials)->size() > 0) {
            npc(fmtBuf)->append(u'.');
            for (auto _i = npc(fractionalSpecials)->iterator(); _i->hasNext(); ) {
                CellNumberFormatter_Special* s = java_cast< CellNumberFormatter_Special* >(_i->next());
                {
                    if(isDigitFmt(s)) {
                        if(!first)
                            npc(fmtBuf)->append(u'0');

                        first = false;
                    }
                }
            }
        }
        npc(fmtBuf)->append(u'E');
        placeZeros(fmtBuf, npc(exponentSpecials)->subList(2, npc(exponentSpecials)->size()));
        decimalFmt = new ::java::text::DecimalFormat(npc(fmtBuf)->toString(), getDecimalFormatSymbols());
        printfFmt = nullptr;
    }
    desc = npc(descBuf)->toString();
}

java::text::DecimalFormatSymbols* org::apache::poi::ss::format::CellNumberFormatter::getDecimalFormatSymbols()
{
    return ::java::text::DecimalFormatSymbols::getInstance(locale);
}

void org::apache::poi::ss::format::CellNumberFormatter::placeZeros(::java::lang::StringBuffer* sb, ::java::util::List* specials)
{
    clinit();
    for (auto _i = npc(specials)->iterator(); _i->hasNext(); ) {
        CellNumberFormatter_Special* s = java_cast< CellNumberFormatter_Special* >(_i->next());
        {
            if(isDigitFmt(s)) {
                npc(sb)->append(u'0');
            }
        }
    }
}

org::apache::poi::ss::format::CellNumberStringMod* org::apache::poi::ss::format::CellNumberFormatter::insertMod(CellNumberFormatter_Special* special, ::java::lang::CharSequence* toAdd, int32_t where)
{
    clinit();
    return new CellNumberStringMod(special, toAdd, where);
}

org::apache::poi::ss::format::CellNumberStringMod* org::apache::poi::ss::format::CellNumberFormatter::deleteMod(CellNumberFormatter_Special* start, bool startInclusive, CellNumberFormatter_Special* end, bool endInclusive)
{
    clinit();
    return new CellNumberStringMod(start, startInclusive, end, endInclusive);
}

org::apache::poi::ss::format::CellNumberStringMod* org::apache::poi::ss::format::CellNumberFormatter::replaceMod(CellNumberFormatter_Special* start, bool startInclusive, CellNumberFormatter_Special* end, bool endInclusive, char16_t withChar)
{
    clinit();
    return new CellNumberStringMod(start, startInclusive, end, endInclusive, withChar);
}

java::lang::String* org::apache::poi::ss::format::CellNumberFormatter::singleNumberFormat(::java::util::List* numSpecials)
{
    clinit();
    return ::java::lang::StringBuilder().append(u"%0"_j)->append(npc(numSpecials)->size())
        ->append(u"d"_j)->toString();
}

int32_t org::apache::poi::ss::format::CellNumberFormatter::maxValue(::java::util::List* s)
{
    clinit();
    return static_cast< int32_t >(::java::lang::Math::round(::java::lang::Math::pow(10, npc(s)->size()) - int32_t(1)));
}

java::util::List* org::apache::poi::ss::format::CellNumberFormatter::specialsFor(int32_t pos, int32_t takeFirst)
{
    if(pos >= npc(specials)->size()) {
        return ::java::util::Collections::emptyList();
    }
    auto it = npc(specials)->listIterator(pos + takeFirst);
    auto last = java_cast< CellNumberFormatter_Special* >(npc(it)->next());
    auto end = pos + takeFirst;
    while (npc(it)->hasNext()) {
        auto s = java_cast< CellNumberFormatter_Special* >(npc(it)->next());
        if(!isDigitFmt(s) || npc(s)->pos - npc(last)->pos > 1)
            break;

        end++;
        last = s;
    }
    return npc(specials)->subList(pos, end + int32_t(1));
}

java::util::List* org::apache::poi::ss::format::CellNumberFormatter::specialsFor(int32_t pos)
{
    return specialsFor(pos, 0);
}

bool org::apache::poi::ss::format::CellNumberFormatter::isDigitFmt(CellNumberFormatter_Special* s)
{
    clinit();
    return npc(s)->ch == u'0' || npc(s)->ch == u'?' || npc(s)->ch == u'#';
}

int32_t org::apache::poi::ss::format::CellNumberFormatter::calculateIntegerPartWidth()
{
    auto digitCount = int32_t(0);
    for (auto _i = npc(specials)->iterator(); _i->hasNext(); ) {
        CellNumberFormatter_Special* s = java_cast< CellNumberFormatter_Special* >(_i->next());
        {
            if(s == afterInteger) {
                break;
            } else if(isDigitFmt(s)) {
                digitCount++;
            }
        }
    }
    return digitCount;
}

int32_t org::apache::poi::ss::format::CellNumberFormatter::interpretPrecision(CellNumberFormatter_Special* decimalPoint, ::java::util::List* specials)
{
    clinit();
    auto idx = npc(specials)->indexOf(decimalPoint);
    auto precision = int32_t(0);
    if(idx != -int32_t(1)) {
        auto it = npc(specials)->listIterator(idx + int32_t(1));
        while (npc(it)->hasNext()) {
            auto s = java_cast< CellNumberFormatter_Special* >(npc(it)->next());
            if(!isDigitFmt(s)) {
                break;
            }
            precision++;
        }
    }
    return precision;
}

bool org::apache::poi::ss::format::CellNumberFormatter::interpretIntegerCommas(::java::lang::StringBuffer* sb, ::java::util::List* specials, CellNumberFormatter_Special* decimalPoint, int32_t integerEnd, int32_t fractionalEnd, ::doubleArray* scale)
{
    clinit();
    auto it = npc(specials)->listIterator(integerEnd);
    auto stillScaling = true;
    auto integerCommas = false;
    while (npc(it)->hasPrevious()) {
        auto s = java_cast< CellNumberFormatter_Special* >(npc(it)->previous());
        if(npc(s)->ch != u',') {
            stillScaling = false;
        } else {
            if(stillScaling) {
                (*scale)[int32_t(0)] /= 1000;
            } else {
                integerCommas = true;
            }
        }
    }
    if(decimalPoint != nullptr) {
        it = npc(specials)->listIterator(fractionalEnd);
        while (npc(it)->hasPrevious()) {
            auto s = java_cast< CellNumberFormatter_Special* >(npc(it)->previous());
            if(npc(s)->ch != u',') {
                break;
            } else {
                (*scale)[int32_t(0)] /= 1000;
            }
        }
    }
    it = npc(specials)->listIterator();
    auto removed = int32_t(0);
    while (npc(it)->hasNext()) {
        auto s = java_cast< CellNumberFormatter_Special* >(npc(it)->next());
        npc(s)->pos -= removed;
        if(npc(s)->ch == u',') {
            removed++;
            npc(it)->remove();
            npc(sb)->deleteCharAt(npc(s)->pos);
        }
    }
    return integerCommas;
}

int32_t org::apache::poi::ss::format::CellNumberFormatter::integerEnd()
{
    return (afterInteger == nullptr) ? npc(specials)->size() : npc(specials)->indexOf(afterInteger);
}

int32_t org::apache::poi::ss::format::CellNumberFormatter::fractionalEnd()
{
    return (afterFractional == nullptr) ? npc(specials)->size() : npc(specials)->indexOf(afterFractional);
}

void org::apache::poi::ss::format::CellNumberFormatter::formatValue(::java::lang::StringBuffer* toAppendTo, ::java::lang::Object* valueObject)
{
    auto value = npc((java_cast< ::java::lang::Number* >(valueObject)))->doubleValue();
    value *= scale;
    auto negative = value < 0;
    if(negative)
        value = -value;

    double fractional = int32_t(0);
    if(slash != nullptr) {
        if(improperFraction) {
            fractional = value;
            value = 0;
        } else {
            fractional = std::fmod(value, 1.0);
            value = static_cast< int64_t >(value);
        }
    }
    ::java::util::Set* mods = new ::java::util::TreeSet();
    auto output = new ::java::lang::StringBuffer(localiseFormat(desc));
    if(exponent != nullptr) {
        writeScientific(value, output, mods);
    } else if(improperFraction) {
        writeFraction(value, nullptr, fractional, output, mods);
    } else {
        auto result = new ::java::lang::StringBuffer();
        auto f = new ::java::util::Formatter(static_cast< ::java::lang::Appendable* >(result), locale);
        {
            auto finally0 = finally([&] {
                npc(f)->close();
            });
            {
                npc(f)->format(locale, printfFmt, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(::java::lang::Double::valueOf(value))}));
            }
        }

        if(numerator == nullptr) {
            writeFractional(result, output);
            writeInteger(result, output, integerSpecials, mods, showGroupingSeparator);
        } else {
            writeFraction(value, result, fractional, output, mods);
        }
    }
    auto dfs = getDecimalFormatSymbols();
    auto groupingSeparator = ::java::lang::Character::toString(npc(dfs)->getGroupingSeparator());
    auto changes = npc(mods)->iterator();
    auto nextChange = (npc(changes)->hasNext() ? java_cast< CellNumberStringMod* >(npc(changes)->next()) : static_cast< CellNumberStringMod* >(nullptr));
    auto deletedChars = new ::java::util::BitSet();
    auto adjust = int32_t(0);
    for (auto _i = npc(specials)->iterator(); _i->hasNext(); ) {
        CellNumberFormatter_Special* s = java_cast< CellNumberFormatter_Special* >(_i->next());
        {
            auto adjustedPos = npc(s)->pos + adjust;
            if(!npc(deletedChars)->get(npc(s)->pos) && npc(output)->charAt(adjustedPos) == u'#') {
                npc(output)->deleteCharAt(adjustedPos);
                adjust--;
                npc(deletedChars)->set(npc(s)->pos);
            }
            while (nextChange != nullptr && s == npc(nextChange)->getSpecial()) {
                auto lenBefore = npc(output)->length();
                auto modPos = npc(s)->pos + adjust;
                {
                    int32_t delPos;
                    int32_t delEndPos;
                    int32_t modEndPos;
                    switch (npc(nextChange)->getOp()) {
                    case CellNumberStringMod::AFTER:
                        if(npc(npc(nextChange)->getToAdd())->equals(groupingSeparator) && npc(deletedChars)->get(npc(s)->pos)) {
                            break;
                        }
                        npc(output)->insert(modPos + int32_t(1), npc(nextChange)->getToAdd());
                        break;
                    case CellNumberStringMod::BEFORE:
                        npc(output)->insert(modPos, npc(nextChange)->getToAdd());
                        break;
                    case CellNumberStringMod::REPLACE:
                        delPos = npc(s)->pos;
                        if(!npc(nextChange)->isStartInclusive()) {
                            delPos++;
                            modPos++;
                        }
                        while (npc(deletedChars)->get(delPos)) {
                            delPos++;
                            modPos++;
                        }
                        delEndPos = npc(npc(nextChange)->getEnd())->pos;
                        if(npc(nextChange)->isEndInclusive()) {
                            delEndPos++;
                        }
                        modEndPos = delEndPos + adjust;
                        if(modPos < modEndPos) {
                            if(npc(u""_j)->equals(static_cast< ::java::lang::Object* >(npc(nextChange)->getToAdd()))) {
                                npc(output)->delete_(modPos, modEndPos);
                            } else {
                                auto fillCh = npc(npc(nextChange)->getToAdd())->charAt(0);
                                for (auto i = modPos; i < modEndPos; i++) {
                                    npc(output)->setCharAt(i, fillCh);
                                }
                            }
                            npc(deletedChars)->set(delPos, delEndPos);
                        }
                        break;
                    default:
                        throw new ::java::lang::IllegalStateException(::java::lang::StringBuilder().append(u"Unknown op: "_j)->append(npc(nextChange)->getOp())->toString());
                    }
                }

                adjust += npc(output)->length() - lenBefore;
                nextChange = (npc(changes)->hasNext()) ? java_cast< CellNumberStringMod* >(npc(changes)->next()) : static_cast< CellNumberStringMod* >(nullptr);
            }
        }
    }
    if(negative) {
        npc(toAppendTo)->append(u'-');
    }
    npc(toAppendTo)->append(output);
}

void org::apache::poi::ss::format::CellNumberFormatter::writeScientific(double value, ::java::lang::StringBuffer* output, ::java::util::Set* mods)
{
    auto result = new ::java::lang::StringBuffer();
    auto fractionPos = new ::java::text::FieldPosition(::java::text::DecimalFormat::FRACTION_FIELD);
    npc(decimalFmt)->format(value, result, fractionPos);
    writeInteger(result, output, integerSpecials, mods, showGroupingSeparator);
    writeFractional(result, output);
    auto ePos = npc(fractionPos)->getEndIndex();
    auto signPos = ePos + int32_t(1);
    auto expSignRes = npc(result)->charAt(signPos);
    if(expSignRes != u'-') {
        expSignRes = u'+';
        npc(result)->insert(signPos, u'+');
    }
    auto it = npc(exponentSpecials)->listIterator(1);
    auto expSign = java_cast< CellNumberFormatter_Special* >(npc(it)->next());
    auto expSignFmt = npc(expSign)->ch;
    if(expSignRes == u'-' || expSignFmt == u'+') {
        npc(mods)->add(static_cast< ::java::lang::Object* >(replaceMod(expSign, true, expSign, true, expSignRes)));
    } else {
        npc(mods)->add(static_cast< ::java::lang::Object* >(deleteMod(expSign, true, expSign, true)));
    }
    auto exponentNum = new ::java::lang::StringBuffer(npc(result)->substring(signPos + int32_t(1)));
    writeInteger(exponentNum, output, exponentDigitSpecials, mods, false);
}

void org::apache::poi::ss::format::CellNumberFormatter::writeFraction(double value, ::java::lang::StringBuffer* result, double fractional, ::java::lang::StringBuffer* output, ::java::util::Set* mods)
{
    if(!improperFraction) {
        if(fractional == 0 && !hasChar(u'0', new ::java::util::ListArray({static_cast< ::java::util::List* >(numeratorSpecials)}))) {
            writeInteger(result, output, integerSpecials, mods, false);
            auto start = lastSpecial(integerSpecials);
            auto end = lastSpecial(denominatorSpecials);
            if(hasChar(u'?', new ::java::util::ListArray({static_cast< ::java::util::List* >(integerSpecials), static_cast< ::java::util::List* >(numeratorSpecials), static_cast< ::java::util::List* >(denominatorSpecials)}))) {
                npc(mods)->add(static_cast< ::java::lang::Object* >(replaceMod(start, false, end, true, u' ')));
            } else {
                npc(mods)->add(static_cast< ::java::lang::Object* >(deleteMod(start, false, end, true)));
            }
            return;
        } else {
            auto numNoZero = !hasChar(u'0', new ::java::util::ListArray({static_cast< ::java::util::List* >(numeratorSpecials)}));
            auto intNoZero = !hasChar(u'0', new ::java::util::ListArray({static_cast< ::java::util::List* >(integerSpecials)}));
            auto intOnlyHash = npc(integerSpecials)->isEmpty() || (npc(integerSpecials)->size() == 1 && hasChar(u'#', new ::java::util::ListArray({static_cast< ::java::util::List* >(integerSpecials)})));
            auto removeBecauseZero = fractional == 0 && (intOnlyHash || numNoZero);
            auto removeBecauseFraction = fractional != 0 && intNoZero;
            if(value == 0 && (removeBecauseZero || removeBecauseFraction)) {
                auto start = lastSpecial(integerSpecials);
                auto hasPlaceHolder = hasChar(u'?', new ::java::util::ListArray({static_cast< ::java::util::List* >(integerSpecials), static_cast< ::java::util::List* >(numeratorSpecials)}));
                auto sm = hasPlaceHolder ? replaceMod(start, true, numerator, false, u' ') : deleteMod(start, true, numerator, false);
                npc(mods)->add(static_cast< ::java::lang::Object* >(sm));
            } else {
                writeInteger(result, output, integerSpecials, mods, false);
            }
        }
    }
    try {
        int32_t n;
        int32_t d;
        if(fractional == 0 || (improperFraction && std::fmod(fractional, static_cast< double >(int32_t(1))) == 0)) {
            n = static_cast< int32_t >(::java::lang::Math::round(fractional));
            d = 1;
        } else {
            auto frac = SimpleFraction::buildFractionMaxDenominator(fractional, maxDenominator);
            n = npc(frac)->getNumerator();
            d = npc(frac)->getDenominator();
        }
        if(improperFraction) {
            n += ::java::lang::Math::round(value * d);
        }
        writeSingleInteger(numeratorFmt, n, output, numeratorSpecials, mods);
        writeSingleInteger(denominatorFmt, d, output, denominatorSpecials, mods);
    } catch (::java::lang::RuntimeException* ignored) {
        npc(LOG_)->log(::org::apache::poi::util::POILogger::ERROR, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(u"error while fraction evaluation"_j), static_cast< ::java::lang::Object* >(ignored)}));
    }
}

java::lang::String* org::apache::poi::ss::format::CellNumberFormatter::localiseFormat(::java::lang::String* format)
{
    auto dfs = getDecimalFormatSymbols();
    if(npc(format)->contains(u","_j) && npc(dfs)->getGroupingSeparator() != u',') {
        if(npc(format)->contains(u"."_j) && npc(dfs)->getDecimalSeparator() != u'.') {
            format = replaceLast(format, u"\\."_j, u"[DECIMAL_SEPARATOR]"_j);
            format = npc(npc(format)->replace(u',', npc(dfs)->getGroupingSeparator()))->replace(static_cast< ::java::lang::CharSequence* >(u"[DECIMAL_SEPARATOR]"_j), static_cast< ::java::lang::CharSequence* >(::java::lang::Character::toString(npc(dfs)->getDecimalSeparator())));
        } else {
            format = npc(format)->replace(u',', npc(dfs)->getGroupingSeparator());
        }
    } else if(npc(format)->contains(u"."_j) && npc(dfs)->getDecimalSeparator() != u'.') {
        format = npc(format)->replace(u'.', npc(dfs)->getDecimalSeparator());
    }
    return format;
}

java::lang::String* org::apache::poi::ss::format::CellNumberFormatter::replaceLast(::java::lang::String* text, ::java::lang::String* regex, ::java::lang::String* replacement)
{
    clinit();
    return npc(text)->replaceFirst(::java::lang::StringBuilder().append(u"(?s)(.*)"_j)->append(regex)->toString(), ::java::lang::StringBuilder().append(u"$1"_j)->append(replacement)->toString());
}

bool org::apache::poi::ss::format::CellNumberFormatter::hasChar(char16_t ch, ::java::util::ListArray*/*...*/ numSpecials)
{
    clinit();
    for(auto specials : *npc(numSpecials)) {
        for (auto _i = npc(specials)->iterator(); _i->hasNext(); ) {
            CellNumberFormatter_Special* s = java_cast< CellNumberFormatter_Special* >(_i->next());
            {
                if(npc(s)->ch == ch) {
                    return true;
                }
            }
        }
    }
    return false;
}

void org::apache::poi::ss::format::CellNumberFormatter::writeSingleInteger(::java::lang::String* fmt, int32_t num, ::java::lang::StringBuffer* output, ::java::util::List* numSpecials, ::java::util::Set* mods)
{
    auto sb = new ::java::lang::StringBuffer();
    auto formatter = new ::java::util::Formatter(static_cast< ::java::lang::Appendable* >(sb), locale);
    {
        auto finally1 = finally([&] {
            npc(formatter)->close();
        });
        {
            npc(formatter)->format(locale, fmt, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(::java::lang::Integer::valueOf(num))}));
        }
    }

    writeInteger(sb, output, numSpecials, mods, false);
}

void org::apache::poi::ss::format::CellNumberFormatter::writeInteger(::java::lang::StringBuffer* result, ::java::lang::StringBuffer* output, ::java::util::List* numSpecials, ::java::util::Set* mods, bool showGroupingSeparator)
{
    auto dfs = getDecimalFormatSymbols();
    auto decimalSeparator = ::java::lang::Character::toString(npc(dfs)->getDecimalSeparator());
    auto groupingSeparator = ::java::lang::Character::toString(npc(dfs)->getGroupingSeparator());
    auto pos = npc(result)->indexOf(decimalSeparator) - int32_t(1);
    if(pos < 0) {
        if(exponent != nullptr && numSpecials == integerSpecials) {
            pos = npc(result)->indexOf(u"E"_j) - int32_t(1);
        } else {
            pos = npc(result)->length() - int32_t(1);
        }
    }
    int32_t strip;
    for (strip = 0; strip < pos; strip++) {
        auto resultCh = npc(result)->charAt(strip);
        if(resultCh != u'0' && resultCh != npc(dfs)->getGroupingSeparator()) {
            break;
        }
    }
    auto it = npc(numSpecials)->listIterator(npc(numSpecials)->size());
    auto followWithGroupingSeparator = false;
    CellNumberFormatter_Special* lastOutputIntegerDigit = nullptr;
    auto digit = int32_t(0);
    while (npc(it)->hasPrevious()) {
        char16_t resultCh;
        if(pos >= 0) {
            resultCh = npc(result)->charAt(pos);
        } else {
            resultCh = u'0';
        }
        auto s = java_cast< CellNumberFormatter_Special* >(npc(it)->previous());
        followWithGroupingSeparator = showGroupingSeparator && digit > 0 && digit % int32_t(3) == 0;
        auto zeroStrip = false;
        if(resultCh != u'0' || npc(s)->ch == u'0' || npc(s)->ch == u'?' || pos >= strip) {
            zeroStrip = npc(s)->ch == u'?' && pos < strip;
            npc(output)->setCharAt(npc(s)->pos, (zeroStrip ? u' ' : resultCh));
            lastOutputIntegerDigit = s;
        }
        if(followWithGroupingSeparator) {
            npc(mods)->add(static_cast< ::java::lang::Object* >(insertMod(s, zeroStrip ? static_cast< ::java::lang::CharSequence* >(u" "_j) : static_cast< ::java::lang::CharSequence* >(groupingSeparator), CellNumberStringMod::AFTER)));
            followWithGroupingSeparator = false;
        }
        digit++;
        --pos;
    }
    auto extraLeadingDigits = new ::java::lang::StringBuffer();
    if(pos >= 0) {
        ++pos;
        extraLeadingDigits = new ::java::lang::StringBuffer(npc(result)->substring(int32_t(0), pos));
        if(showGroupingSeparator) {
            while (pos > 0) {
                if(digit > 0 && digit % int32_t(3) == 0) {
                    npc(extraLeadingDigits)->insert(pos, groupingSeparator);
                }
                digit++;
                --pos;
            }
        }
        npc(mods)->add(static_cast< ::java::lang::Object* >(insertMod(lastOutputIntegerDigit, extraLeadingDigits, CellNumberStringMod::BEFORE)));
    }
}

void org::apache::poi::ss::format::CellNumberFormatter::writeFractional(::java::lang::StringBuffer* result, ::java::lang::StringBuffer* output)
{
    int32_t digit;
    int32_t strip;
    if(npc(fractionalSpecials)->size() > 0) {
        auto decimalSeparator = ::java::lang::Character::toString(npc(getDecimalFormatSymbols())->getDecimalSeparator());
        digit = npc(result)->indexOf(decimalSeparator) + int32_t(1);
        if(exponent != nullptr) {
            strip = npc(result)->indexOf(u"e"_j) - int32_t(1);
        } else {
            strip = npc(result)->length() - int32_t(1);
        }
        while (strip > digit && npc(result)->charAt(strip) == u'0') {
            strip--;
        }
        for (auto _i = npc(fractionalSpecials)->iterator(); _i->hasNext(); ) {
            CellNumberFormatter_Special* s = java_cast< CellNumberFormatter_Special* >(_i->next());
            {
                auto resultCh = npc(result)->charAt(digit);
                if(resultCh != u'0' || npc(s)->ch == u'0' || digit < strip) {
                    npc(output)->setCharAt(npc(s)->pos, resultCh);
                } else if(npc(s)->ch == u'?') {
                    npc(output)->setCharAt(npc(s)->pos, u' ');
                }
                digit++;
            }
        }
    }
}

void org::apache::poi::ss::format::CellNumberFormatter::simpleValue(::java::lang::StringBuffer* toAppendTo, ::java::lang::Object* value)
{
    npc(SIMPLE_NUMBER)->formatValue(toAppendTo, value);
}

org::apache::poi::ss::format::CellNumberFormatter_Special* org::apache::poi::ss::format::CellNumberFormatter::lastSpecial(::java::util::List* s)
{
    clinit();
    return java_cast< CellNumberFormatter_Special* >(npc(s)->get(npc(s)->size() - int32_t(1)));
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::format::CellNumberFormatter::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.format.CellNumberFormatter", 44);
    return c;
}

void org::apache::poi::ss::format::CellNumberFormatter::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        LOG_ = ::org::apache::poi::util::POILogFactory::getLogger(static_cast< ::java::lang::Class* >(CellNumberFormatter::class_()));
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* org::apache::poi::ss::format::CellNumberFormatter::getClass0()
{
    return class_();
}

