// Generated from /POI/java/org/apache/poi/ddf/EscherArrayProperty.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/ddf/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <java/util/Iterator.hpp>
#include <Array.hpp>

struct default_init_tag;

class poi::ddf::EscherArrayProperty_iterator_1
    : public virtual ::java::lang::Object
    , public virtual ::java::util::Iterator
{

public:
    typedef ::java::lang::Object super;

public: /* package */
    int32_t idx {  };

public:
    bool hasNext() override;
    ::int8_tArray* next() override;
    void remove() override;

    // Generated
    EscherArrayProperty_iterator_1(EscherArrayProperty *EscherArrayProperty_this);
    static ::java::lang::Class *class_();
    EscherArrayProperty *EscherArrayProperty_this;

private:
    virtual ::java::lang::Class* getClass0();
    friend class EscherArrayProperty;
};
