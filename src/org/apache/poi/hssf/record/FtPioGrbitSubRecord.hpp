// Generated from /POI/java/org/apache/poi/hssf/record/FtPioGrbitSubRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/SubRecord.hpp>
#include <java/lang/Cloneable.hpp>

struct default_init_tag;

class poi::hssf::record::FtPioGrbitSubRecord final
    : public SubRecord
    , public ::java::lang::Cloneable
{

public:
    typedef SubRecord super;
    static constexpr int16_t sid { int16_t(8) };
    static constexpr int16_t length { int16_t(2) };
    static constexpr int32_t AUTO_PICT_BIT { int32_t(1) };
    static constexpr int32_t DDE_BIT { int32_t(2) };
    static constexpr int32_t PRINT_CALC_BIT { int32_t(4) };
    static constexpr int32_t ICON_BIT { int32_t(8) };
    static constexpr int32_t CTL_BIT { int32_t(16) };
    static constexpr int32_t PRSTM_BIT { int32_t(32) };
    static constexpr int32_t CAMERA_BIT { int32_t(128) };
    static constexpr int32_t DEFAULT_SIZE_BIT { int32_t(256) };
    static constexpr int32_t AUTO_LOAD_BIT { int32_t(512) };

private:
    int16_t flags {  };
protected:
    void ctor();
    void ctor(::poi::util::LittleEndianInput* in, int32_t size);

public:
    void setFlagByBit(int32_t bitmask, bool enabled);
    bool getFlagByBit(int32_t bitmask);
    ::java::lang::String* toString() override;
    void serialize(::poi::util::LittleEndianOutput* out) override;

public: /* protected */
    int32_t getDataSize() override;

public:
    int16_t getSid();
    FtPioGrbitSubRecord* clone() override;
    int16_t getFlags();
    void setFlags(int16_t flags);

    // Generated
    FtPioGrbitSubRecord();
    FtPioGrbitSubRecord(::poi::util::LittleEndianInput* in, int32_t size);
protected:
    FtPioGrbitSubRecord(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    void init();

public:
    virtual ::int8_tArray* serialize();

private:
    virtual ::java::lang::Class* getClass0();
};
