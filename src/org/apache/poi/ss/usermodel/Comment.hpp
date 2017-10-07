// Generated from /POI/java/org/apache/poi/ss/usermodel/Comment.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/fwd-POI.hpp>
#include <org/apache/poi/ss/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct org::apache::poi::ss::usermodel::Comment
    : public virtual ::java::lang::Object
{
    virtual void setVisible(bool visible) = 0;
    virtual bool isVisible() = 0;
    virtual ::org::apache::poi::ss::util::CellAddress* getAddress() = 0;
    virtual void setAddress(::org::apache::poi::ss::util::CellAddress* addr) = 0;
    virtual void setAddress(int32_t row, int32_t col) = 0;
    virtual int32_t getRow() = 0;
    virtual void setRow(int32_t row) = 0;
    virtual int32_t getColumn() = 0;
    virtual void setColumn(int32_t col) = 0;
    virtual ::java::lang::String* getAuthor() = 0;
    virtual void setAuthor(::java::lang::String* author) = 0;
    virtual RichTextString* getString() = 0;
    virtual void setString(RichTextString* string) = 0;
    virtual ClientAnchor* getClientAnchor() = 0;

    // Generated
    static ::java::lang::Class *class_();
};
