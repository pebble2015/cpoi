// Generated from /POI/java/org/apache/poi/hssf/record/common/FeatSmartTag.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/common/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/hssf/record/common/SharedFeature.hpp>

struct default_init_tag;

class poi::hssf::record::common::FeatSmartTag final
    : public virtual ::java::lang::Object
    , public SharedFeature
{

public:
    typedef ::java::lang::Object super;

private:
    ::int8_tArray* data {  };
protected:
    void ctor();
    void ctor(::poi::hssf::record::RecordInputStream* in);

public:
    ::java::lang::String* toString() override;
    int32_t getDataSize() override;
    void serialize(::poi::util::LittleEndianOutput* out) override;

    // Generated
    FeatSmartTag();
    FeatSmartTag(::poi::hssf::record::RecordInputStream* in);
protected:
    FeatSmartTag(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
