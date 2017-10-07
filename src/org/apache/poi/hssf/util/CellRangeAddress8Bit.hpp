// Generated from /POI/java/org/apache/poi/hssf/util/CellRangeAddress8Bit.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/hssf/util/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/ss/util/CellRangeAddressBase.hpp>

struct default_init_tag;

class org::apache::poi::hssf::util::CellRangeAddress8Bit final
    : public ::org::apache::poi::ss::util::CellRangeAddressBase
{

public:
    typedef ::org::apache::poi::ss::util::CellRangeAddressBase super;
    static constexpr int32_t ENCODED_SIZE { int32_t(6) };
protected:
    void ctor(int32_t firstRow, int32_t lastRow, int32_t firstCol, int32_t lastCol);
    void ctor(::org::apache::poi::util::LittleEndianInput* in);

private:
    static int32_t readUShortAndCheck(::org::apache::poi::util::LittleEndianInput* in);

public:
    void serialize(::org::apache::poi::util::LittleEndianOutput* out);
    CellRangeAddress8Bit* copy();
    static int32_t getEncodedSize(int32_t numberOfItems);

    // Generated
    CellRangeAddress8Bit(int32_t firstRow, int32_t lastRow, int32_t firstCol, int32_t lastCol);
    CellRangeAddress8Bit(::org::apache::poi::util::LittleEndianInput* in);
protected:
    CellRangeAddress8Bit(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
