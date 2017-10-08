// Generated from /POI/java/org/apache/poi/hssf/record/CFHeader12Record.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/common/fwd-POI.hpp>
#include <org/apache/poi/ss/util/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/CFHeaderBase.hpp>
#include <org/apache/poi/hssf/record/common/FutureRecord.hpp>
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

class poi::hssf::record::CFHeader12Record final
    : public CFHeaderBase
    , public ::poi::hssf::record::common::FutureRecord
    , public virtual ::java::lang::Cloneable
{

public:
    typedef CFHeaderBase super;
    static constexpr int16_t sid { int16_t(2169) };

private:
    ::poi::hssf::record::common::FtrHeader* futureHeader {  };
protected:
    void ctor();
    void ctor(::poi::ss::util::CellRangeAddressArray* regions, int32_t nRules);
    void ctor(RecordInputStream* in);

public: /* protected */
    ::java::lang::String* getRecordName() override;
    int32_t getDataSize() override;

public:
    void serialize(::poi::util::LittleEndianOutput* out) override;
    int16_t getSid() override;
    int16_t getFutureRecordType() override;
    ::poi::hssf::record::common::FtrHeader* getFutureHeader() override;
    ::poi::ss::util::CellRangeAddress* getAssociatedRange() override;
    CFHeader12Record* clone() override;

    // Generated
    CFHeader12Record();
    CFHeader12Record(::poi::ss::util::CellRangeAddressArray* regions, int32_t nRules);
    CFHeader12Record(RecordInputStream* in);
protected:
    CFHeader12Record(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    int32_t serialize(int32_t offset, ::int8_tArray* data);
    ::int8_tArray* serialize();

private:
    virtual ::java::lang::Class* getClass0();
};
