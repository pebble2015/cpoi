// Generated from /POI/java/org/apache/poi/hssf/record/UseSelFSRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/StandardRecord.hpp>

struct default_init_tag;

class org::apache::poi::hssf::record::UseSelFSRecord final
    : public StandardRecord
{

public:
    typedef StandardRecord super;
    static constexpr int16_t sid { int16_t(352) };

private:
    static ::org::apache::poi::util::BitField* useNaturalLanguageFormulasFlag_;
    int32_t _options {  };
protected:
    void ctor(int32_t options);
    void ctor(RecordInputStream* in);
    void ctor(bool b);

public:
    ::java::lang::String* toString() override;
    void serialize(::org::apache::poi::util::LittleEndianOutput* out) override;

public: /* protected */
    int32_t getDataSize() override;

public:
    int16_t getSid() override;
    ::java::lang::Object* clone() override;

    // Generated

private:
    UseSelFSRecord(int32_t options);

public:
    UseSelFSRecord(RecordInputStream* in);
    UseSelFSRecord(bool b);
protected:
    UseSelFSRecord(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();
    int32_t serialize(int32_t offset, ::int8_tArray* data);
    ::int8_tArray* serialize();

private:
    static ::org::apache::poi::util::BitField*& useNaturalLanguageFormulasFlag();
    virtual ::java::lang::Class* getClass0();
};
