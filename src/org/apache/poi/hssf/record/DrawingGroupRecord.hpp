// Generated from /POI/java/org/apache/poi/hssf/record/DrawingGroupRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/AbstractEscherHolderRecord.hpp>

struct default_init_tag;

class org::apache::poi::hssf::record::DrawingGroupRecord final
    : public AbstractEscherHolderRecord
{

public:
    typedef AbstractEscherHolderRecord super;
    static constexpr int16_t sid { int16_t(235) };

public: /* package */
    static constexpr int32_t MAX_RECORD_SIZE { int32_t(8228) };

private:
    static constexpr int32_t MAX_DATA_SIZE { int32_t(8224) };
protected:
    void ctor();
    void ctor(RecordInputStream* in);

public: /* protected */
    ::java::lang::String* getRecordName() override;

public:
    int16_t getSid() override;
    int32_t serialize(int32_t offset, ::int8_tArray* data) override;
    void processChildRecords();
    int32_t getRecordSize() override;

private:
    int32_t getRawDataSize();

public: /* package */
    static int32_t grossSizeFromDataSize(int32_t dataSize);

private:
    int32_t writeData(int32_t offset, ::int8_tArray* data, ::int8_tArray* rawData);
    void writeHeader(::int8_tArray* data, int32_t offset, int32_t sizeExcludingHeader);
    void writeContinueHeader(::int8_tArray* data, int32_t offset, int32_t sizeExcludingHeader);

    // Generated

public:
    DrawingGroupRecord();
    DrawingGroupRecord(RecordInputStream* in);
protected:
    DrawingGroupRecord(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    ::int8_tArray* serialize();

private:
    virtual ::java::lang::Class* getClass0();
};
