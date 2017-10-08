// Generated from /POI/java/org/apache/poi/ss/formula/NameIdentifier.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class poi::ss::formula::NameIdentifier
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    ::java::lang::String* _name {  };
    bool _isQuoted {  };
protected:
    void ctor(::java::lang::String* name, bool isQuoted);

public:
    virtual ::java::lang::String* getName();
    virtual bool isQuoted();
    ::java::lang::String* toString() override;

    // Generated
    NameIdentifier(::java::lang::String* name, bool isQuoted);
protected:
    NameIdentifier(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
