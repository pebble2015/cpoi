// Generated from /POI/java/org/apache/poi/ss/util/DateFormatConverter.java
#include <org/apache/poi/ss/util/DateFormatConverter.hpp>

#include <java/lang/Character.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/text/DateFormat.hpp>
#include <java/text/SimpleDateFormat.hpp>
#include <java/util/HashMap.hpp>
#include <java/util/Locale.hpp>
#include <java/util/Map.hpp>
#include <org/apache/poi/ss/util/DateFormatConverter_DateFormatTokenizer.hpp>
#include <org/apache/poi/util/POILogFactory.hpp>
#include <org/apache/poi/util/POILogger.hpp>
#include <ObjectArray.hpp>

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

poi::ss::util::DateFormatConverter::DateFormatConverter(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::util::DateFormatConverter::DateFormatConverter()
    : DateFormatConverter(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::util::POILogger*& poi::ss::util::DateFormatConverter::logger()
{
    clinit();
    return logger_;
}
poi::util::POILogger* poi::ss::util::DateFormatConverter::logger_;

java::util::Map*& poi::ss::util::DateFormatConverter::tokenConversions()
{
    clinit();
    return tokenConversions_;
}
java::util::Map* poi::ss::util::DateFormatConverter::tokenConversions_;

java::util::Map*& poi::ss::util::DateFormatConverter::localePrefixes()
{
    clinit();
    return localePrefixes_;
}
java::util::Map* poi::ss::util::DateFormatConverter::localePrefixes_;

java::util::Map* poi::ss::util::DateFormatConverter::prepareTokenConversions()
{
    clinit();
    ::java::util::Map* result = new ::java::util::HashMap();
    npc(result)->put(u"EEEE"_j, u"dddd"_j);
    npc(result)->put(u"EEE"_j, u"ddd"_j);
    npc(result)->put(u"EE"_j, u"ddd"_j);
    npc(result)->put(u"E"_j, u"d"_j);
    npc(result)->put(u"Z"_j, u""_j);
    npc(result)->put(u"z"_j, u""_j);
    npc(result)->put(u"a"_j, u"am/pm"_j);
    npc(result)->put(u"A"_j, u"AM/PM"_j);
    npc(result)->put(u"K"_j, u"H"_j);
    npc(result)->put(u"KK"_j, u"HH"_j);
    npc(result)->put(u"k"_j, u"h"_j);
    npc(result)->put(u"kk"_j, u"hh"_j);
    npc(result)->put(u"S"_j, u"0"_j);
    npc(result)->put(u"SS"_j, u"00"_j);
    npc(result)->put(u"SSS"_j, u"000"_j);
    return result;
}

java::util::Map* poi::ss::util::DateFormatConverter::prepareLocalePrefixes()
{
    clinit();
    ::java::util::Map* result = new ::java::util::HashMap();
    npc(result)->put(u"af"_j, u"[$-0436]"_j);
    npc(result)->put(u"am"_j, u"[$-45E]"_j);
    npc(result)->put(u"ar_ae"_j, u"[$-3801]"_j);
    npc(result)->put(u"ar_bh"_j, u"[$-3C01]"_j);
    npc(result)->put(u"ar_dz"_j, u"[$-1401]"_j);
    npc(result)->put(u"ar_eg"_j, u"[$-C01]"_j);
    npc(result)->put(u"ar_iq"_j, u"[$-0801]"_j);
    npc(result)->put(u"ar_jo"_j, u"[$-2C01]"_j);
    npc(result)->put(u"ar_kw"_j, u"[$-3401]"_j);
    npc(result)->put(u"ar_lb"_j, u"[$-3001]"_j);
    npc(result)->put(u"ar_ly"_j, u"[$-1001]"_j);
    npc(result)->put(u"ar_ma"_j, u"[$-1801]"_j);
    npc(result)->put(u"ar_om"_j, u"[$-2001]"_j);
    npc(result)->put(u"ar_qa"_j, u"[$-4001]"_j);
    npc(result)->put(u"ar_sa"_j, u"[$-0401]"_j);
    npc(result)->put(u"ar_sy"_j, u"[$-2801]"_j);
    npc(result)->put(u"ar_tn"_j, u"[$-1C01]"_j);
    npc(result)->put(u"ar_ye"_j, u"[$-2401]"_j);
    npc(result)->put(u"as"_j, u"[$-44D]"_j);
    npc(result)->put(u"az_az"_j, u"[$-82C]"_j);
    npc(result)->put(u"az_az"_j, u"[$-42C]"_j);
    npc(result)->put(u"be"_j, u"[$-0423]"_j);
    npc(result)->put(u"bg"_j, u"[$-0402]"_j);
    npc(result)->put(u"bn"_j, u"[$-0845]"_j);
    npc(result)->put(u"bn"_j, u"[$-0445]"_j);
    npc(result)->put(u"bo"_j, u"[$-0451]"_j);
    npc(result)->put(u"bs"_j, u"[$-141A]"_j);
    npc(result)->put(u"ca"_j, u"[$-0403]"_j);
    npc(result)->put(u"cs"_j, u"[$-0405]"_j);
    npc(result)->put(u"cy"_j, u"[$-0452]"_j);
    npc(result)->put(u"da"_j, u"[$-0406]"_j);
    npc(result)->put(u"de_at"_j, u"[$-C07]"_j);
    npc(result)->put(u"de_ch"_j, u"[$-0807]"_j);
    npc(result)->put(u"de_de"_j, u"[$-0407]"_j);
    npc(result)->put(u"de_li"_j, u"[$-1407]"_j);
    npc(result)->put(u"de_lu"_j, u"[$-1007]"_j);
    npc(result)->put(u"dv"_j, u"[$-0465]"_j);
    npc(result)->put(u"el"_j, u"[$-0408]"_j);
    npc(result)->put(u"en_au"_j, u"[$-C09]"_j);
    npc(result)->put(u"en_bz"_j, u"[$-2809]"_j);
    npc(result)->put(u"en_ca"_j, u"[$-1009]"_j);
    npc(result)->put(u"en_cb"_j, u"[$-2409]"_j);
    npc(result)->put(u"en_gb"_j, u"[$-0809]"_j);
    npc(result)->put(u"en_ie"_j, u"[$-1809]"_j);
    npc(result)->put(u"en_in"_j, u"[$-4009]"_j);
    npc(result)->put(u"en_jm"_j, u"[$-2009]"_j);
    npc(result)->put(u"en_nz"_j, u"[$-1409]"_j);
    npc(result)->put(u"en_ph"_j, u"[$-3409]"_j);
    npc(result)->put(u"en_tt"_j, u"[$-2C09]"_j);
    npc(result)->put(u"en_us"_j, u"[$-0409]"_j);
    npc(result)->put(u"en_za"_j, u"[$-1C09]"_j);
    npc(result)->put(u"es_ar"_j, u"[$-2C0A]"_j);
    npc(result)->put(u"es_bo"_j, u"[$-400A]"_j);
    npc(result)->put(u"es_cl"_j, u"[$-340A]"_j);
    npc(result)->put(u"es_co"_j, u"[$-240A]"_j);
    npc(result)->put(u"es_cr"_j, u"[$-140A]"_j);
    npc(result)->put(u"es_do"_j, u"[$-1C0A]"_j);
    npc(result)->put(u"es_ec"_j, u"[$-300A]"_j);
    npc(result)->put(u"es_es"_j, u"[$-40A]"_j);
    npc(result)->put(u"es_gt"_j, u"[$-100A]"_j);
    npc(result)->put(u"es_hn"_j, u"[$-480A]"_j);
    npc(result)->put(u"es_mx"_j, u"[$-80A]"_j);
    npc(result)->put(u"es_ni"_j, u"[$-4C0A]"_j);
    npc(result)->put(u"es_pa"_j, u"[$-180A]"_j);
    npc(result)->put(u"es_pe"_j, u"[$-280A]"_j);
    npc(result)->put(u"es_pr"_j, u"[$-500A]"_j);
    npc(result)->put(u"es_py"_j, u"[$-3C0A]"_j);
    npc(result)->put(u"es_sv"_j, u"[$-440A]"_j);
    npc(result)->put(u"es_uy"_j, u"[$-380A]"_j);
    npc(result)->put(u"es_ve"_j, u"[$-200A]"_j);
    npc(result)->put(u"et"_j, u"[$-0425]"_j);
    npc(result)->put(u"eu"_j, u"[$-42D]"_j);
    npc(result)->put(u"fa"_j, u"[$-0429]"_j);
    npc(result)->put(u"fi"_j, u"[$-40B]"_j);
    npc(result)->put(u"fo"_j, u"[$-0438]"_j);
    npc(result)->put(u"fr_be"_j, u"[$-80C]"_j);
    npc(result)->put(u"fr_ca"_j, u"[$-C0C]"_j);
    npc(result)->put(u"fr_ch"_j, u"[$-100C]"_j);
    npc(result)->put(u"fr_fr"_j, u"[$-40C]"_j);
    npc(result)->put(u"fr_lu"_j, u"[$-140C]"_j);
    npc(result)->put(u"gd"_j, u"[$-43C]"_j);
    npc(result)->put(u"gd_ie"_j, u"[$-83C]"_j);
    npc(result)->put(u"gn"_j, u"[$-0474]"_j);
    npc(result)->put(u"gu"_j, u"[$-0447]"_j);
    npc(result)->put(u"he"_j, u"[$-40D]"_j);
    npc(result)->put(u"hi"_j, u"[$-0439]"_j);
    npc(result)->put(u"hr"_j, u"[$-41A]"_j);
    npc(result)->put(u"hu"_j, u"[$-40E]"_j);
    npc(result)->put(u"hy"_j, u"[$-42B]"_j);
    npc(result)->put(u"id"_j, u"[$-0421]"_j);
    npc(result)->put(u"is"_j, u"[$-40F]"_j);
    npc(result)->put(u"it_ch"_j, u"[$-0810]"_j);
    npc(result)->put(u"it_it"_j, u"[$-0410]"_j);
    npc(result)->put(u"ja"_j, u"[$-0411]"_j);
    npc(result)->put(u"kk"_j, u"[$-43F]"_j);
    npc(result)->put(u"km"_j, u"[$-0453]"_j);
    npc(result)->put(u"kn"_j, u"[$-44B]"_j);
    npc(result)->put(u"ko"_j, u"[$-0412]"_j);
    npc(result)->put(u"ks"_j, u"[$-0460]"_j);
    npc(result)->put(u"la"_j, u"[$-0476]"_j);
    npc(result)->put(u"lo"_j, u"[$-0454]"_j);
    npc(result)->put(u"lt"_j, u"[$-0427]"_j);
    npc(result)->put(u"lv"_j, u"[$-0426]"_j);
    npc(result)->put(u"mi"_j, u"[$-0481]"_j);
    npc(result)->put(u"mk"_j, u"[$-42F]"_j);
    npc(result)->put(u"ml"_j, u"[$-44C]"_j);
    npc(result)->put(u"mn"_j, u"[$-0850]"_j);
    npc(result)->put(u"mn"_j, u"[$-0450]"_j);
    npc(result)->put(u"mr"_j, u"[$-44E]"_j);
    npc(result)->put(u"ms_bn"_j, u"[$-83E]"_j);
    npc(result)->put(u"ms_my"_j, u"[$-43E]"_j);
    npc(result)->put(u"mt"_j, u"[$-43A]"_j);
    npc(result)->put(u"my"_j, u"[$-0455]"_j);
    npc(result)->put(u"ne"_j, u"[$-0461]"_j);
    npc(result)->put(u"nl_be"_j, u"[$-0813]"_j);
    npc(result)->put(u"nl_nl"_j, u"[$-0413]"_j);
    npc(result)->put(u"no_no"_j, u"[$-0814]"_j);
    npc(result)->put(u"or"_j, u"[$-0448]"_j);
    npc(result)->put(u"pa"_j, u"[$-0446]"_j);
    npc(result)->put(u"pl"_j, u"[$-0415]"_j);
    npc(result)->put(u"pt_br"_j, u"[$-0416]"_j);
    npc(result)->put(u"pt_pt"_j, u"[$-0816]"_j);
    npc(result)->put(u"rm"_j, u"[$-0417]"_j);
    npc(result)->put(u"ro"_j, u"[$-0418]"_j);
    npc(result)->put(u"ro_mo"_j, u"[$-0818]"_j);
    npc(result)->put(u"ru"_j, u"[$-0419]"_j);
    npc(result)->put(u"ru_mo"_j, u"[$-0819]"_j);
    npc(result)->put(u"sa"_j, u"[$-44F]"_j);
    npc(result)->put(u"sb"_j, u"[$-42E]"_j);
    npc(result)->put(u"sd"_j, u"[$-0459]"_j);
    npc(result)->put(u"si"_j, u"[$-45B]"_j);
    npc(result)->put(u"sk"_j, u"[$-41B]"_j);
    npc(result)->put(u"sl"_j, u"[$-0424]"_j);
    npc(result)->put(u"so"_j, u"[$-0477]"_j);
    npc(result)->put(u"sq"_j, u"[$-41C]"_j);
    npc(result)->put(u"sr_sp"_j, u"[$-C1A]"_j);
    npc(result)->put(u"sr_sp"_j, u"[$-81A]"_j);
    npc(result)->put(u"sv_fi"_j, u"[$-81D]"_j);
    npc(result)->put(u"sv_se"_j, u"[$-41D]"_j);
    npc(result)->put(u"sw"_j, u"[$-0441]"_j);
    npc(result)->put(u"ta"_j, u"[$-0449]"_j);
    npc(result)->put(u"te"_j, u"[$-44A]"_j);
    npc(result)->put(u"tg"_j, u"[$-0428]"_j);
    npc(result)->put(u"th"_j, u"[$-41E]"_j);
    npc(result)->put(u"tk"_j, u"[$-0442]"_j);
    npc(result)->put(u"tn"_j, u"[$-0432]"_j);
    npc(result)->put(u"tr"_j, u"[$-41F]"_j);
    npc(result)->put(u"ts"_j, u"[$-0431]"_j);
    npc(result)->put(u"tt"_j, u"[$-0444]"_j);
    npc(result)->put(u"uk"_j, u"[$-0422]"_j);
    npc(result)->put(u"ur"_j, u"[$-0420]"_j);
    npc(result)->put(u"UTF_8"_j, u"[$-0000]"_j);
    npc(result)->put(u"uz_uz"_j, u"[$-0843]"_j);
    npc(result)->put(u"uz_uz"_j, u"[$-0443]"_j);
    npc(result)->put(u"vi"_j, u"[$-42A]"_j);
    npc(result)->put(u"xh"_j, u"[$-0434]"_j);
    npc(result)->put(u"yi"_j, u"[$-43D]"_j);
    npc(result)->put(u"zh_cn"_j, u"[$-0804]"_j);
    npc(result)->put(u"zh_hk"_j, u"[$-C04]"_j);
    npc(result)->put(u"zh_mo"_j, u"[$-1404]"_j);
    npc(result)->put(u"zh_sg"_j, u"[$-1004]"_j);
    npc(result)->put(u"zh_tw"_j, u"[$-0404]"_j);
    npc(result)->put(u"zu"_j, u"[$-0435]"_j);
    npc(result)->put(u"ar"_j, u"[$-0401]"_j);
    npc(result)->put(u"bn"_j, u"[$-0845]"_j);
    npc(result)->put(u"de"_j, u"[$-0407]"_j);
    npc(result)->put(u"en"_j, u"[$-0409]"_j);
    npc(result)->put(u"es"_j, u"[$-40A]"_j);
    npc(result)->put(u"fr"_j, u"[$-40C]"_j);
    npc(result)->put(u"it"_j, u"[$-0410]"_j);
    npc(result)->put(u"ms"_j, u"[$-43E]"_j);
    npc(result)->put(u"nl"_j, u"[$-0413]"_j);
    npc(result)->put(u"nn"_j, u"[$-0814]"_j);
    npc(result)->put(u"no"_j, u"[$-0414]"_j);
    npc(result)->put(u"pt"_j, u"[$-0816]"_j);
    npc(result)->put(u"sr"_j, u"[$-C1A]"_j);
    npc(result)->put(u"sv"_j, u"[$-41D]"_j);
    npc(result)->put(u"uz"_j, u"[$-0843]"_j);
    npc(result)->put(u"zh"_j, u"[$-0804]"_j);
    npc(result)->put(u"ga"_j, u"[$-43C]"_j);
    npc(result)->put(u"ga_ie"_j, u"[$-83C]"_j);
    npc(result)->put(u"in"_j, u"[$-0421]"_j);
    npc(result)->put(u"iw"_j, u"[$-40D]"_j);
    npc(result)->put(u""_j, u"[$-0409]"_j);
    return result;
}

java::lang::String* poi::ss::util::DateFormatConverter::getPrefixForLocale(::java::util::Locale* locale)
{
    clinit();
    auto localeString = npc(npc(locale)->toString())->toLowerCase(locale);
    auto result = java_cast< ::java::lang::String* >(npc(localePrefixes_)->get(localeString));
    if(result == nullptr) {
        result = java_cast< ::java::lang::String* >(npc(localePrefixes_)->get(npc(localeString)->substring(0, 2)));
        if(result == nullptr) {
            auto parentLocale = new ::java::util::Locale(npc(localeString)->substring(0, 2));
            npc(logger_)->log(::poi::util::POILogger::ERROR, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(::java::lang::StringBuilder().append(u"Unable to find prefix for "_j)->append(static_cast< ::java::lang::Object* >(locale))
                ->append(u"("_j)
                ->append(npc(locale)->getDisplayName(::java::util::Locale::ROOT()))
                ->append(u") or "_j)
                ->append(npc(localeString)->substring(0, 2))
                ->append(u"("_j)
                ->append(npc(parentLocale)->getDisplayName(::java::util::Locale::ROOT()))
                ->append(u")"_j)->toString())}));
            return u""_j;
        }
    }
    return result;
}

