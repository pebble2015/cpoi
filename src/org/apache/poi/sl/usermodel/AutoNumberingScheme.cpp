// Generated from /POI/java/org/apache/poi/sl/usermodel/AutoNumberingScheme.java
#include <org/apache/poi/sl/usermodel/AutoNumberingScheme.hpp>

#include <java/io/Serializable.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/Cloneable.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/Enum.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/util/Locale.hpp>
#include <Array.hpp>
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
typedef ::SubArray< ::java::lang::Cloneable, ObjectArray > CloneableArray;
typedef ::SubArray< ::java::lang::Comparable, ObjectArray > ComparableArray;
typedef ::SubArray< ::java::lang::Enum, ObjectArray, ComparableArray, ::java::io::SerializableArray > EnumArray;
typedef ::SubArray< ::java::lang::String, ObjectArray, ::java::io::SerializableArray, ComparableArray, CharSequenceArray > StringArray;
    } // lang
} // java

namespace poi
{
    namespace sl
    {
        namespace usermodel
        {
typedef ::SubArray< ::poi::sl::usermodel::AutoNumberingScheme, ::java::lang::EnumArray > AutoNumberingSchemeArray;
        } // usermodel
    } // sl
} // poi

namespace java
{
    namespace lang
    {
typedef ::SubArray< ::java::lang::StringArray, CloneableArray, ::java::io::SerializableArray > StringArrayArray;
    } // lang
} // java

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::sl::usermodel::AutoNumberingScheme::AutoNumberingScheme(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::sl::usermodel::AutoNumberingScheme::AutoNumberingScheme(::java::lang::String* name, int ordinal, int32_t nativeId, int32_t ooxmlId) 
    : AutoNumberingScheme(*static_cast< ::default_init_tag* >(0))
{
    ctor(name, ordinal, nativeId,ooxmlId);
}

poi::sl::usermodel::AutoNumberingScheme* poi::sl::usermodel::AutoNumberingScheme::alphaLcParenBoth = new ::poi::sl::usermodel::AutoNumberingScheme(u"alphaLcParenBoth"_j, 0, int32_t(8), int32_t(1));
poi::sl::usermodel::AutoNumberingScheme* poi::sl::usermodel::AutoNumberingScheme::alphaUcParenBoth = new ::poi::sl::usermodel::AutoNumberingScheme(u"alphaUcParenBoth"_j, 1, int32_t(10), int32_t(2));
poi::sl::usermodel::AutoNumberingScheme* poi::sl::usermodel::AutoNumberingScheme::alphaLcParenRight = new ::poi::sl::usermodel::AutoNumberingScheme(u"alphaLcParenRight"_j, 2, int32_t(9), int32_t(3));
poi::sl::usermodel::AutoNumberingScheme* poi::sl::usermodel::AutoNumberingScheme::alphaUcParenRight = new ::poi::sl::usermodel::AutoNumberingScheme(u"alphaUcParenRight"_j, 3, int32_t(11), int32_t(4));
poi::sl::usermodel::AutoNumberingScheme* poi::sl::usermodel::AutoNumberingScheme::alphaLcPeriod = new ::poi::sl::usermodel::AutoNumberingScheme(u"alphaLcPeriod"_j, 4, int32_t(0), int32_t(5));
poi::sl::usermodel::AutoNumberingScheme* poi::sl::usermodel::AutoNumberingScheme::alphaUcPeriod = new ::poi::sl::usermodel::AutoNumberingScheme(u"alphaUcPeriod"_j, 5, int32_t(1), int32_t(6));
poi::sl::usermodel::AutoNumberingScheme* poi::sl::usermodel::AutoNumberingScheme::arabicParenBoth = new ::poi::sl::usermodel::AutoNumberingScheme(u"arabicParenBoth"_j, 6, int32_t(12), int32_t(7));
poi::sl::usermodel::AutoNumberingScheme* poi::sl::usermodel::AutoNumberingScheme::arabicParenRight = new ::poi::sl::usermodel::AutoNumberingScheme(u"arabicParenRight"_j, 7, int32_t(2), int32_t(8));
poi::sl::usermodel::AutoNumberingScheme* poi::sl::usermodel::AutoNumberingScheme::arabicPeriod = new ::poi::sl::usermodel::AutoNumberingScheme(u"arabicPeriod"_j, 8, int32_t(3), int32_t(9));
poi::sl::usermodel::AutoNumberingScheme* poi::sl::usermodel::AutoNumberingScheme::arabicPlain = new ::poi::sl::usermodel::AutoNumberingScheme(u"arabicPlain"_j, 9, int32_t(13), int32_t(10));
poi::sl::usermodel::AutoNumberingScheme* poi::sl::usermodel::AutoNumberingScheme::romanLcParenBoth = new ::poi::sl::usermodel::AutoNumberingScheme(u"romanLcParenBoth"_j, 10, int32_t(4), int32_t(11));
poi::sl::usermodel::AutoNumberingScheme* poi::sl::usermodel::AutoNumberingScheme::romanUcParenBoth = new ::poi::sl::usermodel::AutoNumberingScheme(u"romanUcParenBoth"_j, 11, int32_t(14), int32_t(12));
poi::sl::usermodel::AutoNumberingScheme* poi::sl::usermodel::AutoNumberingScheme::romanLcParenRight = new ::poi::sl::usermodel::AutoNumberingScheme(u"romanLcParenRight"_j, 12, int32_t(5), int32_t(13));
poi::sl::usermodel::AutoNumberingScheme* poi::sl::usermodel::AutoNumberingScheme::romanUcParenRight = new ::poi::sl::usermodel::AutoNumberingScheme(u"romanUcParenRight"_j, 13, int32_t(15), int32_t(14));
poi::sl::usermodel::AutoNumberingScheme* poi::sl::usermodel::AutoNumberingScheme::romanLcPeriod = new ::poi::sl::usermodel::AutoNumberingScheme(u"romanLcPeriod"_j, 14, int32_t(6), int32_t(15));
poi::sl::usermodel::AutoNumberingScheme* poi::sl::usermodel::AutoNumberingScheme::romanUcPeriod = new ::poi::sl::usermodel::AutoNumberingScheme(u"romanUcPeriod"_j, 15, int32_t(7), int32_t(16));
poi::sl::usermodel::AutoNumberingScheme* poi::sl::usermodel::AutoNumberingScheme::circleNumDbPlain = new ::poi::sl::usermodel::AutoNumberingScheme(u"circleNumDbPlain"_j, 16, int32_t(18), int32_t(17));
poi::sl::usermodel::AutoNumberingScheme* poi::sl::usermodel::AutoNumberingScheme::circleNumWdBlackPlain = new ::poi::sl::usermodel::AutoNumberingScheme(u"circleNumWdBlackPlain"_j, 17, int32_t(20), int32_t(18));
poi::sl::usermodel::AutoNumberingScheme* poi::sl::usermodel::AutoNumberingScheme::circleNumWdWhitePlain = new ::poi::sl::usermodel::AutoNumberingScheme(u"circleNumWdWhitePlain"_j, 18, int32_t(19), int32_t(19));
poi::sl::usermodel::AutoNumberingScheme* poi::sl::usermodel::AutoNumberingScheme::arabicDbPeriod = new ::poi::sl::usermodel::AutoNumberingScheme(u"arabicDbPeriod"_j, 19, int32_t(29), int32_t(20));
poi::sl::usermodel::AutoNumberingScheme* poi::sl::usermodel::AutoNumberingScheme::arabicDbPlain = new ::poi::sl::usermodel::AutoNumberingScheme(u"arabicDbPlain"_j, 20, int32_t(28), int32_t(21));
poi::sl::usermodel::AutoNumberingScheme* poi::sl::usermodel::AutoNumberingScheme::ea1ChsPeriod = new ::poi::sl::usermodel::AutoNumberingScheme(u"ea1ChsPeriod"_j, 21, int32_t(17), int32_t(22));
poi::sl::usermodel::AutoNumberingScheme* poi::sl::usermodel::AutoNumberingScheme::ea1ChsPlain = new ::poi::sl::usermodel::AutoNumberingScheme(u"ea1ChsPlain"_j, 22, int32_t(16), int32_t(23));
poi::sl::usermodel::AutoNumberingScheme* poi::sl::usermodel::AutoNumberingScheme::ea1ChtPeriod = new ::poi::sl::usermodel::AutoNumberingScheme(u"ea1ChtPeriod"_j, 23, int32_t(21), int32_t(24));
poi::sl::usermodel::AutoNumberingScheme* poi::sl::usermodel::AutoNumberingScheme::ea1ChtPlain = new ::poi::sl::usermodel::AutoNumberingScheme(u"ea1ChtPlain"_j, 24, int32_t(20), int32_t(25));
poi::sl::usermodel::AutoNumberingScheme* poi::sl::usermodel::AutoNumberingScheme::ea1JpnChsDbPeriod = new ::poi::sl::usermodel::AutoNumberingScheme(u"ea1JpnChsDbPeriod"_j, 25, int32_t(38), int32_t(26));
poi::sl::usermodel::AutoNumberingScheme* poi::sl::usermodel::AutoNumberingScheme::ea1JpnKorPlain = new ::poi::sl::usermodel::AutoNumberingScheme(u"ea1JpnKorPlain"_j, 26, int32_t(26), int32_t(27));
poi::sl::usermodel::AutoNumberingScheme* poi::sl::usermodel::AutoNumberingScheme::ea1JpnKorPeriod = new ::poi::sl::usermodel::AutoNumberingScheme(u"ea1JpnKorPeriod"_j, 27, int32_t(27), int32_t(28));
poi::sl::usermodel::AutoNumberingScheme* poi::sl::usermodel::AutoNumberingScheme::arabic1Minus = new ::poi::sl::usermodel::AutoNumberingScheme(u"arabic1Minus"_j, 28, int32_t(23), int32_t(29));
poi::sl::usermodel::AutoNumberingScheme* poi::sl::usermodel::AutoNumberingScheme::arabic2Minus = new ::poi::sl::usermodel::AutoNumberingScheme(u"arabic2Minus"_j, 29, int32_t(24), int32_t(30));
poi::sl::usermodel::AutoNumberingScheme* poi::sl::usermodel::AutoNumberingScheme::hebrew2Minus = new ::poi::sl::usermodel::AutoNumberingScheme(u"hebrew2Minus"_j, 30, int32_t(25), int32_t(31));
poi::sl::usermodel::AutoNumberingScheme* poi::sl::usermodel::AutoNumberingScheme::thaiAlphaPeriod = new ::poi::sl::usermodel::AutoNumberingScheme(u"thaiAlphaPeriod"_j, 31, int32_t(30), int32_t(32));
poi::sl::usermodel::AutoNumberingScheme* poi::sl::usermodel::AutoNumberingScheme::thaiAlphaParenRight = new ::poi::sl::usermodel::AutoNumberingScheme(u"thaiAlphaParenRight"_j, 32, int32_t(31), int32_t(33));
poi::sl::usermodel::AutoNumberingScheme* poi::sl::usermodel::AutoNumberingScheme::thaiAlphaParenBoth = new ::poi::sl::usermodel::AutoNumberingScheme(u"thaiAlphaParenBoth"_j, 33, int32_t(32), int32_t(34));
poi::sl::usermodel::AutoNumberingScheme* poi::sl::usermodel::AutoNumberingScheme::thaiNumPeriod = new ::poi::sl::usermodel::AutoNumberingScheme(u"thaiNumPeriod"_j, 34, int32_t(33), int32_t(35));
poi::sl::usermodel::AutoNumberingScheme* poi::sl::usermodel::AutoNumberingScheme::thaiNumParenRight = new ::poi::sl::usermodel::AutoNumberingScheme(u"thaiNumParenRight"_j, 35, int32_t(34), int32_t(36));
poi::sl::usermodel::AutoNumberingScheme* poi::sl::usermodel::AutoNumberingScheme::thaiNumParenBoth = new ::poi::sl::usermodel::AutoNumberingScheme(u"thaiNumParenBoth"_j, 36, int32_t(35), int32_t(37));
poi::sl::usermodel::AutoNumberingScheme* poi::sl::usermodel::AutoNumberingScheme::hindiAlphaPeriod = new ::poi::sl::usermodel::AutoNumberingScheme(u"hindiAlphaPeriod"_j, 37, int32_t(36), int32_t(38));
poi::sl::usermodel::AutoNumberingScheme* poi::sl::usermodel::AutoNumberingScheme::hindiNumPeriod = new ::poi::sl::usermodel::AutoNumberingScheme(u"hindiNumPeriod"_j, 38, int32_t(37), int32_t(39));
poi::sl::usermodel::AutoNumberingScheme* poi::sl::usermodel::AutoNumberingScheme::hindiNumParenRight = new ::poi::sl::usermodel::AutoNumberingScheme(u"hindiNumParenRight"_j, 39, int32_t(39), int32_t(40));
poi::sl::usermodel::AutoNumberingScheme* poi::sl::usermodel::AutoNumberingScheme::hindiAlpha1Period = new ::poi::sl::usermodel::AutoNumberingScheme(u"hindiAlpha1Period"_j, 40, int32_t(39), int32_t(41));
void poi::sl::usermodel::AutoNumberingScheme::ctor(::java::lang::String* name, int ordinal, int32_t nativeId, int32_t ooxmlId)
{
    super::ctor(name, ordinal);
    this->nativeId = nativeId;
    this->ooxmlId = ooxmlId;
}

poi::sl::usermodel::AutoNumberingScheme* poi::sl::usermodel::AutoNumberingScheme::forNativeID(int32_t nativeId)
{
    clinit();
    for(auto ans : *npc(values())) {
        if(npc(ans)->nativeId == nativeId)
            return ans;

    }
    return nullptr;
}

poi::sl::usermodel::AutoNumberingScheme* poi::sl::usermodel::AutoNumberingScheme::forOoxmlID(int32_t ooxmlId)
{
    clinit();
    for(auto ans : *npc(values())) {
        if(npc(ans)->ooxmlId == ooxmlId)
            return ans;

    }
    return nullptr;
}

java::lang::String* poi::sl::usermodel::AutoNumberingScheme::getDescription()
{
    {
        auto v = this;
        if((v == alphaLcPeriod)) {
            return u"Lowercase Latin character followed by a period. Example: a., b., c., ..."_j;
        }
        if((v == alphaUcPeriod)) {
            return u"Uppercase Latin character followed by a period. Example: A., B., C., ..."_j;
        }
        if((v == arabicParenRight)) {
            return u"Arabic numeral followed by a closing parenthesis. Example: 1), 2), 3), ..."_j;
        }
        if((v == arabicPeriod)) {
            return u"Arabic numeral followed by a period. Example: 1., 2., 3., ..."_j;
        }
        if((v == romanLcParenBoth)) {
            return u"Lowercase Roman numeral enclosed in parentheses. Example: (i), (ii), (iii), ..."_j;
        }
        if((v == romanLcParenRight)) {
            return u"Lowercase Roman numeral followed by a closing parenthesis. Example: i), ii), iii), ..."_j;
        }
        if((v == romanLcPeriod)) {
            return u"Lowercase Roman numeral followed by a period. Example: i., ii., iii., ..."_j;
        }
        if((v == romanUcPeriod)) {
            return u"Uppercase Roman numeral followed by a period. Example: I., II., III., ..."_j;
        }
        if((v == alphaLcParenBoth)) {
            return u"Lowercase alphabetic character enclosed in parentheses. Example: (a), (b), (c), ..."_j;
        }
        if((v == alphaLcParenRight)) {
            return u"Lowercase alphabetic character followed by a closing parenthesis. Example: a), b), c), ..."_j;
        }
        if((v == alphaUcParenBoth)) {
            return u"Uppercase alphabetic character enclosed in parentheses. Example: (A), (B), (C), ..."_j;
        }
        if((v == alphaUcParenRight)) {
            return u"Uppercase alphabetic character followed by a closing parenthesis. Example: A), B), C), ..."_j;
        }
        if((v == arabicParenBoth)) {
            return u"Arabic numeral enclosed in parentheses. Example: (1), (2), (3), ..."_j;
        }
        if((v == arabicPlain)) {
            return u"Arabic numeral. Example: 1, 2, 3, ..."_j;
        }
        if((v == romanUcParenBoth)) {
            return u"Uppercase Roman numeral enclosed in parentheses. Example: (I), (II), (III), ..."_j;
        }
        if((v == romanUcParenRight)) {
            return u"Uppercase Roman numeral followed by a closing parenthesis. Example: I), II), III), ..."_j;
        }
        if((v == ea1ChsPlain)) {
            return u"Simplified Chinese."_j;
        }
        if((v == ea1ChsPeriod)) {
            return u"Simplified Chinese with single-byte period."_j;
        }
        if((v == circleNumDbPlain)) {
            return u"Double byte circle numbers."_j;
        }
        if((v == circleNumWdWhitePlain)) {
            return u"Wingdings white circle numbers."_j;
        }
        if((v == circleNumWdBlackPlain)) {
            return u"Wingdings black circle numbers."_j;
        }
        if((v == ea1ChtPlain)) {
            return u"Traditional Chinese."_j;
        }
        if((v == ea1ChtPeriod)) {
            return u"Traditional Chinese with single-byte period."_j;
        }
        if((v == arabic1Minus)) {
            return u"Bidi Arabic 1 (AraAlpha) with ANSI minus symbol."_j;
        }
        if((v == arabic2Minus)) {
            return u"Bidi Arabic 2 (AraAbjad) with ANSI minus symbol."_j;
        }
        if((v == hebrew2Minus)) {
            return u"Bidi Hebrew 2 with ANSI minus symbol."_j;
        }
        if((v == ea1JpnKorPlain)) {
            return u"Japanese/Korean."_j;
        }
        if((v == ea1JpnKorPeriod)) {
            return u"Japanese/Korean with single-byte period."_j;
        }
        if((v == arabicDbPlain)) {
            return u"Double-byte Arabic numbers."_j;
        }
        if((v == arabicDbPeriod)) {
            return u"Double-byte Arabic numbers with double-byte period."_j;
        }
        if((v == thaiAlphaPeriod)) {
            return u"Thai alphabetic character followed by a period."_j;
        }
        if((v == thaiAlphaParenRight)) {
            return u"Thai alphabetic character followed by a closing parenthesis."_j;
        }
        if((v == thaiAlphaParenBoth)) {
            return u"Thai alphabetic character enclosed by parentheses."_j;
        }
        if((v == thaiNumPeriod)) {
            return u"Thai numeral followed by a period."_j;
        }
        if((v == thaiNumParenRight)) {
            return u"Thai numeral followed by a closing parenthesis."_j;
        }
        if((v == thaiNumParenBoth)) {
            return u"Thai numeral enclosed in parentheses."_j;
        }
        if((v == hindiAlphaPeriod)) {
            return u"Hindi alphabetic character followed by a period."_j;
        }
        if((v == hindiNumPeriod)) {
            return u"Hindi numeric character followed by a period."_j;
        }
        if((v == ea1JpnChsDbPeriod)) {
            return u"Japanese with double-byte period."_j;
        }
        if((v == hindiNumParenRight)) {
            return u"Hindi numeric character followed by a closing parenthesis."_j;
        }
        if((v == hindiAlpha1Period)) {
            return u"Hindi alphabetic character followed by a period."_j;
        }
        if((((v != alphaLcPeriod) && (v != alphaUcPeriod) && (v != arabicParenRight) && (v != arabicPeriod) && (v != romanLcParenBoth) && (v != romanLcParenRight) && (v != romanLcPeriod) && (v != romanUcPeriod) && (v != alphaLcParenBoth) && (v != alphaLcParenRight) && (v != alphaUcParenBoth) && (v != alphaUcParenRight) && (v != arabicParenBoth) && (v != arabicPlain) && (v != romanUcParenBoth) && (v != romanUcParenRight) && (v != ea1ChsPlain) && (v != ea1ChsPeriod) && (v != circleNumDbPlain) && (v != circleNumWdWhitePlain) && (v != circleNumWdBlackPlain) && (v != ea1ChtPlain) && (v != ea1ChtPeriod) && (v != arabic1Minus) && (v != arabic2Minus) && (v != hebrew2Minus) && (v != ea1JpnKorPlain) && (v != ea1JpnKorPeriod) && (v != arabicDbPlain) && (v != arabicDbPeriod) && (v != thaiAlphaPeriod) && (v != thaiAlphaParenRight) && (v != thaiAlphaParenBoth) && (v != thaiNumPeriod) && (v != thaiNumParenRight) && (v != thaiNumParenBoth) && (v != hindiAlphaPeriod) && (v != hindiNumPeriod) && (v != ea1JpnChsDbPeriod) && (v != hindiNumParenRight) && (v != hindiAlpha1Period)))) {
            return u"Unknown Numbered Scheme"_j;
        }
end_switch0:;
    }

}

java::lang::String* poi::sl::usermodel::AutoNumberingScheme::format(int32_t value)
{
    auto index = formatIndex(value);
    auto cased = formatCase(index);
    auto seperated = formatSeperator(cased);
    return seperated;
}

java::lang::String* poi::sl::usermodel::AutoNumberingScheme::formatSeperator(::java::lang::String* cased)
{
    auto name = npc(static_cast< ::java::lang::Enum* >(this)->name())->toLowerCase(::java::util::Locale::ROOT());
    if(npc(name)->contains(u"plain"_j))
        return cased;

    if(npc(name)->contains(u"parenright"_j))
        return ::java::lang::StringBuilder().append(cased)->append(u")"_j)->toString();

    if(npc(name)->contains(u"parenboth"_j))
        return ::java::lang::StringBuilder().append(u"("_j)->append(cased)
            ->append(u")"_j)->toString();

    if(npc(name)->contains(u"period"_j))
        return ::java::lang::StringBuilder().append(cased)->append(u"."_j)->toString();

    if(npc(name)->contains(u"minus"_j))
        return ::java::lang::StringBuilder().append(cased)->append(u"-"_j)->toString();

    return cased;
}

java::lang::String* poi::sl::usermodel::AutoNumberingScheme::formatCase(::java::lang::String* index)
{
    auto name = npc(static_cast< ::java::lang::Enum* >(this)->name())->toLowerCase(::java::util::Locale::ROOT());
    if(npc(name)->contains(u"lc"_j))
        return npc(index)->toLowerCase(::java::util::Locale::ROOT());

    if(npc(name)->contains(u"uc"_j))
        return npc(index)->toUpperCase(::java::util::Locale::ROOT());

    return index;
}

java::lang::String*& poi::sl::usermodel::AutoNumberingScheme::ARABIC_LIST()
{
    clinit();
    return ARABIC_LIST_;
}
java::lang::String* poi::sl::usermodel::AutoNumberingScheme::ARABIC_LIST_;

java::lang::String*& poi::sl::usermodel::AutoNumberingScheme::ALPHA_LIST()
{
    clinit();
    return ALPHA_LIST_;
}
java::lang::String* poi::sl::usermodel::AutoNumberingScheme::ALPHA_LIST_;

java::lang::String*& poi::sl::usermodel::AutoNumberingScheme::WINGDINGS_WHITE_LIST()
{
    clinit();
    return WINGDINGS_WHITE_LIST_;
}
java::lang::String* poi::sl::usermodel::AutoNumberingScheme::WINGDINGS_WHITE_LIST_;

java::lang::String*& poi::sl::usermodel::AutoNumberingScheme::WINGDINGS_BLACK_LIST()
{
    clinit();
    return WINGDINGS_BLACK_LIST_;
}
java::lang::String* poi::sl::usermodel::AutoNumberingScheme::WINGDINGS_BLACK_LIST_;

java::lang::String*& poi::sl::usermodel::AutoNumberingScheme::CIRCLE_DB_LIST()
{
    clinit();
    return CIRCLE_DB_LIST_;
}
java::lang::String* poi::sl::usermodel::AutoNumberingScheme::CIRCLE_DB_LIST_;

java::lang::String* poi::sl::usermodel::AutoNumberingScheme::formatIndex(int32_t value)
{
    auto name = npc(static_cast< ::java::lang::Enum* >(this)->name())->toLowerCase(::java::util::Locale::ROOT());
    if(npc(name)->startsWith(u"roman"_j)) {
        return formatRomanIndex(value);
    } else if(npc(name)->startsWith(u"arabic"_j) && !npc(name)->contains(u"db"_j)) {
        return getIndexedList(value, ARABIC_LIST_, false);
    } else if(npc(name)->startsWith(u"alpha"_j)) {
        return getIndexedList(value, ALPHA_LIST_, true);
    } else if(npc(name)->contains(u"WdWhite"_j)) {
        return (value == 10) ? u"\u008A"_j : getIndexedList(value, WINGDINGS_WHITE_LIST_, false);
    } else if(npc(name)->contains(u"WdBlack"_j)) {
        return (value == 10) ? u"\u0095"_j : getIndexedList(value, WINGDINGS_BLACK_LIST_, false);
    } else if(npc(name)->contains(u"NumDb"_j)) {
        return (value == 10) ? u"\u277F"_j : getIndexedList(value, CIRCLE_DB_LIST_, true);
    } else {
        return u"?"_j;
    }
}

java::lang::String* poi::sl::usermodel::AutoNumberingScheme::getIndexedList(int32_t val, ::java::lang::String* list, bool oneBased)
{
    clinit();
    auto sb = new ::java::lang::StringBuilder();
    addIndexedChar(val, list, oneBased, sb);
    return npc(sb)->toString();
}

void poi::sl::usermodel::AutoNumberingScheme::addIndexedChar(int32_t val, ::java::lang::String* list, bool oneBased, ::java::lang::StringBuilder* sb)
{
    clinit();
    if(oneBased)
        val -= 1;

    auto const len = npc(list)->length();
    if(val >= len) {
        addIndexedChar(val / len, list, oneBased, sb);
    }
    npc(sb)->append(npc(list)->charAt(val % len));
}

java::lang::String* poi::sl::usermodel::AutoNumberingScheme::formatRomanIndex(int32_t value)
{
    auto const VALUES = new ::int32_tArray({
        int32_t(1000)
        , int32_t(900)
        , int32_t(500)
        , int32_t(400)
        , int32_t(100)
        , int32_t(90)
        , int32_t(50)
        , int32_t(40)
        , int32_t(10)
        , int32_t(9)
        , int32_t(5)
        , int32_t(4)
        , int32_t(1)
    });
    auto const ROMAN = new ::java::lang::StringArray({
        u"M"_j
        , u"CM"_j
        , u"D"_j
        , u"CD"_j
        , u"C"_j
        , u"XC"_j
        , u"L"_j
        , u"XL"_j
        , u"X"_j
        , u"IX"_j
        , u"V"_j
        , u"IV"_j
        , u"I"_j
    });
    auto const conciseList = (new ::java::lang::StringArrayArray({
        (new ::java::lang::StringArray({
        u"XLV"_j
        , u"VL"_j
    }))
        , (new ::java::lang::StringArray({
        u"XCV"_j
        , u"VC"_j
    }))
        , (new ::java::lang::StringArray({
        u"CDL"_j
        , u"LD"_j
    }))
        , (new ::java::lang::StringArray({
        u"CML"_j
        , u"LM"_j
    }))
        , (new ::java::lang::StringArray({
        u"CMVC"_j
        , u"LMVL"_j
    }))
        , (new ::java::lang::StringArray({
        u"CDXC"_j
        , u"LDXL"_j
    }))
        , (new ::java::lang::StringArray({
        u"CDVC"_j
        , u"LDVL"_j
    }))
        , (new ::java::lang::StringArray({
        u"CMXC"_j
        , u"LMXL"_j
    }))
        , (new ::java::lang::StringArray({
        u"XCIX"_j
        , u"VCIV"_j
    }))
        , (new ::java::lang::StringArray({
        u"XLIX"_j
        , u"VLIV"_j
    }))
        , (new ::java::lang::StringArray({
        u"XLIX"_j
        , u"IL"_j
    }))
        , (new ::java::lang::StringArray({
        u"XCIX"_j
        , u"IC"_j
    }))
        , (new ::java::lang::StringArray({
        u"CDXC"_j
        , u"XD"_j
    }))
        , (new ::java::lang::StringArray({
        u"CDVC"_j
        , u"XDV"_j
    }))
        , (new ::java::lang::StringArray({
        u"CDIC"_j
        , u"XDIX"_j
    }))
        , (new ::java::lang::StringArray({
        u"LMVL"_j
        , u"XMV"_j
    }))
        , (new ::java::lang::StringArray({
        u"CMIC"_j
        , u"XMIX"_j
    }))
        , (new ::java::lang::StringArray({
        u"CMXC"_j
        , u"XM"_j
    }))
        , (new ::java::lang::StringArray({
        u"XDV"_j
        , u"VD"_j
    }))
        , (new ::java::lang::StringArray({
        u"XDIX"_j
        , u"VDIV"_j
    }))
        , (new ::java::lang::StringArray({
        u"XMV"_j
        , u"VM"_j
    }))
        , (new ::java::lang::StringArray({
        u"XMIX"_j
        , u"VMIV"_j
    }))
        , (new ::java::lang::StringArray({
        u"VDIV"_j
        , u"ID"_j
    }))
        , (new ::java::lang::StringArray({
        u"VMIV"_j
        , u"IM"_j
    }))
    }));
    auto sb = new ::java::lang::StringBuilder();
    for (auto i = int32_t(0); i < 13; i++) {
        while (value >= (*VALUES)[i]) {
            value -= (*VALUES)[i];
            npc(sb)->append((*ROMAN)[i]);
        }
    }
    auto result = npc(sb)->toString();
    for(auto cc : *npc(conciseList)) {
        result = npc(result)->replace(static_cast< ::java::lang::CharSequence* >((*cc)[int32_t(0)]), static_cast< ::java::lang::CharSequence* >((*cc)[int32_t(1)]));
    }
    return result;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::sl::usermodel::AutoNumberingScheme::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.sl.usermodel.AutoNumberingScheme", 47);
    return c;
}

void poi::sl::usermodel::AutoNumberingScheme::clinit()
{
struct string_init_ {
    string_init_() {
    ARABIC_LIST_ = u"0123456789"_j;
    ALPHA_LIST_ = u"abcdefghijklmnopqrstuvwxyz"_j;
    WINGDINGS_WHITE_LIST_ = u"\u0080\u0081\u0082\u0083\u0084\u0085\u0086\u0087\u0088\u0089"_j;
    WINGDINGS_BLACK_LIST_ = u"\u008B\u008C\u008D\u008E\u008F\u0090\u0091\u0092\u0093\u0094"_j;
    CIRCLE_DB_LIST_ = u"\u2776\u2777\u2778\u2779\u277A\u277B\u277C\u277D\u277E"_j;
    }
};

    static string_init_ string_init_instance;

    super::clinit();
}

poi::sl::usermodel::AutoNumberingScheme* poi::sl::usermodel::AutoNumberingScheme::valueOf(::java::lang::String* a0)
{
    if(alphaLcParenBoth->toString()->equals(a0))
        return alphaLcParenBoth;
    if(alphaLcParenRight->toString()->equals(a0))
        return alphaLcParenRight;
    if(alphaLcPeriod->toString()->equals(a0))
        return alphaLcPeriod;
    if(alphaUcParenBoth->toString()->equals(a0))
        return alphaUcParenBoth;
    if(alphaUcParenRight->toString()->equals(a0))
        return alphaUcParenRight;
    if(alphaUcPeriod->toString()->equals(a0))
        return alphaUcPeriod;
    if(arabic1Minus->toString()->equals(a0))
        return arabic1Minus;
    if(arabic2Minus->toString()->equals(a0))
        return arabic2Minus;
    if(arabicDbPeriod->toString()->equals(a0))
        return arabicDbPeriod;
    if(arabicDbPlain->toString()->equals(a0))
        return arabicDbPlain;
    if(arabicParenBoth->toString()->equals(a0))
        return arabicParenBoth;
    if(arabicParenRight->toString()->equals(a0))
        return arabicParenRight;
    if(arabicPeriod->toString()->equals(a0))
        return arabicPeriod;
    if(arabicPlain->toString()->equals(a0))
        return arabicPlain;
    if(circleNumDbPlain->toString()->equals(a0))
        return circleNumDbPlain;
    if(circleNumWdBlackPlain->toString()->equals(a0))
        return circleNumWdBlackPlain;
    if(circleNumWdWhitePlain->toString()->equals(a0))
        return circleNumWdWhitePlain;
    if(ea1ChsPeriod->toString()->equals(a0))
        return ea1ChsPeriod;
    if(ea1ChsPlain->toString()->equals(a0))
        return ea1ChsPlain;
    if(ea1ChtPeriod->toString()->equals(a0))
        return ea1ChtPeriod;
    if(ea1ChtPlain->toString()->equals(a0))
        return ea1ChtPlain;
    if(ea1JpnChsDbPeriod->toString()->equals(a0))
        return ea1JpnChsDbPeriod;
    if(ea1JpnKorPeriod->toString()->equals(a0))
        return ea1JpnKorPeriod;
    if(ea1JpnKorPlain->toString()->equals(a0))
        return ea1JpnKorPlain;
    if(hebrew2Minus->toString()->equals(a0))
        return hebrew2Minus;
    if(hindiAlpha1Period->toString()->equals(a0))
        return hindiAlpha1Period;
    if(hindiAlphaPeriod->toString()->equals(a0))
        return hindiAlphaPeriod;
    if(hindiNumParenRight->toString()->equals(a0))
        return hindiNumParenRight;
    if(hindiNumPeriod->toString()->equals(a0))
        return hindiNumPeriod;
    if(romanLcParenBoth->toString()->equals(a0))
        return romanLcParenBoth;
    if(romanLcParenRight->toString()->equals(a0))
        return romanLcParenRight;
    if(romanLcPeriod->toString()->equals(a0))
        return romanLcPeriod;
    if(romanUcParenBoth->toString()->equals(a0))
        return romanUcParenBoth;
    if(romanUcParenRight->toString()->equals(a0))
        return romanUcParenRight;
    if(romanUcPeriod->toString()->equals(a0))
        return romanUcPeriod;
    if(thaiAlphaParenBoth->toString()->equals(a0))
        return thaiAlphaParenBoth;
    if(thaiAlphaParenRight->toString()->equals(a0))
        return thaiAlphaParenRight;
    if(thaiAlphaPeriod->toString()->equals(a0))
        return thaiAlphaPeriod;
    if(thaiNumParenBoth->toString()->equals(a0))
        return thaiNumParenBoth;
    if(thaiNumParenRight->toString()->equals(a0))
        return thaiNumParenRight;
    if(thaiNumPeriod->toString()->equals(a0))
        return thaiNumPeriod;
    throw new ::java::lang::IllegalArgumentException(a0);
}

poi::sl::usermodel::AutoNumberingSchemeArray* poi::sl::usermodel::AutoNumberingScheme::values()
{
    return new poi::sl::usermodel::AutoNumberingSchemeArray({
        alphaLcParenBoth,
        alphaLcParenRight,
        alphaLcPeriod,
        alphaUcParenBoth,
        alphaUcParenRight,
        alphaUcPeriod,
        arabic1Minus,
        arabic2Minus,
        arabicDbPeriod,
        arabicDbPlain,
        arabicParenBoth,
        arabicParenRight,
        arabicPeriod,
        arabicPlain,
        circleNumDbPlain,
        circleNumWdBlackPlain,
        circleNumWdWhitePlain,
        ea1ChsPeriod,
        ea1ChsPlain,
        ea1ChtPeriod,
        ea1ChtPlain,
        ea1JpnChsDbPeriod,
        ea1JpnKorPeriod,
        ea1JpnKorPlain,
        hebrew2Minus,
        hindiAlpha1Period,
        hindiAlphaPeriod,
        hindiNumParenRight,
        hindiNumPeriod,
        romanLcParenBoth,
        romanLcParenRight,
        romanLcPeriod,
        romanUcParenBoth,
        romanUcParenRight,
        romanUcPeriod,
        thaiAlphaParenBoth,
        thaiAlphaParenRight,
        thaiAlphaPeriod,
        thaiNumParenBoth,
        thaiNumParenRight,
        thaiNumPeriod,
    });
}

java::lang::Class* poi::sl::usermodel::AutoNumberingScheme::getClass0()
{
    return class_();
}

