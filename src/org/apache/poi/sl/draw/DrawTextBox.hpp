// Generated from /POI/java/org/apache/poi/sl/draw/DrawTextBox.java

#pragma once

#include <org/apache/poi/sl/draw/fwd-POI.hpp>
#include <org/apache/poi/sl/usermodel/fwd-POI.hpp>
#include <org/apache/poi/sl/draw/DrawAutoShape.hpp>

struct default_init_tag;

class poi::sl::draw::DrawTextBox
    : public DrawAutoShape
{

public:
    typedef DrawAutoShape super;
protected:
    void ctor(::poi::sl::usermodel::TextBox* shape);

    // Generated

public:
    DrawTextBox(::poi::sl::usermodel::TextBox* shape);
protected:
    DrawTextBox(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
