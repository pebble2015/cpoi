// Generated from /POI/java/org/apache/poi/ddf/AbstractEscherOptRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ddf/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <java/util/Comparator.hpp>

struct default_init_tag;

class poi::ddf::AbstractEscherOptRecord_sortProperties_1
    : public virtual ::java::lang::Object
    , public virtual ::java::util::Comparator
{

public:
    typedef ::java::lang::Object super;
    virtual int32_t compare(EscherProperty* p1, EscherProperty* p2);

    // Generated
    AbstractEscherOptRecord_sortProperties_1(AbstractEscherOptRecord *AbstractEscherOptRecord_this);
    static ::java::lang::Class *class_();
    virtual bool equals(::java::lang::Object* obj);
    virtual int32_t compare(::java::lang::Object* o1, ::java::lang::Object* o2) override;
    AbstractEscherOptRecord *AbstractEscherOptRecord_this;

private:
    virtual ::java::lang::Class* getClass0();
    friend class AbstractEscherOptRecord;
};
