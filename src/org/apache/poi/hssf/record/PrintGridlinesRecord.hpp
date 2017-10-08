// Generated from /POI/java/org/apache/poi/hssf/record/PrintGridlinesRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/StandardRecord.hpp>

struct default_init_tag;

class poi::hssf::record::PrintGridlinesRecord final
    : public StandardRecord
{

public:
    typedef StandardRecord super;
    static constexpr int16_t sid { int16_t(43) };

private:
    int16_t field_1_print_gridlines {  };
protected:
    void ctor();
    void ctor(RecordInputStream* in);

public:
    void setPrintGridlines(bool pg);
    bool getPrintGridlines();
    ::java::lang::String* toString() override;
    void serialize(::poi::util::LittleEndianOutput* out) override;

public: /* protected */
    int32_t getDataSize() override;

public:
    int16_t getSid() override;
    ::java::lang::Object* clone() override;

    // Generated
    PrintGridlinesRecord();
    PrintGridlinesRecord(RecordInputStream* in);
protected:
    PrintGridlinesRecord(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    int32_t serialize(int32_t offset, ::int8_tArray* data);
    ::int8_tArray* serialize();

private:
    virtual ::java::lang::Class* getClass0();
};
