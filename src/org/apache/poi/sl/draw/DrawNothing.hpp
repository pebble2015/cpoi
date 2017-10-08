// Generated from /POI/java/org/apache/poi/sl/draw/DrawNothing.java

#pragma once

#include <java/awt/fwd-POI.hpp>
#include <org/apache/poi/sl/draw/fwd-POI.hpp>
#include <org/apache/poi/sl/usermodel/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/sl/draw/Drawable.hpp>

struct default_init_tag;

class poi::sl::draw::DrawNothing
    : public virtual ::java::lang::Object
    , public virtual Drawable
{

public:
    typedef ::java::lang::Object super;

public: /* protected */
    ::poi::sl::usermodel::Shape* shape {  };
protected:
    void ctor(::poi::sl::usermodel::Shape* shape);

public:
    void applyTransform(::java::awt::Graphics2D* graphics) override;
    void draw(::java::awt::Graphics2D* graphics) override;
    void drawContent(::java::awt::Graphics2D* context) override;

    // Generated
    DrawNothing(::poi::sl::usermodel::Shape* shape);
protected:
    DrawNothing(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
