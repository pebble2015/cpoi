// Generated from /POI/java/org/apache/poi/hssf/usermodel/HSSFShape.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ddf/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/hssf/usermodel/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/ss/usermodel/Shape.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFAnchor.hpp>

struct default_init_tag;

class poi::hssf::usermodel::HSSFShape
    : public virtual ::java::lang::Object
    , public virtual ::poi::ss::usermodel::Shape
{

public:
    typedef ::java::lang::Object super;

private:
    static ::poi::util::POILogger* LOG_;

public:
    static constexpr int32_t LINEWIDTH_ONE_PT { int32_t(12700) };
    static constexpr int32_t LINEWIDTH_DEFAULT { int32_t(9525) };
    static constexpr int32_t LINESTYLE__COLOR_DEFAULT { int32_t(134217792) };
    static constexpr int32_t FILL__FILLCOLOR_DEFAULT { int32_t(134217737) };
    static constexpr bool NO_FILL_DEFAULT { true };
    static constexpr int32_t LINESTYLE_SOLID { int32_t(0) };
    static constexpr int32_t LINESTYLE_DASHSYS { int32_t(1) };
    static constexpr int32_t LINESTYLE_DOTSYS { int32_t(2) };
    static constexpr int32_t LINESTYLE_DASHDOTSYS { int32_t(3) };
    static constexpr int32_t LINESTYLE_DASHDOTDOTSYS { int32_t(4) };
    static constexpr int32_t LINESTYLE_DOTGEL { int32_t(5) };
    static constexpr int32_t LINESTYLE_DASHGEL { int32_t(6) };
    static constexpr int32_t LINESTYLE_LONGDASHGEL { int32_t(7) };
    static constexpr int32_t LINESTYLE_DASHDOTGEL { int32_t(8) };
    static constexpr int32_t LINESTYLE_LONGDASHDOTGEL { int32_t(9) };
    static constexpr int32_t LINESTYLE_LONGDASHDOTDOTGEL { int32_t(10) };
    static constexpr int32_t LINESTYLE_NONE { int32_t(-1) };
    static constexpr int32_t LINESTYLE_DEFAULT { int32_t(-1) };

private:
    HSSFShape* parent {  };

public: /* package */
    HSSFAnchor* anchor {  };

private:
    HSSFPatriarch* _patriarch {  };
    ::poi::ddf::EscherContainerRecord* _escherContainer {  };
    ::poi::hssf::record::ObjRecord* _objRecord {  };
    ::poi::ddf::EscherOptRecord* _optRecord {  };

public:
    static constexpr int32_t NO_FILLHITTEST_TRUE { int32_t(1114112) };
    static constexpr int32_t NO_FILLHITTEST_FALSE { int32_t(65536) };
protected:
    void ctor(::poi::ddf::EscherContainerRecord* spContainer, ::poi::hssf::record::ObjRecord* objRecord);
    void ctor(HSSFShape* parent, HSSFAnchor* anchor);

public: /* protected */
    virtual ::poi::ddf::EscherContainerRecord* createSpContainer() = 0;
    virtual ::poi::hssf::record::ObjRecord* createObjRecord() = 0;
    virtual void afterRemove(HSSFPatriarch* patriarch) = 0;

public: /* package */
    virtual void setShapeId(int32_t shapeId);
    virtual int32_t getShapeId();
    virtual void afterInsert(HSSFPatriarch* patriarch) = 0;

public: /* protected */
    virtual ::poi::ddf::EscherContainerRecord* getEscherContainer();
    virtual ::poi::hssf::record::ObjRecord* getObjRecord();

public:
    virtual ::poi::ddf::EscherOptRecord* getOptRecord();
    HSSFShape* getParent() override;
    HSSFAnchor* getAnchor() override;
    virtual void setAnchor(HSSFAnchor* anchor);
    virtual int32_t getLineStyleColor();
    virtual void setLineStyleColor(int32_t lineStyleColor);
    void setLineStyleColor(int32_t red, int32_t green, int32_t blue) override;
    virtual int32_t getFillColor();
    virtual void setFillColor(int32_t fillColor);
    void setFillColor(int32_t red, int32_t green, int32_t blue) override;
    virtual int32_t getLineWidth();
    virtual void setLineWidth(int32_t lineWidth);
    virtual int32_t getLineStyle();
    virtual void setLineStyle(int32_t lineStyle);
    bool isNoFill() override;
    void setNoFill(bool noFill) override;

public: /* protected */
    virtual void setPropertyValue(::poi::ddf::EscherProperty* property);

public:
    virtual void setFlipVertical(bool value);
    virtual void setFlipHorizontal(bool value);
    virtual bool isFlipVertical();
    virtual bool isFlipHorizontal();
    virtual int32_t getRotationDegree();
    virtual void setRotationDegree(int16_t value);
    virtual int32_t countOfAllChildren();

public: /* protected */
    virtual HSSFShape* cloneShape() = 0;
    virtual void setPatriarch(HSSFPatriarch* _patriarch);

public:
    virtual HSSFPatriarch* getPatriarch();

public: /* protected */
    virtual void setParent(HSSFShape* parent);

public:
    ::java::lang::String* getShapeName() override;

    // Generated
    HSSFShape(::poi::ddf::EscherContainerRecord* spContainer, ::poi::hssf::record::ObjRecord* objRecord);
    HSSFShape(HSSFShape* parent, HSSFAnchor* anchor);
protected:
    HSSFShape(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    static ::poi::util::POILogger*& LOG();
    virtual ::java::lang::Class* getClass0();
};
