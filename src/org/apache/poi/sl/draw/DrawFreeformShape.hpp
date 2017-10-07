// Generated from /POI/java/org/apache/poi/sl/draw/DrawFreeformShape.java

#pragma once

#include <java/awt/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/sl/draw/fwd-POI.hpp>
#include <org/apache/poi/sl/usermodel/fwd-POI.hpp>
#include <org/apache/poi/sl/draw/DrawAutoShape.hpp>
#include <org/apache/poi/sl/usermodel/TextShape.hpp>

struct default_init_tag;

class org::apache::poi::sl::draw::DrawFreeformShape
    : public DrawAutoShape
{

public:
    typedef DrawAutoShape super;
protected:
    void ctor(::org::apache::poi::sl::usermodel::FreeformShape* shape);

public: /* protected */
    ::java::util::Collection* computeOutlines(::java::awt::Graphics2D* graphics) override;
    ::org::apache::poi::sl::usermodel::TextShape* getShape() override;

    // Generated

public:
    DrawFreeformShape(::org::apache::poi::sl::usermodel::FreeformShape* shape);
protected:
    DrawFreeformShape(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
