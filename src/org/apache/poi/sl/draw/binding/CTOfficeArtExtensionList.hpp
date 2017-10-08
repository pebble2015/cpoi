// Generated from /POI/java/org/apache/poi/sl/draw/binding/CTOfficeArtExtensionList.java

#pragma once

#include <fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/sl/draw/binding/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class poi::sl::draw::binding::CTOfficeArtExtensionList
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

public: /* protected */
    ::java::util::List* ext {  };

public:
    virtual ::java::util::List* getExt();
    virtual bool isSetExt();
    virtual void unsetExt();

    // Generated
    CTOfficeArtExtensionList();
protected:
    CTOfficeArtExtensionList(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
