// Generated from /POI/java/org/apache/poi/hssf/usermodel/HSSFPatriarch.java

#pragma once

#include <fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/ddf/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/hssf/usermodel/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFShapeContainer.hpp>
#include <org/apache/poi/ss/usermodel/Drawing.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFClientAnchor.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFComment.hpp>

struct default_init_tag;

class poi::hssf::usermodel::HSSFPatriarch final
    : public virtual ::java::lang::Object
    , public HSSFShapeContainer
    , public ::poi::ss::usermodel::Drawing
{

public:
    typedef ::java::lang::Object super;

private:
    ::java::util::List* _shapes {  };
    ::poi::ddf::EscherSpgrRecord* _spgrRecord {  };
    ::poi::ddf::EscherContainerRecord* _mainSpgrContainer {  };
    ::poi::hssf::record::EscherAggregate* _boundAggregate {  };
    HSSFSheet* _sheet {  };
protected:
    void ctor(HSSFSheet* sheet, ::poi::hssf::record::EscherAggregate* boundAggregate);

public: /* package */
    static HSSFPatriarch* createPatriarch(HSSFPatriarch* patriarch, HSSFSheet* sheet);

public: /* protected */
    void preSerialize();

public:
    bool removeShape(HSSFShape* shape) override;

public: /* package */
    void afterCreate();

public:
    HSSFShapeGroup* createGroup(HSSFClientAnchor* anchor);
    HSSFSimpleShape* createSimpleShape(HSSFClientAnchor* anchor);
    HSSFPicture* createPicture(HSSFClientAnchor* anchor, int32_t pictureIndex);
    ::poi::ss::usermodel::Picture* createPicture(::poi::ss::usermodel::ClientAnchor* anchor, int32_t pictureIndex) override;
    ::poi::ss::usermodel::ObjectData* createObjectData(::poi::ss::usermodel::ClientAnchor* anchor, int32_t storageId, int32_t pictureIndex) override;
    HSSFPolygon* createPolygon(HSSFClientAnchor* anchor);
    HSSFTextbox* createTextbox(HSSFClientAnchor* anchor);
    HSSFComment* createComment(HSSFAnchor* anchor);

public: /* package */
    HSSFSimpleShape* createComboBox(HSSFAnchor* anchor);

public:
    HSSFComment* createCellComment(::poi::ss::usermodel::ClientAnchor* anchor) override;
    ::java::util::List* getChildren() override;
    void addShape(HSSFShape* shape) override;

private:
    void onCreate(HSSFShape* shape);

public:
    int32_t countOfAllChildren();
    void setCoordinates(int32_t x1, int32_t y1, int32_t x2, int32_t y2) override;
    void clear() override;

public: /* package */
    int32_t newShapeId();

public:
    bool containsChart();
    int32_t getX1() override;
    int32_t getY1() override;
    int32_t getX2() override;
    int32_t getY2() override;
    ::poi::hssf::record::EscherAggregate* getBoundAggregate();
    HSSFClientAnchor* createAnchor(int32_t dx1, int32_t dy1, int32_t dx2, int32_t dy2, int32_t col1, int32_t row1, int32_t col2, int32_t row2) override;
    ::poi::ss::usermodel::Chart* createChart(::poi::ss::usermodel::ClientAnchor* anchor) override;

public: /* package */
    void buildShapeTree();

private:
    void setFlipFlags(HSSFShape* shape);

public:
    ::java::util::Iterator* iterator() override;

public: /* protected */
    HSSFSheet* getSheet();

    // Generated

public: /* package */
    HSSFPatriarch(HSSFSheet* sheet, ::poi::hssf::record::EscherAggregate* boundAggregate);
protected:
    HSSFPatriarch(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    void init();
    virtual ::java::lang::Class* getClass0();
};
