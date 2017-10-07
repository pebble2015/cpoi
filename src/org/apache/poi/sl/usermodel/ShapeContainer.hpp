// Generated from /POI/java/org/apache/poi/sl/usermodel/ShapeContainer.java

#pragma once

#include <fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/sl/usermodel/fwd-POI.hpp>
#include <java/lang/Iterable.hpp>

struct org::apache::poi::sl::usermodel::ShapeContainer
    : public virtual ::java::lang::Iterable
{
    virtual ::java::util::List* getShapes() = 0;
    virtual void addShape(Shape* shape) = 0;
    virtual bool removeShape(Shape* shape) = 0;
    virtual AutoShape* createAutoShape() = 0;
    virtual FreeformShape* createFreeform() = 0;
    virtual TextBox* createTextBox() = 0;
    virtual ConnectorShape* createConnector() = 0;
    virtual GroupShape* createGroup() = 0;
    virtual PictureShape* createPicture(PictureData* pictureData) = 0;
    virtual TableShape* createTable(int32_t numRows, int32_t numCols) = 0;

    // Generated
    static ::java::lang::Class *class_();
};
