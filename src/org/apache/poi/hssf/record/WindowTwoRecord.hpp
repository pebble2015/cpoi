// Generated from /POI/java/org/apache/poi/hssf/record/WindowTwoRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/StandardRecord.hpp>

struct default_init_tag;

class poi::hssf::record::WindowTwoRecord final
    : public StandardRecord
{

public:
    typedef StandardRecord super;
    static constexpr int16_t sid { int16_t(574) };

private:
    static ::poi::util::BitField* displayFormulas_;
    static ::poi::util::BitField* displayGridlines_;
    static ::poi::util::BitField* displayRowColHeadings_;
    static ::poi::util::BitField* freezePanes_;
    static ::poi::util::BitField* displayZeros_;
    static ::poi::util::BitField* defaultHeader_;
    static ::poi::util::BitField* arabic_;
    static ::poi::util::BitField* displayGuts_;
    static ::poi::util::BitField* freezePanesNoSplit_;
    static ::poi::util::BitField* selected_;
    static ::poi::util::BitField* active_;
    static ::poi::util::BitField* savedInPageBreakPreview_;
    int16_t field_1_options {  };
    int16_t field_2_top_row {  };
    int16_t field_3_left_col {  };
    int32_t field_4_header_color {  };
    int16_t field_5_page_break_zoom {  };
    int16_t field_6_normal_zoom {  };
    int32_t field_7_reserved {  };
protected:
    void ctor();
    void ctor(RecordInputStream* in);

public:
    void setOptions(int16_t options);
    void setDisplayFormulas(bool formulas);
    void setDisplayGridlines(bool gridlines);
    void setDisplayRowColHeadings(bool headings);
    void setFreezePanes(bool freezepanes);
    void setDisplayZeros(bool zeros);
    void setDefaultHeader(bool header);
    void setArabic(bool isarabic);
    void setDisplayGuts(bool guts);
    void setFreezePanesNoSplit(bool freeze);
    void setSelected(bool sel);
    void setActive(bool p);
    void setSavedInPageBreakPreview(bool p);
    void setTopRow(int16_t topRow);
    void setLeftCol(int16_t leftCol);
    void setHeaderColor(int32_t color);
    void setPageBreakZoom(int16_t zoom);
    void setNormalZoom(int16_t zoom);
    void setReserved(int32_t reserved);
    int16_t getOptions();
    bool getDisplayFormulas();
    bool getDisplayGridlines();
    bool getDisplayRowColHeadings();
    bool getFreezePanes();
    bool getDisplayZeros();
    bool getDefaultHeader();
    bool getArabic();
    bool getDisplayGuts();
    bool getFreezePanesNoSplit();
    bool getSelected();
    bool isActive();
    bool getSavedInPageBreakPreview();
    int16_t getTopRow();
    int16_t getLeftCol();
    int32_t getHeaderColor();
    int16_t getPageBreakZoom();
    int16_t getNormalZoom();
    int32_t getReserved();
    ::java::lang::String* toString() override;
    void serialize(::poi::util::LittleEndianOutput* out) override;

public: /* protected */
    int32_t getDataSize() override;

public:
    int16_t getSid() override;
    ::java::lang::Object* clone() override;

    // Generated
    WindowTwoRecord();
    WindowTwoRecord(RecordInputStream* in);
protected:
    WindowTwoRecord(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();
    int32_t serialize(int32_t offset, ::int8_tArray* data);
    ::int8_tArray* serialize();

private:
    static ::poi::util::BitField*& displayFormulas();
    static ::poi::util::BitField*& displayGridlines();
    static ::poi::util::BitField*& displayRowColHeadings();
    static ::poi::util::BitField*& freezePanes();
    static ::poi::util::BitField*& displayZeros();
    static ::poi::util::BitField*& defaultHeader();
    static ::poi::util::BitField*& arabic();
    static ::poi::util::BitField*& displayGuts();
    static ::poi::util::BitField*& freezePanesNoSplit();
    static ::poi::util::BitField*& selected();
    static ::poi::util::BitField*& active();
    static ::poi::util::BitField*& savedInPageBreakPreview();
    virtual ::java::lang::Class* getClass0();
};
