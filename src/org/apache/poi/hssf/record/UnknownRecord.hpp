// Generated from /POI/java/org/apache/poi/hssf/record/UnknownRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/StandardRecord.hpp>

struct default_init_tag;

class poi::hssf::record::UnknownRecord final
    : public StandardRecord
{

public:
    typedef StandardRecord super;
    static constexpr int32_t PRINTSIZE_0033 { int32_t(51) };
    static constexpr int32_t PLS_004D { int32_t(77) };
    static constexpr int32_t SHEETPR_0081 { int32_t(129) };
    static constexpr int32_t SORT_0090 { int32_t(144) };
    static constexpr int32_t STANDARDWIDTH_0099 { int32_t(153) };
    static constexpr int32_t SCL_00A0 { int32_t(160) };
    static constexpr int32_t BITMAP_00E9 { int32_t(233) };
    static constexpr int32_t PHONETICPR_00EF { int32_t(239) };
    static constexpr int32_t LABELRANGES_015F { int32_t(351) };
    static constexpr int32_t QUICKTIP_0800 { int32_t(2048) };
    static constexpr int32_t SHEETEXT_0862 { int32_t(2146) };
    static constexpr int32_t SHEETPROTECTION_0867 { int32_t(2151) };
    static constexpr int32_t HEADER_FOOTER_089C { int32_t(2204) };
    static constexpr int32_t CODENAME_1BA { int32_t(442) };
    static constexpr int32_t PLV_MAC { int32_t(2248) };

private:
    int32_t _sid {  };
    ::int8_tArray* _rawData {  };
protected:
    void ctor(int32_t id, ::int8_tArray* data);
    void ctor(RecordInputStream* in);

public:
    void serialize(::poi::util::LittleEndianOutput* out) override;

public: /* protected */
    int32_t getDataSize() override;

public:
    ::java::lang::String* toString() override;
    int16_t getSid() override;
    static ::java::lang::String* getBiffName(int32_t sid);

private:
    static bool isObservedButUnknown(int32_t sid);

public:
    ::java::lang::Object* clone() override;

    // Generated
    UnknownRecord(int32_t id, ::int8_tArray* data);
    UnknownRecord(RecordInputStream* in);
protected:
    UnknownRecord(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    int32_t serialize(int32_t offset, ::int8_tArray* data);
    ::int8_tArray* serialize();

private:
    virtual ::java::lang::Class* getClass0();
};
