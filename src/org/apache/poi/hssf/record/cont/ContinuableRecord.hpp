// Generated from /POI/java/org/apache/poi/hssf/record/cont/ContinuableRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/hssf/record/cont/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/Record.hpp>

struct default_init_tag;

class org::apache::poi::hssf::record::cont::ContinuableRecord
    : public ::org::apache::poi::hssf::record::Record
{

public:
    typedef ::org::apache::poi::hssf::record::Record super;
protected:
    void ctor();

public: /* protected */
    virtual void serialize(ContinuableRecordOutput* out) = 0;

public:
    int32_t getRecordSize() override;
    int32_t serialize(int32_t offset, ::int8_tArray* data) override;

    // Generated

public: /* protected */
    ContinuableRecord();
protected:
    ContinuableRecord(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    ::int8_tArray* serialize();

private:
    virtual ::java::lang::Class* getClass0();
};
