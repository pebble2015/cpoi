// Generated from /POI/java/org/apache/poi/hssf/record/pivottable/DataItemRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/pivottable/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/StandardRecord.hpp>

struct default_init_tag;

class poi::hssf::record::pivottable::DataItemRecord final
    : public ::poi::hssf::record::StandardRecord
{

public:
    typedef ::poi::hssf::record::StandardRecord super;
    static constexpr int16_t sid { int16_t(197) };

private:
    int32_t isxvdData {  };
    int32_t iiftab {  };
    int32_t df {  };
    int32_t isxvd {  };
    int32_t isxvi {  };
    int32_t ifmt {  };
    ::java::lang::String* name {  };
protected:
    void ctor(::poi::hssf::record::RecordInputStream* in);

public: /* protected */
    void serialize(::poi::util::LittleEndianOutput* out) override;
    int32_t getDataSize() override;

public:
    int16_t getSid() override;
    ::java::lang::String* toString() override;

    // Generated
    DataItemRecord(::poi::hssf::record::RecordInputStream* in);
protected:
    DataItemRecord(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    int32_t serialize(int32_t offset, ::int8_tArray* data);
    ::int8_tArray* serialize();

private:
    virtual ::java::lang::Class* getClass0();
};
