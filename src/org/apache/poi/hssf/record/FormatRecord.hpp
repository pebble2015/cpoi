// Generated from /POI/java/org/apache/poi/hssf/record/FormatRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/StandardRecord.hpp>
#include <java/lang/Cloneable.hpp>

struct default_init_tag;

class poi::hssf::record::FormatRecord final
    : public StandardRecord
    , public ::java::lang::Cloneable
{

public:
    typedef StandardRecord super;

private:
    static ::poi::util::POILogger* logger_;

public:
    static constexpr int16_t sid { int16_t(1054) };

private:
    int32_t field_1_index_code {  };
    bool field_3_hasMultibyte {  };
    ::java::lang::String* field_4_formatstring {  };
protected:
    void ctor(FormatRecord* other);
    void ctor(int32_t indexCode, ::java::lang::String* fs);
    void ctor(RecordInputStream* in);

public:
    int32_t getIndexCode();
    ::java::lang::String* getFormatString();
    ::java::lang::String* toString() override;
    void serialize(::poi::util::LittleEndianOutput* out) override;

public: /* protected */
    int32_t getDataSize() override;

public:
    int16_t getSid() override;
    FormatRecord* clone() override;

private:
    static ::java::lang::String* readStringCommon(RecordInputStream* ris, int32_t requestedLength, bool pIsCompressedEncoding);

    // Generated
    FormatRecord(FormatRecord* other);

public:
    FormatRecord(int32_t indexCode, ::java::lang::String* fs);
    FormatRecord(RecordInputStream* in);
protected:
    FormatRecord(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();
    int32_t serialize(int32_t offset, ::int8_tArray* data);
    ::int8_tArray* serialize();

private:
    static ::poi::util::POILogger*& logger();
    virtual ::java::lang::Class* getClass0();
};
