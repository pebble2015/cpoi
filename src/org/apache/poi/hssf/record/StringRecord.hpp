// Generated from /POI/java/org/apache/poi/hssf/record/StringRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/cont/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/cont/ContinuableRecord.hpp>

struct default_init_tag;

class poi::hssf::record::StringRecord final
    : public ::poi::hssf::record::cont::ContinuableRecord
{

public:
    typedef ::poi::hssf::record::cont::ContinuableRecord super;
    static constexpr int16_t sid { int16_t(519) };

private:
    bool _is16bitUnicode {  };
    ::java::lang::String* _text {  };
protected:
    void ctor();
    void ctor(RecordInputStream* in);

public: /* protected */
    void serialize(::poi::hssf::record::cont::ContinuableRecordOutput* out) override;

public:
    int16_t getSid() override;
    ::java::lang::String* getString();
    void setString(::java::lang::String* string);
    ::java::lang::String* toString() override;
    ::java::lang::Object* clone() override;

    // Generated
    StringRecord();
    StringRecord(RecordInputStream* in);
protected:
    StringRecord(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    int32_t serialize(int32_t offset, ::int8_tArray* data);
    ::int8_tArray* serialize();

private:
    virtual ::java::lang::Class* getClass0();
};
