// Generated from /POI/java/org/apache/poi/hssf/record/DVALRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/StandardRecord.hpp>
#include <java/lang/Cloneable.hpp>

struct default_init_tag;

class org::apache::poi::hssf::record::DVALRecord final
    : public StandardRecord
    , public ::java::lang::Cloneable
{

public:
    typedef StandardRecord super;
    static constexpr int16_t sid { int16_t(434) };

private:
    int16_t field_1_options {  };
    int32_t field_2_horiz_pos {  };
    int32_t field_3_vert_pos {  };
    int32_t field_cbo_id {  };
    int32_t field_5_dv_no {  };
protected:
    void ctor();
    void ctor(RecordInputStream* in);

public:
    void setOptions(int16_t options);
    void setHorizontalPos(int32_t horiz_pos);
    void setVerticalPos(int32_t vert_pos);
    void setObjectID(int32_t cboID);
    void setDVRecNo(int32_t dvNo);
    int16_t getOptions();
    int32_t getHorizontalPos();
    int32_t getVerticalPos();
    int32_t getObjectID();
    int32_t getDVRecNo();
    ::java::lang::String* toString() override;
    void serialize(::org::apache::poi::util::LittleEndianOutput* out) override;

public: /* protected */
    int32_t getDataSize() override;

public:
    int16_t getSid() override;
    DVALRecord* clone() override;

    // Generated
    DVALRecord();
    DVALRecord(RecordInputStream* in);
protected:
    DVALRecord(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    int32_t serialize(int32_t offset, ::int8_tArray* data);
    ::int8_tArray* serialize();

private:
    virtual ::java::lang::Class* getClass0();
};
