// Generated from /POI/java/org/apache/poi/hssf/record/cont/ContinuableRecordInput.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/cont/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/util/LittleEndianInput.hpp>

struct default_init_tag;

class org::apache::poi::hssf::record::cont::ContinuableRecordInput
    : public virtual ::java::lang::Object
    , public virtual ::org::apache::poi::util::LittleEndianInput
{

public:
    typedef ::java::lang::Object super;

private:
    ::org::apache::poi::hssf::record::RecordInputStream* _in {  };
protected:
    void ctor(::org::apache::poi::hssf::record::RecordInputStream* in);

public:
    int32_t available() override;
    int8_t readByte() override;
    int32_t readUByte() override;
    int16_t readShort() override;
    int32_t readUShort() override;
    int32_t readInt() override;
    int64_t readLong() override;
    double readDouble() override;
    void readFully(::int8_tArray* buf) override;
    void readFully(::int8_tArray* buf, int32_t off, int32_t len) override;
    void readPlain(::int8_tArray* buf, int32_t off, int32_t len) override;

    // Generated
    ContinuableRecordInput(::org::apache::poi::hssf::record::RecordInputStream* in);
protected:
    ContinuableRecordInput(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
