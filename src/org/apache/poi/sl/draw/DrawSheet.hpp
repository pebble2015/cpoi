// Generated from /POI/java/org/apache/poi/sl/draw/DrawSheet.java

#pragma once

#include <fwd-POI.hpp>
#include <java/awt/fwd-POI.hpp>
#include <org/apache/poi/sl/draw/fwd-POI.hpp>
#include <org/apache/poi/sl/usermodel/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/sl/draw/Drawable.hpp>

struct default_init_tag;

class org::apache::poi::sl::draw::DrawSheet
    : public virtual ::java::lang::Object
    , public virtual Drawable
{

public:
    typedef ::java::lang::Object super;

public: /* protected */
    ::org::apache::poi::sl::usermodel::Sheet* sheet {  };
protected:
    void ctor(::org::apache::poi::sl::usermodel::Sheet* sheet);

public:
    void draw(::java::awt::Graphics2D* graphics) override;
    void applyTransform(::java::awt::Graphics2D* context) override;
    void drawContent(::java::awt::Graphics2D* context) override;

public: /* protected */
    virtual bool canDraw(::java::awt::Graphics2D* graphics, ::org::apache::poi::sl::usermodel::Shape* shape);

    // Generated

public:
    DrawSheet(::org::apache::poi::sl::usermodel::Sheet* sheet);
protected:
    DrawSheet(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
