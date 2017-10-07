// Generated from /POI/java/org/apache/poi/ss/formula/Formula.java
#include <org/apache/poi/ss/formula/Formula.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/util/Arrays.hpp>
#include <org/apache/poi/ss/formula/ptg/ExpPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/Ptg.hpp>
#include <org/apache/poi/ss/formula/ptg/TblPtg.hpp>
#include <org/apache/poi/ss/util/CellReference.hpp>
#include <org/apache/poi/util/LittleEndian.hpp>
#include <org/apache/poi/util/LittleEndianByteArrayInputStream.hpp>
#include <org/apache/poi/util/LittleEndianInput.hpp>
#include <org/apache/poi/util/LittleEndianOutput.hpp>
#include <Array.hpp>
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

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::ss::formula::Formula::Formula(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::formula::Formula::Formula(::int8_tArray* byteEncoding, int32_t encodedTokenLen) 
    : Formula(*static_cast< ::default_init_tag* >(0))
{
    ctor(byteEncoding,encodedTokenLen);
}

org::apache::poi::ss::formula::Formula*& org::apache::poi::ss::formula::Formula::EMPTY()
{
    clinit();
    return EMPTY_;
}
org::apache::poi::ss::formula::Formula* org::apache::poi::ss::formula::Formula::EMPTY_;

void org::apache::poi::ss::formula::Formula::ctor(::int8_tArray* byteEncoding, int32_t encodedTokenLen)
{
    super::ctor();
    _byteEncoding = npc(byteEncoding)->clone();
    _encodedTokenLen = encodedTokenLen;
}

org::apache::poi::ss::formula::Formula* org::apache::poi::ss::formula::Formula::read(int32_t encodedTokenLen, ::org::apache::poi::util::LittleEndianInput* in)
{
    clinit();
    return read(encodedTokenLen, in, encodedTokenLen);
}

org::apache::poi::ss::formula::Formula* org::apache::poi::ss::formula::Formula::read(int32_t encodedTokenLen, ::org::apache::poi::util::LittleEndianInput* in, int32_t totalEncodedLen)
{
    clinit();
    auto byteEncoding = new ::int8_tArray(totalEncodedLen);
    npc(in)->readFully(byteEncoding);
    return new Formula(byteEncoding, encodedTokenLen);
}

org::apache::poi::ss::formula::ptg::PtgArray* org::apache::poi::ss::formula::Formula::getTokens()
{
    ::org::apache::poi::util::LittleEndianInput* in = new ::org::apache::poi::util::LittleEndianByteArrayInputStream(_byteEncoding);
    return ::org::apache::poi::ss::formula::ptg::Ptg::readTokens(_encodedTokenLen, in);
}

void org::apache::poi::ss::formula::Formula::serialize(::org::apache::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeShort(_encodedTokenLen);
    npc(out)->write(_byteEncoding);
}

void org::apache::poi::ss::formula::Formula::serializeTokens(::org::apache::poi::util::LittleEndianOutput* out)
{
    npc(out)->write(_byteEncoding, 0, _encodedTokenLen);
}

void org::apache::poi::ss::formula::Formula::serializeArrayConstantData(::org::apache::poi::util::LittleEndianOutput* out)
{
    auto len = npc(_byteEncoding)->length - _encodedTokenLen;
    npc(out)->write(_byteEncoding, _encodedTokenLen, len);
}

int32_t org::apache::poi::ss::formula::Formula::getEncodedSize()
{
    return int32_t(2) + npc(_byteEncoding)->length;
}

int32_t org::apache::poi::ss::formula::Formula::getEncodedTokenSize()
{
    return _encodedTokenLen;
}

org::apache::poi::ss::formula::Formula* org::apache::poi::ss::formula::Formula::create(::org::apache::poi::ss::formula::ptg::PtgArray* ptgs)
{
    clinit();
    if(ptgs == nullptr || npc(ptgs)->length < 1) {
        return EMPTY_;
    }
    auto totalSize = ::org::apache::poi::ss::formula::ptg::Ptg::getEncodedSize(ptgs);
    auto encodedData = new ::int8_tArray(totalSize);
    ::org::apache::poi::ss::formula::ptg::Ptg::serializePtgs(ptgs, encodedData, 0);
    auto encodedTokenLen = ::org::apache::poi::ss::formula::ptg::Ptg::getEncodedSizeWithoutArrayData(ptgs);
    return new Formula(encodedData, encodedTokenLen);
}

org::apache::poi::ss::formula::ptg::PtgArray* org::apache::poi::ss::formula::Formula::getTokens(Formula* formula)
{
    clinit();
    if(formula == nullptr) {
        return nullptr;
    }
    return npc(formula)->getTokens();
}

org::apache::poi::ss::formula::Formula* org::apache::poi::ss::formula::Formula::copy()
{
    return this;
}

org::apache::poi::ss::util::CellReference* org::apache::poi::ss::formula::Formula::getExpReference()
{
    auto data = _byteEncoding;
    if(npc(data)->length != 5) {
        return nullptr;
    }
    switch ((*data)[int32_t(0)]) {
    case ::org::apache::poi::ss::formula::ptg::ExpPtg::sid:
        break;
    case ::org::apache::poi::ss::formula::ptg::TblPtg::sid:
        break;
    default:
        return nullptr;
    }

    auto firstRow = ::org::apache::poi::util::LittleEndian::getUShort(data, 1);
    auto firstColumn = ::org::apache::poi::util::LittleEndian::getUShort(data, 3);
    return new ::org::apache::poi::ss::util::CellReference(firstRow, firstColumn);
}

bool org::apache::poi::ss::formula::Formula::isSame(Formula* other)
{
    return ::java::util::Arrays::equals(_byteEncoding, npc(other)->_byteEncoding);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::formula::Formula::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.Formula", 33);
    return c;
}

void org::apache::poi::ss::formula::Formula::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        EMPTY_ = new Formula(new ::int8_tArray(int32_t(0)), int32_t(0));
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* org::apache::poi::ss::formula::Formula::getClass0()
{
    return class_();
}