java::lang::String* poi::ss::util::DateFormatConverter::convert(::java::util::Locale* locale, ::java::text::DateFormat* df)
{
    clinit();
    auto ptrn = npc((java_cast< ::java::text::SimpleDateFormat* >(df)))->toPattern();
    return convert(locale, ptrn);
}

java::lang::String* poi::ss::util::DateFormatConverter::convert(::java::util::Locale* locale, ::java::lang::String* format)
{
    clinit();
    auto result = new ::java::lang::StringBuilder();
    npc(result)->append(getPrefixForLocale(locale));
    auto tokenizer = new DateFormatConverter_DateFormatTokenizer(format);
    ::java::lang::String* token;
    while ((token = npc(tokenizer)->getNextToken()) != nullptr) {
        if(npc(token)->startsWith(u"'"_j)) {
            npc(result)->append(npc(token)->replaceAll(u"'"_j, u"\""_j));
        } else if(!::java::lang::Character::isLetter(npc(token)->charAt(int32_t(0)))) {
            npc(result)->append(token);
        } else {
            auto mappedToken = java_cast< ::java::lang::String* >(npc(tokenConversions_)->get(token));
            npc(result)->append(mappedToken == nullptr ? token : mappedToken);
        }
    }
    npc(result)->append(u";@"_j);
    return npc(npc(result)->toString())->trim();
}

