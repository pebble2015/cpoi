// Generated from /POI/java/org/apache/poi/hssf/record/EmbeddedObjectRefSubRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/ptg/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/SubRecord.hpp>
#include <java/lang/Cloneable.hpp>

struct default_init_tag;

class poi::hssf::record::EmbeddedObjectRefSubRecord final
    : public SubRecord
    , public ::java::lang::Cloneable
{

public:
    typedef SubRecord super;

private:
    static ::poi::util::POILogger* logger_;

public:
    static constexpr int16_t sid { int16_t(9) };

private:
    static ::int8_tArray* EMPTY_BYTE_ARRAY_;
    int32_t field_1_unknown_int {  };
    ::poi::ss::formula::ptg::Ptg* field_2_refPtg {  };
    ::int8_tArray* field_2_unknownFormulaData {  };
    bool field_3_unicode_flag {  };
    ::java::lang::String* field_4_ole_classname {  };
    ::java::lang::Byte* field_4_unknownByte {  };
    ::java::lang::Integer* field_5_stream_id {  };
    ::int8_tArray* field_6_unknown {  };
protected:
    void ctor();

public:
    int16_t getSid();
protected:
    void ctor(::poi::util::LittleEndianInput* in, int32_t size);

private:
    static ::poi::ss::formula::ptg::Ptg* readRefPtg(::int8_tArray* formulaRawBytes);
    static ::int8_tArray* readRawData(::poi::util::LittleEndianInput* in, int32_t size);
    int32_t getStreamIDOffset(int32_t formulaSize);
    int32_t getDataSize(int32_t idOffset);

public: /* protected */
    int32_t getDataSize() override;

public:
    void serialize(::poi::util::LittleEndianOutput* out) override;
    ::java::lang::Integer* getStreamId();
    ::java::lang::String* getOLEClassName();
    ::int8_tArray* getObjectData();
    EmbeddedObjectRefSubRecord* clone() override;
    ::java::lang::String* toString() override;
    void setUnknownFormulaData(::int8_tArray* formularData);
    void setOleClassname(::java::lang::String* oleClassname);
    void setStorageId(int32_t storageId);

    // Generated
    EmbeddedObjectRefSubRecord();
    EmbeddedObjectRefSubRecord(::poi::util::LittleEndianInput* in, int32_t size);
protected:
    EmbeddedObjectRefSubRecord(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();
    virtual ::int8_tArray* serialize();

private:
    static ::poi::util::POILogger*& logger();
    static ::int8_tArray*& EMPTY_BYTE_ARRAY();
    virtual ::java::lang::Class* getClass0();
};
