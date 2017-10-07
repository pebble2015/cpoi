// Generated from /POI/java/org/apache/poi/sl/draw/geom/CustomGeometry.java

#pragma once

#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/sl/draw/binding/fwd-POI.hpp>
#include <org/apache/poi/sl/draw/geom/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/Iterable.hpp>

struct default_init_tag;

class org::apache::poi::sl::draw::geom::CustomGeometry
    : public virtual ::java::lang::Object
    , public virtual ::java::lang::Iterable
{

public:
    typedef ::java::lang::Object super;

public: /* package */
    ::java::util::List* adjusts {  };
    ::java::util::List* guides {  };
    ::java::util::List* paths {  };
    Path* textBounds {  };
protected:
    void ctor(::org::apache::poi::sl::draw::binding::CTCustomGeometry2D* geom);

public:
    ::java::util::Iterator* iterator() override;
    virtual Path* getTextBounds();

    // Generated
    CustomGeometry(::org::apache::poi::sl::draw::binding::CTCustomGeometry2D* geom);
protected:
    CustomGeometry(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    void init();
    virtual ::java::lang::Class* getClass0();
};
