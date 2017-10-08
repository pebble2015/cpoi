// Generated from /POI/java/org/apache/poi/ss/formula/atp/AnalysisToolPak.java
#include <org/apache/poi/ss/formula/atp/AnalysisToolPak.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/util/Collection.hpp>
#include <java/util/Collections.hpp>
#include <java/util/HashMap.hpp>
#include <java/util/Iterator.hpp>
#include <java/util/Locale.hpp>
#include <java/util/Map_Entry.hpp>
#include <java/util/Map.hpp>
#include <java/util/Set.hpp>
#include <java/util/TreeSet.hpp>
#include <org/apache/poi/ss/formula/atp/AnalysisToolPak_NotImplemented.hpp>
#include <org/apache/poi/ss/formula/atp/IfError.hpp>
#include <org/apache/poi/ss/formula/atp/MRound.hpp>
#include <org/apache/poi/ss/formula/atp/NetworkdaysFunction.hpp>
#include <org/apache/poi/ss/formula/atp/ParityFunction.hpp>
#include <org/apache/poi/ss/formula/atp/RandBetween.hpp>
#include <org/apache/poi/ss/formula/atp/WorkdayFunction.hpp>
#include <org/apache/poi/ss/formula/atp/YearFrac.hpp>
#include <org/apache/poi/ss/formula/function/FunctionMetadata.hpp>
#include <org/apache/poi/ss/formula/function/FunctionMetadataRegistry.hpp>
#include <org/apache/poi/ss/formula/functions/Bin2Dec.hpp>
#include <org/apache/poi/ss/formula/functions/Complex.hpp>
#include <org/apache/poi/ss/formula/functions/Countifs.hpp>
#include <org/apache/poi/ss/formula/functions/Dec2Bin.hpp>
#include <org/apache/poi/ss/formula/functions/Dec2Hex.hpp>
#include <org/apache/poi/ss/formula/functions/Delta.hpp>
#include <org/apache/poi/ss/formula/functions/EDate.hpp>
#include <org/apache/poi/ss/formula/functions/EOMonth.hpp>
#include <org/apache/poi/ss/formula/functions/FactDouble.hpp>
#include <org/apache/poi/ss/formula/functions/FreeRefFunction.hpp>
#include <org/apache/poi/ss/formula/functions/Hex2Dec.hpp>
#include <org/apache/poi/ss/formula/functions/ImReal.hpp>
#include <org/apache/poi/ss/formula/functions/Imaginary.hpp>
#include <org/apache/poi/ss/formula/functions/Oct2Dec.hpp>
#include <org/apache/poi/ss/formula/functions/Quotient.hpp>
#include <org/apache/poi/ss/formula/functions/Sumifs.hpp>
#include <org/apache/poi/ss/formula/functions/WeekNum.hpp>
#include <org/apache/poi/ss/formula/udf/UDFFinder.hpp>

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

