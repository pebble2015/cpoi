// Generated from /POI/java/org/apache/poi/hssf/record/FtCblsSubRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/SubRecord.hpp>
#include <java/lang/Cloneable.hpp>

struct default_init_tag;

class org::apache::poi::hssf::record::FtCblsSubRecord final
    : public SubRecord
    , public ::java::lang::Cloneable
{

public:
    typedef SubRecord super;
    static constexpr int16_t sid { int16_t(12) };

private:
    static constexpr int32_t ENCODED_SIZE { int32_t(20) };
    ::int8_tArray* reserved {  };
protected:
    void ctor();
    void ctor(::org::apache::poi::util::LittleEndianInput* in, int32_t size);

public:
    ::java::lang::String* toString() override;
    void serialize(::org::apache::poi::util::LittleEndianOutput* out) override;

public: /* protected */
    int32_t getDataSize() override;

public:
    int16_t getSid();
    FtCblsSubRecord* clone() override;

    // Generated
    FtCblsSubRecord();
    FtCblsSubRecord(::org::apache::poi::util::LittleEndianInput* in, int32_t size);
protected:
    FtCblsSubRecord(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    virtual ::int8_tArray* serialize();

private:
    virtual ::java::lang::Class* getClass0();
};
