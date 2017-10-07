// Generated from /POI/java/org/apache/poi/hssf/record/PasswordRev4Record.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/StandardRecord.hpp>

struct default_init_tag;

class org::apache::poi::hssf::record::PasswordRev4Record final
    : public StandardRecord
{

public:
    typedef StandardRecord super;
    static constexpr int16_t sid { int16_t(444) };

private:
    int32_t field_1_password {  };
protected:
    void ctor(int32_t pw);
    void ctor(RecordInputStream* in);

public:
    void setPassword(int16_t pw);
    ::java::lang::String* toString() override;
    void serialize(::org::apache::poi::util::LittleEndianOutput* out) override;

public: /* protected */
    int32_t getDataSize() override;

public:
    int16_t getSid() override;

    // Generated
    PasswordRev4Record(int32_t pw);
    PasswordRev4Record(RecordInputStream* in);
protected:
    PasswordRev4Record(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    int32_t serialize(int32_t offset, ::int8_tArray* data);
    ::int8_tArray* serialize();

private:
    virtual ::java::lang::Class* getClass0();
};
