// Generated from /POI/java/org/apache/poi/poifs/storage/PropertyBlock.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/poifs/storage/fwd-POI.hpp>
#include <org/apache/poi/poifs/property/Property.hpp>

struct default_init_tag;

class org::apache::poi::poifs::storage::PropertyBlock_createPropertyBlockArray_1
    : public ::org::apache::poi::poifs::property::Property
{

public:
    typedef ::org::apache::poi::poifs::property::Property super;

public: /* protected */
    void preWrite() override;

public:
    bool isDirectory() override;

    // Generated

public: /* protected */
    PropertyBlock_createPropertyBlockArray_1();
    PropertyBlock_createPropertyBlockArray_1(int32_t index, ::int8_tArray* array, int32_t offset);

public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class PropertyBlock;
};
