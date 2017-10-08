// Generated from /POI/java/org/apache/poi/hpsf/CustomProperty.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hpsf/fwd-POI.hpp>
#include <org/apache/poi/hpsf/MutableProperty.hpp>

struct default_init_tag;

class poi::hpsf::CustomProperty
    : public MutableProperty
{

public:
    typedef MutableProperty super;

private:
    ::java::lang::String* name {  };
protected:
    void ctor();
    void ctor(Property* property);
    void ctor(Property* property, ::java::lang::String* name);

public:
    virtual ::java::lang::String* getName();
    virtual void setName(::java::lang::String* name);
    virtual bool equalsContents(::java::lang::Object* o);
    int32_t hashCode() override;
    bool equals(::java::lang::Object* o) override;

    // Generated
    CustomProperty();
    CustomProperty(Property* property);
    CustomProperty(Property* property, ::java::lang::String* name);
protected:
    CustomProperty(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
