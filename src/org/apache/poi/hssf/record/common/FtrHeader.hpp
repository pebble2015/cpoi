// Generated from /POI/java/org/apache/poi/hssf/record/common/FtrHeader.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/common/fwd-POI.hpp>
#include <org/apache/poi/ss/util/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/Cloneable.hpp>

struct default_init_tag;

class poi::hssf::record::common::FtrHeader final
    : public virtual ::java::lang::Object
    , public ::java::lang::Cloneable
{

public:
    typedef ::java::lang::Object super;

private:
    int16_t recordType {  };
    int16_t grbitFrt {  };
    ::poi::ss::util::CellRangeAddress* associatedRange {  };
protected:
    void ctor();
    void ctor(::poi::hssf::record::RecordInputStream* in);

public:
    ::java::lang::String* toString() override;
    void serialize(::poi::util::LittleEndianOutput* out);
    static int32_t getDataSize();
    int16_t getRecordType();
    void setRecordType(int16_t recordType);
    int16_t getGrbitFrt();
    void setGrbitFrt(int16_t grbitFrt);
    ::poi::ss::util::CellRangeAddress* getAssociatedRange();
    void setAssociatedRange(::poi::ss::util::CellRangeAddress* associatedRange);
    ::java::lang::Object* clone() override;

    // Generated
    FtrHeader();
    FtrHeader(::poi::hssf::record::RecordInputStream* in);
protected:
    FtrHeader(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
