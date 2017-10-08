// Generated from /POI/java/org/apache/poi/ddf/NullEscherSerializationListener.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/ddf/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/ddf/EscherSerializationListener.hpp>

struct default_init_tag;

class poi::ddf::NullEscherSerializationListener
    : public virtual ::java::lang::Object
    , public virtual EscherSerializationListener
{

public:
    typedef ::java::lang::Object super;
    void beforeRecordSerialize(int32_t offset, int16_t recordId, EscherRecord* record) override;
    void afterRecordSerialize(int32_t offset, int16_t recordId, int32_t size, EscherRecord* record) override;

    // Generated
    NullEscherSerializationListener();
protected:
    NullEscherSerializationListener(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
