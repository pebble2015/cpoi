// Generated from /POI/java/org/apache/poi/hssf/record/SubRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/SubRecord.hpp>

struct default_init_tag;

class org::apache::poi::hssf::record::SubRecord_UnknownSubRecord final
    : public SubRecord
{

public:
    typedef SubRecord super;

private:
    int32_t _sid {  };
    ::int8_tArray* _data {  };
protected:
    void ctor(::org::apache::poi::util::LittleEndianInput* in, int32_t sid, int32_t size);

public: /* protected */
    int32_t getDataSize() override;

public:
    void serialize(::org::apache::poi::util::LittleEndianOutput* out) override;
    SubRecord_UnknownSubRecord* clone() override;
    ::java::lang::String* toString() override;

    // Generated
    SubRecord_UnknownSubRecord(::org::apache::poi::util::LittleEndianInput* in, int32_t sid, int32_t size);
protected:
    SubRecord_UnknownSubRecord(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    virtual ::int8_tArray* serialize();

private:
    virtual ::java::lang::Class* getClass0();
    friend class SubRecord;
};
