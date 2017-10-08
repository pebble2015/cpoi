// Generated from /POI/java/org/apache/poi/hssf/record/common/UnicodeString.java
#include <org/apache/poi/hssf/record/common/UnicodeString_ExtRst.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/IllegalStateException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/util/Arrays.hpp>
#include <org/apache/poi/hssf/record/common/UnicodeString_PhRun.hpp>
#include <org/apache/poi/hssf/record/common/UnicodeString.hpp>
#include <org/apache/poi/hssf/record/cont/ContinuableRecordOutput.hpp>
#include <org/apache/poi/util/LittleEndianInput.hpp>
#include <org/apache/poi/util/POILogger.hpp>
#include <org/apache/poi/util/StringUtil.hpp>
#include <Array.hpp>
#include <ObjectArray.hpp>
#include <SubArray.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace poi
{
    namespace hssf
    {
        namespace record
        {
            namespace common
            {
typedef ::SubArray< ::poi::hssf::record::common::UnicodeString_PhRun, ::java::lang::ObjectArray > UnicodeString_PhRunArray;
            } // common
        } // record
    } // hssf
} // poi

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

poi::hssf::record::common::UnicodeString_ExtRst::UnicodeString_ExtRst(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::record::common::UnicodeString_ExtRst::UnicodeString_ExtRst() 
    : UnicodeString_ExtRst(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::hssf::record::common::UnicodeString_ExtRst::UnicodeString_ExtRst(::poi::util::LittleEndianInput* in, int32_t expectedLength) 
    : UnicodeString_ExtRst(*static_cast< ::default_init_tag* >(0))
{
    ctor(in,expectedLength);
}

void poi::hssf::record::common::UnicodeString_ExtRst::populateEmpty()
{
    reserved = 1;
    phoneticText = u""_j;
    phRuns = new UnicodeString_PhRunArray(int32_t(0));
    extraData = new ::int8_tArray(int32_t(0));
}

void poi::hssf::record::common::UnicodeString_ExtRst::ctor()
{
    super::ctor();
    populateEmpty();
}

void poi::hssf::record::common::UnicodeString_ExtRst::ctor(::poi::util::LittleEndianInput* in, int32_t expectedLength)
{
    super::ctor();
    reserved = npc(in)->readShort();
    if(reserved == -int32_t(1)) {
        populateEmpty();
        return;
    }
    if(reserved != 1) {
        npc(UnicodeString::_logger())->log(::poi::util::POILogger::WARN, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(::java::lang::StringBuilder().append(u"Warning - ExtRst has wrong magic marker, expecting 1 but found "_j)->append(reserved)
            ->append(u" - ignoring"_j)->toString())}));
        for (auto i = int32_t(0); i < expectedLength - int32_t(2); i++) {
            npc(in)->readByte();
        }
        populateEmpty();
        return;
    }
    auto stringDataSize = npc(in)->readShort();
    formattingFontIndex = npc(in)->readShort();
    formattingOptions = npc(in)->readShort();
    numberOfRuns = npc(in)->readUShort();
    auto length1 = npc(in)->readShort();
    auto length2 = npc(in)->readShort();
    if(length1 == 0 && length2 > 0) {
        length2 = 0;
    }
    if(length1 != length2) {
        throw new ::java::lang::IllegalStateException(::java::lang::StringBuilder().append(u"The two length fields of the Phonetic Text don't agree! "_j)->append(length1)
            ->append(u" vs "_j)
            ->append(length2)->toString());
    }
    phoneticText = ::poi::util::StringUtil::readUnicodeLE(in, length1);
    auto runData = stringDataSize - int32_t(4) - int32_t(6)- (int32_t(2) * npc(phoneticText)->length());
    auto numRuns = (runData / int32_t(6));
    phRuns = new UnicodeString_PhRunArray(numRuns);
    for (auto i = int32_t(0); i < npc(phRuns)->length; i++) {
        phRuns->set(i, new UnicodeString_PhRun(in));
    }
    auto extraDataLength = runData - (numRuns * int32_t(6));
    if(extraDataLength < 0) {
        npc(UnicodeString::_logger())->log(::poi::util::POILogger::WARN, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(::java::lang::StringBuilder().append(u"Warning - ExtRst overran by "_j)->append((int32_t(0) - extraDataLength))
            ->append(u" bytes"_j)->toString())}));
        extraDataLength = 0;
    }
    extraData = new ::int8_tArray(extraDataLength);
    for (auto i = int32_t(0); i < npc(extraData)->length; i++) {
        (*extraData)[i] = npc(in)->readByte();
    }
}

int32_t poi::hssf::record::common::UnicodeString_ExtRst::getDataSize()
{
    return int32_t(4) + int32_t(6) + (int32_t(2) * npc(phoneticText)->length())+ (int32_t(6) * npc(phRuns)->length)+ npc(extraData)->length;
}

void poi::hssf::record::common::UnicodeString_ExtRst::serialize(::poi::hssf::record::cont::ContinuableRecordOutput* out)
{
    auto dataSize = getDataSize();
    npc(out)->writeContinueIfRequired(8);
    npc(out)->writeShort(static_cast< int32_t >(reserved));
    npc(out)->writeShort(dataSize);
    npc(out)->writeShort(static_cast< int32_t >(formattingFontIndex));
    npc(out)->writeShort(static_cast< int32_t >(formattingOptions));
    npc(out)->writeContinueIfRequired(6);
    npc(out)->writeShort(numberOfRuns);
    npc(out)->writeShort(npc(phoneticText)->length());
    npc(out)->writeShort(npc(phoneticText)->length());
    npc(out)->writeContinueIfRequired(npc(phoneticText)->length() * int32_t(2));
    ::poi::util::StringUtil::putUnicodeLE(phoneticText, out);
    for (auto i = int32_t(0); i < npc(phRuns)->length; i++) {
        npc((*phRuns)[i])->serialize(out);
    }
    npc(out)->write(extraData);
}

