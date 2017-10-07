// Generated from /POI/java/org/apache/poi/hssf/record/common/FeatProtection.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/common/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/hssf/record/common/SharedFeature.hpp>

struct default_init_tag;

class org::apache::poi::hssf::record::common::FeatProtection final
    : public virtual ::java::lang::Object
    , public SharedFeature
{

public:
    typedef ::java::lang::Object super;

private:
    static int64_t NO_SELF_RELATIVE_SECURITY_FEATURE_;
    static int64_t HAS_SELF_RELATIVE_SECURITY_FEATURE_;
    int32_t fSD {  };
    int32_t passwordVerifier {  };
    ::java::lang::String* title {  };
    ::int8_tArray* securityDescriptor {  };
protected:
    void ctor();
    void ctor(::org::apache::poi::hssf::record::RecordInputStream* in);

public:
    ::java::lang::String* toString() override;
    void serialize(::org::apache::poi::util::LittleEndianOutput* out) override;
    int32_t getDataSize() override;
    int32_t getPasswordVerifier();
    void setPasswordVerifier(int32_t passwordVerifier);
    ::java::lang::String* getTitle();
    void setTitle(::java::lang::String* title);
    int32_t getFSD();

    // Generated
    FeatProtection();
    FeatProtection(::org::apache::poi::hssf::record::RecordInputStream* in);
protected:
    FeatProtection(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();
    static int64_t& NO_SELF_RELATIVE_SECURITY_FEATURE();
    static int64_t& HAS_SELF_RELATIVE_SECURITY_FEATURE();

private:
    virtual ::java::lang::Class* getClass0();
};
