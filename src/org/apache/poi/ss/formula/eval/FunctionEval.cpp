// Generated from /POI/java/org/apache/poi/ss/formula/eval/FunctionEval.java
#include <org/apache/poi/ss/formula/eval/FunctionEval.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/util/Collection.hpp>
#include <java/util/Collections.hpp>
#include <java/util/TreeSet.hpp>
#include <org/apache/poi/ss/formula/atp/AnalysisToolPak.hpp>
#include <org/apache/poi/ss/formula/eval/FunctionEval_FunctionID.hpp>
#include <org/apache/poi/ss/formula/eval/NotImplementedException.hpp>
#include <org/apache/poi/ss/formula/function/FunctionMetadata.hpp>
#include <org/apache/poi/ss/formula/function/FunctionMetadataRegistry.hpp>
#include <org/apache/poi/ss/formula/functions/Address.hpp>
#include <org/apache/poi/ss/formula/functions/AggregateFunction.hpp>
#include <org/apache/poi/ss/formula/functions/BooleanFunction.hpp>
#include <org/apache/poi/ss/formula/functions/CalendarFieldFunction.hpp>
#include <org/apache/poi/ss/formula/functions/Choose.hpp>
#include <org/apache/poi/ss/formula/functions/Code.hpp>
#include <org/apache/poi/ss/formula/functions/Column.hpp>
#include <org/apache/poi/ss/formula/functions/Columns.hpp>
#include <org/apache/poi/ss/formula/functions/Count.hpp>
#include <org/apache/poi/ss/formula/functions/Counta.hpp>
#include <org/apache/poi/ss/formula/functions/Countblank.hpp>
#include <org/apache/poi/ss/formula/functions/Countif.hpp>
#include <org/apache/poi/ss/formula/functions/DStarRunner_DStarAlgorithmEnum.hpp>
#include <org/apache/poi/ss/formula/functions/DStarRunner.hpp>
#include <org/apache/poi/ss/formula/functions/DateFunc.hpp>
#include <org/apache/poi/ss/formula/functions/Days360.hpp>
#include <org/apache/poi/ss/formula/functions/Errortype.hpp>
#include <org/apache/poi/ss/formula/functions/Even.hpp>
#include <org/apache/poi/ss/formula/functions/FinanceFunction.hpp>
#include <org/apache/poi/ss/formula/functions/Fixed.hpp>
#include <org/apache/poi/ss/formula/functions/Function.hpp>
#include <org/apache/poi/ss/formula/functions/Hlookup.hpp>
#include <org/apache/poi/ss/formula/functions/Hyperlink.hpp>
#include <org/apache/poi/ss/formula/functions/IPMT.hpp>
#include <org/apache/poi/ss/formula/functions/IfFunc.hpp>
#include <org/apache/poi/ss/formula/functions/Index.hpp>
#include <org/apache/poi/ss/formula/functions/Intercept.hpp>
#include <org/apache/poi/ss/formula/functions/Irr.hpp>
#include <org/apache/poi/ss/formula/functions/LogicalFunction.hpp>
#include <org/apache/poi/ss/formula/functions/Lookup.hpp>
#include <org/apache/poi/ss/formula/functions/Match.hpp>
#include <org/apache/poi/ss/formula/functions/MinaMaxa.hpp>
#include <org/apache/poi/ss/formula/functions/Mirr.hpp>
#include <org/apache/poi/ss/formula/functions/Mode.hpp>
#include <org/apache/poi/ss/formula/functions/Na.hpp>
#include <org/apache/poi/ss/formula/functions/NotImplementedFunction.hpp>
#include <org/apache/poi/ss/formula/functions/Now.hpp>
#include <org/apache/poi/ss/formula/functions/Npv.hpp>
#include <org/apache/poi/ss/formula/functions/NumericFunction.hpp>
#include <org/apache/poi/ss/formula/functions/Odd.hpp>
#include <org/apache/poi/ss/formula/functions/Offset.hpp>
#include <org/apache/poi/ss/formula/functions/PPMT.hpp>
#include <org/apache/poi/ss/formula/functions/Rank.hpp>
#include <org/apache/poi/ss/formula/functions/Rate.hpp>
#include <org/apache/poi/ss/formula/functions/Replace.hpp>
#include <org/apache/poi/ss/formula/functions/Rept.hpp>
#include <org/apache/poi/ss/formula/functions/Roman.hpp>
#include <org/apache/poi/ss/formula/functions/RowFunc.hpp>
#include <org/apache/poi/ss/formula/functions/Rows.hpp>
#include <org/apache/poi/ss/formula/functions/Slope.hpp>
#include <org/apache/poi/ss/formula/functions/Substitute.hpp>
#include <org/apache/poi/ss/formula/functions/Subtotal.hpp>
#include <org/apache/poi/ss/formula/functions/Sumif.hpp>
#include <org/apache/poi/ss/formula/functions/Sumproduct.hpp>
#include <org/apache/poi/ss/formula/functions/Sumx2my2.hpp>
#include <org/apache/poi/ss/formula/functions/Sumx2py2.hpp>
#include <org/apache/poi/ss/formula/functions/Sumxmy2.hpp>
#include <org/apache/poi/ss/formula/functions/T.hpp>
#include <org/apache/poi/ss/formula/functions/TextFunction.hpp>
#include <org/apache/poi/ss/formula/functions/TimeFunc.hpp>
#include <org/apache/poi/ss/formula/functions/Today.hpp>
#include <org/apache/poi/ss/formula/functions/Value.hpp>
#include <org/apache/poi/ss/formula/functions/Vlookup.hpp>
#include <org/apache/poi/ss/formula/functions/WeekdayFunc.hpp>
#include <ObjectArray.hpp>
#include <SubArray.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace org
{
    namespace apache
    {
        namespace poi
        {
            namespace ss
            {
                namespace formula
                {
                    namespace functions
                    {
typedef ::SubArray< ::org::apache::poi::ss::formula::functions::Function, ::java::lang::ObjectArray > FunctionArray;
                    } // functions
                } // formula
            } // ss
        } // poi
    } // apache
} // org

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::ss::formula::eval::FunctionEval::FunctionEval(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::formula::eval::FunctionEval::FunctionEval() 
    : FunctionEval(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void org::apache::poi::ss::formula::eval::FunctionEval::ctor()
{
    super::ctor();
}

org::apache::poi::ss::formula::functions::FunctionArray*& org::apache::poi::ss::formula::eval::FunctionEval::functions()
{
    clinit();
    return functions_;
}
org::apache::poi::ss::formula::functions::FunctionArray* org::apache::poi::ss::formula::eval::FunctionEval::functions_;

org::apache::poi::ss::formula::functions::FunctionArray* org::apache::poi::ss::formula::eval::FunctionEval::produceFunctions()
{
    clinit();
    auto retval = new ::org::apache::poi::ss::formula::functions::FunctionArray(int32_t(368));
    retval->set(int32_t(0), new ::org::apache::poi::ss::formula::functions::Count());
    retval->set(FunctionEval_FunctionID::IF, new ::org::apache::poi::ss::formula::functions::IfFunc());
    retval->set(int32_t(2), ::org::apache::poi::ss::formula::functions::LogicalFunction::ISNA());
    retval->set(int32_t(3), ::org::apache::poi::ss::formula::functions::LogicalFunction::ISERROR());
    retval->set(FunctionEval_FunctionID::SUM, ::org::apache::poi::ss::formula::functions::AggregateFunction::SUM());
    retval->set(int32_t(5), ::org::apache::poi::ss::formula::functions::AggregateFunction::AVERAGE());
    retval->set(int32_t(6), ::org::apache::poi::ss::formula::functions::AggregateFunction::MIN());
    retval->set(int32_t(7), ::org::apache::poi::ss::formula::functions::AggregateFunction::MAX());
    retval->set(int32_t(8), new ::org::apache::poi::ss::formula::functions::RowFunc());
    retval->set(int32_t(9), new ::org::apache::poi::ss::formula::functions::Column());
    retval->set(int32_t(10), new ::org::apache::poi::ss::formula::functions::Na());
    retval->set(int32_t(11), new ::org::apache::poi::ss::formula::functions::Npv());
    retval->set(int32_t(12), ::org::apache::poi::ss::formula::functions::AggregateFunction::STDEV());
    retval->set(int32_t(13), ::org::apache::poi::ss::formula::functions::NumericFunction::DOLLAR());
    retval->set(int32_t(14), new ::org::apache::poi::ss::formula::functions::Fixed());
    retval->set(int32_t(15), ::org::apache::poi::ss::formula::functions::NumericFunction::SIN());
    retval->set(int32_t(16), ::org::apache::poi::ss::formula::functions::NumericFunction::COS());
    retval->set(int32_t(17), ::org::apache::poi::ss::formula::functions::NumericFunction::TAN());
    retval->set(int32_t(18), ::org::apache::poi::ss::formula::functions::NumericFunction::ATAN());
    retval->set(int32_t(19), ::org::apache::poi::ss::formula::functions::NumericFunction::PI());
    retval->set(int32_t(20), ::org::apache::poi::ss::formula::functions::NumericFunction::SQRT());
    retval->set(int32_t(21), ::org::apache::poi::ss::formula::functions::NumericFunction::EXP());
    retval->set(int32_t(22), ::org::apache::poi::ss::formula::functions::NumericFunction::LN());
    retval->set(int32_t(23), ::org::apache::poi::ss::formula::functions::NumericFunction::LOG10());
    retval->set(int32_t(24), ::org::apache::poi::ss::formula::functions::NumericFunction::ABS());
    retval->set(int32_t(25), ::org::apache::poi::ss::formula::functions::NumericFunction::INT());
    retval->set(int32_t(26), ::org::apache::poi::ss::formula::functions::NumericFunction::SIGN());
    retval->set(int32_t(27), ::org::apache::poi::ss::formula::functions::NumericFunction::ROUND());
    retval->set(int32_t(28), new ::org::apache::poi::ss::formula::functions::Lookup());
    retval->set(int32_t(29), new ::org::apache::poi::ss::formula::functions::Index());
    retval->set(int32_t(30), new ::org::apache::poi::ss::formula::functions::Rept());
    retval->set(int32_t(31), ::org::apache::poi::ss::formula::functions::TextFunction::MID());
    retval->set(int32_t(32), ::org::apache::poi::ss::formula::functions::TextFunction::LEN());
    retval->set(int32_t(33), new ::org::apache::poi::ss::formula::functions::Value());
    retval->set(int32_t(34), ::org::apache::poi::ss::formula::functions::BooleanFunction::TRUE());
    retval->set(int32_t(35), ::org::apache::poi::ss::formula::functions::BooleanFunction::FALSE());
    retval->set(int32_t(36), ::org::apache::poi::ss::formula::functions::BooleanFunction::AND());
    retval->set(int32_t(37), ::org::apache::poi::ss::formula::functions::BooleanFunction::OR());
    retval->set(int32_t(38), ::org::apache::poi::ss::formula::functions::BooleanFunction::NOT());
    retval->set(int32_t(39), ::org::apache::poi::ss::formula::functions::NumericFunction::MOD());
    retval->set(int32_t(43), new ::org::apache::poi::ss::formula::functions::DStarRunner(::org::apache::poi::ss::formula::functions::DStarRunner_DStarAlgorithmEnum::DMIN));
    retval->set(int32_t(46), ::org::apache::poi::ss::formula::functions::AggregateFunction::VAR());
    retval->set(int32_t(48), ::org::apache::poi::ss::formula::functions::TextFunction::TEXT());
    retval->set(int32_t(56), ::org::apache::poi::ss::formula::functions::FinanceFunction::PV());
    retval->set(int32_t(57), ::org::apache::poi::ss::formula::functions::FinanceFunction::FV());
    retval->set(int32_t(58), ::org::apache::poi::ss::formula::functions::FinanceFunction::NPER());
    retval->set(int32_t(59), ::org::apache::poi::ss::formula::functions::FinanceFunction::PMT());
    retval->set(int32_t(60), new ::org::apache::poi::ss::formula::functions::Rate());
    retval->set(int32_t(61), new ::org::apache::poi::ss::formula::functions::Mirr());
    retval->set(int32_t(62), new ::org::apache::poi::ss::formula::functions::Irr());
    retval->set(int32_t(63), ::org::apache::poi::ss::formula::functions::NumericFunction::RAND());
    retval->set(int32_t(64), new ::org::apache::poi::ss::formula::functions::Match());
    retval->set(int32_t(65), ::org::apache::poi::ss::formula::functions::DateFunc::instance());
    retval->set(int32_t(66), new ::org::apache::poi::ss::formula::functions::TimeFunc());
    retval->set(int32_t(67), ::org::apache::poi::ss::formula::functions::CalendarFieldFunction::DAY());
    retval->set(int32_t(68), ::org::apache::poi::ss::formula::functions::CalendarFieldFunction::MONTH());
    retval->set(int32_t(69), ::org::apache::poi::ss::formula::functions::CalendarFieldFunction::YEAR());
    retval->set(int32_t(70), ::org::apache::poi::ss::formula::functions::WeekdayFunc::instance());
    retval->set(int32_t(71), ::org::apache::poi::ss::formula::functions::CalendarFieldFunction::HOUR());
    retval->set(int32_t(72), ::org::apache::poi::ss::formula::functions::CalendarFieldFunction::MINUTE());
    retval->set(int32_t(73), ::org::apache::poi::ss::formula::functions::CalendarFieldFunction::SECOND());
    retval->set(int32_t(74), new ::org::apache::poi::ss::formula::functions::Now());
    retval->set(int32_t(76), new ::org::apache::poi::ss::formula::functions::Rows());
    retval->set(int32_t(77), new ::org::apache::poi::ss::formula::functions::Columns());
    retval->set(FunctionEval_FunctionID::OFFSET, new ::org::apache::poi::ss::formula::functions::Offset());
    retval->set(int32_t(82), ::org::apache::poi::ss::formula::functions::TextFunction::SEARCH());
    retval->set(int32_t(97), ::org::apache::poi::ss::formula::functions::NumericFunction::ATAN2());
    retval->set(int32_t(98), ::org::apache::poi::ss::formula::functions::NumericFunction::ASIN());
    retval->set(int32_t(99), ::org::apache::poi::ss::formula::functions::NumericFunction::ACOS());
    retval->set(FunctionEval_FunctionID::CHOOSE, new ::org::apache::poi::ss::formula::functions::Choose());
    retval->set(int32_t(101), new ::org::apache::poi::ss::formula::functions::Hlookup());
    retval->set(int32_t(102), new ::org::apache::poi::ss::formula::functions::Vlookup());
    retval->set(int32_t(105), ::org::apache::poi::ss::formula::functions::LogicalFunction::ISREF());
    retval->set(int32_t(109), ::org::apache::poi::ss::formula::functions::NumericFunction::LOG());
    retval->set(int32_t(111), ::org::apache::poi::ss::formula::functions::TextFunction::CHAR());
    retval->set(int32_t(112), ::org::apache::poi::ss::formula::functions::TextFunction::LOWER());
    retval->set(int32_t(113), ::org::apache::poi::ss::formula::functions::TextFunction::UPPER());
    retval->set(int32_t(114), ::org::apache::poi::ss::formula::functions::TextFunction::PROPER());
    retval->set(int32_t(115), ::org::apache::poi::ss::formula::functions::TextFunction::LEFT());
    retval->set(int32_t(116), ::org::apache::poi::ss::formula::functions::TextFunction::RIGHT());
    retval->set(int32_t(117), ::org::apache::poi::ss::formula::functions::TextFunction::EXACT());
    retval->set(int32_t(118), ::org::apache::poi::ss::formula::functions::TextFunction::TRIM());
    retval->set(int32_t(119), new ::org::apache::poi::ss::formula::functions::Replace());
    retval->set(int32_t(120), new ::org::apache::poi::ss::formula::functions::Substitute());
    retval->set(int32_t(121), new ::org::apache::poi::ss::formula::functions::Code());
    retval->set(int32_t(124), ::org::apache::poi::ss::formula::functions::TextFunction::FIND());
    retval->set(int32_t(126), ::org::apache::poi::ss::formula::functions::LogicalFunction::ISERR());
    retval->set(int32_t(127), ::org::apache::poi::ss::formula::functions::LogicalFunction::ISTEXT());
    retval->set(int32_t(128), ::org::apache::poi::ss::formula::functions::LogicalFunction::ISNUMBER());
    retval->set(int32_t(129), ::org::apache::poi::ss::formula::functions::LogicalFunction::ISBLANK());
    retval->set(int32_t(130), new ::org::apache::poi::ss::formula::functions::T());
    retval->set(FunctionEval_FunctionID::INDIRECT, nullptr);
    retval->set(int32_t(162), ::org::apache::poi::ss::formula::functions::TextFunction::CLEAN());
    retval->set(int32_t(167), new ::org::apache::poi::ss::formula::functions::IPMT());
    retval->set(int32_t(168), new ::org::apache::poi::ss::formula::functions::PPMT());
    retval->set(int32_t(169), new ::org::apache::poi::ss::formula::functions::Counta());
    retval->set(int32_t(183), ::org::apache::poi::ss::formula::functions::AggregateFunction::PRODUCT());
    retval->set(int32_t(184), ::org::apache::poi::ss::formula::functions::NumericFunction::FACT());
    retval->set(int32_t(190), ::org::apache::poi::ss::formula::functions::LogicalFunction::ISNONTEXT());
    retval->set(int32_t(194), ::org::apache::poi::ss::formula::functions::AggregateFunction::VARP());
    retval->set(int32_t(197), ::org::apache::poi::ss::formula::functions::NumericFunction::TRUNC());
    retval->set(int32_t(198), ::org::apache::poi::ss::formula::functions::LogicalFunction::ISLOGICAL());
    retval->set(int32_t(212), ::org::apache::poi::ss::formula::functions::NumericFunction::ROUNDUP());
    retval->set(int32_t(213), ::org::apache::poi::ss::formula::functions::NumericFunction::ROUNDDOWN());
    retval->set(int32_t(216), new ::org::apache::poi::ss::formula::functions::Rank());
    retval->set(int32_t(219), new ::org::apache::poi::ss::formula::functions::Address());
    retval->set(int32_t(220), new ::org::apache::poi::ss::formula::functions::Days360());
    retval->set(int32_t(221), new ::org::apache::poi::ss::formula::functions::Today());
    retval->set(int32_t(227), ::org::apache::poi::ss::formula::functions::AggregateFunction::MEDIAN());
    retval->set(int32_t(228), new ::org::apache::poi::ss::formula::functions::Sumproduct());
    retval->set(int32_t(229), ::org::apache::poi::ss::formula::functions::NumericFunction::SINH());
    retval->set(int32_t(230), ::org::apache::poi::ss::formula::functions::NumericFunction::COSH());
    retval->set(int32_t(231), ::org::apache::poi::ss::formula::functions::NumericFunction::TANH());
    retval->set(int32_t(232), ::org::apache::poi::ss::formula::functions::NumericFunction::ASINH());
    retval->set(int32_t(233), ::org::apache::poi::ss::formula::functions::NumericFunction::ACOSH());
    retval->set(int32_t(234), ::org::apache::poi::ss::formula::functions::NumericFunction::ATANH());
    retval->set(int32_t(235), new ::org::apache::poi::ss::formula::functions::DStarRunner(::org::apache::poi::ss::formula::functions::DStarRunner_DStarAlgorithmEnum::DGET));
    retval->set(FunctionEval_FunctionID::EXTERNAL_FUNC, nullptr);
    retval->set(int32_t(261), new ::org::apache::poi::ss::formula::functions::Errortype());
    retval->set(int32_t(269), ::org::apache::poi::ss::formula::functions::AggregateFunction::AVEDEV());
    retval->set(int32_t(276), ::org::apache::poi::ss::formula::functions::NumericFunction::COMBIN());
    retval->set(int32_t(279), new ::org::apache::poi::ss::formula::functions::Even());
    retval->set(int32_t(285), ::org::apache::poi::ss::formula::functions::NumericFunction::FLOOR());
    retval->set(int32_t(288), ::org::apache::poi::ss::formula::functions::NumericFunction::CEILING());
    retval->set(int32_t(298), new ::org::apache::poi::ss::formula::functions::Odd());
    retval->set(int32_t(300), ::org::apache::poi::ss::formula::functions::NumericFunction::POISSON());
    retval->set(int32_t(303), new ::org::apache::poi::ss::formula::functions::Sumxmy2());
    retval->set(int32_t(304), new ::org::apache::poi::ss::formula::functions::Sumx2my2());
    retval->set(int32_t(305), new ::org::apache::poi::ss::formula::functions::Sumx2py2());
    retval->set(int32_t(311), new ::org::apache::poi::ss::formula::functions::Intercept());
    retval->set(int32_t(315), new ::org::apache::poi::ss::formula::functions::Slope());
    retval->set(int32_t(318), ::org::apache::poi::ss::formula::functions::AggregateFunction::DEVSQ());
    retval->set(int32_t(321), ::org::apache::poi::ss::formula::functions::AggregateFunction::SUMSQ());
    retval->set(int32_t(325), ::org::apache::poi::ss::formula::functions::AggregateFunction::LARGE());
    retval->set(int32_t(326), ::org::apache::poi::ss::formula::functions::AggregateFunction::SMALL());
    retval->set(int32_t(328), ::org::apache::poi::ss::formula::functions::AggregateFunction::PERCENTILE());
    retval->set(int32_t(330), new ::org::apache::poi::ss::formula::functions::Mode());
    retval->set(int32_t(336), ::org::apache::poi::ss::formula::functions::TextFunction::CONCATENATE());
    retval->set(int32_t(337), ::org::apache::poi::ss::formula::functions::NumericFunction::POWER());
    retval->set(int32_t(342), ::org::apache::poi::ss::formula::functions::NumericFunction::RADIANS());
    retval->set(int32_t(343), ::org::apache::poi::ss::formula::functions::NumericFunction::DEGREES());
    retval->set(int32_t(344), new ::org::apache::poi::ss::formula::functions::Subtotal());
    retval->set(int32_t(345), new ::org::apache::poi::ss::formula::functions::Sumif());
    retval->set(int32_t(346), new ::org::apache::poi::ss::formula::functions::Countif());
    retval->set(int32_t(347), new ::org::apache::poi::ss::formula::functions::Countblank());
    retval->set(int32_t(354), new ::org::apache::poi::ss::formula::functions::Roman());
    retval->set(int32_t(359), new ::org::apache::poi::ss::formula::functions::Hyperlink());
    retval->set(int32_t(362), ::org::apache::poi::ss::formula::functions::MinaMaxa::MAXA());
    retval->set(int32_t(363), ::org::apache::poi::ss::formula::functions::MinaMaxa::MINA());
    for (auto i = int32_t(0); i < npc(retval)->length; i++) {
        auto f = (*retval)[i];
        if(f == nullptr) {
            auto fm = ::org::apache::poi::ss::formula::function::FunctionMetadataRegistry::getFunctionByIndex(i);
            if(fm == nullptr) {
                continue;
            }
            retval->set(i, new ::org::apache::poi::ss::formula::functions::NotImplementedFunction(npc(fm)->getName()));
        }
    }
    return retval;
}

org::apache::poi::ss::formula::functions::Function* org::apache::poi::ss::formula::eval::FunctionEval::getBasicFunction(int32_t functionIndex)
{
    clinit();
    switch (functionIndex) {
    case FunctionEval_FunctionID::INDIRECT:
    case FunctionEval_FunctionID::EXTERNAL_FUNC:
        return nullptr;
    }

    auto result = (*functions_)[functionIndex];
    if(result == nullptr) {
        throw new NotImplementedException(::java::lang::StringBuilder().append(u"FuncIx="_j)->append(functionIndex)->toString());
    }
    return result;
}

void org::apache::poi::ss::formula::eval::FunctionEval::registerFunction(::java::lang::String* name, ::org::apache::poi::ss::formula::functions::Function* func)
{
    clinit();
    auto metaData = ::org::apache::poi::ss::formula::function::FunctionMetadataRegistry::getFunctionByName(name);
    if(metaData == nullptr) {
        if(::org::apache::poi::ss::formula::atp::AnalysisToolPak::isATPFunction(name)) {
            throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(name)->append(u" is a function from the Excel Analysis Toolpack. "_j)
                ->append(u"Use AnalysisToolpack.registerFunction(String name, FreeRefFunction func) instead."_j)->toString());
        }
        throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(u"Unknown function: "_j)->append(name)->toString());
    }
    auto idx = npc(metaData)->getIndex();
    if(dynamic_cast< ::org::apache::poi::ss::formula::functions::NotImplementedFunction* >((*functions_)[idx]) != nullptr) {
        functions_->set(idx, func);
    } else {
        throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(u"POI already implememts "_j)->append(name)
            ->append(u". You cannot override POI's implementations of Excel functions"_j)->toString());
    }
}

