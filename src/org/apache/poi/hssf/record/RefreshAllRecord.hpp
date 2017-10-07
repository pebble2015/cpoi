// Generated from /POI/java/org/apache/poi/hssf/record/RefreshAllRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/StandardRecord.hpp>

struct default_init_tag;

class org::apache::poi::hssf::record::RefreshAllRecord final
    : public StandardRecord
{

public:
    typedef StandardRecord super;
    static constexpr int16_t sid { int16_t(439) };

private:
    static ::org::apache::poi::util::BitField* refreshFlag_;
    int32_t _options {  };
protected:
    void ctor(int32_t options);
    void ctor(RecordInputStream* in);
    void ctor(bool refreshAll);

public:
    void setRefreshAll(bool refreshAll);
    bool getRefreshAll();
    ::java::lang::String* toString() override;
    void serialize(::org::apache::poi::util::LittleEndianOutput* out) override;

public: /* protected */
    int32_t getDataSize() override;

public:
    int16_t getSid() override;
    ::java::lang::Object* clone() override;

    // Generated

private:
    RefreshAllRecord(int32_t options);

public:
    RefreshAllRecord(RecordInputStream* in);
    RefreshAllRecord(bool refreshAll);
protected:
    RefreshAllRecord(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();
    int32_t serialize(int32_t offset, ::int8_tArray* data);
    ::int8_tArray* serialize();

private:
    static ::org::apache::poi::util::BitField*& refreshFlag();
    virtual ::java::lang::Class* getClass0();
};
