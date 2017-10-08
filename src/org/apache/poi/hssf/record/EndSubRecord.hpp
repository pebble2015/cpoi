// Generated from /POI/java/org/apache/poi/hssf/record/EndSubRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/SubRecord.hpp>
#include <java/lang/Cloneable.hpp>

struct default_init_tag;

class poi::hssf::record::EndSubRecord final
    : public SubRecord
    , public ::java::lang::Cloneable
{

public:
    typedef SubRecord super;
    static constexpr int16_t sid { int16_t(0) };

private:
    static constexpr int32_t ENCODED_SIZE { int32_t(0) };
protected:
    void ctor();
    void ctor(::poi::util::LittleEndianInput* in, int32_t size);

public:
    bool isTerminating() override;
    ::java::lang::String* toString() override;
    void serialize(::poi::util::LittleEndianOutput* out) override;

public: /* protected */
    int32_t getDataSize() override;

public:
    int16_t getSid();
    EndSubRecord* clone() override;

    // Generated
    EndSubRecord();
    EndSubRecord(::poi::util::LittleEndianInput* in, int32_t size);
protected:
    EndSubRecord(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    virtual ::int8_tArray* serialize();

private:
    virtual ::java::lang::Class* getClass0();
};
