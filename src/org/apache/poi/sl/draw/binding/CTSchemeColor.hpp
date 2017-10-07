// Generated from /POI/java/org/apache/poi/sl/draw/binding/CTSchemeColor.java

#pragma once

#include <fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/sl/draw/binding/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class org::apache::poi::sl::draw::binding::CTSchemeColor
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

public: /* protected */
    ::java::util::List* egColorTransform {  };
    STSchemeColorVal* val {  };

public:
    virtual ::java::util::List* getEGColorTransform();
    virtual bool isSetEGColorTransform();
    virtual void unsetEGColorTransform();
    virtual STSchemeColorVal* getVal();
    virtual void setVal(STSchemeColorVal* value);
    virtual bool isSetVal();

    // Generated
    CTSchemeColor();
protected:
    CTSchemeColor(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
