// Generated from /POI/java/org/apache/poi/hssf/record/BoolErrRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/CellRecord.hpp>
#include <java/lang/Cloneable.hpp>

struct default_init_tag;

class poi::hssf::record::BoolErrRecord final
    : public CellRecord
    , public ::java::lang::Cloneable
{

public:
    typedef CellRecord super;
    static constexpr int16_t sid { int16_t(517) };

private:
    int32_t _value {  };
    bool _isError {  };
protected:
    void ctor();
    void ctor(RecordInputStream* in);

public:
    void setValue(bool value);
    void setValue(int8_t value);
    void setValue(::poi::ss::usermodel::FormulaError* value);
    bool getBooleanValue();
    int8_t getErrorValue();
    bool isBoolean();
    bool isError();

public: /* protected */
    ::java::lang::String* getRecordName() override;
    void appendValueText(::java::lang::StringBuilder* sb) override;
    void serializeValue(::poi::util::LittleEndianOutput* out) override;
    int32_t getValueDataSize() override;

public:
    int16_t getSid() override;
    BoolErrRecord* clone() override;

    // Generated
    BoolErrRecord();
    BoolErrRecord(RecordInputStream* in);
protected:
    BoolErrRecord(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