java::lang::String* poi::ss::util::DateFormatConverter::getJavaDatePattern(int32_t style, ::java::util::Locale* locale)
{
    clinit();
    auto df = ::java::text::DateFormat::getDateInstance(style, locale);
    if(dynamic_cast< ::java::text::SimpleDateFormat* >(df) != nullptr) {
        return npc((java_cast< ::java::text::SimpleDateFormat* >(df)))->toPattern();
    } else {
        switch (style) {
        case ::java::text::DateFormat::SHORT:
            return u"d/MM/yy"_j;
        case ::java::text::DateFormat::MEDIUM:
            return u"MMM d, yyyy"_j;
        case ::java::text::DateFormat::LONG:
            return u"MMMM d, yyyy"_j;
        case ::java::text::DateFormat::FULL:
            return u"dddd, MMMM d, yyyy"_j;
        default:
            return u"MMM d, yyyy"_j;
        }

    }
}

java::lang::String* poi::ss::util::DateFormatConverter::getJavaTimePattern(int32_t style, ::java::util::Locale* locale)
{
    clinit();
    auto df = ::java::text::DateFormat::getTimeInstance(style, locale);
    if(dynamic_cast< ::java::text::SimpleDateFormat* >(df) != nullptr) {
        return npc((java_cast< ::java::text::SimpleDateFormat* >(df)))->toPattern();
    } else {
        switch (style) {
        case ::java::text::DateFormat::SHORT:
            return u"h:mm a"_j;
        case ::java::text::DateFormat::MEDIUM:
            return u"h:mm:ss a"_j;
        case ::java::text::DateFormat::LONG:
            return u"h:mm:ss a"_j;
        case ::java::text::DateFormat::FULL:
            return u"h:mm:ss a"_j;
        default:
            return u"h:mm:ss a"_j;
        }

    }
}

