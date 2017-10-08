// Generated from /POI/java/org/apache/poi/ss/formula/ptg/AttrPtg.java
#include <org/apache/poi/ss/formula/ptg/AttrPtg.hpp>

#include <java/io/Serializable.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/IllegalStateException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <java/lang/StringBuilder.hpp>
#include <org/apache/poi/util/BitField.hpp>
#include <org/apache/poi/util/BitFieldFactory.hpp>
#include <org/apache/poi/util/LittleEndian.hpp>
#include <org/apache/poi/util/LittleEndianInput.hpp>
#include <org/apache/poi/util/LittleEndianOutput.hpp>
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

poi::ss::formula::ptg::AttrPtg::AttrPtg(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::formula::ptg::AttrPtg::AttrPtg(::poi::util::LittleEndianInput* in) 
    : AttrPtg(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

poi::ss::formula::ptg::AttrPtg::AttrPtg(int32_t options, int32_t data, ::int32_tArray* jt, int32_t chooseFuncOffset) 
    : AttrPtg(*static_cast< ::default_init_tag* >(0))
{
    ctor(options,data,jt,chooseFuncOffset);
}

constexpr int8_t poi::ss::formula::ptg::AttrPtg::sid;

constexpr int32_t poi::ss::formula::ptg::AttrPtg::SIZE;

poi::util::BitField*& poi::ss::formula::ptg::AttrPtg::semiVolatile()
{
    clinit();
    return semiVolatile_;
}
poi::util::BitField* poi::ss::formula::ptg::AttrPtg::semiVolatile_;

poi::util::BitField*& poi::ss::formula::ptg::AttrPtg::optiIf()
{
    clinit();
    return optiIf_;
}
poi::util::BitField* poi::ss::formula::ptg::AttrPtg::optiIf_;

poi::util::BitField*& poi::ss::formula::ptg::AttrPtg::optiChoose()
{
    clinit();
    return optiChoose_;
}
poi::util::BitField* poi::ss::formula::ptg::AttrPtg::optiChoose_;

poi::util::BitField*& poi::ss::formula::ptg::AttrPtg::optiSkip()
{
    clinit();
    return optiSkip_;
}
poi::util::BitField* poi::ss::formula::ptg::AttrPtg::optiSkip_;

poi::util::BitField*& poi::ss::formula::ptg::AttrPtg::optiSum()
{
    clinit();
    return optiSum_;
}
poi::util::BitField* poi::ss::formula::ptg::AttrPtg::optiSum_;

poi::util::BitField*& poi::ss::formula::ptg::AttrPtg::baxcel()
{
    clinit();
    return baxcel_;
}
poi::util::BitField* poi::ss::formula::ptg::AttrPtg::baxcel_;

poi::util::BitField*& poi::ss::formula::ptg::AttrPtg::space()
{
    clinit();
    return space_;
}
poi::util::BitField* poi::ss::formula::ptg::AttrPtg::space_;

poi::ss::formula::ptg::AttrPtg*& poi::ss::formula::ptg::AttrPtg::SUM()
{
    clinit();
    return SUM_;
}
poi::ss::formula::ptg::AttrPtg* poi::ss::formula::ptg::AttrPtg::SUM_;

void poi::ss::formula::ptg::AttrPtg::ctor(::poi::util::LittleEndianInput* in)
{
    super::ctor();
    _options = npc(in)->readByte();
    _data = npc(in)->readShort();
    if(isOptimizedChoose()) {
        int32_t nCases = _data;
        auto jumpTable = new ::int32_tArray(nCases);
        for (auto i = int32_t(0); i < npc(jumpTable)->length; i++) {
            (*jumpTable)[i] = npc(in)->readUShort();
        }
        _jumpTable = jumpTable;
        _chooseFuncOffset = npc(in)->readUShort();
    } else {
        _jumpTable = nullptr;
        _chooseFuncOffset = -int32_t(1);
    }
}

void poi::ss::formula::ptg::AttrPtg::ctor(int32_t options, int32_t data, ::int32_tArray* jt, int32_t chooseFuncOffset)
{
    super::ctor();
    _options = static_cast< int8_t >(options);
    _data = static_cast< int16_t >(data);
    _jumpTable = jt;
    _chooseFuncOffset = chooseFuncOffset;
}

poi::ss::formula::ptg::AttrPtg* poi::ss::formula::ptg::AttrPtg::createSpace(int32_t type, int32_t count)
{
    clinit();
    auto data = type & int32_t(255) | (count << int32_t(8)) & int32_t(65535);
    return new AttrPtg(npc(space_)->set(0), data, nullptr, -int32_t(1));
}

poi::ss::formula::ptg::AttrPtg* poi::ss::formula::ptg::AttrPtg::createIf(int32_t dist)
{
    clinit();
    return new AttrPtg(npc(optiIf_)->set(0), dist, nullptr, -int32_t(1));
}

poi::ss::formula::ptg::AttrPtg* poi::ss::formula::ptg::AttrPtg::createSkip(int32_t dist)
{
    clinit();
    return new AttrPtg(npc(optiSkip_)->set(0), dist, nullptr, -int32_t(1));
}

poi::ss::formula::ptg::AttrPtg* poi::ss::formula::ptg::AttrPtg::getSumSingle()
{
    clinit();
    return new AttrPtg(npc(optiSum_)->set(0), int32_t(0), nullptr, -int32_t(1));
}

bool poi::ss::formula::ptg::AttrPtg::isSemiVolatile()
{
    return npc(semiVolatile_)->isSet(_options);
}

bool poi::ss::formula::ptg::AttrPtg::isOptimizedIf()
{
    return npc(optiIf_)->isSet(_options);
}

bool poi::ss::formula::ptg::AttrPtg::isOptimizedChoose()
{
    return npc(optiChoose_)->isSet(_options);
}

bool poi::ss::formula::ptg::AttrPtg::isSum()
{
    return npc(optiSum_)->isSet(_options);
}

bool poi::ss::formula::ptg::AttrPtg::isSkip()
{
    return npc(optiSkip_)->isSet(_options);
}

bool poi::ss::formula::ptg::AttrPtg::isBaxcel()
{
    return npc(baxcel_)->isSet(_options);
}

bool poi::ss::formula::ptg::AttrPtg::isSpace()
{
    return npc(space_)->isSet(_options);
}

int16_t poi::ss::formula::ptg::AttrPtg::getData()
{
    return _data;
}

int32_tArray* poi::ss::formula::ptg::AttrPtg::getJumpTable()
{
    return npc(_jumpTable)->clone();
}

int32_t poi::ss::formula::ptg::AttrPtg::getChooseFuncOffset()
{
    if(_jumpTable == nullptr) {
        throw new ::java::lang::IllegalStateException(u"Not tAttrChoose"_j);
    }
    return _chooseFuncOffset;
}

java::lang::String* poi::ss::formula::ptg::AttrPtg::toString()
{
    auto sb = new ::java::lang::StringBuffer(int32_t(64));
    npc(npc(sb)->append(npc(getClass())->getName()))->append(u" ["_j);
    if(isSemiVolatile()) {
        npc(sb)->append(u"volatile "_j);
    }
    if(isSpace()) {
        npc(npc(sb)->append(u"space count="_j))->append((_data >> int32_t(8)) & int32_t(255));
        npc(npc(npc(sb)->append(u" type="_j))->append(_data & int32_t(255)))->append(u" "_j);
    }
    if(isOptimizedIf()) {
        npc(npc(sb)->append(u"if dist="_j))->append(static_cast< int32_t >(_data));
    } else if(isOptimizedChoose()) {
        npc(npc(sb)->append(u"choose nCases="_j))->append(static_cast< int32_t >(_data));
    } else if(isSkip()) {
        npc(npc(sb)->append(u"skip dist="_j))->append(static_cast< int32_t >(_data));
    } else if(isSum()) {
        npc(sb)->append(u"sum "_j);
    } else if(isBaxcel()) {
        npc(sb)->append(u"assign "_j);
    }
    npc(sb)->append(u"]"_j);
    return npc(sb)->toString();
}

void poi::ss::formula::ptg::AttrPtg::write(::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeByte(sid + getPtgClass());
    npc(out)->writeByte(_options);
    npc(out)->writeShort(_data);
    auto jt = _jumpTable;
    if(jt != nullptr) {
        for (auto i = int32_t(0); i < npc(jt)->length; i++) {
            npc(out)->writeShort((*jt)[i]);
        }
        npc(out)->writeShort(_chooseFuncOffset);
    }
}

int32_t poi::ss::formula::ptg::AttrPtg::getSize()
{
    if(_jumpTable != nullptr) {
        return SIZE + (npc(_jumpTable)->length + int32_t(1)) * ::poi::util::LittleEndian::SHORT_SIZE;
    }
    return SIZE;
}

java::lang::String* poi::ss::formula::ptg::AttrPtg::toFormulaString(::java::lang::StringArray* operands)
{
    if(npc(space_)->isSet(_options)) {
        return (*operands)[int32_t(0)];
    } else if(npc(optiIf_)->isSet(_options)) {
        return ::java::lang::StringBuilder().append(toFormulaString())->append(u"("_j)
            ->append((*operands)[int32_t(0)])
            ->append(u")"_j)->toString();
    } else if(npc(optiSkip_)->isSet(_options)) {
        return ::java::lang::StringBuilder().append(toFormulaString())->append((*operands)[int32_t(0)])->toString();
    } else {
        return ::java::lang::StringBuilder().append(toFormulaString())->append(u"("_j)
            ->append((*operands)[int32_t(0)])
            ->append(u")"_j)->toString();
    }
}

int32_t poi::ss::formula::ptg::AttrPtg::getNumberOfOperands()
{
    return 1;
}

int32_t poi::ss::formula::ptg::AttrPtg::getType()
{
    return -int32_t(1);
}

java::lang::String* poi::ss::formula::ptg::AttrPtg::toFormulaString()
{
    if(npc(semiVolatile_)->isSet(_options)) {
        return u"ATTR(semiVolatile)"_j;
    }
    if(npc(optiIf_)->isSet(_options)) {
        return u"IF"_j;
    }
    if(npc(optiChoose_)->isSet(_options)) {
        return u"CHOOSE"_j;
    }
    if(npc(optiSkip_)->isSet(_options)) {
        return u""_j;
    }
    if(npc(optiSum_)->isSet(_options)) {
        return u"SUM"_j;
    }
    if(npc(baxcel_)->isSet(_options)) {
        return u"ATTR(baxcel)"_j;
    }
    if(npc(space_)->isSet(_options)) {
        return u""_j;
    }
    return u"UNKNOWN ATTRIBUTE"_j;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::ptg::AttrPtg::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.ptg.AttrPtg", 37);
    return c;
}

void poi::ss::formula::ptg::AttrPtg::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        semiVolatile_ = ::poi::util::BitFieldFactory::getInstance(1);
        optiIf_ = ::poi::util::BitFieldFactory::getInstance(2);
        optiChoose_ = ::poi::util::BitFieldFactory::getInstance(4);
        optiSkip_ = ::poi::util::BitFieldFactory::getInstance(8);
        optiSum_ = ::poi::util::BitFieldFactory::getInstance(16);
        baxcel_ = ::poi::util::BitFieldFactory::getInstance(32);
        space_ = ::poi::util::BitFieldFactory::getInstance(64);
        SUM_ = new AttrPtg(int32_t(16), int32_t(0), nullptr, -int32_t(1));
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* poi::ss::formula::ptg::AttrPtg::getClass0()
{
    return class_();
}

