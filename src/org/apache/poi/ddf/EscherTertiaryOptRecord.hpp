// Generated from /POI/java/org/apache/poi/ddf/EscherTertiaryOptRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ddf/fwd-POI.hpp>
#include <org/apache/poi/ddf/AbstractEscherOptRecord.hpp>

struct default_init_tag;

class org::apache::poi::ddf::EscherTertiaryOptRecord
    : public AbstractEscherOptRecord
{

public:
    typedef AbstractEscherOptRecord super;
    static constexpr int16_t RECORD_ID { int16_t(-3806) };
    ::java::lang::String* getRecordName() override;

    // Generated
    EscherTertiaryOptRecord();
protected:
    EscherTertiaryOptRecord(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
