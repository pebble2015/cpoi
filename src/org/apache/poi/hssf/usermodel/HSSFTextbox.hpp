// Generated from /POI/java/org/apache/poi/hssf/usermodel/HSSFTextbox.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/ddf/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/hssf/usermodel/fwd-POI.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFSimpleShape.hpp>

struct default_init_tag;

class poi::hssf::usermodel::HSSFTextbox
    : public HSSFSimpleShape
{

public:
    typedef HSSFSimpleShape super;
    static constexpr int16_t OBJECT_TYPE_TEXT { int16_t(6) };
    static constexpr int16_t HORIZONTAL_ALIGNMENT_LEFT { int16_t(1) };
    static constexpr int16_t HORIZONTAL_ALIGNMENT_CENTERED { int16_t(2) };
    static constexpr int16_t HORIZONTAL_ALIGNMENT_RIGHT { int16_t(3) };
    static constexpr int16_t HORIZONTAL_ALIGNMENT_JUSTIFIED { int16_t(4) };
    static constexpr int16_t HORIZONTAL_ALIGNMENT_DISTRIBUTED { int16_t(7) };
    static constexpr int16_t VERTICAL_ALIGNMENT_TOP { int16_t(1) };
    static constexpr int16_t VERTICAL_ALIGNMENT_CENTER { int16_t(2) };
    static constexpr int16_t VERTICAL_ALIGNMENT_BOTTOM { int16_t(3) };
    static constexpr int16_t VERTICAL_ALIGNMENT_JUSTIFY { int16_t(4) };
    static constexpr int16_t VERTICAL_ALIGNMENT_DISTRIBUTED { int16_t(7) };
protected:
    void ctor(::poi::ddf::EscherContainerRecord* spContainer, ::poi::hssf::record::ObjRecord* objRecord, ::poi::hssf::record::TextObjectRecord* textObjectRecord);
    void ctor(HSSFShape* parent, HSSFAnchor* anchor);

public: /* protected */
    ::poi::hssf::record::ObjRecord* createObjRecord() override;
    ::poi::ddf::EscherContainerRecord* createSpContainer() override;

public: /* package */
    void afterInsert(HSSFPatriarch* patriarch) override;

public:
    virtual int32_t getMarginLeft();
    virtual void setMarginLeft(int32_t marginLeft);
    virtual int32_t getMarginRight();
    virtual void setMarginRight(int32_t marginRight);
    virtual int32_t getMarginTop();
    virtual void setMarginTop(int32_t marginTop);
    virtual int32_t getMarginBottom();
    virtual void setMarginBottom(int32_t marginBottom);
    virtual int16_t getHorizontalAlignment();
    virtual void setHorizontalAlignment(int16_t align);
    virtual int16_t getVerticalAlignment();
    virtual void setVerticalAlignment(int16_t align);
    void setShapeType(int32_t shapeType) override;

public: /* protected */
    HSSFShape* cloneShape() override;
    void afterRemove(HSSFPatriarch* patriarch) override;

    // Generated

public:
    HSSFTextbox(::poi::ddf::EscherContainerRecord* spContainer, ::poi::hssf::record::ObjRecord* objRecord, ::poi::hssf::record::TextObjectRecord* textObjectRecord);
    HSSFTextbox(HSSFShape* parent, HSSFAnchor* anchor);
protected:
    HSSFTextbox(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
