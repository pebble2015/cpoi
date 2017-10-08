// Generated from /POI/java/org/apache/poi/hssf/record/StandardRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/Record.hpp>

struct default_init_tag;

class poi::hssf::record::StandardRecord
    : public Record
{

public:
    typedef Record super;

public: /* protected */
    virtual int32_t getDataSize() = 0;

public:
    int32_t getRecordSize() override;
    int32_t serialize(int32_t offset, ::int8_tArray* data) override;

public: /* protected */
    virtual void serialize(::poi::util::LittleEndianOutput* out) = 0;

    // Generated

public:
    StandardRecord();
protected:
    StandardRecord(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    ::int8_tArray* serialize();

private:
    virtual ::java::lang::Class* getClass0();
};
