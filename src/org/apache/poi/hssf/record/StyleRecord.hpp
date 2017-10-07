// Generated from /POI/java/org/apache/poi/hssf/record/StyleRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/StandardRecord.hpp>

struct default_init_tag;

class org::apache::poi::hssf::record::StyleRecord final
    : public StandardRecord
{

public:
    typedef StandardRecord super;
    static constexpr int16_t sid { int16_t(659) };

private:
    static ::org::apache::poi::util::BitField* styleIndexMask_;
    static ::org::apache::poi::util::BitField* isBuiltinFlag_;
    int32_t field_1_xf_index {  };
    int32_t field_2_builtin_style {  };
    int32_t field_3_outline_style_level {  };
    bool field_3_stringHasMultibyte {  };
    ::java::lang::String* field_4_name {  };
protected:
    void ctor();
    void ctor(RecordInputStream* in);

public:
    void setXFIndex(int32_t xfIndex);
    int32_t getXFIndex();
    void setName(::java::lang::String* name);
    void setBuiltinStyle(int32_t builtinStyleId);
    void setOutlineStyleLevel(int32_t level);
    bool isBuiltin();
    ::java::lang::String* getName();
    ::java::lang::String* toString() override;

public: /* protected */
    int32_t getDataSize() override;

public:
    void serialize(::org::apache::poi::util::LittleEndianOutput* out) override;
    int16_t getSid() override;

    // Generated
    StyleRecord();
    StyleRecord(RecordInputStream* in);
protected:
    StyleRecord(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();
    int32_t serialize(int32_t offset, ::int8_tArray* data);
    ::int8_tArray* serialize();

private:
    static ::org::apache::poi::util::BitField*& styleIndexMask();
    static ::org::apache::poi::util::BitField*& isBuiltinFlag();
    virtual ::java::lang::Class* getClass0();
};
