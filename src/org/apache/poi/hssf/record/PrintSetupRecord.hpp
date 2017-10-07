// Generated from /POI/java/org/apache/poi/hssf/record/PrintSetupRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/StandardRecord.hpp>

struct default_init_tag;

class org::apache::poi::hssf::record::PrintSetupRecord final
    : public StandardRecord
{

public:
    typedef StandardRecord super;
    static constexpr int16_t sid { int16_t(161) };

private:
    int16_t field_1_paper_size {  };
    int16_t field_2_scale {  };
    int16_t field_3_page_start {  };
    int16_t field_4_fit_width {  };
    int16_t field_5_fit_height {  };
    int16_t field_6_options {  };
    static ::org::apache::poi::util::BitField* lefttoright_;
    static ::org::apache::poi::util::BitField* landscape_;
    static ::org::apache::poi::util::BitField* validsettings_;
    static ::org::apache::poi::util::BitField* nocolor_;
    static ::org::apache::poi::util::BitField* draft_;
    static ::org::apache::poi::util::BitField* notes_;
    static ::org::apache::poi::util::BitField* noOrientation_;
    static ::org::apache::poi::util::BitField* usepage_;
    int16_t field_7_hresolution {  };
    int16_t field_8_vresolution {  };
    double field_9_headermargin {  };
    double field_10_footermargin {  };
    int16_t field_11_copies {  };
protected:
    void ctor();
    void ctor(RecordInputStream* in);

public:
    void setPaperSize(int16_t size);
    void setScale(int16_t scale);
    void setPageStart(int16_t start);
    void setFitWidth(int16_t width);
    void setFitHeight(int16_t height);
    void setOptions(int16_t options);
    void setLeftToRight(bool ltor);
    void setLandscape(bool ls);
    void setValidSettings(bool valid);
    void setNoColor(bool mono);
    void setDraft(bool d);
    void setNotes(bool printnotes);
    void setNoOrientation(bool orientation);
    void setUsePage(bool page);
    void setHResolution(int16_t resolution);
    void setVResolution(int16_t resolution);
    void setHeaderMargin(double headermargin);
    void setFooterMargin(double footermargin);
    void setCopies(int16_t copies);
    int16_t getPaperSize();
    int16_t getScale();
    int16_t getPageStart();
    int16_t getFitWidth();
    int16_t getFitHeight();
    int16_t getOptions();
    bool getLeftToRight();
    bool getLandscape();
    bool getValidSettings();
    bool getNoColor();
    bool getDraft();
    bool getNotes();
    bool getNoOrientation();
    bool getUsePage();
    int16_t getHResolution();
    int16_t getVResolution();
    double getHeaderMargin();
    double getFooterMargin();
    int16_t getCopies();
    ::java::lang::String* toString() override;
    void serialize(::org::apache::poi::util::LittleEndianOutput* out) override;

public: /* protected */
    int32_t getDataSize() override;

public:
    int16_t getSid() override;
    ::java::lang::Object* clone() override;

    // Generated
    PrintSetupRecord();
    PrintSetupRecord(RecordInputStream* in);
protected:
    PrintSetupRecord(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();
    int32_t serialize(int32_t offset, ::int8_tArray* data);
    ::int8_tArray* serialize();

private:
    static ::org::apache::poi::util::BitField*& lefttoright();
    static ::org::apache::poi::util::BitField*& landscape();
    static ::org::apache::poi::util::BitField*& validsettings();
    static ::org::apache::poi::util::BitField*& nocolor();
    static ::org::apache::poi::util::BitField*& draft();
    static ::org::apache::poi::util::BitField*& notes();
    static ::org::apache::poi::util::BitField*& noOrientation();
    static ::org::apache::poi::util::BitField*& usepage();
    virtual ::java::lang::Class* getClass0();
};
