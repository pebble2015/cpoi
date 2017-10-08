// Generated from /POI/java/org/apache/poi/sl/draw/binding/CTPath2DList.java

#pragma once

#include <fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/sl/draw/binding/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class poi::sl::draw::binding::CTPath2DList
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

public: /* protected */
    ::java::util::List* path {  };

public:
    virtual ::java::util::List* getPath();
    virtual bool isSetPath();
    virtual void unsetPath();

    // Generated
    CTPath2DList();
protected:
    CTPath2DList(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