poi::ss::formula::atp::AnalysisToolPak::AnalysisToolPak(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::formula::atp::AnalysisToolPak::AnalysisToolPak() 
    : AnalysisToolPak(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void poi::ss::formula::atp::AnalysisToolPak::init()
{
    _functionsByName = createFunctionsMap();
}

poi::ss::formula::udf::UDFFinder*& poi::ss::formula::atp::AnalysisToolPak::instance()
{
    clinit();
    return instance_;
}
poi::ss::formula::udf::UDFFinder* poi::ss::formula::atp::AnalysisToolPak::instance_;

void poi::ss::formula::atp::AnalysisToolPak::ctor()
{
    super::ctor();
    init();
}

poi::ss::formula::functions::FreeRefFunction* poi::ss::formula::atp::AnalysisToolPak::findFunction(::java::lang::String* name)
{
    auto const prefix = u"_xlfn."_j;
    if(npc(name)->startsWith(prefix))
        name = npc(name)->substring(npc(prefix)->length());

    return java_cast< ::poi::ss::formula::functions::FreeRefFunction* >(npc(_functionsByName)->get(npc(name)->toUpperCase(::java::util::Locale::ROOT())));
}

java::util::Map* poi::ss::formula::atp::AnalysisToolPak::createFunctionsMap()
{
    ::java::util::Map* m = new ::java::util::HashMap(int32_t(108));
    r(m, u"ACCRINT"_j, nullptr);
    r(m, u"ACCRINTM"_j, nullptr);
    r(m, u"AMORDEGRC"_j, nullptr);
    r(m, u"AMORLINC"_j, nullptr);
    r(m, u"AVERAGEIF"_j, nullptr);
    r(m, u"AVERAGEIFS"_j, nullptr);
    r(m, u"BAHTTEXT"_j, nullptr);
    r(m, u"BESSELI"_j, nullptr);
    r(m, u"BESSELJ"_j, nullptr);
    r(m, u"BESSELK"_j, nullptr);
    r(m, u"BESSELY"_j, nullptr);
    r(m, u"BIN2DEC"_j, ::poi::ss::formula::functions::Bin2Dec::instance());
    r(m, u"BIN2HEX"_j, nullptr);
    r(m, u"BIN2OCT"_j, nullptr);
    r(m, u"COMPLEX"_j, ::poi::ss::formula::functions::Complex::instance());
    r(m, u"CONVERT"_j, nullptr);
    r(m, u"COUNTIFS"_j, ::poi::ss::formula::functions::Countifs::instance());
    r(m, u"COUPDAYBS"_j, nullptr);
    r(m, u"COUPDAYS"_j, nullptr);
    r(m, u"COUPDAYSNC"_j, nullptr);
    r(m, u"COUPNCD"_j, nullptr);
    r(m, u"COUPNUM"_j, nullptr);
    r(m, u"COUPPCD"_j, nullptr);
    r(m, u"CUBEKPIMEMBER"_j, nullptr);
    r(m, u"CUBEMEMBER"_j, nullptr);
    r(m, u"CUBEMEMBERPROPERTY"_j, nullptr);
    r(m, u"CUBERANKEDMEMBER"_j, nullptr);
    r(m, u"CUBESET"_j, nullptr);
    r(m, u"CUBESETCOUNT"_j, nullptr);
    r(m, u"CUBEVALUE"_j, nullptr);
    r(m, u"CUMIPMT"_j, nullptr);
    r(m, u"CUMPRINC"_j, nullptr);
    r(m, u"DEC2BIN"_j, ::poi::ss::formula::functions::Dec2Bin::instance());
    r(m, u"DEC2HEX"_j, ::poi::ss::formula::functions::Dec2Hex::instance());
    r(m, u"DEC2OCT"_j, nullptr);
    r(m, u"DELTA"_j, ::poi::ss::formula::functions::Delta::instance());
    r(m, u"DISC"_j, nullptr);
    r(m, u"DOLLARDE"_j, nullptr);
    r(m, u"DOLLARFR"_j, nullptr);
    r(m, u"DURATION"_j, nullptr);
    r(m, u"EDATE"_j, ::poi::ss::formula::functions::EDate::instance());
    r(m, u"EFFECT"_j, nullptr);
    r(m, u"EOMONTH"_j, ::poi::ss::formula::functions::EOMonth::instance());
    r(m, u"ERF"_j, nullptr);
    r(m, u"ERFC"_j, nullptr);
    r(m, u"FACTDOUBLE"_j, ::poi::ss::formula::functions::FactDouble::instance());
    r(m, u"FVSCHEDULE"_j, nullptr);
    r(m, u"GCD"_j, nullptr);
    r(m, u"GESTEP"_j, nullptr);
    r(m, u"HEX2BIN"_j, nullptr);
    r(m, u"HEX2DEC"_j, ::poi::ss::formula::functions::Hex2Dec::instance());
    r(m, u"HEX2OCT"_j, nullptr);
    r(m, u"IFERROR"_j, IfError::instance());
    r(m, u"IMABS"_j, nullptr);
    r(m, u"IMAGINARY"_j, ::poi::ss::formula::functions::Imaginary::instance());
    r(m, u"IMARGUMENT"_j, nullptr);
    r(m, u"IMCONJUGATE"_j, nullptr);
    r(m, u"IMCOS"_j, nullptr);
    r(m, u"IMDIV"_j, nullptr);
    r(m, u"IMEXP"_j, nullptr);
    r(m, u"IMLN"_j, nullptr);
    r(m, u"IMLOG10"_j, nullptr);
    r(m, u"IMLOG2"_j, nullptr);
    r(m, u"IMPOWER"_j, nullptr);
    r(m, u"IMPRODUCT"_j, nullptr);
    r(m, u"IMREAL"_j, ::poi::ss::formula::functions::ImReal::instance());
    r(m, u"IMSIN"_j, nullptr);
    r(m, u"IMSQRT"_j, nullptr);
    r(m, u"IMSUB"_j, nullptr);
    r(m, u"IMSUM"_j, nullptr);
    r(m, u"INTRATE"_j, nullptr);
    r(m, u"ISEVEN"_j, ParityFunction::IS_EVEN());
    r(m, u"ISODD"_j, ParityFunction::IS_ODD());
    r(m, u"JIS"_j, nullptr);
    r(m, u"LCM"_j, nullptr);
    r(m, u"MDURATION"_j, nullptr);
    r(m, u"MROUND"_j, MRound::instance());
    r(m, u"MULTINOMIAL"_j, nullptr);
    r(m, u"NETWORKDAYS"_j, NetworkdaysFunction::instance());
    r(m, u"NOMINAL"_j, nullptr);
    r(m, u"OCT2BIN"_j, nullptr);
    r(m, u"OCT2DEC"_j, ::poi::ss::formula::functions::Oct2Dec::instance());
    r(m, u"OCT2HEX"_j, nullptr);
    r(m, u"ODDFPRICE"_j, nullptr);
    r(m, u"ODDFYIELD"_j, nullptr);
    r(m, u"ODDLPRICE"_j, nullptr);
    r(m, u"ODDLYIELD"_j, nullptr);
    r(m, u"PRICE"_j, nullptr);
    r(m, u"PRICEDISC"_j, nullptr);
    r(m, u"PRICEMAT"_j, nullptr);
    r(m, u"QUOTIENT"_j, ::poi::ss::formula::functions::Quotient::instance());
    r(m, u"RANDBETWEEN"_j, RandBetween::instance());
    r(m, u"RECEIVED"_j, nullptr);
    r(m, u"RTD"_j, nullptr);
    r(m, u"SERIESSUM"_j, nullptr);
    r(m, u"SQRTPI"_j, nullptr);
    r(m, u"SUMIFS"_j, ::poi::ss::formula::functions::Sumifs::instance());
    r(m, u"TBILLEQ"_j, nullptr);
    r(m, u"TBILLPRICE"_j, nullptr);
    r(m, u"TBILLYIELD"_j, nullptr);
    r(m, u"WEEKNUM"_j, ::poi::ss::formula::functions::WeekNum::instance());
    r(m, u"WORKDAY"_j, WorkdayFunction::instance());
    r(m, u"XIRR"_j, nullptr);
    r(m, u"XNPV"_j, nullptr);
    r(m, u"YEARFRAC"_j, YearFrac::instance());
    r(m, u"YIELD"_j, nullptr);
    r(m, u"YIELDDISC"_j, nullptr);
    r(m, u"YIELDMAT"_j, nullptr);
    return m;
}

void poi::ss::formula::atp::AnalysisToolPak::r(::java::util::Map* m, ::java::lang::String* functionName, ::poi::ss::formula::functions::FreeRefFunction* pFunc)
{
    clinit();
    auto func = pFunc == nullptr ? static_cast< ::poi::ss::formula::functions::FreeRefFunction* >(new AnalysisToolPak_NotImplemented(functionName)) : pFunc;
    npc(m)->put(functionName, func);
}

bool poi::ss::formula::atp::AnalysisToolPak::isATPFunction(::java::lang::String* name)
{
    clinit();
    auto inst = java_cast< AnalysisToolPak* >(instance_);
    return npc(npc(inst)->_functionsByName)->containsKey(name);
}

java::util::Collection* poi::ss::formula::atp::AnalysisToolPak::getSupportedFunctionNames()
{
    clinit();
    auto inst = java_cast< AnalysisToolPak* >(instance_);
    ::java::util::Collection* lst = new ::java::util::TreeSet();
    for (auto _i = npc(npc(npc(inst)->_functionsByName)->entrySet())->iterator(); _i->hasNext(); ) {
        ::java::util::Map_Entry* me = java_cast< ::java::util::Map_Entry* >(_i->next());
        {
            auto func = java_cast< ::poi::ss::formula::functions::FreeRefFunction* >(npc(me)->getValue());
            if(func != nullptr && !(dynamic_cast< AnalysisToolPak_NotImplemented* >(func) != nullptr)) {
                npc(lst)->add(java_cast< ::java::lang::String* >(npc(me)->getKey()));
            }
        }
    }
    return ::java::util::Collections::unmodifiableCollection(lst);
}

java::util::Collection* poi::ss::formula::atp::AnalysisToolPak::getNotSupportedFunctionNames()
{
    clinit();
    auto inst = java_cast< AnalysisToolPak* >(instance_);
    ::java::util::Collection* lst = new ::java::util::TreeSet();
    for (auto _i = npc(npc(npc(inst)->_functionsByName)->entrySet())->iterator(); _i->hasNext(); ) {
        ::java::util::Map_Entry* me = java_cast< ::java::util::Map_Entry* >(_i->next());
        {
            auto func = java_cast< ::poi::ss::formula::functions::FreeRefFunction* >(npc(me)->getValue());
            if(dynamic_cast< AnalysisToolPak_NotImplemented* >(func) != nullptr) {
                npc(lst)->add(java_cast< ::java::lang::String* >(npc(me)->getKey()));
            }
        }
    }
    return ::java::util::Collections::unmodifiableCollection(lst);
}

void poi::ss::formula::atp::AnalysisToolPak::registerFunction(::java::lang::String* name, ::poi::ss::formula::functions::FreeRefFunction* func)
{
    clinit();
    auto inst = java_cast< AnalysisToolPak* >(instance_);
    if(!isATPFunction(name)) {
        auto metaData = ::poi::ss::formula::function::FunctionMetadataRegistry::getFunctionByName(name);
        if(metaData != nullptr) {
            throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(name)->append(u" is a built-in Excel function. "_j)
                ->append(u"Use FunctoinEval.registerFunction(String name, Function func) instead."_j)->toString());
        }
        throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(name)->append(u" is not a function from the Excel Analysis Toolpack."_j)->toString());
    }
    auto f = npc(inst)->findFunction(name);
    if(f != nullptr && !(dynamic_cast< AnalysisToolPak_NotImplemented* >(f) != nullptr)) {
        throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(u"POI already implememts "_j)->append(name)
            ->append(u". You cannot override POI's implementations of Excel functions"_j)->toString());
    }
    npc(npc(inst)->_functionsByName)->put(name, func);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::atp::AnalysisToolPak::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.atp.AnalysisToolPak", 45);
    return c;
}

void poi::ss::formula::atp::AnalysisToolPak::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        instance_ = new AnalysisToolPak();
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* poi::ss::formula::atp::AnalysisToolPak::getClass0()
{
    return class_();
}

