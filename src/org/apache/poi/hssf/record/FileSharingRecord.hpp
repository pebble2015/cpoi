// Generated from /POI/java/org/apache/poi/hssf/record/FileSharingRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/StandardRecord.hpp>
#include <java/lang/Cloneable.hpp>

struct default_init_tag;

class poi::hssf::record::FileSharingRecord final
    : public StandardRecord
    , public ::java::lang::Cloneable
{

public:
    typedef StandardRecord super;
    static constexpr int16_t sid { int16_t(91) };

private:
    int16_t field_1_readonly {  };
    int16_t field_2_password {  };
    int8_t field_3_username_unicode_options {  };
    ::java::lang::String* field_3_username_value {  };
protected:
    void ctor();
    void ctor(RecordInputStream* in);

public:
    void setReadOnly(int16_t readonly);
    int16_t getReadOnly();
    void setPassword(int16_t password);
    int16_t getPassword();
    ::java::lang::String* getUsername();
    void setUsername(::java::lang::String* username);
    ::java::lang::String* toString() override;
    void serialize(::poi::util::LittleEndianOutput* out) override;

public: /* protected */
    int32_t getDataSize() override;

public:
    int16_t getSid() override;
    FileSharingRecord* clone() override;

    // Generated
    FileSharingRecord();
    FileSharingRecord(RecordInputStream* in);
protected:
    FileSharingRecord(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    int32_t serialize(int32_t offset, ::int8_tArray* data);
    ::int8_tArray* serialize();

private:
    virtual ::java::lang::Class* getClass0();
};
