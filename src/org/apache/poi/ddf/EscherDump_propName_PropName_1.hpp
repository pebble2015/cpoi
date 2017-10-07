// Generated from /POI/java/org/apache/poi/ddf/EscherDump.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ddf/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class org::apache::poi::ddf::EscherDump_propName_PropName_1 final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

public: /* package */
    int32_t _id {  };
    ::java::lang::String* _name {  };
protected:
    void ctor(int32_t id, ::java::lang::String* name);

    // Generated

public:
    EscherDump_propName_PropName_1(EscherDump *EscherDump_this, int32_t id, ::java::lang::String* name);
protected:
    EscherDump_propName_PropName_1(EscherDump *EscherDump_this, const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    EscherDump *EscherDump_this;

private:
    virtual ::java::lang::Class* getClass0();
    friend class EscherDump;
};
