// Generated from /POI/java/org/apache/poi/hssf/record/BOFRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/StandardRecord.hpp>
#include <java/lang/Cloneable.hpp>

struct default_init_tag;

class org::apache::poi::hssf::record::BOFRecord final
    : public StandardRecord
    , public ::java::lang::Cloneable
{

public:
    typedef StandardRecord super;
    static constexpr int16_t sid { int16_t(2057) };
    static constexpr int16_t biff2_sid { int16_t(9) };
    static constexpr int16_t biff3_sid { int16_t(521) };
    static constexpr int16_t biff4_sid { int16_t(1033) };
    static constexpr int16_t biff5_sid { int16_t(2057) };
    static constexpr int32_t VERSION { int32_t(1536) };
    static constexpr int32_t BUILD { int32_t(4307) };
    static constexpr int32_t BUILD_YEAR { int32_t(1996) };
    static constexpr int32_t HISTORY_MASK { int32_t(65) };
    static constexpr int32_t TYPE_WORKBOOK { int32_t(5) };
    static constexpr int32_t TYPE_VB_MODULE { int32_t(6) };
    static constexpr int32_t TYPE_WORKSHEET { int32_t(16) };
    static constexpr int32_t TYPE_CHART { int32_t(32) };
    static constexpr int32_t TYPE_EXCEL_4_MACRO { int32_t(64) };
    static constexpr int32_t TYPE_WORKSPACE_FILE { int32_t(256) };

private:
    int32_t field_1_version {  };
    int32_t field_2_type {  };
    int32_t field_3_build {  };
    int32_t field_4_year {  };
    int32_t field_5_history {  };
    int32_t field_6_rversion {  };
protected:
    void ctor();
    void ctor(int32_t type);

public:
    static BOFRecord* createSheetBOF();
protected:
    void ctor(RecordInputStream* in);

public:
    void setVersion(int32_t version);
    void setType(int32_t type);
    void setBuild(int32_t build);
    void setBuildYear(int32_t year);
    void setHistoryBitMask(int32_t bitmask);
    void setRequiredVersion(int32_t version);
    int32_t getVersion();
    int32_t getType();
    int32_t getBuild();
    int32_t getBuildYear();
    int32_t getHistoryBitMask();
    int32_t getRequiredVersion();
    ::java::lang::String* toString() override;

private:
    ::java::lang::String* getTypeName();

public:
    void serialize(::org::apache::poi::util::LittleEndianOutput* out) override;

public: /* protected */
    int32_t getDataSize() override;

public:
    int16_t getSid() override;
    BOFRecord* clone() override;

    // Generated
    BOFRecord();

private:
    BOFRecord(int32_t type);

public:
    BOFRecord(RecordInputStream* in);
protected:
    BOFRecord(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    int32_t serialize(int32_t offset, ::int8_tArray* data);
    ::int8_tArray* serialize();

private:
    virtual ::java::lang::Class* getClass0();
};
