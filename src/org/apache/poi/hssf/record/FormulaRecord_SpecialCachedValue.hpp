// Generated from /POI/java/org/apache/poi/hssf/record/FormulaRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class poi::hssf::record::FormulaRecord_SpecialCachedValue final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    static constexpr int64_t BIT_MARKER { int64_t(-281474976710656LL) };
    static constexpr int32_t VARIABLE_DATA_LENGTH { int32_t(6) };
    static constexpr int32_t DATA_INDEX { int32_t(2) };

public:
    static constexpr int32_t STRING { int32_t(0) };
    static constexpr int32_t BOOLEAN { int32_t(1) };
    static constexpr int32_t ERROR_CODE { int32_t(2) };
    static constexpr int32_t EMPTY { int32_t(3) };

private:
    ::int8_tArray* _variableData {  };
protected:
    void ctor(::int8_tArray* data);

public:
    int32_t getTypeCode();
    static FormulaRecord_SpecialCachedValue* create(int64_t valueLongBits);
    void serialize(::poi::util::LittleEndianOutput* out);
    ::java::lang::String* formatDebugString();

private:
    ::java::lang::String* formatValue();
    int32_t getDataValue();

public:
    static FormulaRecord_SpecialCachedValue* createCachedEmptyValue();
    static FormulaRecord_SpecialCachedValue* createForString();
    static FormulaRecord_SpecialCachedValue* createCachedBoolean(bool b);
    static FormulaRecord_SpecialCachedValue* createCachedErrorCode(int32_t errorCode);

private:
    static FormulaRecord_SpecialCachedValue* create(int32_t code, int32_t data);

public:
    ::java::lang::String* toString() override;
    int32_t getValueType();
    bool getBooleanValue();
    int32_t getErrorValue();

    // Generated

private:
    FormulaRecord_SpecialCachedValue(::int8_tArray* data);
protected:
    FormulaRecord_SpecialCachedValue(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class FormulaRecord;
};
