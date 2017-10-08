// Generated from /POI/java/org/apache/poi/hssf/record/WindowProtectRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/StandardRecord.hpp>

struct default_init_tag;

class poi::hssf::record::WindowProtectRecord final
    : public StandardRecord
{

public:
    typedef StandardRecord super;
    static constexpr int16_t sid { int16_t(25) };

private:
    static ::poi::util::BitField* settingsProtectedFlag_;
    int32_t _options {  };
protected:
    void ctor(int32_t options);
    void ctor(RecordInputStream* in);
    void ctor(bool protect);

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
    WindowProtectRecord(int32_t options);
    WindowProtectRecord(RecordInputStream* in);
    WindowProtectRecord(bool protect);
protected:
    WindowProtectRecord(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();
    int32_t serialize(int32_t offset, ::int8_tArray* data);
    ::int8_tArray* serialize();

private:
    static ::poi::util::BitField*& settingsProtectedFlag();
    virtual ::java::lang::Class* getClass0();
};
