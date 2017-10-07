// Generated from /POI/java/org/apache/poi/ddf/EscherOptRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ddf/fwd-POI.hpp>
#include <org/apache/poi/ddf/AbstractEscherOptRecord.hpp>

struct default_init_tag;

class org::apache::poi::ddf::EscherOptRecord
    : public AbstractEscherOptRecord
{

public:
    typedef AbstractEscherOptRecord super;

private:
    static ::java::lang::String* RECORD_DESCRIPTION_;

public:
    static constexpr int16_t RECORD_ID { int16_t(-4085) };
    int16_t getInstance() override;
    int16_t getOptions() override;
    ::java::lang::String* getRecordName() override;
    int16_t getVersion() override;
    void setVersion(int16_t value) override;

    // Generated
    EscherOptRecord();
protected:
    EscherOptRecord(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();
    static ::java::lang::String*& RECORD_DESCRIPTION();

private:
    virtual ::java::lang::Class* getClass0();
};
