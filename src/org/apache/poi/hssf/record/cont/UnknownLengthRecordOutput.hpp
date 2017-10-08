// Generated from /POI/java/org/apache/poi/hssf/record/cont/UnknownLengthRecordOutput.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/hssf/record/cont/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/util/LittleEndianOutput.hpp>

struct default_init_tag;

class poi::hssf::record::cont::UnknownLengthRecordOutput final
    : public virtual ::java::lang::Object
    , public ::poi::util::LittleEndianOutput
{

public:
    typedef ::java::lang::Object super;

private:
    static constexpr int32_t MAX_DATA_SIZE { int32_t(8224) };
    ::poi::util::LittleEndianOutput* _originalOut {  };
    ::poi::util::LittleEndianOutput* _dataSizeOutput {  };
    ::int8_tArray* _byteBuffer {  };
    ::poi::util::LittleEndianOutput* _out {  };
    int32_t _size {  };
protected:
    void ctor(::poi::util::LittleEndianOutput* out, int32_t sid);

public:
    int32_t getTotalSize();
    int32_t getAvailableSpace();
    void terminate();
    void write(::int8_tArray* b) override;
    void write(::int8_tArray* b, int32_t offset, int32_t len) override;
    void writeByte(int32_t v) override;
    void writeDouble(double v) override;
    void writeInt(int32_t v) override;
    void writeLong(int64_t v) override;
    void writeShort(int32_t v) override;

    // Generated
    UnknownLengthRecordOutput(::poi::util::LittleEndianOutput* out, int32_t sid);
protected:
    UnknownLengthRecordOutput(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
