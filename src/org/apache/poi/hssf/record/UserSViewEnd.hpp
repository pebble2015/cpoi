// Generated from /POI/java/org/apache/poi/hssf/record/UserSViewEnd.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/StandardRecord.hpp>

struct default_init_tag;

class org::apache::poi::hssf::record::UserSViewEnd final
    : public StandardRecord
{

public:
    typedef StandardRecord super;
    static constexpr int16_t sid { int16_t(427) };

private:
    ::int8_tArray* _rawData {  };
protected:
    void ctor(::int8_tArray* data);
    void ctor(RecordInputStream* in);

public:
    void serialize(::org::apache::poi::util::LittleEndianOutput* out) override;

public: /* protected */
    int32_t getDataSize() override;

public:
    int16_t getSid() override;
    ::java::lang::String* toString() override;
    ::java::lang::Object* clone() override;

    // Generated
    UserSViewEnd(::int8_tArray* data);
    UserSViewEnd(RecordInputStream* in);
protected:
    UserSViewEnd(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    int32_t serialize(int32_t offset, ::int8_tArray* data);
    ::int8_tArray* serialize();

private:
    virtual ::java::lang::Class* getClass0();
};
