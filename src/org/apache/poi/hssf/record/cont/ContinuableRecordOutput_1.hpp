// Generated from /POI/java/org/apache/poi/hssf/record/cont/ContinuableRecordOutput.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/hssf/record/cont/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/util/DelayableLittleEndianOutput.hpp>

struct default_init_tag;

class org::apache::poi::hssf::record::cont::ContinuableRecordOutput_1
    : public virtual ::java::lang::Object
    , public virtual ::org::apache::poi::util::DelayableLittleEndianOutput
{

public:
    typedef ::java::lang::Object super;
    ::org::apache::poi::util::LittleEndianOutput* createDelayedOutput(int32_t size) override;
    void write(::int8_tArray* b) override;
    void write(::int8_tArray* b, int32_t offset, int32_t len) override;
    void writeByte(int32_t v) override;
    void writeDouble(double v) override;
    void writeInt(int32_t v) override;
    void writeLong(int64_t v) override;
    void writeShort(int32_t v) override;

    // Generated
    ContinuableRecordOutput_1();
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class ContinuableRecordOutput;
};
