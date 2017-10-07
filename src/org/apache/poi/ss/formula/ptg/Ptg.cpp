// Generated from /POI/java/org/apache/poi/ss/formula/ptg/Ptg.java
#include <org/apache/poi/ss/formula/ptg/Ptg.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Integer.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/RuntimeException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/lang/UnsupportedOperationException.hpp>
#include <java/util/ArrayList.hpp>
#include <java/util/Iterator.hpp>
#include <java/util/List.hpp>
#include <org/apache/poi/ss/formula/ptg/AddPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/Area3DPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/AreaErrPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/AreaNPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/AreaPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/ArrayPtg_Initial.hpp>
#include <org/apache/poi/ss/formula/ptg/ArrayPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/AttrPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/BoolPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/ConcatPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/ControlPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/DeletedArea3DPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/DeletedRef3DPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/DividePtg.hpp>
#include <org/apache/poi/ss/formula/ptg/EqualPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/ErrPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/ExpPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/FuncPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/FuncVarPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/GreaterEqualPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/GreaterThanPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/IntPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/IntersectionPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/LessEqualPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/LessThanPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/MemAreaPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/MemErrPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/MemFuncPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/MissingArgPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/MultiplyPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/NamePtg.hpp>
#include <org/apache/poi/ss/formula/ptg/NameXPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/NotEqualPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/NumberPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/OperationPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/ParenthesisPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/PercentPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/PowerPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/RangePtg.hpp>
#include <org/apache/poi/ss/formula/ptg/Ref3DPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/RefErrorPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/RefNPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/RefPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/StringPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/SubtractPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/TblPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/UnaryMinusPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/UnaryPlusPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/UnionPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/UnknownPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/ValueOperatorPtg.hpp>
#include <org/apache/poi/util/LittleEndianByteArrayOutputStream.hpp>
#include <org/apache/poi/util/LittleEndianInput.hpp>
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
                    namespace ptg
                    {
typedef ::SubArray< ::org::apache::poi::ss::formula::ptg::Ptg, ::java::lang::ObjectArray > PtgArray;
                    } // ptg
                } // formula
            } // ss
        } // poi
    } // apache
} // org

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

