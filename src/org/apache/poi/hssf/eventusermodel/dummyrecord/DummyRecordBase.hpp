// Generated from /POI/java/org/apache/poi/hssf/eventusermodel/dummyrecord/DummyRecordBase.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/hssf/eventusermodel/dummyrecord/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/Record.hpp>

struct default_init_tag;

class poi::hssf::eventusermodel::dummyrecord::DummyRecordBase
    : public ::poi::hssf::record::Record
{

public:
    typedef ::poi::hssf::record::Record super;
protected:
    void ctor();

public:
    int16_t getSid() override;
    int32_t serialize(int32_t offset, ::int8_tArray* data) override;
    int32_t getRecordSize() override;

    // Generated

public: /* protected */
    DummyRecordBase();
protected:
    DummyRecordBase(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    ::int8_tArray* serialize();

private:
    virtual ::java::lang::Class* getClass0();
};
