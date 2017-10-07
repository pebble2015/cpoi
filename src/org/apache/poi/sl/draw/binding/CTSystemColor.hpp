// Generated from /POI/java/org/apache/poi/sl/draw/binding/CTSystemColor.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/sl/draw/binding/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class org::apache::poi::sl::draw::binding::CTSystemColor
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

public: /* protected */
    ::java::util::List* egColorTransform {  };
    ::java::lang::String* val {  };
    ::int8_tArray* lastClr {  };

public:
    virtual ::java::util::List* getEGColorTransform();
    virtual bool isSetEGColorTransform();
    virtual void unsetEGColorTransform();
    virtual ::java::lang::String* getVal();
    virtual void setVal(::java::lang::String* value);
    virtual bool isSetVal();
    virtual ::int8_tArray* getLastClr();
    virtual void setLastClr(::int8_tArray* value);
    virtual bool isSetLastClr();

    // Generated
    CTSystemColor();
protected:
    CTSystemColor(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
