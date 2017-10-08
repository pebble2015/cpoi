// Generated from /POI/java/org/apache/poi/hssf/record/CFHeaderRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/ss/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/CFHeaderBase.hpp>
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

class poi::hssf::record::CFHeaderRecord final
    : public CFHeaderBase
    , public virtual ::java::lang::Cloneable
{

public:
    typedef CFHeaderBase super;
    static constexpr int16_t sid { int16_t(432) };
protected:
    void ctor();
    void ctor(::poi::ss::util::CellRangeAddressArray* regions, int32_t nRules);
    void ctor(RecordInputStream* in);

public: /* protected */
    ::java::lang::String* getRecordName() override;

public:
    int16_t getSid() override;
    CFHeaderRecord* clone() override;

    // Generated
    CFHeaderRecord();
    CFHeaderRecord(::poi::ss::util::CellRangeAddressArray* regions, int32_t nRules);
    CFHeaderRecord(RecordInputStream* in);
protected:
    CFHeaderRecord(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
