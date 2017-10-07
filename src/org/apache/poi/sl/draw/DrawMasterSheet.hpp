// Generated from /POI/java/org/apache/poi/sl/draw/DrawMasterSheet.java

#pragma once

#include <fwd-POI.hpp>
#include <java/awt/fwd-POI.hpp>
#include <org/apache/poi/sl/draw/fwd-POI.hpp>
#include <org/apache/poi/sl/usermodel/fwd-POI.hpp>
#include <org/apache/poi/sl/draw/DrawSheet.hpp>

struct default_init_tag;

class org::apache::poi::sl::draw::DrawMasterSheet
    : public DrawSheet
{

public:
    typedef DrawSheet super;
protected:
    void ctor(::org::apache::poi::sl::usermodel::MasterSheet* sheet);

public: /* protected */
    bool canDraw(::java::awt::Graphics2D* graphics, ::org::apache::poi::sl::usermodel::Shape* shape) override;

    // Generated

public:
    DrawMasterSheet(::org::apache::poi::sl::usermodel::MasterSheet* sheet);
protected:
    DrawMasterSheet(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
