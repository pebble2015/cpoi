// Generated from /POI/java/org/apache/poi/hssf/record/ColumnInfoRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/StandardRecord.hpp>
#include <java/lang/Cloneable.hpp>

struct default_init_tag;

class org::apache::poi::hssf::record::ColumnInfoRecord final
    : public StandardRecord
    , public ::java::lang::Cloneable
{

public:
    typedef StandardRecord super;
    static constexpr int16_t sid { int16_t(125) };

private:
    int32_t _firstCol {  };
    int32_t _lastCol {  };
    int32_t _colWidth {  };
    int32_t _xfIndex {  };
    int32_t _options {  };
    static ::org::apache::poi::util::BitField* hidden_;
    static ::org::apache::poi::util::BitField* outlevel_;
    static ::org::apache::poi::util::BitField* collapsed_;
    int32_t field_6_reserved {  };
protected:
    void ctor();
    void ctor(RecordInputStream* in);

public:
    void setFirstColumn(int32_t fc);
    void setLastColumn(int32_t lc);
    void setColumnWidth(int32_t cw);
    void setXFIndex(int32_t xfi);
    void setHidden(bool ishidden);
    void setOutlineLevel(int32_t olevel);
    void setCollapsed(bool isCollapsed);
    int32_t getFirstColumn();
    int32_t getLastColumn();
    int32_t getColumnWidth();
    int32_t getXFIndex();
    bool getHidden();
    int32_t getOutlineLevel();
    bool getCollapsed();
    bool containsColumn(int32_t columnIndex);
    bool isAdjacentBefore(ColumnInfoRecord* other);
    bool formatMatches(ColumnInfoRecord* other);
    int16_t getSid() override;
    void serialize(::org::apache::poi::util::LittleEndianOutput* out) override;

public: /* protected */
    int32_t getDataSize() override;

public:
    ::java::lang::String* toString() override;
    ColumnInfoRecord* clone() override;

    // Generated
    ColumnInfoRecord();
    ColumnInfoRecord(RecordInputStream* in);
protected:
    ColumnInfoRecord(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();
    int32_t serialize(int32_t offset, ::int8_tArray* data);
    ::int8_tArray* serialize();

private:
    static ::org::apache::poi::util::BitField*& hidden();
    static ::org::apache::poi::util::BitField*& outlevel();
    static ::org::apache::poi::util::BitField*& collapsed();
    virtual ::java::lang::Class* getClass0();
};
