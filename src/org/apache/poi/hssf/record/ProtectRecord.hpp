// Generated from /POI/java/org/apache/poi/hssf/record/ProtectRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/StandardRecord.hpp>

struct default_init_tag;

class poi::hssf::record::ProtectRecord final
    : public StandardRecord
{

public:
    typedef StandardRecord super;
    static constexpr int16_t sid { int16_t(18) };

private:
    static ::poi::util::BitField* protectFlag_;
    int32_t _options {  };
protected:
    void ctor(int32_t options);
    void ctor(bool isProtected);
    void ctor(RecordInputStream* in);

public:
    void setProtect(bool protect);
    bool getProtect();
    ::java::lang::String* toString() override;
    void serialize(::poi::util::LittleEndianOutput* out) override;

public: /* protected */
    int32_t getDataSize() override;

public:
    int16_t getSid() override;
    ::java::lang::Object* clone() override;

    // Generated

private:
    ProtectRecord(int32_t options);

public:
    ProtectRecord(bool isProtected);
    ProtectRecord(RecordInputStream* in);
protected:
    ProtectRecord(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();
    int32_t serialize(int32_t offset, ::int8_tArray* data);
    ::int8_tArray* serialize();

private:
    static ::poi::util::BitField*& protectFlag();
    virtual ::java::lang::Class* getClass0();
};
