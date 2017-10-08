// Generated from /POI/java/org/apache/poi/hssf/record/CFHeaderBase.java

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

class poi::hssf::record::CFHeaderBase
    : public StandardRecord
    , public virtual ::java::lang::Cloneable
{

public:
    typedef StandardRecord super;

private:
    int32_t field_1_numcf {  };
    int32_t field_2_need_recalculation_and_id {  };
    ::poi::ss::util::CellRangeAddress* field_3_enclosing_cell_range {  };
    ::poi::ss::util::CellRangeAddressList* field_4_cell_ranges {  };
protected:
    void ctor();
    void ctor(::poi::ss::util::CellRangeAddressArray* regions, int32_t nRules);

public: /* protected */
    virtual void createEmpty();
    virtual void read(RecordInputStream* in);

public:
    virtual int32_t getNumberOfConditionalFormats();
    virtual void setNumberOfConditionalFormats(int32_t n);
    virtual bool getNeedRecalculation();
    virtual void setNeedRecalculation(bool b);
    virtual int32_t getID();
    virtual void setID(int32_t id);
    virtual ::poi::ss::util::CellRangeAddress* getEnclosingCellRange();
    virtual void setEnclosingCellRange(::poi::ss::util::CellRangeAddress* cr);
    virtual void setCellRanges(::poi::ss::util::CellRangeAddressArray* cellRanges);
    virtual ::poi::ss::util::CellRangeAddressArray* getCellRanges();

public: /* protected */
    virtual ::java::lang::String* getRecordName() = 0;

public:
    ::java::lang::String* toString() override;

public: /* protected */
    int32_t getDataSize() override;

public:
    void serialize(::poi::util::LittleEndianOutput* out) override;

public: /* protected */
    virtual void copyTo(CFHeaderBase* result);

public:
    CFHeaderBase* clone() = 0;

    // Generated

public: /* protected */
    CFHeaderBase();
    CFHeaderBase(::poi::ss::util::CellRangeAddressArray* regions, int32_t nRules);
protected:
    CFHeaderBase(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    int32_t serialize(int32_t offset, ::int8_tArray* data);
    ::int8_tArray* serialize();

private:
    virtual ::java::lang::Class* getClass0();
};
