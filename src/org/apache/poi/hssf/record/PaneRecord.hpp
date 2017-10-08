// Generated from /POI/java/org/apache/poi/hssf/record/PaneRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/StandardRecord.hpp>

struct default_init_tag;

class poi::hssf::record::PaneRecord final
    : public StandardRecord
{

public:
    typedef StandardRecord super;
    static constexpr int16_t sid { int16_t(65) };

private:
    int16_t field_1_x {  };
    int16_t field_2_y {  };
    int16_t field_3_topRow {  };
    int16_t field_4_leftColumn {  };
    int16_t field_5_activePane {  };

public:
    static constexpr int16_t ACTIVE_PANE_LOWER_RIGHT { int16_t(0) };
    static constexpr int16_t ACTIVE_PANE_UPPER_RIGHT { int16_t(1) };
    static constexpr int16_t ACTIVE_PANE_LOWER_LEFT { int16_t(2) };
    static constexpr int16_t ACTIVE_PANE_UPPER_LEFT { int16_t(3) };
protected:
    void ctor();
    void ctor(RecordInputStream* in);

public:
    ::java::lang::String* toString() override;
    void serialize(::poi::util::LittleEndianOutput* out) override;

public: /* protected */
    int32_t getDataSize() override;

public:
    int16_t getSid() override;
    ::java::lang::Object* clone() override;
    int16_t getX();
    void setX(int16_t field_1_x);
    int16_t getY();
    void setY(int16_t field_2_y);
    int16_t getTopRow();
    void setTopRow(int16_t field_3_topRow);
    int16_t getLeftColumn();
    void setLeftColumn(int16_t field_4_leftColumn);
    int16_t getActivePane();
    void setActivePane(int16_t field_5_activePane);

    // Generated
    PaneRecord();
    PaneRecord(RecordInputStream* in);
protected:
    PaneRecord(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    int32_t serialize(int32_t offset, ::int8_tArray* data);
    ::int8_tArray* serialize();

private:
    virtual ::java::lang::Class* getClass0();
};
