// Generated from /POI/java/org/apache/poi/hssf/usermodel/HSSFPolygon.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/ddf/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/hssf/usermodel/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFSimpleShape.hpp>

struct default_init_tag;

class org::apache::poi::hssf::usermodel::HSSFPolygon
    : public HSSFSimpleShape
{

public:
    typedef HSSFSimpleShape super;

private:
    static ::org::apache::poi::util::POILogger* logger_;

public:
    static constexpr int16_t OBJECT_TYPE_MICROSOFT_OFFICE_DRAWING { int16_t(30) };
protected:
    void ctor(::org::apache::poi::ddf::EscherContainerRecord* spContainer, ::org::apache::poi::hssf::record::ObjRecord* objRecord, ::org::apache::poi::hssf::record::TextObjectRecord* _textObjectRecord);
    void ctor(::org::apache::poi::ddf::EscherContainerRecord* spContainer, ::org::apache::poi::hssf::record::ObjRecord* objRecord);
    void ctor(HSSFShape* parent, HSSFAnchor* anchor);

public: /* protected */
    ::org::apache::poi::hssf::record::TextObjectRecord* createTextObjRecord() override;
    ::org::apache::poi::ddf::EscherContainerRecord* createSpContainer() override;
    ::org::apache::poi::hssf::record::ObjRecord* createObjRecord() override;
    void afterRemove(HSSFPatriarch* patriarch) override;

public:
    virtual ::int32_tArray* getXPoints();
    virtual ::int32_tArray* getYPoints();
    virtual void setPoints(::int32_tArray* xPoints, ::int32_tArray* yPoints);
    virtual void setPolygonDrawArea(int32_t width, int32_t height);
    virtual int32_t getDrawAreaWidth();
    virtual int32_t getDrawAreaHeight();

    // Generated
    HSSFPolygon(::org::apache::poi::ddf::EscherContainerRecord* spContainer, ::org::apache::poi::hssf::record::ObjRecord* objRecord, ::org::apache::poi::hssf::record::TextObjectRecord* _textObjectRecord);
    HSSFPolygon(::org::apache::poi::ddf::EscherContainerRecord* spContainer, ::org::apache::poi::hssf::record::ObjRecord* objRecord);

public: /* package */
    HSSFPolygon(HSSFShape* parent, HSSFAnchor* anchor);
protected:
    HSSFPolygon(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    static ::org::apache::poi::util::POILogger*& logger();
    virtual ::java::lang::Class* getClass0();
};
