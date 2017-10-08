// Generated from /POI/java/org/apache/poi/ss/usermodel/Drawing.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/ShapeContainer.hpp>

struct poi::ss::usermodel::Drawing
    : public virtual ShapeContainer
{
    virtual Picture* createPicture(ClientAnchor* anchor, int32_t pictureIndex) = 0;
    virtual Comment* createCellComment(ClientAnchor* anchor) = 0;
    virtual Chart* createChart(ClientAnchor* anchor) = 0;
    virtual ClientAnchor* createAnchor(int32_t dx1, int32_t dy1, int32_t dx2, int32_t dy2, int32_t col1, int32_t row1, int32_t col2, int32_t row2) = 0;
    virtual ObjectData* createObjectData(ClientAnchor* anchor, int32_t storageId, int32_t pictureIndex) = 0;

    // Generated
    static ::java::lang::Class *class_();
};
