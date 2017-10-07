// Generated from /POI/java/org/apache/poi/hssf/record/pivottable/ViewFieldsRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/pivottable/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/StandardRecord.hpp>

struct default_init_tag;

class org::apache::poi::hssf::record::pivottable::ViewFieldsRecord final
    : public ::org::apache::poi::hssf::record::StandardRecord
{

public:
    typedef ::org::apache::poi::hssf::record::StandardRecord super;
    static constexpr int16_t sid { int16_t(177) };

private:
    static constexpr int32_t STRING_NOT_PRESENT_LEN { int32_t(65535) };
    static constexpr int32_t BASE_SIZE { int32_t(10) };
    int32_t _sxaxis {  };
    int32_t _cSub {  };
    int32_t _grbitSub {  };
    int32_t _cItm {  };
    ::java::lang::String* _name {  };
protected:
    void ctor(::org::apache::poi::hssf::record::RecordInputStream* in);

public: /* protected */
    void serialize(::org::apache::poi::util::LittleEndianOutput* out) override;
    int32_t getDataSize() override;

public:
    int16_t getSid() override;
    ::java::lang::String* toString() override;

    // Generated
    ViewFieldsRecord(::org::apache::poi::hssf::record::RecordInputStream* in);
protected:
    ViewFieldsRecord(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    int32_t serialize(int32_t offset, ::int8_tArray* data);
    ::int8_tArray* serialize();

private:
    virtual ::java::lang::Class* getClass0();
    friend class ViewFieldsRecord_Axis;
};
