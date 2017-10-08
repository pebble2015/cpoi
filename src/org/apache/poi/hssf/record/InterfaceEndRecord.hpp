// Generated from /POI/java/org/apache/poi/hssf/record/InterfaceEndRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/StandardRecord.hpp>

struct default_init_tag;

class poi::hssf::record::InterfaceEndRecord final
    : public StandardRecord
{

public:
    typedef StandardRecord super;
    static constexpr int16_t sid { int16_t(226) };

private:
    static InterfaceEndRecord* instance_;
protected:
    void ctor();

public:
    static Record* create(RecordInputStream* in);
    ::java::lang::String* toString() override;
    void serialize(::poi::util::LittleEndianOutput* out) override;

public: /* protected */
    int32_t getDataSize() override;

public:
    int16_t getSid() override;

    // Generated

private:
    InterfaceEndRecord();
protected:
    InterfaceEndRecord(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();
    int32_t serialize(int32_t offset, ::int8_tArray* data);
    ::int8_tArray* serialize();
    static InterfaceEndRecord*& instance();

private:
    virtual ::java::lang::Class* getClass0();
};
