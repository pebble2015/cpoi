// Generated from /POI/java/org/apache/poi/sl/draw/binding/CTGeomGuideList.java

#pragma once

#include <fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/sl/draw/binding/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class org::apache::poi::sl::draw::binding::CTGeomGuideList
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

public: /* protected */
    ::java::util::List* gd {  };

public:
    virtual ::java::util::List* getGd();
    virtual bool isSetGd();
    virtual void unsetGd();

    // Generated
    CTGeomGuideList();
protected:
    CTGeomGuideList(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
