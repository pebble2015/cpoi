// Generated from /POI/java/org/apache/poi/sl/draw/binding/CTConnectionSiteList.java

#pragma once

#include <fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/sl/draw/binding/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class org::apache::poi::sl::draw::binding::CTConnectionSiteList
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

public: /* protected */
    ::java::util::List* cxn {  };

public:
    virtual ::java::util::List* getCxn();
    virtual bool isSetCxn();
    virtual void unsetCxn();

    // Generated
    CTConnectionSiteList();
protected:
    CTConnectionSiteList(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