java::lang::String* poi::ss::util::DateFormatConverter::getJavaDateTimePattern(int32_t style, ::java::util::Locale* locale)
{
    clinit();
    auto df = ::java::text::DateFormat::getDateTimeInstance(style, style, locale);
    if(dynamic_cast< ::java::text::SimpleDateFormat* >(df) != nullptr) {
        return npc((java_cast< ::java::text::SimpleDateFormat* >(df)))->toPattern();
    } else {
        switch (style) {
        case ::java::text::DateFormat::SHORT:
            return u"M/d/yy h:mm a"_j;
        case ::java::text::DateFormat::MEDIUM:
            return u"MMM d, yyyy h:mm:ss a"_j;
        case ::java::text::DateFormat::LONG:
            return u"MMMM d, yyyy h:mm:ss a"_j;
        case ::java::text::DateFormat::FULL:
            return u"dddd, MMMM d, yyyy h:mm:ss a"_j;
        default:
            return u"MMM d, yyyy h:mm:ss a"_j;
        }

    }
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::util::DateFormatConverter::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.util.DateFormatConverter", 42);
    return c;
}

void poi::ss::util::DateFormatConverter::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        logger_ = ::poi::util::POILogFactory::getLogger(static_cast< ::java::lang::Class* >(DateFormatConverter::class_()));
        tokenConversions_ = prepareTokenConversions();
        localePrefixes_ = prepareLocalePrefixes();
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* poi::ss::util::DateFormatConverter::getClass0()
{
    return class_();
}

