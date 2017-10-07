// Generated from /POI/java/org/apache/poi/sl/draw/DrawAutoShape.java

#pragma once

#include <org/apache/poi/sl/draw/fwd-POI.hpp>
#include <org/apache/poi/sl/usermodel/fwd-POI.hpp>
#include <org/apache/poi/sl/draw/DrawTextShape.hpp>

struct default_init_tag;

class org::apache::poi::sl::draw::DrawAutoShape
    : public DrawTextShape
{

public:
    typedef DrawTextShape super;
protected:
    void ctor(::org::apache::poi::sl::usermodel::AutoShape* shape);

    // Generated

public:
    DrawAutoShape(::org::apache::poi::sl::usermodel::AutoShape* shape);
protected:
    DrawAutoShape(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
