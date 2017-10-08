// Generated from /POI/java/org/apache/poi/hssf/usermodel/HSSFCombobox.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/ddf/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/hssf/usermodel/fwd-POI.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFSimpleShape.hpp>

struct default_init_tag;

class poi::hssf::usermodel::HSSFCombobox
    : public HSSFSimpleShape
{

public:
    typedef HSSFSimpleShape super;
protected:
    void ctor(::poi::ddf::EscherContainerRecord* spContainer, ::poi::hssf::record::ObjRecord* objRecord);
    void ctor(HSSFShape* parent, HSSFAnchor* anchor);

public: /* protected */
    ::poi::hssf::record::TextObjectRecord* createTextObjRecord() override;
    ::poi::ddf::EscherContainerRecord* createSpContainer() override;
    ::poi::hssf::record::ObjRecord* createObjRecord() override;

public:
    void setShapeType(int32_t shapeType) override;

    // Generated
    HSSFCombobox(::poi::ddf::EscherContainerRecord* spContainer, ::poi::hssf::record::ObjRecord* objRecord);
    HSSFCombobox(HSSFShape* parent, HSSFAnchor* anchor);
protected:
    HSSFCombobox(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
