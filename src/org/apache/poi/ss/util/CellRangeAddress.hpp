// Generated from /POI/java/org/apache/poi/ss/util/CellRangeAddress.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/ss/util/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/ss/util/CellRangeAddressBase.hpp>

struct default_init_tag;

class org::apache::poi::ss::util::CellRangeAddress
    : public CellRangeAddressBase
{

public:
    typedef CellRangeAddressBase super;
    static constexpr int32_t ENCODED_SIZE { int32_t(8) };
protected:
    void ctor(int32_t firstRow, int32_t lastRow, int32_t firstCol, int32_t lastCol);

public:
    virtual void serialize(::org::apache::poi::util::LittleEndianOutput* out);
protected:
    void ctor(::org::apache::poi::hssf::record::RecordInputStream* in);

private:
    static int32_t readUShortAndCheck(::org::apache::poi::hssf::record::RecordInputStream* in);

public:
    virtual CellRangeAddress* copy();
    static int32_t getEncodedSize(int32_t numberOfItems);
    virtual ::java::lang::String* formatAsString();
    virtual ::java::lang::String* formatAsString(::java::lang::String* sheetName, bool useAbsoluteAddress);
    static CellRangeAddress* valueOf(::java::lang::String* ref);

    // Generated
    CellRangeAddress(int32_t firstRow, int32_t lastRow, int32_t firstCol, int32_t lastCol);
    CellRangeAddress(::org::apache::poi::hssf::record::RecordInputStream* in);
protected:
    CellRangeAddress(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