bool poi::hssf::record::common::UnicodeString_ExtRst::equals(::java::lang::Object* obj)
{
    if(!(dynamic_cast< UnicodeString_ExtRst* >(obj) != nullptr)) {
        return false;
    }
    auto other = java_cast< UnicodeString_ExtRst* >(obj);
    return (compareTo(other) == 0);
}

int32_t poi::hssf::record::common::UnicodeString_ExtRst::compareTo(UnicodeString_ExtRst* o)
{
    int32_t result;
    result = reserved - npc(o)->reserved;
    if(result != 0) {
        return result;
    }
    result = formattingFontIndex - npc(o)->formattingFontIndex;
    if(result != 0) {
        return result;
    }
    result = formattingOptions - npc(o)->formattingOptions;
    if(result != 0) {
        return result;
    }
    result = numberOfRuns - npc(o)->numberOfRuns;
    if(result != 0) {
        return result;
    }
    result = npc(phoneticText)->compareTo(npc(o)->phoneticText);
    if(result != 0) {
        return result;
    }
    result = npc(phRuns)->length - npc(npc(o)->phRuns)->length;
    if(result != 0) {
        return result;
    }
    for (auto i = int32_t(0); i < npc(phRuns)->length; i++) {
        result = npc((*phRuns)[i])->phoneticTextFirstCharacterOffset - npc((*npc(o)->phRuns)[i])->phoneticTextFirstCharacterOffset;
        if(result != 0) {
            return result;
        }
        result = npc((*phRuns)[i])->realTextFirstCharacterOffset - npc((*npc(o)->phRuns)[i])->realTextFirstCharacterOffset;
        if(result != 0) {
            return result;
        }
        result = npc((*phRuns)[i])->realTextLength - npc((*npc(o)->phRuns)[i])->realTextLength;
        if(result != 0) {
            return result;
        }
    }
    result = ::java::util::Arrays::hashCode(extraData) - ::java::util::Arrays::hashCode(npc(o)->extraData);
    return result;
}

int32_t poi::hssf::record::common::UnicodeString_ExtRst::compareTo(::java::lang::Object* o)
{ 
    return compareTo(dynamic_cast< UnicodeString_ExtRst* >(o));
}

int32_t poi::hssf::record::common::UnicodeString_ExtRst::hashCode()
{
    int32_t hash = reserved;
    hash = int32_t(31) * hash + formattingFontIndex;
    hash = int32_t(31) * hash + formattingOptions;
    hash = int32_t(31) * hash + numberOfRuns;
    hash = int32_t(31) * hash + npc(phoneticText)->hashCode();
    if(phRuns != nullptr) {
        for(auto ph : *npc(phRuns)) {
            hash = int32_t(31) * hash + npc(ph)->phoneticTextFirstCharacterOffset;
            hash = int32_t(31) * hash + npc(ph)->realTextFirstCharacterOffset;
            hash = int32_t(31) * hash + npc(ph)->realTextLength;
        }
    }
    return hash;
}

poi::hssf::record::common::UnicodeString_ExtRst* poi::hssf::record::common::UnicodeString_ExtRst::clone()
{
    auto ext = new UnicodeString_ExtRst();
    npc(ext)->reserved = reserved;
    npc(ext)->formattingFontIndex = formattingFontIndex;
    npc(ext)->formattingOptions = formattingOptions;
    npc(ext)->numberOfRuns = numberOfRuns;
    npc(ext)->phoneticText = phoneticText;
    npc(ext)->phRuns = new UnicodeString_PhRunArray(npc(phRuns)->length);
    for (auto i = int32_t(0); i < npc(npc(ext)->phRuns)->length; i++) {
        npc(ext)->phRuns->set(i, new UnicodeString_PhRun(npc((*phRuns)[i])->phoneticTextFirstCharacterOffset, npc((*phRuns)[i])->realTextFirstCharacterOffset, npc((*phRuns)[i])->realTextLength));
    }
    return ext;
}

int16_t poi::hssf::record::common::UnicodeString_ExtRst::getFormattingFontIndex()
{
    return formattingFontIndex;
}

int16_t poi::hssf::record::common::UnicodeString_ExtRst::getFormattingOptions()
{
    return formattingOptions;
}

int32_t poi::hssf::record::common::UnicodeString_ExtRst::getNumberOfRuns()
{
    return numberOfRuns;
}

java::lang::String* poi::hssf::record::common::UnicodeString_ExtRst::getPhoneticText()
{
    return phoneticText;
}

poi::hssf::record::common::UnicodeString_PhRunArray* poi::hssf::record::common::UnicodeString_ExtRst::getPhRuns()
{
    return phRuns;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::record::common::UnicodeString_ExtRst::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.common.UnicodeString.ExtRst", 54);
    return c;
}

java::lang::Class* poi::hssf::record::common::UnicodeString_ExtRst::getClass0()
{
    return class_();
}

