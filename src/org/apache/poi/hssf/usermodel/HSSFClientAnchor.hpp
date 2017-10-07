// Generated from /POI/java/org/apache/poi/hssf/usermodel/HSSFClientAnchor.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ddf/fwd-POI.hpp>
#include <org/apache/poi/hssf/usermodel/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/fwd-POI.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFAnchor.hpp>
#include <org/apache/poi/ss/usermodel/ClientAnchor.hpp>

struct default_init_tag;

class org::apache::poi::hssf::usermodel::HSSFClientAnchor final
    : public HSSFAnchor
    , public ::org::apache::poi::ss::usermodel::ClientAnchor
{

public:
    typedef HSSFAnchor super;

private:
    static int32_t MAX_COL_;
    static int32_t MAX_ROW_;
    ::org::apache::poi::ddf::EscherClientAnchorRecord* _escherClientAnchor {  };
protected:
    void ctor(::org::apache::poi::ddf::EscherClientAnchorRecord* escherClientAnchorRecord);
    void ctor();
    void ctor(int32_t dx1, int32_t dy1, int32_t dx2, int32_t dy2, int16_t col1, int32_t row1, int16_t col2, int32_t row2);

public:
    float getAnchorHeightInPoints(HSSFSheet* sheet);

private:
    float getRowHeightInPoints(HSSFSheet* sheet, int32_t rowNum);

public:
    int16_t getCol1() override;
    void setCol1(int16_t col1);
    void setCol1(int32_t col1) override;
    int16_t getCol2() override;
    void setCol2(int16_t col2);
    void setCol2(int32_t col2) override;
    int32_t getRow1() override;
    void setRow1(int32_t row1) override;
    int32_t getRow2() override;
    void setRow2(int32_t row2) override;
    void setAnchor(int16_t col1, int32_t row1, int32_t x1, int32_t y1, int16_t col2, int32_t row2, int32_t x2, int32_t y2);
    bool isHorizontallyFlipped() override;
    bool isVerticallyFlipped() override;

public: /* protected */
    ::org::apache::poi::ddf::EscherRecord* getEscherAnchor() override;
    void createEscherAnchor() override;

public:
    ::org::apache::poi::ss::usermodel::ClientAnchor_AnchorType* getAnchorType() override;
    void setAnchorType(::org::apache::poi::ss::usermodel::ClientAnchor_AnchorType* anchorType) override;

private:
    void checkRange(int32_t value, int32_t minRange, int32_t maxRange, ::java::lang::String* varName);
    static int32_t unsignedValue(int16_t s);

public:
    bool equals(::java::lang::Object* obj) override;
    int32_t hashCode() override;
    int32_t getDx1() override;
    void setDx1(int32_t dx1) override;
    int32_t getDy1() override;
    void setDy1(int32_t dy1) override;
    int32_t getDy2() override;
    void setDy2(int32_t dy2) override;
    int32_t getDx2() override;
    void setDx2(int32_t dx2) override;

    // Generated
    HSSFClientAnchor(::org::apache::poi::ddf::EscherClientAnchorRecord* escherClientAnchorRecord);
    HSSFClientAnchor();
    HSSFClientAnchor(int32_t dx1, int32_t dy1, int32_t dx2, int32_t dy2, int16_t col1, int32_t row1, int16_t col2, int32_t row2);
protected:
    HSSFClientAnchor(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();
    static int32_t& MAX_COL();
    static int32_t& MAX_ROW();

private:
    virtual ::java::lang::Class* getClass0();
};
