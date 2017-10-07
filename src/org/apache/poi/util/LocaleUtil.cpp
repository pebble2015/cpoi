// Generated from /POI/java/org/apache/poi/util/LocaleUtil.java
#include <org/apache/poi/util/LocaleUtil.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/ThreadLocal.hpp>
#include <java/nio/charset/Charset.hpp>
#include <java/util/Calendar.hpp>
#include <java/util/Locale.hpp>
#include <java/util/TimeZone.hpp>

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

org::apache::poi::util::LocaleUtil::LocaleUtil(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::util::LocaleUtil::LocaleUtil() 
    : LocaleUtil(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void org::apache::poi::util::LocaleUtil::ctor()
{
    super::ctor();
}

java::util::TimeZone*& org::apache::poi::util::LocaleUtil::TIMEZONE_UTC()
{
    clinit();
    return TIMEZONE_UTC_;
}
java::util::TimeZone* org::apache::poi::util::LocaleUtil::TIMEZONE_UTC_;

java::nio::charset::Charset*& org::apache::poi::util::LocaleUtil::CHARSET_1252()
{
    clinit();
    return CHARSET_1252_;
}
java::nio::charset::Charset* org::apache::poi::util::LocaleUtil::CHARSET_1252_;

java::lang::ThreadLocal*& org::apache::poi::util::LocaleUtil::userTimeZone()
{
    clinit();
    return userTimeZone_;
}
java::lang::ThreadLocal* org::apache::poi::util::LocaleUtil::userTimeZone_;

java::lang::ThreadLocal*& org::apache::poi::util::LocaleUtil::userLocale()
{
    clinit();
    return userLocale_;
}
java::lang::ThreadLocal* org::apache::poi::util::LocaleUtil::userLocale_;

void org::apache::poi::util::LocaleUtil::setUserTimeZone(::java::util::TimeZone* timezone)
{
    clinit();
    npc(userTimeZone_)->set(timezone);
}

java::util::TimeZone* org::apache::poi::util::LocaleUtil::getUserTimeZone()
{
    clinit();
    auto timeZone = java_cast< ::java::util::TimeZone* >(npc(userTimeZone_)->get());
    return (timeZone != nullptr) ? timeZone : ::java::util::TimeZone::getDefault();
}

void org::apache::poi::util::LocaleUtil::resetUserTimeZone()
{
    clinit();
    npc(userTimeZone_)->remove();
}

void org::apache::poi::util::LocaleUtil::setUserLocale(::java::util::Locale* locale)
{
    clinit();
    npc(userLocale_)->set(locale);
}

java::util::Locale* org::apache::poi::util::LocaleUtil::getUserLocale()
{
    clinit();
    auto locale = java_cast< ::java::util::Locale* >(npc(userLocale_)->get());
    return (locale != nullptr) ? locale : ::java::util::Locale::getDefault();
}

void org::apache::poi::util::LocaleUtil::resetUserLocale()
{
    clinit();
    npc(userLocale_)->remove();
}

java::util::Calendar* org::apache::poi::util::LocaleUtil::getLocaleCalendar()
{
    clinit();
    return getLocaleCalendar(getUserTimeZone());
}

java::util::Calendar* org::apache::poi::util::LocaleUtil::getLocaleCalendar(int32_t year, int32_t month, int32_t day)
{
    clinit();
    return getLocaleCalendar(year, month, day, 0, 0, 0);
}

java::util::Calendar* org::apache::poi::util::LocaleUtil::getLocaleCalendar(int32_t year, int32_t month, int32_t day, int32_t hour, int32_t minute, int32_t second)
{
    clinit();
    auto cal = getLocaleCalendar();
    npc(cal)->set(year, month, day, hour, minute, second);
    npc(cal)->clear(::java::util::Calendar::MILLISECOND);
    return cal;
}

java::util::Calendar* org::apache::poi::util::LocaleUtil::getLocaleCalendar(::java::util::TimeZone* timeZone)
{
    clinit();
    return ::java::util::Calendar::getInstance(timeZone, getUserLocale());
}

java::lang::String* org::apache::poi::util::LocaleUtil::getLocaleFromLCID(int32_t lcid)
{
    clinit();
    auto languageId = lcid & int32_t(65535);
    switch (languageId) {
    case int32_t(1):
        return u"ar"_j;
    case int32_t(2):
        return u"bg"_j;
    case int32_t(3):
        return u"ca"_j;
    case int32_t(4):
        return u"zh-Hans"_j;
    case int32_t(5):
        return u"cs"_j;
    case int32_t(6):
        return u"da"_j;
    case int32_t(7):
        return u"de"_j;
    case int32_t(8):
        return u"el"_j;
    case int32_t(9):
        return u"en"_j;
    case int32_t(10):
        return u"es"_j;
    case int32_t(11):
        return u"fi"_j;
    case int32_t(12):
        return u"fr"_j;
    case int32_t(13):
        return u"he"_j;
    case int32_t(14):
        return u"hu"_j;
    case int32_t(15):
        return u"is"_j;
    case int32_t(16):
        return u"it"_j;
    case int32_t(17):
        return u"ja"_j;
    case int32_t(18):
        return u"ko"_j;
    case int32_t(19):
        return u"nl"_j;
    case int32_t(20):
        return u"no"_j;
    case int32_t(21):
        return u"pl"_j;
    case int32_t(22):
        return u"pt"_j;
    case int32_t(23):
        return u"rm"_j;
    case int32_t(24):
        return u"ro"_j;
    case int32_t(25):
        return u"ru"_j;
    case int32_t(26):
        return u"bs, hr, or sr"_j;
    case int32_t(27):
        return u"sk"_j;
    case int32_t(28):
        return u"sq"_j;
    case int32_t(29):
        return u"sv"_j;
    case int32_t(30):
        return u"th"_j;
    case int32_t(31):
        return u"tr"_j;
    case int32_t(32):
        return u"ur"_j;
    case int32_t(33):
        return u"id"_j;
    case int32_t(34):
        return u"uk"_j;
    case int32_t(35):
        return u"be"_j;
    case int32_t(36):
        return u"sl"_j;
    case int32_t(37):
        return u"et"_j;
    case int32_t(38):
        return u"lv"_j;
    case int32_t(39):
        return u"lt"_j;
    case int32_t(40):
        return u"tg"_j;
    case int32_t(41):
        return u"fa"_j;
    case int32_t(42):
        return u"vi"_j;
    case int32_t(43):
        return u"hy"_j;
    case int32_t(44):
        return u"az"_j;
    case int32_t(45):
        return u"eu"_j;
    case int32_t(46):
        return u"dsb or hsb"_j;
    case int32_t(47):
        return u"mk"_j;
    case int32_t(48):
        return u"st"_j;
    case int32_t(49):
        return u"ts"_j;
    case int32_t(50):
        return u"tn"_j;
    case int32_t(51):
        return u"ve"_j;
    case int32_t(52):
        return u"xh"_j;
    case int32_t(53):
        return u"zu"_j;
    case int32_t(54):
        return u"af"_j;
    case int32_t(55):
        return u"ka"_j;
    case int32_t(56):
        return u"fo"_j;
    case int32_t(57):
        return u"hi"_j;
    case int32_t(58):
        return u"mt"_j;
    case int32_t(59):
        return u"se"_j;
    case int32_t(60):
        return u"ga"_j;
    case int32_t(61):
        return u"yi"_j;
    case int32_t(62):
        return u"ms"_j;
    case int32_t(63):
        return u"kk"_j;
    case int32_t(64):
        return u"ky"_j;
    case int32_t(65):
        return u"sw"_j;
    case int32_t(66):
        return u"tk"_j;
    case int32_t(67):
        return u"uz"_j;
    case int32_t(68):
        return u"tt"_j;
    case int32_t(69):
        return u"bn"_j;
    case int32_t(70):
        return u"pa"_j;
    case int32_t(71):
        return u"gu"_j;
    case int32_t(72):
        return u"or"_j;
    case int32_t(73):
        return u"ta"_j;
    case int32_t(74):
        return u"te"_j;
    case int32_t(75):
        return u"kn"_j;
    case int32_t(76):
        return u"ml"_j;
    case int32_t(77):
        return u"as"_j;
    case int32_t(78):
        return u"mr"_j;
    case int32_t(79):
        return u"sa"_j;
    case int32_t(80):
        return u"mn"_j;
    case int32_t(81):
        return u"bo"_j;
    case int32_t(82):
        return u"cy"_j;
    case int32_t(83):
        return u"km"_j;
    case int32_t(84):
        return u"lo"_j;
    case int32_t(85):
        return u"my"_j;
    case int32_t(86):
        return u"gl"_j;
    case int32_t(87):
        return u"kok"_j;
    case int32_t(88):
        return u"mni"_j;
    case int32_t(89):
        return u"sd"_j;
    case int32_t(90):
        return u"syr"_j;
    case int32_t(91):
        return u"si"_j;
    case int32_t(92):
        return u"chr"_j;
    case int32_t(93):
        return u"iu"_j;
    case int32_t(94):
        return u"am"_j;
    case int32_t(95):
        return u"tzm"_j;
    case int32_t(96):
        return u"ks"_j;
    case int32_t(97):
        return u"ne"_j;
    case int32_t(98):
        return u"fy"_j;
    case int32_t(99):
        return u"ps"_j;
    case int32_t(100):
        return u"fil"_j;
    case int32_t(101):
        return u"dv"_j;
    case int32_t(102):
        return u"bin"_j;
    case int32_t(103):
        return u"ff"_j;
    case int32_t(104):
        return u"ha"_j;
    case int32_t(105):
        return u"ibb"_j;
    case int32_t(106):
        return u"yo"_j;
    case int32_t(107):
        return u"quz"_j;
    case int32_t(108):
        return u"nso"_j;
    case int32_t(109):
        return u"ba"_j;
    case int32_t(110):
        return u"lb"_j;
    case int32_t(111):
        return u"kl"_j;
    case int32_t(112):
        return u"ig"_j;
    case int32_t(113):
        return u"kr"_j;
    case int32_t(114):
        return u"om"_j;
    case int32_t(115):
        return u"ti"_j;
    case int32_t(116):
        return u"gn"_j;
    case int32_t(117):
        return u"haw"_j;
    case int32_t(118):
        return u"la"_j;
    case int32_t(119):
        return u"so"_j;
    case int32_t(120):
        return u"ii"_j;
    case int32_t(121):
        return u"pap"_j;
    case int32_t(122):
        return u"arn"_j;
    case int32_t(123):
        return u"invalid"_j;
    case int32_t(124):
        return u"moh"_j;
    case int32_t(125):
        return u"invalid"_j;
    case int32_t(126):
        return u"br"_j;
    case int32_t(127):
        return u"invalid"_j;
    case int32_t(128):
        return u"ug"_j;
    case int32_t(129):
        return u"mi"_j;
    case int32_t(130):
        return u"oc"_j;
    case int32_t(131):
        return u"co"_j;
    case int32_t(132):
        return u"gsw"_j;
    case int32_t(133):
        return u"sah"_j;
    case int32_t(134):
        return u"qut"_j;
    case int32_t(135):
        return u"rw"_j;
    case int32_t(136):
        return u"wo"_j;
    case int32_t(137):
        return u"invalid"_j;
    case int32_t(138):
        return u"invalid"_j;
    case int32_t(139):
        return u"invalid"_j;
    case int32_t(140):
        return u"prs"_j;
    case int32_t(141):
        return u"invalid"_j;
    case int32_t(142):
        return u"invalid"_j;
    case int32_t(143):
        return u"invalid"_j;
    case int32_t(144):
        return u"invalid"_j;
    case int32_t(145):
        return u"gd"_j;
    case int32_t(146):
        return u"ku"_j;
    case int32_t(147):
        return u"quc"_j;
    case int32_t(1025):
        return u"ar-SA"_j;
    case int32_t(1026):
        return u"bg-BG"_j;
    case int32_t(1027):
        return u"ca-ES"_j;
    case int32_t(1028):
        return u"zh-TW"_j;
    case int32_t(1029):
        return u"cs-CZ"_j;
    case int32_t(1030):
        return u"da-DK"_j;
    case int32_t(1031):
        return u"de-DE"_j;
    case int32_t(1032):
        return u"el-GR"_j;
    case int32_t(1033):
        return u"en-US"_j;
    case int32_t(1034):
        return u"es-ES_tradnl"_j;
    case int32_t(1035):
        return u"fi-FI"_j;
    case int32_t(1036):
        return u"fr-FR"_j;
    case int32_t(1037):
        return u"he-IL"_j;
    case int32_t(1038):
        return u"hu-HU"_j;
    case int32_t(1039):
        return u"is-IS"_j;
    case int32_t(1040):
        return u"it-IT"_j;
    case int32_t(1041):
        return u"ja-JP"_j;
    case int32_t(1042):
        return u"ko-KR"_j;
    case int32_t(1043):
        return u"nl-NL"_j;
    case int32_t(1044):
        return u"nb-NO"_j;
    case int32_t(1045):
        return u"pl-PL"_j;
    case int32_t(1046):
        return u"pt-BR"_j;
    case int32_t(1047):
        return u"rm-CH"_j;
    case int32_t(1048):
        return u"ro-RO"_j;
    case int32_t(1049):
        return u"ru-RU"_j;
    case int32_t(1050):
        return u"hr-HR"_j;
    case int32_t(1051):
        return u"sk-SK"_j;
    case int32_t(1052):
        return u"sq-AL"_j;
    case int32_t(1053):
        return u"sv-SE"_j;
    case int32_t(1054):
        return u"th-TH"_j;
    case int32_t(1055):
        return u"tr-TR"_j;
    case int32_t(1056):
        return u"ur-PK"_j;
    case int32_t(1057):
        return u"id-ID"_j;
    case int32_t(1058):
        return u"uk-UA"_j;
    case int32_t(1059):
        return u"be-BY"_j;
    case int32_t(1060):
        return u"sl-SI"_j;
    case int32_t(1061):
        return u"et-EE"_j;
    case int32_t(1062):
        return u"lv-LV"_j;
    case int32_t(1063):
        return u"lt-LT"_j;
    case int32_t(1064):
        return u"tg-Cyrl-TJ"_j;
    case int32_t(1065):
        return u"fa-IR"_j;
    case int32_t(1066):
        return u"vi-VN"_j;
    case int32_t(1067):
        return u"hy-AM"_j;
    case int32_t(1068):
        return u"az-Latn-AZ"_j;
    case int32_t(1069):
        return u"eu-ES"_j;
    case int32_t(1070):
        return u"hsb-DE"_j;
    case int32_t(1071):
        return u"mk-MK"_j;
    case int32_t(1072):
        return u"st-ZA"_j;
    case int32_t(1073):
        return u"ts-ZA"_j;
    case int32_t(1074):
        return u"tn-ZA"_j;
    case int32_t(1075):
        return u"ve-ZA"_j;
    case int32_t(1076):
        return u"xh-ZA"_j;
    case int32_t(1077):
        return u"zu-ZA"_j;
    case int32_t(1078):
        return u"af-ZA"_j;
    case int32_t(1079):
        return u"ka-GE"_j;
    case int32_t(1080):
        return u"fo-FO"_j;
    case int32_t(1081):
        return u"hi-IN"_j;
    case int32_t(1082):
        return u"mt-MT"_j;
    case int32_t(1083):
        return u"se-NO"_j;
    case int32_t(1085):
        return u"yi-Hebr"_j;
    case int32_t(1086):
        return u"ms-MY"_j;
    case int32_t(1087):
        return u"kk-KZ"_j;
    case int32_t(1088):
        return u"ky-KG"_j;
    case int32_t(1089):
        return u"sw-KE"_j;
    case int32_t(1090):
        return u"tk-TM"_j;
    case int32_t(1091):
        return u"uz-Latn-UZ"_j;
    case int32_t(1092):
        return u"tt-RU"_j;
    case int32_t(1093):
        return u"bn-IN"_j;
    case int32_t(1094):
        return u"pa-IN"_j;
    case int32_t(1095):
        return u"gu-IN"_j;
    case int32_t(1096):
        return u"or-IN"_j;
    case int32_t(1097):
        return u"ta-IN"_j;
    case int32_t(1098):
        return u"te-IN"_j;
    case int32_t(1099):
        return u"kn-IN"_j;
    case int32_t(1100):
        return u"ml-IN"_j;
    case int32_t(1101):
        return u"as-IN"_j;
    case int32_t(1102):
        return u"mr-IN"_j;
    case int32_t(1103):
        return u"sa-IN"_j;
    case int32_t(1104):
        return u"mn-MN"_j;
    case int32_t(1105):
        return u"bo-CN"_j;
    case int32_t(1106):
        return u"cy-GB"_j;
    case int32_t(1107):
        return u"km-KH"_j;
    case int32_t(1108):
        return u"lo-LA"_j;
    case int32_t(1109):
        return u"my-MM"_j;
    case int32_t(1110):
        return u"gl-ES"_j;
    case int32_t(1111):
        return u"kok-IN"_j;
    case int32_t(1112):
        return u"mni-IN"_j;
    case int32_t(1113):
        return u"sd-Deva-IN"_j;
    case int32_t(1114):
        return u"syr-SY"_j;
    case int32_t(1115):
        return u"si-LK"_j;
    case int32_t(1116):
        return u"chr-Cher-US"_j;
    case int32_t(1117):
        return u"iu-Cans-CA"_j;
    case int32_t(1118):
        return u"am-ET"_j;
    case int32_t(1119):
        return u"tzm-Arab-MA"_j;
    case int32_t(1120):
        return u"ks-Arab"_j;
    case int32_t(1121):
        return u"ne-NP"_j;
    case int32_t(1122):
        return u"fy-NL"_j;
    case int32_t(1123):
        return u"ps-AF"_j;
    case int32_t(1124):
        return u"fil-PH"_j;
    case int32_t(1125):
        return u"dv-MV"_j;
    case int32_t(1126):
        return u"bin-NG"_j;
    case int32_t(1127):
        return u"fuv-NG"_j;
    case int32_t(1128):
        return u"ha-Latn-NG"_j;
    case int32_t(1129):
        return u"ibb-NG"_j;
    case int32_t(1130):
        return u"yo-NG"_j;
    case int32_t(1131):
        return u"quz-BO"_j;
    case int32_t(1132):
        return u"nso-ZA"_j;
    case int32_t(1133):
        return u"ba-RU"_j;
    case int32_t(1134):
        return u"lb-LU"_j;
    case int32_t(1135):
        return u"kl-GL"_j;
    case int32_t(1136):
        return u"ig-NG"_j;
    case int32_t(1137):
        return u"kr-NG"_j;
    case int32_t(1138):
        return u"om-Ethi-ET"_j;
    case int32_t(1139):
        return u"ti-ET"_j;
    case int32_t(1140):
        return u"gn-PY"_j;
    case int32_t(1141):
        return u"haw-US"_j;
    case int32_t(1142):
        return u"la-Latn"_j;
    case int32_t(1143):
        return u"so-SO"_j;
    case int32_t(1144):
        return u"ii-CN"_j;
    case int32_t(1145):
        return u"pap-x029"_j;
    case int32_t(1146):
        return u"arn-CL"_j;
    case int32_t(1148):
        return u"moh-CA"_j;
    case int32_t(1150):
        return u"br-FR"_j;
    case int32_t(1152):
        return u"ug-CN"_j;
    case int32_t(1153):
        return u"mi-NZ"_j;
    case int32_t(1154):
        return u"oc-FR"_j;
    case int32_t(1155):
        return u"co-FR"_j;
    case int32_t(1156):
        return u"gsw-FR"_j;
    case int32_t(1157):
        return u"sah-RU"_j;
    case int32_t(1158):
        return u"qut-GT"_j;
    case int32_t(1159):
        return u"rw-RW"_j;
    case int32_t(1160):
        return u"wo-SN"_j;
    case int32_t(1164):
        return u"prs-AF"_j;
    case int32_t(1165):
        return u"plt-MG"_j;
    case int32_t(1166):
        return u"zh-yue-HK"_j;
    case int32_t(1167):
        return u"tdd-Tale-CN"_j;
    case int32_t(1168):
        return u"khb-Talu-CN"_j;
    case int32_t(1169):
        return u"gd-GB"_j;
    case int32_t(1170):
        return u"ku-Arab-IQ"_j;
    case int32_t(1171):
        return u"quc-CO"_j;
    case int32_t(1281):
        return u"qps-ploc"_j;
    case int32_t(1534):
        return u"qps-ploca"_j;
    case int32_t(2049):
        return u"ar-IQ"_j;
    case int32_t(2051):
        return u"ca-ES-valencia"_j;
    case int32_t(2052):
        return u"zh-CN"_j;
    case int32_t(2055):
        return u"de-CH"_j;
    case int32_t(2057):
        return u"en-GB"_j;
    case int32_t(2058):
        return u"es-MX"_j;
    case int32_t(2060):
        return u"fr-BE"_j;
    case int32_t(2064):
        return u"it-CH"_j;
    case int32_t(2065):
        return u"ja-Ploc-JP"_j;
    case int32_t(2067):
        return u"nl-BE"_j;
    case int32_t(2068):
        return u"nn-NO"_j;
    case int32_t(2070):
        return u"pt-PT"_j;
    case int32_t(2072):
        return u"ro-MO"_j;
    case int32_t(2073):
        return u"ru-MO"_j;
    case int32_t(2074):
        return u"sr-Latn-CS"_j;
    case int32_t(2077):
        return u"sv-FI"_j;
    case int32_t(2080):
        return u"ur-IN"_j;
    case int32_t(2087):
        return u"invalid"_j;
    case int32_t(2092):
        return u"az-Cyrl-AZ"_j;
    case int32_t(2094):
        return u"dsb-DE"_j;
    case int32_t(2098):
        return u"tn-BW"_j;
    case int32_t(2107):
        return u"se-SE"_j;
    case int32_t(2108):
        return u"ga-IE"_j;
    case int32_t(2110):
        return u"ms-BN"_j;
    case int32_t(2115):
        return u"uz-Cyrl-UZ"_j;
    case int32_t(2117):
        return u"bn-BD"_j;
    case int32_t(2118):
        return u"pa-Arab-PK"_j;
    case int32_t(2121):
        return u"ta-LK"_j;
    case int32_t(2128):
        return u"mn-Mong-CN"_j;
    case int32_t(2129):
        return u"bo-BT"_j;
    case int32_t(2137):
        return u"sd-Arab-PK"_j;
    case int32_t(2141):
        return u"iu-Latn-CA"_j;
    case int32_t(2143):
        return u"tzm-Latn-DZ"_j;
    case int32_t(2144):
        return u"ks-Deva"_j;
    case int32_t(2145):
        return u"ne-IN"_j;
    case int32_t(2151):
        return u"ff-Latn-SN"_j;
    case int32_t(2155):
        return u"quz-EC"_j;
    case int32_t(2163):
        return u"ti-ER"_j;
    case int32_t(2559):
        return u"qps-plocm"_j;
    case int32_t(3073):
        return u"ar-EG"_j;
    case int32_t(3076):
        return u"zh-HK"_j;
    case int32_t(3079):
        return u"de-AT"_j;
    case int32_t(3081):
        return u"en-AU"_j;
    case int32_t(3082):
        return u"es-ES"_j;
    case int32_t(3084):
        return u"fr-CA"_j;
    case int32_t(3098):
        return u"sr-Cyrl-CS"_j;
    case int32_t(3131):
        return u"se-FI"_j;
    case int32_t(3167):
        return u"tmz-MA"_j;
    case int32_t(3179):
        return u"quz-PE"_j;
    case int32_t(4097):
        return u"ar-LY"_j;
    case int32_t(4100):
        return u"zh-SG"_j;
    case int32_t(4103):
        return u"de-LU"_j;
    case int32_t(4105):
        return u"en-CA"_j;
    case int32_t(4106):
        return u"es-GT"_j;
    case int32_t(4108):
        return u"fr-CH"_j;
    case int32_t(4122):
        return u"hr-BA"_j;
    case int32_t(4155):
        return u"smj-NO"_j;
    case int32_t(5121):
        return u"ar-DZ"_j;
    case int32_t(5124):
        return u"zh-MO"_j;
    case int32_t(5127):
        return u"de-LI"_j;
    case int32_t(5129):
        return u"en-NZ"_j;
    case int32_t(5130):
        return u"es-CR"_j;
    case int32_t(5132):
        return u"fr-LU"_j;
    case int32_t(5146):
        return u"bs-Latn-BA"_j;
    case int32_t(5179):
        return u"smj-SE"_j;
    case int32_t(6145):
        return u"ar-MA"_j;
    case int32_t(6153):
        return u"en-IE"_j;
    case int32_t(6154):
        return u"es-PA"_j;
    case int32_t(6156):
        return u"fr-MC"_j;
    case int32_t(6170):
        return u"sr-Latn-BA"_j;
    case int32_t(6203):
        return u"sma-NO"_j;
    case int32_t(7169):
        return u"ar-TN"_j;
    case int32_t(7177):
        return u"en-ZA"_j;
    case int32_t(7178):
        return u"es-DO"_j;
    case int32_t(7180):
        return u"invalid"_j;
    case int32_t(7194):
        return u"sr-Cyrl-BA"_j;
    case int32_t(7227):
        return u"sma-SE"_j;
    case int32_t(8193):
        return u"ar-OM"_j;
    case int32_t(8200):
        return u"invalid"_j;
    case int32_t(8201):
        return u"en-JM"_j;
    case int32_t(8202):
        return u"es-VE"_j;
    case int32_t(8204):
        return u"fr-RE"_j;
    case int32_t(8218):
        return u"bs-Cyrl-BA"_j;
    case int32_t(8251):
        return u"sms-FI"_j;
    case int32_t(9217):
        return u"ar-YE"_j;
    case int32_t(9225):
        return u"en-029"_j;
    case int32_t(9226):
        return u"es-CO"_j;
    case int32_t(9228):
        return u"fr-CG"_j;
    case int32_t(9242):
        return u"sr-Latn-RS"_j;
    case int32_t(9275):
        return u"smn-FI"_j;
    case int32_t(10241):
        return u"ar-SY"_j;
    case int32_t(10249):
        return u"en-BZ"_j;
    case int32_t(10250):
        return u"es-PE"_j;
    case int32_t(10252):
        return u"fr-SN"_j;
    case int32_t(10266):
        return u"sr-Cyrl-RS"_j;
    case int32_t(11265):
        return u"ar-JO"_j;
    case int32_t(11273):
        return u"en-TT"_j;
    case int32_t(11274):
        return u"es-AR"_j;
    case int32_t(11276):
        return u"fr-CM"_j;
    case int32_t(11290):
        return u"sr-Latn-ME"_j;
    case int32_t(12289):
        return u"ar-LB"_j;
    case int32_t(12297):
        return u"en-ZW"_j;
    case int32_t(12298):
        return u"es-EC"_j;
    case int32_t(12300):
        return u"fr-CI"_j;
    case int32_t(12314):
        return u"sr-Cyrl-ME"_j;
    case int32_t(13313):
        return u"ar-KW"_j;
    case int32_t(13321):
        return u"en-PH"_j;
    case int32_t(13322):
        return u"es-CL"_j;
    case int32_t(13324):
        return u"fr-ML"_j;
    case int32_t(14337):
        return u"ar-AE"_j;
    case int32_t(14345):
        return u"en-ID"_j;
    case int32_t(14346):
        return u"es-UY"_j;
    case int32_t(14348):
        return u"fr-MA"_j;
    case int32_t(15361):
        return u"ar-BH"_j;
    case int32_t(15369):
        return u"en-HK"_j;
    case int32_t(15370):
        return u"es-PY"_j;
    case int32_t(15372):
        return u"fr-HT"_j;
    case int32_t(16385):
        return u"ar-QA"_j;
    case int32_t(16393):
        return u"en-IN"_j;
    case int32_t(16394):
        return u"es-BO"_j;
    case int32_t(17409):
        return u"ar-Ploc-SA"_j;
    case int32_t(17417):
        return u"en-MY"_j;
    case int32_t(17418):
        return u"es-SV"_j;
    case int32_t(18433):
        return u"ar-145"_j;
    case int32_t(18441):
        return u"en-SG"_j;
    case int32_t(18442):
        return u"es-HN"_j;
    case int32_t(19465):
        return u"en-AE"_j;
    case int32_t(19466):
        return u"es-NI"_j;
    case int32_t(20489):
        return u"en-BH"_j;
    case int32_t(20490):
        return u"es-PR"_j;
    case int32_t(21513):
        return u"en-EG"_j;
    case int32_t(21514):
        return u"es-US"_j;
    case int32_t(22537):
        return u"en-JO"_j;
    case int32_t(23561):
        return u"en-KW"_j;
    case int32_t(24585):
        return u"en-TR"_j;
    case int32_t(25609):
        return u"en-YE"_j;
    case int32_t(25626):
        return u"bs-Cyrl"_j;
    case int32_t(26650):
        return u"bs-Latn"_j;
    case int32_t(27674):
        return u"sr-Cyrl"_j;
    case int32_t(28698):
        return u"sr-Latn"_j;
    case int32_t(28731):
        return u"smn"_j;
    case int32_t(29740):
        return u"az-Cyrl"_j;
    case int32_t(29755):
        return u"sms"_j;
    case int32_t(30724):
        return u"zh"_j;
    case int32_t(30740):
        return u"nn"_j;
    case int32_t(30746):
        return u"bs"_j;
    case int32_t(30764):
        return u"az-Latn"_j;
    case int32_t(30779):
        return u"sma"_j;
    case int32_t(30787):
        return u"uz-Cyrl"_j;
    case int32_t(30800):
        return u"mn-Cyrl"_j;
    case int32_t(30813):
        return u"iu-Cans"_j;
    case int32_t(31748):
        return u"zh-Hant"_j;
    case int32_t(31764):
        return u"nb"_j;
    case int32_t(31770):
        return u"sr"_j;
    case int32_t(31784):
        return u"tg-Cyrl"_j;
    case int32_t(31790):
        return u"dsb"_j;
    case int32_t(31803):
        return u"smj"_j;
    case int32_t(31811):
        return u"uz-Latn"_j;
    case int32_t(31814):
        return u"pa-Arab"_j;
    case int32_t(31824):
        return u"mn-Mong"_j;
    case int32_t(31833):
        return u"sd-Arab"_j;
    case int32_t(31836):
        return u"chr-Cher"_j;
    case int32_t(31837):
        return u"iu-Latn"_j;
    case int32_t(31839):
        return u"tzm-Latn"_j;
    case int32_t(31847):
        return u"ff-Latn"_j;
    case int32_t(31848):
        return u"ha-Latn"_j;
    case int32_t(31890):
        return u"ku-Arab"_j;
    default:
        return u"invalid"_j;
    }

}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::util::LocaleUtil::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.util.LocaleUtil", 30);
    return c;
}

void org::apache::poi::util::LocaleUtil::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        TIMEZONE_UTC_ = ::java::util::TimeZone::getTimeZone(u"UTC"_j);
        CHARSET_1252_ = ::java::nio::charset::Charset::forName(u"CP1252"_j);
        userTimeZone_ = new ::java::lang::ThreadLocal();
        userLocale_ = new ::java::lang::ThreadLocal();
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* org::apache::poi::util::LocaleUtil::getClass0()
{
    return class_();
}

