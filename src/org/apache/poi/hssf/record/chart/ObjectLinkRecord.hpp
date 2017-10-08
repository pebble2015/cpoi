// Generated from /POI/java/org/apache/poi/hssf/record/chart/ObjectLinkRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/chart/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/StandardRecord.hpp>
#include <java/lang/Cloneable.hpp>

struct default_init_tag;

class poi::hssf::record::chart::ObjectLinkRecord final
    : public ::poi::hssf::record::StandardRecord
    , public ::java::lang::Cloneable
{

public:
    typedef ::poi::hssf::record::StandardRecord super;
    static constexpr int16_t sid { int16_t(4135) };

private:
    int16_t field_1_anchorId {  };

public:
    static constexpr int16_t ANCHOR_ID_CHART_TITLE { int16_t(1) };
    static constexpr int16_t ANCHOR_ID_Y_AXIS { int16_t(2) };
    static constexpr int16_t ANCHOR_ID_X_AXIS { int16_t(3) };
    static constexpr int16_t ANCHOR_ID_SERIES_OR_POINT { int16_t(4) };
    static constexpr int16_t ANCHOR_ID_Z_AXIS { int16_t(7) };

private:
    int16_t field_2_link1 {  };
    int16_t field_3_link2 {  };
protected:
    void ctor();
    void ctor(::poi::hssf::record::RecordInputStream* in);

public:
    ::java::lang::String* toString() override;
    void serialize(::poi::util::LittleEndianOutput* out) override;

public: /* protected */
    int32_t getDataSize() override;

public:
    int16_t getSid() override;
    ObjectLinkRecord* clone() override;
    int16_t getAnchorId();
    void setAnchorId(int16_t field_1_anchorId);
    int16_t getLink1();
    void setLink1(int16_t field_2_link1);
    int16_t getLink2();
    void setLink2(int16_t field_3_link2);

    // Generated
    ObjectLinkRecord();
    ObjectLinkRecord(::poi::hssf::record::RecordInputStream* in);
protected:
    ObjectLinkRecord(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    int32_t serialize(int32_t offset, ::int8_tArray* data);
    ::int8_tArray* serialize();

private:
    virtual ::java::lang::Class* getClass0();
};
