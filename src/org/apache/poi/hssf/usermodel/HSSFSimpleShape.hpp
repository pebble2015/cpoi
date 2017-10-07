// Generated from /POI/java/org/apache/poi/hssf/usermodel/HSSFSimpleShape.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ddf/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/hssf/usermodel/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/fwd-POI.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFShape.hpp>
#include <org/apache/poi/ss/usermodel/SimpleShape.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFAnchor.hpp>

struct default_init_tag;

class org::apache::poi::hssf::usermodel::HSSFSimpleShape
    : public HSSFShape
    , public virtual ::org::apache::poi::ss::usermodel::SimpleShape
{

public:
    typedef HSSFShape super;
    static constexpr int16_t OBJECT_TYPE_LINE { int16_t(20) };
    static constexpr int16_t OBJECT_TYPE_RECTANGLE { int16_t(1) };
    static constexpr int16_t OBJECT_TYPE_OVAL { int16_t(3) };
    static constexpr int16_t OBJECT_TYPE_ARC { int16_t(19) };
    static constexpr int16_t OBJECT_TYPE_PICTURE { int16_t(75) };
    static constexpr int16_t OBJECT_TYPE_COMBO_BOX { int16_t(201) };
    static constexpr int16_t OBJECT_TYPE_COMMENT { int16_t(202) };
    static constexpr int16_t OBJECT_TYPE_MICROSOFT_OFFICE_DRAWING { int16_t(30) };
    static constexpr int32_t WRAP_SQUARE { int32_t(0) };
    static constexpr int32_t WRAP_BY_POINTS { int32_t(1) };
    static constexpr int32_t WRAP_NONE { int32_t(2) };

private:
    ::org::apache::poi::hssf::record::TextObjectRecord* _textObjectRecord {  };
protected:
    void ctor(::org::apache::poi::ddf::EscherContainerRecord* spContainer, ::org::apache::poi::hssf::record::ObjRecord* objRecord, ::org::apache::poi::hssf::record::TextObjectRecord* textObjectRecord);
    void ctor(::org::apache::poi::ddf::EscherContainerRecord* spContainer, ::org::apache::poi::hssf::record::ObjRecord* objRecord);
    void ctor(HSSFShape* parent, HSSFAnchor* anchor);

public: /* protected */
    virtual ::org::apache::poi::hssf::record::TextObjectRecord* getTextObjectRecord();
    virtual ::org::apache::poi::hssf::record::TextObjectRecord* createTextObjRecord();
    ::org::apache::poi::ddf::EscherContainerRecord* createSpContainer() override;
    ::org::apache::poi::hssf::record::ObjRecord* createObjRecord() override;
    void afterRemove(HSSFPatriarch* patriarch) override;

public:
    virtual HSSFRichTextString* getString();
    virtual void setString(::org::apache::poi::ss::usermodel::RichTextString* string);

public: /* package */
    void afterInsert(HSSFPatriarch* patriarch) override;

public: /* protected */
    HSSFShape* cloneShape() override;

public:
    virtual int32_t getShapeType();
    virtual int32_t getWrapText();
    virtual void setWrapText(int32_t value);
    virtual void setShapeType(int32_t value);

private:
    ::org::apache::poi::hssf::record::TextObjectRecord* getOrCreateTextObjRecord();

public:
    int32_t getShapeId() override;

    // Generated
    HSSFSimpleShape(::org::apache::poi::ddf::EscherContainerRecord* spContainer, ::org::apache::poi::hssf::record::ObjRecord* objRecord, ::org::apache::poi::hssf::record::TextObjectRecord* textObjectRecord);
    HSSFSimpleShape(::org::apache::poi::ddf::EscherContainerRecord* spContainer, ::org::apache::poi::hssf::record::ObjRecord* objRecord);
    HSSFSimpleShape(HSSFShape* parent, HSSFAnchor* anchor);
protected:
    HSSFSimpleShape(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    virtual HSSFAnchor* getAnchor();
    virtual HSSFShape* getParent();
    virtual ::java::lang::String* getShapeName();
    virtual bool isNoFill();
    virtual void setFillColor(int32_t red, int32_t green, int32_t blue);
    virtual void setLineStyleColor(int32_t red, int32_t green, int32_t blue);
    virtual void setNoFill(bool noFill);
    virtual void setFillColor(int32_t fillColor);
    virtual void setLineStyleColor(int32_t lineStyleColor);

private:
    virtual ::java::lang::Class* getClass0();
};
