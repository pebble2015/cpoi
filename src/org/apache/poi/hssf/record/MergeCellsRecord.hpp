// Generated from /POI/java/org/apache/poi/hssf/record/MergeCellsRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/ss/util/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/StandardRecord.hpp>
#include <java/lang/Cloneable.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace poi
{
    namespace ss
    {
        namespace util
        {
typedef ::SubArray< ::poi::ss::util::CellRangeAddressBase, ::java::lang::ObjectArray > CellRangeAddressBaseArray;
typedef ::SubArray< ::poi::ss::util::CellRangeAddress, CellRangeAddressBaseArray > CellRangeAddressArray;
        } // util
    } // ss
} // poi

struct default_init_tag;

class poi::hssf::record::MergeCellsRecord final
    : public StandardRecord
    , public ::java::lang::Cloneable
{

public:
    typedef StandardRecord super;
    static constexpr int16_t sid { int16_t(229) };

private:
    ::poi::ss::util::CellRangeAddressArray* _regions {  };
    int32_t _startIndex {  };
    int32_t _numberOfRegions {  };
protected:
    void ctor(::poi::ss::util::CellRangeAddressArray* regions, int32_t startIndex, int32_t numberOfRegions);
    void ctor(RecordInputStream* in);

public:
    int16_t getNumAreas();
    ::poi::ss::util::CellRangeAddress* getAreaAt(int32_t index);

public: /* protected */
    int32_t getDataSize() override;

public:
    int16_t getSid() override;
    void serialize(::poi::util::LittleEndianOutput* out) override;
    ::java::lang::String* toString() override;
    MergeCellsRecord* clone() override;

    // Generated
    MergeCellsRecord(::poi::ss::util::CellRangeAddressArray* regions, int32_t startIndex, int32_t numberOfRegions);
    MergeCellsRecord(RecordInputStream* in);
protected:
    MergeCellsRecord(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    int32_t serialize(int32_t offset, ::int8_tArray* data);
    ::int8_tArray* serialize();

private:
    virtual ::java::lang::Class* getClass0();
};
