// Generated from /POI/java/org/apache/poi/hssf/record/EOFRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/StandardRecord.hpp>
#include <java/lang/Cloneable.hpp>

struct default_init_tag;

class poi::hssf::record::EOFRecord final
    : public StandardRecord
    , public ::java::lang::Cloneable
{

public:
    typedef StandardRecord super;
    static constexpr int16_t sid { int16_t(10) };
    static constexpr int32_t ENCODED_SIZE { int32_t(4) };

private:
    static EOFRecord* instance_;
protected:
    void ctor();
    void ctor(RecordInputStream* in);

public:
    ::java::lang::String* toString() override;
    void serialize(::poi::util::LittleEndianOutput* out) override;

public: /* protected */
    int32_t getDataSize() override;

public:
    int16_t getSid() override;
    EOFRecord* clone() override;

    // Generated

private:
    EOFRecord();

public:
    EOFRecord(RecordInputStream* in);
protected:
    EOFRecord(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();
    int32_t serialize(int32_t offset, ::int8_tArray* data);
    ::int8_tArray* serialize();
    static EOFRecord*& instance();

private:
    virtual ::java::lang::Class* getClass0();
};
