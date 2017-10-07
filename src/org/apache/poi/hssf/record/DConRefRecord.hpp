// Generated from /POI/java/org/apache/poi/hssf/record/DConRefRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/StandardRecord.hpp>

struct default_init_tag;

class org::apache::poi::hssf::record::DConRefRecord
    : public StandardRecord
{

public:
    typedef StandardRecord super;
    static constexpr int16_t sid { int16_t(81) };

private:
    int32_t firstRow {  }, lastRow {  }, firstCol {  }, lastCol {  };
    int32_t charCount {  };
    int32_t charType {  };
    ::int8_tArray* path {  };
    ::int8_tArray* _unused {  };
protected:
    void ctor(::int8_tArray* data);
    void ctor(RecordInputStream* inStream);

public: /* protected */
    int32_t getDataSize() override;
    void serialize(::org::apache::poi::util::LittleEndianOutput* out) override;

public:
    int16_t getSid() override;
    virtual int32_t getFirstColumn();
    virtual int32_t getFirstRow();
    virtual int32_t getLastColumn();
    virtual int32_t getLastRow();
    ::java::lang::String* toString() override;
    virtual ::int8_tArray* getPath();
    virtual ::java::lang::String* getReadablePath();
    virtual bool isExternalRef();

    // Generated
    DConRefRecord(::int8_tArray* data);
    DConRefRecord(RecordInputStream* inStream);
protected:
    DConRefRecord(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    int32_t serialize(int32_t offset, ::int8_tArray* data);
    ::int8_tArray* serialize();

private:
    virtual ::java::lang::Class* getClass0();
};
