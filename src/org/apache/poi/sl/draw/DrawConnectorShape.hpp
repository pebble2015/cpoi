// Generated from /POI/java/org/apache/poi/sl/draw/DrawConnectorShape.java

#pragma once

#include <org/apache/poi/sl/draw/fwd-POI.hpp>
#include <org/apache/poi/sl/usermodel/fwd-POI.hpp>
#include <org/apache/poi/sl/draw/DrawSimpleShape.hpp>

struct default_init_tag;

class poi::sl::draw::DrawConnectorShape
    : public DrawSimpleShape
{

public:
    typedef DrawSimpleShape super;
protected:
    void ctor(::poi::sl::usermodel::ConnectorShape* shape);

    // Generated

public:
    DrawConnectorShape(::poi::sl::usermodel::ConnectorShape* shape);
protected:
    DrawConnectorShape(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
