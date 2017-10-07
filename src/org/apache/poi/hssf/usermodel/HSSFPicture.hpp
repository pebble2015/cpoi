// Generated from /POI/java/org/apache/poi/hssf/usermodel/HSSFPicture.java

#pragma once

#include <fwd-POI.hpp>
#include <java/awt/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ddf/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/hssf/usermodel/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFSimpleShape.hpp>
#include <org/apache/poi/ss/usermodel/Picture.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFAnchor.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFClientAnchor.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFPictureData.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFShape.hpp>

struct default_init_tag;

class org::apache::poi::hssf::usermodel::HSSFPicture
    : public HSSFSimpleShape
    , public virtual ::org::apache::poi::ss::usermodel::Picture
{

public:
    typedef HSSFSimpleShape super;

private:
    static ::org::apache::poi::util::POILogger* logger_;

public:
    static constexpr int32_t PICTURE_TYPE_EMF { int32_t(2) };
    static constexpr int32_t PICTURE_TYPE_WMF { int32_t(3) };
    static constexpr int32_t PICTURE_TYPE_PICT { int32_t(4) };
    static constexpr int32_t PICTURE_TYPE_JPEG { int32_t(5) };
    static constexpr int32_t PICTURE_TYPE_PNG { int32_t(6) };
    static constexpr int32_t PICTURE_TYPE_DIB { int32_t(7) };
protected:
    void ctor(::org::apache::poi::ddf::EscherContainerRecord* spContainer, ::org::apache::poi::hssf::record::ObjRecord* objRecord);
    void ctor(HSSFShape* parent, HSSFAnchor* anchor);

public:
    virtual int32_t getPictureIndex();
    virtual void setPictureIndex(int32_t pictureIndex);

public: /* protected */
    ::org::apache::poi::ddf::EscherContainerRecord* createSpContainer() override;

public:
    void resize() override;
    void resize(double scale) override;
    void resize(double scaleX, double scaleY) override;
    HSSFClientAnchor* getPreferredSize() override;
    virtual HSSFClientAnchor* getPreferredSize(double scale);
    HSSFClientAnchor* getPreferredSize(double scaleX, double scaleY) override;
    ::java::awt::Dimension* getImageDimension() override;
    HSSFPictureData* getPictureData() override;

public: /* package */
    void afterInsert(HSSFPatriarch* patriarch) override;

public:
    virtual ::java::lang::String* getFileName();
    virtual void setFileName(::java::lang::String* data);
    void setShapeType(int32_t shapeType) override;

public: /* protected */
    HSSFShape* cloneShape() override;

public:
    HSSFClientAnchor* getClientAnchor() override;
    ::org::apache::poi::ss::usermodel::Sheet* getSheet() override;

    // Generated
    HSSFPicture(::org::apache::poi::ddf::EscherContainerRecord* spContainer, ::org::apache::poi::hssf::record::ObjRecord* objRecord);
    HSSFPicture(HSSFShape* parent, HSSFAnchor* anchor);
protected:
    HSSFPicture(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();
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
    static ::org::apache::poi::util::POILogger*& logger();
    virtual ::java::lang::Class* getClass0();
};
