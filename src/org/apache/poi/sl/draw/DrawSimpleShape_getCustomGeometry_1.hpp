// Generated from /POI/java/org/apache/poi/sl/draw/DrawSimpleShape.java

#pragma once

#include <fwd-POI.hpp>
#include <javax/xml/stream/events/fwd-POI.hpp>
#include <org/apache/poi/sl/draw/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <javax/xml/stream/EventFilter.hpp>

struct default_init_tag;

class org::apache::poi::sl::draw::DrawSimpleShape_getCustomGeometry_1
    : public virtual ::java::lang::Object
    , public virtual ::javax::xml::stream::EventFilter
{

public:
    typedef ::java::lang::Object super;
    bool accept(::javax::xml::stream::events::XMLEvent* event) override;

    // Generated
    DrawSimpleShape_getCustomGeometry_1();
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class DrawSimpleShape;
};
