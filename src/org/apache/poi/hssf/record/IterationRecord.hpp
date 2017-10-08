// Generated from /POI/java/org/apache/poi/hssf/record/IterationRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/StandardRecord.hpp>
#include <java/lang/Cloneable.hpp>

struct default_init_tag;

class poi::hssf::record::IterationRecord final
    : public StandardRecord
    , public ::java::lang::Cloneable
{

public:
    typedef StandardRecord super;
    static constexpr int16_t sid { int16_t(17) };

private:
    static ::poi::util::BitField* iterationOn_;
    int32_t _flags {  };
protected:
    void ctor(bool iterateOn);
    void ctor(RecordInputStream* in);

public:
    void setIteration(bool iterate);
    bool getIteration();
    ::java::lang::String* toString() override;
    void serialize(::poi::util::LittleEndianOutput* out) override;

public: /* protected */
    int32_t getDataSize() override;

public:
    int16_t getSid() override;
    IterationRecord* clone() override;

    // Generated
    IterationRecord(bool iterateOn);
    IterationRecord(RecordInputStream* in);
protected:
    IterationRecord(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();
    int32_t serialize(int32_t offset, ::int8_tArray* data);
    ::int8_tArray* serialize();

private:
    static ::poi::util::BitField*& iterationOn();
    virtual ::java::lang::Class* getClass0();
};
