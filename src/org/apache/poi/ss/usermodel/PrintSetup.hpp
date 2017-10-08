// Generated from /POI/java/org/apache/poi/ss/usermodel/PrintSetup.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct poi::ss::usermodel::PrintSetup
    : public virtual ::java::lang::Object
{
    static constexpr int16_t PRINTER_DEFAULT_PAPERSIZE { int16_t(0) };
    static constexpr int16_t LETTER_PAPERSIZE { int16_t(1) };
    static constexpr int16_t LETTER_SMALL_PAGESIZE { int16_t(2) };
    static constexpr int16_t TABLOID_PAPERSIZE { int16_t(3) };
    static constexpr int16_t LEDGER_PAPERSIZE { int16_t(4) };
    static constexpr int16_t LEGAL_PAPERSIZE { int16_t(5) };
    static constexpr int16_t STATEMENT_PAPERSIZE { int16_t(6) };
    static constexpr int16_t EXECUTIVE_PAPERSIZE { int16_t(7) };
    static constexpr int16_t A3_PAPERSIZE { int16_t(8) };
    static constexpr int16_t A4_PAPERSIZE { int16_t(9) };
    static constexpr int16_t A4_SMALL_PAPERSIZE { int16_t(10) };
    static constexpr int16_t A5_PAPERSIZE { int16_t(11) };
    static constexpr int16_t B4_PAPERSIZE { int16_t(12) };
    static constexpr int16_t B5_PAPERSIZE { int16_t(13) };
    static constexpr int16_t FOLIO8_PAPERSIZE { int16_t(14) };
    static constexpr int16_t QUARTO_PAPERSIZE { int16_t(15) };
    static constexpr int16_t TEN_BY_FOURTEEN_PAPERSIZE { int16_t(16) };
    static constexpr int16_t ELEVEN_BY_SEVENTEEN_PAPERSIZE { int16_t(17) };
    static constexpr int16_t NOTE8_PAPERSIZE { int16_t(18) };
    static constexpr int16_t ENVELOPE_9_PAPERSIZE { int16_t(19) };
    static constexpr int16_t ENVELOPE_10_PAPERSIZE { int16_t(20) };
    static constexpr int16_t ENVELOPE_DL_PAPERSIZE { int16_t(27) };
    static constexpr int16_t ENVELOPE_CS_PAPERSIZE { int16_t(28) };
    static constexpr int16_t ENVELOPE_C5_PAPERSIZE { int16_t(28) };
    static constexpr int16_t ENVELOPE_C3_PAPERSIZE { int16_t(29) };
    static constexpr int16_t ENVELOPE_C4_PAPERSIZE { int16_t(30) };
    static constexpr int16_t ENVELOPE_C6_PAPERSIZE { int16_t(31) };
    static constexpr int16_t ENVELOPE_MONARCH_PAPERSIZE { int16_t(37) };
    static constexpr int16_t A4_EXTRA_PAPERSIZE { int16_t(53) };
    static constexpr int16_t A4_TRANSVERSE_PAPERSIZE { int16_t(55) };
    static constexpr int16_t A4_PLUS_PAPERSIZE { int16_t(60) };
    static constexpr int16_t LETTER_ROTATED_PAPERSIZE { int16_t(75) };
    static constexpr int16_t A4_ROTATED_PAPERSIZE { int16_t(77) };
    virtual void setPaperSize(int16_t size) = 0;
    virtual void setScale(int16_t scale) = 0;
    virtual void setPageStart(int16_t start) = 0;
    virtual void setFitWidth(int16_t width) = 0;
    virtual void setFitHeight(int16_t height) = 0;
    virtual void setLeftToRight(bool ltor) = 0;
    virtual void setLandscape(bool ls) = 0;
    virtual void setValidSettings(bool valid) = 0;
    virtual void setNoColor(bool mono) = 0;
    virtual void setDraft(bool d) = 0;
    virtual void setNotes(bool printnotes) = 0;
    virtual void setNoOrientation(bool orientation) = 0;
    virtual void setUsePage(bool page) = 0;
    virtual void setHResolution(int16_t resolution) = 0;
    virtual void setVResolution(int16_t resolution) = 0;
    virtual void setHeaderMargin(double headermargin) = 0;
    virtual void setFooterMargin(double footermargin) = 0;
    virtual void setCopies(int16_t copies) = 0;
    virtual int16_t getPaperSize() = 0;
    virtual int16_t getScale() = 0;
    virtual int16_t getPageStart() = 0;
    virtual int16_t getFitWidth() = 0;
    virtual int16_t getFitHeight() = 0;
    virtual bool getLeftToRight() = 0;
    virtual bool getLandscape() = 0;
    virtual bool getValidSettings() = 0;
    virtual bool getNoColor() = 0;
    virtual bool getDraft() = 0;
    virtual bool getNotes() = 0;
    virtual bool getNoOrientation() = 0;
    virtual bool getUsePage() = 0;
    virtual int16_t getHResolution() = 0;
    virtual int16_t getVResolution() = 0;
    virtual double getHeaderMargin() = 0;
    virtual double getFooterMargin() = 0;
    virtual int16_t getCopies() = 0;

    // Generated
    static ::java::lang::Class *class_();
};
