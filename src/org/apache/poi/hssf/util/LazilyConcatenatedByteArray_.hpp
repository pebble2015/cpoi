// Generated from /POI/java/org/apache/poi/hssf/util/LazilyConcatenatedByteArray.java

#pragma once

#include <fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class poi::hssf::util::LazilyConcatenatedByteArray_
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    ::java::util::List* arrays {  };

public:
    virtual void clear();
    virtual void concatenate(::int8_tArray* array);
    virtual ::int8_tArray* toArray_();

    // Generated
    LazilyConcatenatedByteArray_();
protected:
    void ctor();
    LazilyConcatenatedByteArray_(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    void init();
    virtual ::java::lang::Class* getClass0();
};
