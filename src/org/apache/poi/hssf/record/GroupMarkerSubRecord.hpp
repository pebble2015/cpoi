// Generated from /POI/java/org/apache/poi/hssf/record/GroupMarkerSubRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/SubRecord.hpp>
#include <java/lang/Cloneable.hpp>

struct default_init_tag;

class poi::hssf::record::GroupMarkerSubRecord final
    : public SubRecord
    , public ::java::lang::Cloneable
{

public:
    typedef SubRecord super;
    static constexpr int16_t sid { int16_t(6) };

private:
    static ::int8_tArray* EMPTY_BYTE_ARRAY_;
    ::int8_tArray* reserved {  };
protected:
    void ctor();
    void ctor(::poi::util::LittleEndianInput* in, int32_t size);

public:
    ::java::lang::String* toString() override;
    void serialize(::poi::util::LittleEndianOutput* out) override;

public: /* protected */
    int32_t getDataSize() override;

public:
    int16_t getSid();
    GroupMarkerSubRecord* clone() override;

    // Generated
    GroupMarkerSubRecord();
    GroupMarkerSubRecord(::poi::util::LittleEndianInput* in, int32_t size);
protected:
    GroupMarkerSubRecord(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();
    virtual ::int8_tArray* serialize();

private:
    static ::int8_tArray*& EMPTY_BYTE_ARRAY();
    virtual ::java::lang::Class* getClass0();
};
