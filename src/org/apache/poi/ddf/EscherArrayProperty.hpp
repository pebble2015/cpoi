// Generated from /POI/java/org/apache/poi/ddf/EscherArrayProperty.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/ddf/fwd-POI.hpp>
#include <org/apache/poi/ddf/EscherComplexProperty.hpp>
#include <java/lang/Iterable.hpp>

struct default_init_tag;

class org::apache::poi::ddf::EscherArrayProperty final
    : public EscherComplexProperty
    , public ::java::lang::Iterable
{

public:
    typedef EscherComplexProperty super;

private:
    static constexpr int32_t FIXED_SIZE { int32_t(6) };
    bool sizeIncludesHeaderSize {  };
    bool emptyComplexPart {  };
protected:
    void ctor(int16_t id, ::int8_tArray* complexData);
    void ctor(int16_t propertyNumber, bool isBlipId, ::int8_tArray* complexData);

private:
    static ::int8_tArray* checkComplexData(::int8_tArray* complexData);

public:
    int32_t getNumberOfElementsInArray_();
    void setNumberOfElementsInArray_(int32_t numberOfElements);
    int32_t getNumberOfElementsInMemory();
    void setNumberOfElementsInMemory(int32_t numberOfElements);
    int16_t getSizeOfElements();
    void setSizeOfElements(int32_t sizeOfElements);
    ::int8_tArray* getElement(int32_t index);
    void setElement(int32_t index, ::int8_tArray* element);
    ::java::lang::String* toString() override;
    ::java::lang::String* toXml(::java::lang::String* tab) override;
    int32_t setArrayData(::int8_tArray* data, int32_t offset);
    int32_t serializeSimplePart(::int8_tArray* data, int32_t pos) override;

private:
    static int32_t getActualSizeOfElements(int16_t sizeOfElements);

public:
    ::java::util::Iterator* iterator() override;

    // Generated
    EscherArrayProperty(int16_t id, ::int8_tArray* complexData);
    EscherArrayProperty(int16_t propertyNumber, bool isBlipId, ::int8_tArray* complexData);
protected:
    EscherArrayProperty(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    void init();
    virtual ::java::lang::Class* getClass0();
    friend class EscherArrayProperty_iterator_1;
};
