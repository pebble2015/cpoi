// Generated from /POI/java/org/apache/poi/hssf/record/NameCommentRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/StandardRecord.hpp>

struct default_init_tag;

class org::apache::poi::hssf::record::NameCommentRecord final
    : public StandardRecord
{

public:
    typedef StandardRecord super;
    static constexpr int16_t sid { int16_t(2196) };

private:
    int16_t field_1_record_type {  };
    int16_t field_2_frt_cell_ref_flag {  };
    int64_t field_3_reserved {  };
    ::java::lang::String* field_6_name_text {  };
    ::java::lang::String* field_7_comment_text {  };
protected:
    void ctor(::java::lang::String* name, ::java::lang::String* comment);

public:
    void serialize(::org::apache::poi::util::LittleEndianOutput* out) override;

public: /* protected */
    int32_t getDataSize() override;
protected:
    void ctor(RecordInputStream* ris);

public:
    int16_t getSid() override;
    ::java::lang::String* toString() override;
    ::java::lang::String* getNameText();
    void setNameText(::java::lang::String* newName);
    ::java::lang::String* getCommentText();
    void setCommentText(::java::lang::String* comment);
    int16_t getRecordType();

    // Generated
    NameCommentRecord(::java::lang::String* name, ::java::lang::String* comment);
    NameCommentRecord(RecordInputStream* ris);
protected:
    NameCommentRecord(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    int32_t serialize(int32_t offset, ::int8_tArray* data);
    ::int8_tArray* serialize();

private:
    virtual ::java::lang::Class* getClass0();
};
