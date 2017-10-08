// Generated from /POI/java/org/apache/poi/hssf/usermodel/HSSFShapeGroup.java

#pragma once

#include <fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/ddf/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/hssf/usermodel/fwd-POI.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFShape.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFShapeContainer.hpp>

struct default_init_tag;

class poi::hssf::usermodel::HSSFShapeGroup
    : public HSSFShape
    , public virtual HSSFShapeContainer
{

public:
    typedef HSSFShape super;

private:
    ::java::util::List* shapes {  };
    ::poi::ddf::EscherSpgrRecord* _spgrRecord {  };
protected:
    void ctor(::poi::ddf::EscherContainerRecord* spgrContainer, ::poi::hssf::record::ObjRecord* objRecord);
    void ctor(HSSFShape* parent, HSSFAnchor* anchor);

public: /* protected */
    ::poi::ddf::EscherContainerRecord* createSpContainer() override;
    ::poi::hssf::record::ObjRecord* createObjRecord() override;
    void afterRemove(HSSFPatriarch* patriarch) override;

private:
    void onCreate(HSSFShape* shape);

public:
    virtual HSSFShapeGroup* createGroup(HSSFChildAnchor* anchor);
    void addShape(HSSFShape* shape) override;
    virtual HSSFSimpleShape* createShape(HSSFChildAnchor* anchor);
    virtual HSSFTextbox* createTextbox(HSSFChildAnchor* anchor);
    virtual HSSFPolygon* createPolygon(HSSFChildAnchor* anchor);
    virtual HSSFPicture* createPicture(HSSFChildAnchor* anchor, int32_t pictureIndex);
    ::java::util::List* getChildren() override;
    void setCoordinates(int32_t x1, int32_t y1, int32_t x2, int32_t y2) override;
    void clear() override;
    int32_t getX1() override;
    int32_t getY1() override;
    int32_t getX2() override;
    int32_t getY2() override;
    int32_t countOfAllChildren() override;

public: /* package */
    void afterInsert(HSSFPatriarch* patriarch) override;
    void setShapeId(int32_t shapeId) override;
    int32_t getShapeId() override;

public: /* protected */
    HSSFShape* cloneShape() override;
    virtual HSSFShape* cloneShape(HSSFPatriarch* patriarch);

public:
    bool removeShape(HSSFShape* shape) override;
    ::java::util::Iterator* iterator() override;

    // Generated
    HSSFShapeGroup(::poi::ddf::EscherContainerRecord* spgrContainer, ::poi::hssf::record::ObjRecord* objRecord);
    HSSFShapeGroup(HSSFShape* parent, HSSFAnchor* anchor);
protected:
    HSSFShapeGroup(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    void init();
    virtual ::java::lang::Class* getClass0();
};
