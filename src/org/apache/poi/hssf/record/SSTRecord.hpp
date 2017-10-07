// Generated from /POI/java/org/apache/poi/hssf/record/SSTRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/common/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/cont/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/cont/ContinuableRecord.hpp>

struct default_init_tag;

class org::apache::poi::hssf::record::SSTRecord final
    : public ::org::apache::poi::hssf::record::cont::ContinuableRecord
{

public:
    typedef ::org::apache::poi::hssf::record::cont::ContinuableRecord super;
    static constexpr int16_t sid { int16_t(252) };

private:
    static ::org::apache::poi::hssf::record::common::UnicodeString* EMPTY_STRING_;

public: /* package */
    static constexpr int32_t STD_RECORD_OVERHEAD { int32_t(4) };
    static constexpr int32_t SST_RECORD_OVERHEAD { int32_t(12) };
    static constexpr int32_t MAX_DATA_SPACE { int32_t(8216) };

private:
    int32_t field_1_num_strings {  };
    int32_t field_2_num_unique_strings {  };
    ::org::apache::poi::util::IntMapper* field_3_strings {  };
    SSTDeserializer* deserializer {  };

public: /* package */
    ::int32_tArray* bucketAbsoluteOffsets {  };
    ::int32_tArray* bucketRelativeOffsets {  };
protected:
    void ctor();

public:
    int32_t addString(::org::apache::poi::hssf::record::common::UnicodeString* string);
    int32_t getNumStrings();
    int32_t getNumUniqueStrings();
    ::org::apache::poi::hssf::record::common::UnicodeString* getString(int32_t id);
    ::java::lang::String* toString() override;
    int16_t getSid() override;
protected:
    void ctor(RecordInputStream* in);

public: /* package */
    ::java::util::Iterator* getStrings();
    int32_t countStrings();

public: /* protected */
    void serialize(::org::apache::poi::hssf::record::cont::ContinuableRecordOutput* out) override;

public: /* package */
    SSTDeserializer* getDeserializer();

public:
    ExtSSTRecord* createExtSSTRecord(int32_t sstOffset);
    int32_t calcExtSSTRecordSize();

    // Generated
    SSTRecord();
    SSTRecord(RecordInputStream* in);
protected:
    SSTRecord(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();
    int32_t serialize(int32_t offset, ::int8_tArray* data);
    ::int8_tArray* serialize();

private:
    static ::org::apache::poi::hssf::record::common::UnicodeString*& EMPTY_STRING();
    virtual ::java::lang::Class* getClass0();
};
