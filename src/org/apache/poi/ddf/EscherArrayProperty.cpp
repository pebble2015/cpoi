// Generated from /POI/java/org/apache/poi/ddf/EscherArrayProperty.java
#include <org/apache/poi/ddf/EscherArrayProperty.hpp>

#include <java/lang/Class.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/lang/System.hpp>
#include <org/apache/poi/ddf/EscherArrayProperty_iterator_1.hpp>
#include <org/apache/poi/ddf/EscherProperties.hpp>
#include <org/apache/poi/util/HexDump.hpp>
#include <org/apache/poi/util/LittleEndian.hpp>
#include <Array.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::ddf::EscherArrayProperty::EscherArrayProperty(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ddf::EscherArrayProperty::EscherArrayProperty(int16_t id, ::int8_tArray* complexData) 
    : EscherArrayProperty(*static_cast< ::default_init_tag* >(0))
{
    ctor(id,complexData);
}

org::apache::poi::ddf::EscherArrayProperty::EscherArrayProperty(int16_t propertyNumber, bool isBlipId, ::int8_tArray* complexData) 
    : EscherArrayProperty(*static_cast< ::default_init_tag* >(0))
{
    ctor(propertyNumber,isBlipId,complexData);
}

void org::apache::poi::ddf::EscherArrayProperty::init()
{
    sizeIncludesHeaderSize = true;
}

constexpr int32_t org::apache::poi::ddf::EscherArrayProperty::FIXED_SIZE;

void org::apache::poi::ddf::EscherArrayProperty::ctor(int16_t id, ::int8_tArray* complexData)
{
    super::ctor(id, checkComplexData(complexData));
    init();
    emptyComplexPart = (complexData == nullptr || npc(complexData)->length == 0);
}

void org::apache::poi::ddf::EscherArrayProperty::ctor(int16_t propertyNumber, bool isBlipId, ::int8_tArray* complexData)
{
    super::ctor(propertyNumber, isBlipId, checkComplexData(complexData));
    init();
}

int8_tArray* org::apache::poi::ddf::EscherArrayProperty::checkComplexData(::int8_tArray* complexData)
{
    clinit();
    if(complexData == nullptr || npc(complexData)->length == 0) {
        return new ::int8_tArray(int32_t(6));
    }
    return complexData;
}

int32_t org::apache::poi::ddf::EscherArrayProperty::getNumberOfElementsInArray_()
{
    return (emptyComplexPart) ? int32_t(0) : ::org::apache::poi::util::LittleEndian::getUShort(getComplexData(), 0);
}

void org::apache::poi::ddf::EscherArrayProperty::setNumberOfElementsInArray_(int32_t numberOfElements)
{
    auto expectedArraySize = numberOfElements * getActualSizeOfElements(getSizeOfElements()) + FIXED_SIZE;
    if(expectedArraySize != npc(getComplexData())->length) {
        auto newArray_ = new ::int8_tArray(expectedArraySize);
        ::java::lang::System::arraycopy(getComplexData(), 0, newArray_, 0, npc(getComplexData())->length);
        setComplexData(newArray_);
    }
    ::org::apache::poi::util::LittleEndian::putShort(getComplexData(), 0, static_cast< int16_t >(numberOfElements));
}

int32_t org::apache::poi::ddf::EscherArrayProperty::getNumberOfElementsInMemory()
{
    return (emptyComplexPart) ? int32_t(0) : ::org::apache::poi::util::LittleEndian::getUShort(getComplexData(), 2);
}

void org::apache::poi::ddf::EscherArrayProperty::setNumberOfElementsInMemory(int32_t numberOfElements)
{
    auto expectedArraySize = numberOfElements * getActualSizeOfElements(getSizeOfElements()) + FIXED_SIZE;
    if(expectedArraySize != npc(getComplexData())->length) {
        auto newArray_ = new ::int8_tArray(expectedArraySize);
        ::java::lang::System::arraycopy(getComplexData(), 0, newArray_, 0, expectedArraySize);
        setComplexData(newArray_);
    }
    ::org::apache::poi::util::LittleEndian::putShort(getComplexData(), 2, static_cast< int16_t >(numberOfElements));
}

int16_t org::apache::poi::ddf::EscherArrayProperty::getSizeOfElements()
{
    return (emptyComplexPart) ? static_cast< int16_t >(int32_t(0)) : ::org::apache::poi::util::LittleEndian::getShort(getComplexData(), 4);
}

void org::apache::poi::ddf::EscherArrayProperty::setSizeOfElements(int32_t sizeOfElements)
{
    ::org::apache::poi::util::LittleEndian::putShort(getComplexData(), 4, static_cast< int16_t >(sizeOfElements));
    auto expectedArraySize = getNumberOfElementsInArray_() * getActualSizeOfElements(getSizeOfElements()) + FIXED_SIZE;
    if(expectedArraySize != npc(getComplexData())->length) {
        auto newArray_ = new ::int8_tArray(expectedArraySize);
        ::java::lang::System::arraycopy(getComplexData(), 0, newArray_, 0, 6);
        setComplexData(newArray_);
    }
}

int8_tArray* org::apache::poi::ddf::EscherArrayProperty::getElement(int32_t index)
{
    auto actualSize = getActualSizeOfElements(getSizeOfElements());
    auto result = new ::int8_tArray(actualSize);
    ::java::lang::System::arraycopy(getComplexData(), FIXED_SIZE + index * actualSize, result, 0, npc(result)->length);
    return result;
}

