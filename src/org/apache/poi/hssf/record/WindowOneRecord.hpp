// Generated from /POI/java/org/apache/poi/hssf/record/WindowOneRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/StandardRecord.hpp>

struct default_init_tag;

class poi::hssf::record::WindowOneRecord final
    : public StandardRecord
{

public:
    typedef StandardRecord super;
    static constexpr int16_t sid { int16_t(61) };

private:
    int16_t field_1_h_hold {  };
    int16_t field_2_v_hold {  };
    int16_t field_3_width {  };
    int16_t field_4_height {  };
    int16_t field_5_options {  };
    static ::poi::util::BitField* hidden_;
    static ::poi::util::BitField* iconic_;
    static ::poi::util::BitField* reserved_;
    static ::poi::util::BitField* hscroll_;
    static ::poi::util::BitField* vscroll_;
    static ::poi::util::BitField* tabs_;
    int32_t field_6_active_sheet {  };
    int32_t field_7_first_visible_tab {  };
    int16_t field_8_num_selected_tabs {  };
    int16_t field_9_tab_width_ratio {  };
protected:
    void ctor();
    void ctor(RecordInputStream* in);

public:
    void setHorizontalHold(int16_t h);
    void setVerticalHold(int16_t v);
    void setWidth(int16_t w);
    void setHeight(int16_t h);
    void setOptions(int16_t o);
    void setHidden(bool ishidden);
    void setIconic(bool isiconic);
    void setDisplayHorizonalScrollbar(bool scroll);
    void setDisplayVerticalScrollbar(bool scroll);
    void setDisplayTabs(bool disptabs);
    void setActiveSheetIndex(int32_t index);
    void setFirstVisibleTab(int32_t t);
    void setNumSelectedTabs(int16_t n);
    void setTabWidthRatio(int16_t r);
    int16_t getHorizontalHold();
    int16_t getVerticalHold();
    int16_t getWidth();
    int16_t getHeight();
    int16_t getOptions();
    bool getHidden();
    bool getIconic();
    bool getDisplayHorizontalScrollbar();
    bool getDisplayVerticalScrollbar();
    bool getDisplayTabs();
    int32_t getActiveSheetIndex();
    int32_t getFirstVisibleTab();
    int16_t getNumSelectedTabs();
    int16_t getTabWidthRatio();
    ::java::lang::String* toString() override;
    void serialize(::poi::util::LittleEndianOutput* out) override;

public: /* protected */
    int32_t getDataSize() override;

public:
    int16_t getSid() override;

    // Generated
    WindowOneRecord();
    WindowOneRecord(RecordInputStream* in);
protected:
    WindowOneRecord(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();
    int32_t serialize(int32_t offset, ::int8_tArray* data);
    ::int8_tArray* serialize();

private:
    static ::poi::util::BitField*& hidden();
    static ::poi::util::BitField*& iconic();
    static ::poi::util::BitField*& reserved();
    static ::poi::util::BitField*& hscroll();
    static ::poi::util::BitField*& vscroll();
    static ::poi::util::BitField*& tabs();
    virtual ::java::lang::Class* getClass0();
};