java::util::Collection* org::apache::poi::ss::formula::eval::FunctionEval::getSupportedFunctionNames()
{
    clinit();
    ::java::util::Collection* lst = new ::java::util::TreeSet();
    for (auto i = int32_t(0); i < npc(functions_)->length; i++) {
        auto func = (*functions_)[i];
        auto metaData = ::org::apache::poi::ss::formula::function::FunctionMetadataRegistry::getFunctionByIndex(i);
        if(func != nullptr && !(dynamic_cast< ::org::apache::poi::ss::formula::functions::NotImplementedFunction* >(func) != nullptr)) {
            npc(lst)->add(npc(metaData)->getName());
        }
    }
    npc(lst)->add(u"INDIRECT"_j);
    return ::java::util::Collections::unmodifiableCollection(lst);
}

java::util::Collection* org::apache::poi::ss::formula::eval::FunctionEval::getNotSupportedFunctionNames()
{
    clinit();
    ::java::util::Collection* lst = new ::java::util::TreeSet();
    for (auto i = int32_t(0); i < npc(functions_)->length; i++) {
        auto func = (*functions_)[i];
        if(func != nullptr && (dynamic_cast< ::org::apache::poi::ss::formula::functions::NotImplementedFunction* >(func) != nullptr)) {
            auto metaData = ::org::apache::poi::ss::formula::function::FunctionMetadataRegistry::getFunctionByIndex(i);
            npc(lst)->add(npc(metaData)->getName());
        }
    }
    npc(lst)->remove(u"INDIRECT"_j);
    return ::java::util::Collections::unmodifiableCollection(lst);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::formula::eval::FunctionEval::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.eval.FunctionEval", 43);
    return c;
}

void org::apache::poi::ss::formula::eval::FunctionEval::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        functions_ = produceFunctions();
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* org::apache::poi::ss::formula::eval::FunctionEval::getClass0()
{
    return class_();
}

