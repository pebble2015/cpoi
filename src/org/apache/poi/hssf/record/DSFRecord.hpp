// Generated from /POI/java/org/apache/poi/hssf/record/DSFRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/StandardRecord.hpp>

struct default_init_tag;

class org::apache::poi::hssf::record::DSFRecord final
    : public StandardRecord
{

public:
    typedef StandardRecord super;
    static constexpr int16_t sid { int16_t(353) };

private:
    static ::org::apache::poi::util::BitField* biff5BookStreamFlag_;
    int32_t _options {  };
protected:
    void ctor(int32_t options);
    void ctor(bool isBiff5BookStreamPresent);
    void ctor(RecordInputStream* in);

public:
    bool isBiff5BookStreamPresent();
    ::java::lang::String* toString() override;
    void serialize(::org::apache::poi::util::LittleEndianOutput* out) override;

public: /* protected */
    int32_t getDataSize() override;

public:
    int16_t getSid() override;

    // Generated

private:
    DSFRecord(int32_t options);

public:
    DSFRecord(bool isBiff5BookStreamPresent);
    DSFRecord(RecordInputStream* in);
protected:
    DSFRecord(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();
    int32_t serialize(int32_t offset, ::int8_tArray* data);
    ::int8_tArray* serialize();

private:
    static ::org::apache::poi::util::BitField*& biff5BookStreamFlag();
    virtual ::java::lang::Class* getClass0();
};
