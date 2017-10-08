// Generated from /POI/java/org/apache/poi/sl/draw/DrawGroupShape.java

#pragma once

#include <java/awt/fwd-POI.hpp>
#include <org/apache/poi/sl/draw/fwd-POI.hpp>
#include <org/apache/poi/sl/usermodel/fwd-POI.hpp>
#include <org/apache/poi/sl/draw/DrawShape.hpp>
#include <org/apache/poi/sl/usermodel/GroupShape.hpp>

struct default_init_tag;

class poi::sl::draw::DrawGroupShape
    : public DrawShape
{

public:
    typedef DrawShape super;
protected:
    void ctor(::poi::sl::usermodel::GroupShape* shape);

public:
    void draw(::java::awt::Graphics2D* graphics) override;

public: /* protected */
    ::poi::sl::usermodel::GroupShape* getShape() override;

    // Generated

public:
    DrawGroupShape(::poi::sl::usermodel::GroupShape* shape);
protected:
    DrawGroupShape(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
