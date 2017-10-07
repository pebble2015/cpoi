// Generated from /POI/java/org/apache/poi/hssf/usermodel/HSSFPrintSetup.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/hssf/usermodel/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/ss/usermodel/PrintSetup.hpp>

struct default_init_tag;

class org::apache::poi::hssf::usermodel::HSSFPrintSetup
    : public virtual ::java::lang::Object
    , public virtual ::org::apache::poi::ss::usermodel::PrintSetup
{

public:
    typedef ::java::lang::Object super;

public: /* package */
    ::org::apache::poi::hssf::record::PrintSetupRecord* printSetupRecord {  };
protected:
    void ctor(::org::apache::poi::hssf::record::PrintSetupRecord* printSetupRecord);

public:
    void setPaperSize(int16_t size) override;
    void setScale(int16_t scale) override;
    void setPageStart(int16_t start) override;
    void setFitWidth(int16_t width) override;
    void setFitHeight(int16_t height) override;
    virtual void setOptions(int16_t options);
    void setLeftToRight(bool ltor) override;
    void setLandscape(bool ls) override;
    void setValidSettings(bool valid) override;
    void setNoColor(bool mono) override;
    void setDraft(bool d) override;
    void setNotes(bool printnotes) override;
    void setNoOrientation(bool orientation) override;
    void setUsePage(bool page) override;
    void setHResolution(int16_t resolution) override;
    void setVResolution(int16_t resolution) override;
    void setHeaderMargin(double headermargin) override;
    void setFooterMargin(double footermargin) override;
    void setCopies(int16_t copies) override;
    int16_t getPaperSize() override;
    int16_t getScale() override;
    int16_t getPageStart() override;
    int16_t getFitWidth() override;
    int16_t getFitHeight() override;
    virtual int16_t getOptions();
    bool getLeftToRight() override;
    bool getLandscape() override;
    bool getValidSettings() override;
    bool getNoColor() override;
    bool getDraft() override;
    bool getNotes() override;
    bool getNoOrientation() override;
    bool getUsePage() override;
    int16_t getHResolution() override;
    int16_t getVResolution() override;
    double getHeaderMargin() override;
    double getFooterMargin() override;
    int16_t getCopies() override;

    // Generated

public: /* protected */
    HSSFPrintSetup(::org::apache::poi::hssf::record::PrintSetupRecord* printSetupRecord);
protected:
    HSSFPrintSetup(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
