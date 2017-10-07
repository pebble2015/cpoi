// Generated from /POI/java/org/apache/poi/hssf/record/HideObjRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/StandardRecord.hpp>

struct default_init_tag;

class org::apache::poi::hssf::record::HideObjRecord final
    : public StandardRecord
{

public:
    typedef StandardRecord super;
    static constexpr int16_t sid { int16_t(141) };
    static constexpr int16_t HIDE_ALL { int16_t(2) };
    static constexpr int16_t SHOW_PLACEHOLDERS { int16_t(1) };
    static constexpr int16_t SHOW_ALL { int16_t(0) };

private:
    int16_t field_1_hide_obj {  };
protected:
    void ctor();
    void ctor(RecordInputStream* in);

public:
    void setHideObj(int16_t hide);
    int16_t getHideObj();
    ::java::lang::String* toString() override;
    void serialize(::org::apache::poi::util::LittleEndianOutput* out) override;

public: /* protected */
    int32_t getDataSize() override;

public:
    int16_t getSid() override;

    // Generated
    HideObjRecord();
    HideObjRecord(RecordInputStream* in);
protected:
    HideObjRecord(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    int32_t serialize(int32_t offset, ::int8_tArray* data);
    ::int8_tArray* serialize();

private:
    virtual ::java::lang::Class* getClass0();
};
