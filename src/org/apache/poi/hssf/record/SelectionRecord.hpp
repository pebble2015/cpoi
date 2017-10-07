// Generated from /POI/java/org/apache/poi/hssf/record/SelectionRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/hssf/util/fwd-POI.hpp>
#include <org/apache/poi/ss/util/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/StandardRecord.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace org
{
    namespace apache
    {
        namespace poi
        {
            namespace ss
            {
                namespace util
                {
typedef ::SubArray< ::org::apache::poi::ss::util::CellRangeAddressBase, ::java::lang::ObjectArray > CellRangeAddressBaseArray;
                } // util
            } // ss

            namespace hssf
            {
                namespace util
                {
typedef ::SubArray< ::org::apache::poi::hssf::util::CellRangeAddress8Bit, ::org::apache::poi::ss::util::CellRangeAddressBaseArray > CellRangeAddress8BitArray;
                } // util
            } // hssf
        } // poi
    } // apache
} // org

struct default_init_tag;

class org::apache::poi::hssf::record::SelectionRecord final
    : public StandardRecord
{

public:
    typedef StandardRecord super;
    static constexpr int16_t sid { int16_t(29) };

private:
    int8_t field_1_pane {  };
    int32_t field_2_row_active_cell {  };
    int32_t field_3_col_active_cell {  };
    int32_t field_4_active_cell_ref_index {  };
    ::org::apache::poi::hssf::util::CellRangeAddress8BitArray* field_6_refs {  };
protected:
    void ctor(int32_t activeCellRow, int32_t activeCellCol);
    void ctor(RecordInputStream* in);

public:
    void setPane(int8_t pane);
    void setActiveCellRow(int32_t row);
    void setActiveCellCol(int16_t col);
    void setActiveCellRef(int16_t ref);
    int8_t getPane();
    int32_t getActiveCellRow();
    int32_t getActiveCellCol();
    int32_t getActiveCellRef();
    ::java::lang::String* toString() override;

public: /* protected */
    int32_t getDataSize() override;

public:
    void serialize(::org::apache::poi::util::LittleEndianOutput* out) override;
    int16_t getSid() override;
    ::java::lang::Object* clone() override;

    // Generated
    SelectionRecord(int32_t activeCellRow, int32_t activeCellCol);
    SelectionRecord(RecordInputStream* in);
protected:
    SelectionRecord(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    int32_t serialize(int32_t offset, ::int8_tArray* data);
    ::int8_tArray* serialize();

private:
    virtual ::java::lang::Class* getClass0();
};
