// Generated from /POI/java/org/apache/poi/hssf/record/cont/ContinuableRecordOutput.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/cont/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/util/LittleEndianOutput.hpp>

struct default_init_tag;

class poi::hssf::record::cont::ContinuableRecordOutput final
    : public virtual ::java::lang::Object
    , public ::poi::util::LittleEndianOutput
{

public:
    typedef ::java::lang::Object super;

private:
    ::poi::util::LittleEndianOutput* _out {  };
    UnknownLengthRecordOutput* _ulrOutput {  };
    int32_t _totalPreviousRecordsSize {  };
protected:
    void ctor(::poi::util::LittleEndianOutput* out, int32_t sid);

public:
    static ContinuableRecordOutput* createForCountingOnly();
    int32_t getTotalSize();

public: /* package */
    void terminate();

public:
    int32_t getAvailableSpace();
    void writeContinue();
    void writeContinueIfRequired(int32_t requiredContinuousSize);
    void writeStringData(::java::lang::String* text);
    void writeString(::java::lang::String* text, int32_t numberOfRichTextRuns, int32_t extendedDataSize);

private:
    void writeCharacterData(::java::lang::String* text, bool is16bitEncoded);

public:
    void write(::int8_tArray* b) override;
    void write(::int8_tArray* b, int32_t offset, int32_t len) override;
    void writeByte(int32_t v) override;
    void writeDouble(double v) override;
    void writeInt(int32_t v) override;
    void writeLong(int64_t v) override;
    void writeShort(int32_t v) override;

private:
    static ::poi::util::LittleEndianOutput* NOPOutput_;

    // Generated

public:
    ContinuableRecordOutput(::poi::util::LittleEndianOutput* out, int32_t sid);
protected:
    ContinuableRecordOutput(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    static ::poi::util::LittleEndianOutput*& NOPOutput();
    virtual ::java::lang::Class* getClass0();
    friend class ContinuableRecordOutput_1;
};