void org::apache::poi::ddf::EscherArrayProperty::setElement(int32_t index, ::int8_tArray* element)
{
    auto actualSize = getActualSizeOfElements(getSizeOfElements());
    ::java::lang::System::arraycopy(element, 0, getComplexData(), FIXED_SIZE + index * actualSize, actualSize);
}

java::lang::String* org::apache::poi::ddf::EscherArrayProperty::toString()
{
    auto results = new ::java::lang::StringBuilder();
    npc(npc(results)->append(u"propNum: "_j))->append(static_cast< int32_t >(getPropertyNumber()));
    npc(npc(results)->append(u", propName: "_j))->append(EscherProperties::getPropertyName(getPropertyNumber()));
    npc(npc(results)->append(u", complex: "_j))->append(isComplex());
    npc(npc(results)->append(u", blipId: "_j))->append(isBlipId());
    npc(results)->append(u", data: \n"_j);
    npc(results)->append(::java::lang::StringBuilder().append(u"    {EscherArrayProperty:"_j)->append(u'\u000a')->toString());
    npc(npc(npc(results)->append(u"     Num Elements: "_j))->append(getNumberOfElementsInArray_()))->append(u'\u000a');
    npc(npc(npc(results)->append(u"     Num Elements In Memory: "_j))->append(getNumberOfElementsInMemory()))->append(u'\u000a');
    npc(npc(npc(results)->append(u"     Size of elements: "_j))->append(static_cast< int32_t >(getSizeOfElements())))->append(u'\u000a');
    for (auto i = int32_t(0); i < getNumberOfElementsInArray_(); i++) {
        npc(npc(npc(npc(npc(results)->append(u"     Element "_j))->append(i))->append(u": "_j))->append(::org::apache::poi::util::HexDump::toHex(getElement(i))))->append(u'\u000a');
    }
    npc(results)->append(::java::lang::StringBuilder().append(u"}"_j)->append(u'\u000a')->toString());
    return npc(results)->toString();
}

java::lang::String* org::apache::poi::ddf::EscherArrayProperty::toXml(::java::lang::String* tab)
{
    auto builder = new ::java::lang::StringBuilder();
    npc(npc(npc(npc(npc(npc(npc(npc(npc(npc(builder)->append(tab))->append(u"<"_j))->append(npc(getClass())->getSimpleName()))->append(u" id=\"0x"_j))->append(::org::apache::poi::util::HexDump::toHex(getId())))->append(u"\" name=\""_j))->append(getName()))->append(u"\" blipId=\""_j))->append(isBlipId()))->append(u"\">\n"_j);
    for (auto i = int32_t(0); i < getNumberOfElementsInArray_(); i++) {
        npc(npc(npc(npc(npc(builder)->append(u"\t"_j))->append(tab))->append(u"<Element>"_j))->append(::org::apache::poi::util::HexDump::toHex(getElement(i))))->append(u"</Element>\n"_j);
    }
    npc(npc(npc(npc(builder)->append(tab))->append(u"</"_j))->append(npc(getClass())->getSimpleName()))->append(u">"_j);
    return npc(builder)->toString();
}

int32_t org::apache::poi::ddf::EscherArrayProperty::setArrayData(::int8_tArray* data, int32_t offset)
{
    if(emptyComplexPart) {
        setComplexData(new ::int8_tArray(int32_t(0)));
    } else {
        auto numElements = ::org::apache::poi::util::LittleEndian::getShort(data, offset);
        auto sizeOfElements = ::org::apache::poi::util::LittleEndian::getShort(data, offset + int32_t(4));
        auto arraySize = getActualSizeOfElements(sizeOfElements) * numElements;
        if(arraySize == npc(getComplexData())->length) {
            setComplexData(new ::int8_tArray(arraySize + int32_t(6)));
            sizeIncludesHeaderSize = false;
        }
        ::java::lang::System::arraycopy(data, offset, getComplexData(), 0, npc(getComplexData())->length);
    }
    return npc(getComplexData())->length;
}

int32_t org::apache::poi::ddf::EscherArrayProperty::serializeSimplePart(::int8_tArray* data, int32_t pos)
{
    ::org::apache::poi::util::LittleEndian::putShort(data, pos, getId());
    auto recordSize = npc(getComplexData())->length;
    if(!sizeIncludesHeaderSize) {
        recordSize -= 6;
    }
    ::org::apache::poi::util::LittleEndian::putInt(data, pos + int32_t(2), recordSize);
    return 6;
}

int32_t org::apache::poi::ddf::EscherArrayProperty::getActualSizeOfElements(int16_t sizeOfElements)
{
    clinit();
    if(sizeOfElements < 0) {
        return static_cast< int16_t >(((-sizeOfElements) >> int32_t(2)));
    }
    return sizeOfElements;
}

java::util::Iterator* org::apache::poi::ddf::EscherArrayProperty::iterator()
{
    return new EscherArrayProperty_iterator_1(this);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ddf::EscherArrayProperty::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ddf.EscherArrayProperty", 38);
    return c;
}

java::lang::Class* org::apache::poi::ddf::EscherArrayProperty::getClass0()
{
    return class_();
}

