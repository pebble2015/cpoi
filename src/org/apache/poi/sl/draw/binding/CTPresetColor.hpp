// Generated from /POI/java/org/apache/poi/sl/draw/binding/CTPresetColor.java

#pragma once

#include <fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/sl/draw/binding/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class poi::sl::draw::binding::CTPresetColor
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

public: /* protected */
    ::java::util::List* egColorTransform {  };
    STPresetColorVal* val {  };

public:
    virtual ::java::util::List* getEGColorTransform();
    virtual bool isSetEGColorTransform();
    virtual void unsetEGColorTransform();
    virtual STPresetColorVal* getVal();
    virtual void setVal(STPresetColorVal* value);
    virtual bool isSetVal();

    // Generated
    CTPresetColor();
protected:
    CTPresetColor(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
