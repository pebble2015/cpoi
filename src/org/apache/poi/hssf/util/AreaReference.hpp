// Generated from /POI/java/org/apache/poi/hssf/util/AreaReference.java

#pragma once

#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/util/fwd-POI.hpp>
#include <org/apache/poi/ss/util/AreaReference.hpp>

struct default_init_tag;

class poi::hssf::util::AreaReference final
    : public ::poi::ss::util::AreaReference
{

public:
    typedef ::poi::ss::util::AreaReference super;
protected:
    void ctor(::java::lang::String* reference);
    void ctor(CellReference* topLeft, CellReference* botRight);

    // Generated

public:
    AreaReference(::java::lang::String* reference);
    AreaReference(CellReference* topLeft, CellReference* botRight);
protected:
    AreaReference(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
