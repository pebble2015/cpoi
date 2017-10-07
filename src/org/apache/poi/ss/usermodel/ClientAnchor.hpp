// Generated from /POI/java/org/apache/poi/ss/usermodel/ClientAnchor.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct org::apache::poi::ss::usermodel::ClientAnchor
    : public virtual ::java::lang::Object
{
    virtual int16_t getCol1() = 0;
    virtual void setCol1(int32_t col1) = 0;
    virtual int16_t getCol2() = 0;
    virtual void setCol2(int32_t col2) = 0;
    virtual int32_t getRow1() = 0;
    virtual void setRow1(int32_t row1) = 0;
    virtual int32_t getRow2() = 0;
    virtual void setRow2(int32_t row2) = 0;
    virtual int32_t getDx1() = 0;
    virtual void setDx1(int32_t dx1) = 0;
    virtual int32_t getDy1() = 0;
    virtual void setDy1(int32_t dy1) = 0;
    virtual int32_t getDy2() = 0;
    virtual void setDy2(int32_t dy2) = 0;
    virtual int32_t getDx2() = 0;
    virtual void setDx2(int32_t dx2) = 0;
    virtual void setAnchorType(ClientAnchor_AnchorType* anchorType) = 0;
    virtual ClientAnchor_AnchorType* getAnchorType() = 0;

    // Generated
    static ::java::lang::Class *class_();
};