org::apache::poi::ss::formula::ptg::Ptg::Ptg(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::formula::ptg::Ptg::Ptg()
    : Ptg(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void org::apache::poi::ss::formula::ptg::Ptg::ctor()
{
    super::ctor();
    init();
}

void org::apache::poi::ss::formula::ptg::Ptg::init()
{
    ptgClass = Ptg::CLASS_REF;
}

org::apache::poi::ss::formula::ptg::PtgArray*& org::apache::poi::ss::formula::ptg::Ptg::EMPTY_PTG_ARRAY()
{
    clinit();
    return EMPTY_PTG_ARRAY_;
}
org::apache::poi::ss::formula::ptg::PtgArray* org::apache::poi::ss::formula::ptg::Ptg::EMPTY_PTG_ARRAY_;

org::apache::poi::ss::formula::ptg::PtgArray* org::apache::poi::ss::formula::ptg::Ptg::readTokens(int32_t size, ::org::apache::poi::util::LittleEndianInput* in)
{
    clinit();
    ::java::util::List* temp = new ::java::util::ArrayList(int32_t(4) + size / int32_t(2));
    auto pos = int32_t(0);
    auto hasArrayPtgs = false;
    while (pos < size) {
        auto ptg = Ptg::createPtg(in);
        if(dynamic_cast< ArrayPtg_Initial* >(ptg) != nullptr) {
            hasArrayPtgs = true;
        }
        pos += npc(ptg)->getSize();
        npc(temp)->add(static_cast< ::java::lang::Object* >(ptg));
    }
    if(pos != size) {
        throw new ::java::lang::RuntimeException(u"Ptg array size mismatch"_j);
    }
    if(hasArrayPtgs) {
        auto result = toPtgArray_(temp);
        for (auto i = int32_t(0); i < npc(result)->length; i++) {
            if(dynamic_cast< ArrayPtg_Initial* >((*result)[i]) != nullptr) {
                result->set(i, npc((java_cast< ArrayPtg_Initial* >((*result)[i])))->finishReading(in));
            }
        }
        return result;
    }
    return toPtgArray_(temp);
}

org::apache::poi::ss::formula::ptg::Ptg* org::apache::poi::ss::formula::ptg::Ptg::createPtg(::org::apache::poi::util::LittleEndianInput* in)
{
    clinit();
    auto id = npc(in)->readByte();
    if(id < 32) {
        return createBasePtg(id, in);
    }
    auto retval = createClassifiedPtg(id, in);
    if(id >= 96) {
        npc(retval)->setClass(CLASS_ARRAY);
    } else if(id >= 64) {
        npc(retval)->setClass(CLASS_VALUE);
    } else {
        npc(retval)->setClass(CLASS_REF);
    }
    return retval;
}

org::apache::poi::ss::formula::ptg::Ptg* org::apache::poi::ss::formula::ptg::Ptg::createClassifiedPtg(int8_t id, ::org::apache::poi::util::LittleEndianInput* in)
{
    clinit();
    auto baseId = id & int32_t(31) | int32_t(32);
    switch (baseId) {
    case ArrayPtg::sid:
        return new ArrayPtg_Initial(in);
    case FuncPtg::sid:
        return FuncPtg::create(in);
    case FuncVarPtg::sid:
        return FuncVarPtg::create(in);
    case NamePtg::sid:
        return new NamePtg(in);
    case RefPtg::sid:
        return new RefPtg(in);
    case AreaPtg::sid:
        return new AreaPtg(in);
    case MemAreaPtg::sid:
        return new MemAreaPtg(in);
    case MemErrPtg::sid:
        return new MemErrPtg(in);
    case MemFuncPtg::sid:
        return new MemFuncPtg(in);
    case RefErrorPtg::sid:
        return new RefErrorPtg(in);
    case AreaErrPtg::sid:
        return new AreaErrPtg(in);
    case RefNPtg::sid:
        return new RefNPtg(in);
    case AreaNPtg::sid:
        return new AreaNPtg(in);
    case NameXPtg::sid:
        return new NameXPtg(in);
    case Ref3DPtg::sid:
        return new Ref3DPtg(in);
    case Area3DPtg::sid:
        return new Area3DPtg(in);
    case DeletedRef3DPtg::sid:
        return new DeletedRef3DPtg(in);
    case DeletedArea3DPtg::sid:
        return new DeletedArea3DPtg(in);
    }

    throw new ::java::lang::UnsupportedOperationException(::java::lang::StringBuilder().append(u" Unknown Ptg in Formula: 0x"_j)->append(::java::lang::Integer::toHexString(id))
        ->append(u" ("_j)
        ->append(static_cast< int32_t >(id))
        ->append(u")"_j)->toString());
}

org::apache::poi::ss::formula::ptg::Ptg* org::apache::poi::ss::formula::ptg::Ptg::createBasePtg(int8_t id, ::org::apache::poi::util::LittleEndianInput* in)
{
    clinit();
    switch (id) {
    case int32_t(0):
        return new UnknownPtg(id);
    case ExpPtg::sid:
        return new ExpPtg(in);
    case TblPtg::sid:
        return new TblPtg(in);
    case AddPtg::sid:
        return AddPtg::instance();
    case SubtractPtg::sid:
        return SubtractPtg::instance();
    case MultiplyPtg::sid:
        return MultiplyPtg::instance();
    case DividePtg::sid:
        return DividePtg::instance();
    case PowerPtg::sid:
        return PowerPtg::instance();
    case ConcatPtg::sid:
        return ConcatPtg::instance();
    case LessThanPtg::sid:
        return LessThanPtg::instance();
    case LessEqualPtg::sid:
        return LessEqualPtg::instance();
    case EqualPtg::sid:
        return EqualPtg::instance();
    case GreaterEqualPtg::sid:
        return GreaterEqualPtg::instance();
    case GreaterThanPtg::sid:
        return GreaterThanPtg::instance();
    case NotEqualPtg::sid:
        return NotEqualPtg::instance();
    case IntersectionPtg::sid:
        return IntersectionPtg::instance();
    case UnionPtg::sid:
        return UnionPtg::instance();
    case RangePtg::sid:
        return RangePtg::instance();
    case UnaryPlusPtg::sid:
        return UnaryPlusPtg::instance();
    case UnaryMinusPtg::sid:
        return UnaryMinusPtg::instance();
    case PercentPtg::sid:
        return PercentPtg::instance();
    case ParenthesisPtg::sid:
        return ParenthesisPtg::instance();
    case MissingArgPtg::sid:
        return MissingArgPtg::instance();
    case StringPtg::sid:
        return new StringPtg(in);
    case AttrPtg::sid:
        return new AttrPtg(in);
    case ErrPtg::sid:
        return ErrPtg::read(in);
    case BoolPtg::sid:
        return BoolPtg::read(in);
    case IntPtg::sid:
        return new IntPtg(in);
    case NumberPtg::sid:
        return new NumberPtg(in);
    }

    throw new ::java::lang::RuntimeException(::java::lang::StringBuilder().append(u"Unexpected base token id ("_j)->append(id)
        ->append(u")"_j)->toString());
}

org::apache::poi::ss::formula::ptg::PtgArray* org::apache::poi::ss::formula::ptg::Ptg::toPtgArray_(::java::util::List* l)
{
    clinit();
    if(npc(l)->isEmpty()) {
        return EMPTY_PTG_ARRAY_;
    }
    auto result = new PtgArray(npc(l)->size());
    npc(l)->toArray_(static_cast< ::java::lang::ObjectArray* >(result));
    return result;
}

int32_t org::apache::poi::ss::formula::ptg::Ptg::getEncodedSize(PtgArray* ptgs)
{
    clinit();
    auto result = int32_t(0);
    for(auto ptg : *npc(ptgs)) {
        result += npc(ptg)->getSize();
    }
    return result;
}

int32_t org::apache::poi::ss::formula::ptg::Ptg::getEncodedSizeWithoutArrayData(PtgArray* ptgs)
{
    clinit();
    auto result = int32_t(0);
    for(auto ptg : *npc(ptgs)) {
        if(dynamic_cast< ArrayPtg* >(ptg) != nullptr) {
            result += ArrayPtg::PLAIN_TOKEN_SIZE;
        } else {
            result += npc(ptg)->getSize();
        }
    }
    return result;
}

int32_t org::apache::poi::ss::formula::ptg::Ptg::serializePtgs(PtgArray* ptgs, ::int8_tArray* array, int32_t offset)
{
    clinit();
    auto out = new ::org::apache::poi::util::LittleEndianByteArrayOutputStream(array, offset);
    ::java::util::List* arrayPtgs = nullptr;
    for(auto ptg : *npc(ptgs)) {
        npc(ptg)->write(out);
        if(dynamic_cast< ArrayPtg* >(ptg) != nullptr) {
            if(arrayPtgs == nullptr) {
                arrayPtgs = new ::java::util::ArrayList(int32_t(5));
            }
            npc(arrayPtgs)->add(static_cast< ::java::lang::Object* >(ptg));
        }
    }
    if(arrayPtgs != nullptr) {
        for (auto _i = npc(arrayPtgs)->iterator(); _i->hasNext(); ) {
            Ptg* arrayPtg = java_cast< Ptg* >(_i->next());
            {
                auto p = java_cast< ArrayPtg* >(arrayPtg);
                npc(p)->writeTokenValueBytes(out);
            }
        }
    }
    return npc(out)->getWriteIndex() - offset;
}

java::lang::String* org::apache::poi::ss::formula::ptg::Ptg::toString()
{
    return npc(this->getClass())->toString();
}

constexpr int8_t org::apache::poi::ss::formula::ptg::Ptg::CLASS_REF;

constexpr int8_t org::apache::poi::ss::formula::ptg::Ptg::CLASS_VALUE;

constexpr int8_t org::apache::poi::ss::formula::ptg::Ptg::CLASS_ARRAY;

void org::apache::poi::ss::formula::ptg::Ptg::setClass(int8_t thePtgClass)
{
    if(isBaseToken()) {
        throw new ::java::lang::RuntimeException(u"setClass should not be called on a base token"_j);
    }
    ptgClass = thePtgClass;
}

int8_t org::apache::poi::ss::formula::ptg::Ptg::getPtgClass()
{
    return ptgClass;
}

char16_t org::apache::poi::ss::formula::ptg::Ptg::getRVAType()
{
    if(isBaseToken()) {
        return u'.';
    }
    switch (ptgClass) {
    case Ptg::CLASS_REF:
        return u'R';
    case Ptg::CLASS_VALUE:
        return u'V';
    case Ptg::CLASS_ARRAY:
        return u'A';
    }

    throw new ::java::lang::RuntimeException(::java::lang::StringBuilder().append(u"Unknown operand class ("_j)->append(ptgClass)
        ->append(u")"_j)->toString());
}

bool org::apache::poi::ss::formula::ptg::Ptg::doesFormulaReferToDeletedCell(PtgArray* ptgs)
{
    clinit();
    for(auto ptg : *npc(ptgs)) {
        if(isDeletedCellRef(ptg)) {
            return true;
        }
    }
    return false;
}

bool org::apache::poi::ss::formula::ptg::Ptg::isDeletedCellRef(Ptg* ptg)
{
    clinit();
    if(ptg == static_cast< Ptg* >(ErrPtg::REF_INVALID())) {
        return true;
    }
    if(dynamic_cast< DeletedArea3DPtg* >(ptg) != nullptr) {
        return true;
    }
    if(dynamic_cast< DeletedRef3DPtg* >(ptg) != nullptr) {
        return true;
    }
    if(dynamic_cast< AreaErrPtg* >(ptg) != nullptr) {
        return true;
    }
    if(dynamic_cast< RefErrorPtg* >(ptg) != nullptr) {
        return true;
    }
    return false;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::formula::ptg::Ptg::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.ptg.Ptg", 33);
    return c;
}

void org::apache::poi::ss::formula::ptg::Ptg::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        EMPTY_PTG_ARRAY_ = (new ::org::apache::poi::ss::formula::ptg::PtgArray({}));
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* org::apache::poi::ss::formula::ptg::Ptg::getClass0()
{
    return class_();
}

