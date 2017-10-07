// Generated from /POI/java/org/apache/poi/hssf/record/FtCfSubRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/SubRecord.hpp>
#include <java/lang/Cloneable.hpp>

struct default_init_tag;

class org::apache::poi::hssf::record::FtCfSubRecord final
    : public SubRecord
    , public ::java::lang::Cloneable
{

public:
    typedef SubRecord super;
    static constexpr int16_t sid { int16_t(7) };
    static constexpr int16_t length { int16_t(2) };
    static constexpr int16_t METAFILE_BIT { int16_t(2) };
    static constexpr int16_t BITMAP_BIT { int16_t(9) };
    static constexpr int16_t UNSPECIFIED_BIT { int16_t(-1) };

private:
    int16_t flags {  };
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
    FtCfSubRecord* clone() override;
    int16_t getFlags();
    void setFlags(int16_t flags);

    // Generated
    FtCfSubRecord();
    FtCfSubRecord(::org::apache::poi::util::LittleEndianInput* in, int32_t size);
protected:
    FtCfSubRecord(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    void init();

public:
    virtual ::int8_tArray* serialize();

private:
    virtual ::java::lang::Class* getClass0();
};
