// Generated from /POI/java/org/apache/poi/hssf/record/aggregates/PageSettingsBlock.java

#pragma once

#include <fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/model/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/aggregates/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/aggregates/RecordAggregate.hpp>

struct default_init_tag;

class poi::hssf::record::aggregates::PageSettingsBlock final
    : public RecordAggregate
{

public:
    typedef RecordAggregate super;

private:
    ::poi::hssf::record::PageBreakRecord* _rowBreaksRecord {  };
    ::poi::hssf::record::PageBreakRecord* _columnBreaksRecord {  };
    ::poi::hssf::record::HeaderRecord* _header {  };
    ::poi::hssf::record::FooterRecord* _footer {  };
    ::poi::hssf::record::HCenterRecord* _hCenter {  };
    ::poi::hssf::record::VCenterRecord* _vCenter {  };
    ::poi::hssf::record::LeftMarginRecord* _leftMargin {  };
    ::poi::hssf::record::RightMarginRecord* _rightMargin {  };
    ::poi::hssf::record::TopMarginRecord* _topMargin {  };
    ::poi::hssf::record::BottomMarginRecord* _bottomMargin {  };
    ::java::util::List* _plsRecords {  };
    ::poi::hssf::record::PrintSetupRecord* _printSetup {  };
    ::poi::hssf::record::Record* _bitmap {  };
    ::poi::hssf::record::HeaderFooterRecord* _headerFooter {  };
    ::java::util::List* _sviewHeaderFooters {  };
    ::poi::hssf::record::Record* _printSize {  };
protected:
    void ctor(::poi::hssf::model::RecordStream* rs);
    void ctor();

public:
    static bool isComponentRecord(int32_t sid);

private:
    bool readARecord(::poi::hssf::model::RecordStream* rs);
    void checkNotPresent(::poi::hssf::record::Record* rec);
    ::poi::hssf::record::PageBreakRecord* getRowBreaksRecord();
    ::poi::hssf::record::PageBreakRecord* getColumnBreaksRecord();

public:
    void setColumnBreak(int16_t column, int16_t fromRow, int16_t toRow);
    void removeColumnBreak(int32_t column);
    void visitContainedRecords(RecordAggregate_RecordVisitor* rv) override;

private:
    static void visitIfPresent(::poi::hssf::record::Record* r, RecordAggregate_RecordVisitor* rv);
    static void visitIfPresent(::poi::hssf::record::PageBreakRecord* r, RecordAggregate_RecordVisitor* rv);
    static ::poi::hssf::record::HCenterRecord* createHCenter();
    static ::poi::hssf::record::VCenterRecord* createVCenter();
    static ::poi::hssf::record::PrintSetupRecord* createPrintSetup();

public:
    ::poi::hssf::record::HeaderRecord* getHeader();
    void setHeader(::poi::hssf::record::HeaderRecord* newHeader);
    ::poi::hssf::record::FooterRecord* getFooter();
    void setFooter(::poi::hssf::record::FooterRecord* newFooter);
    ::poi::hssf::record::PrintSetupRecord* getPrintSetup();
    void setPrintSetup(::poi::hssf::record::PrintSetupRecord* newPrintSetup);

private:
    ::poi::hssf::record::Margin* getMarginRec(int32_t marginIndex);

public:
    double getMargin(int16_t margin);
    void setMargin(int16_t margin, double size);

private:
    static void shiftBreaks(::poi::hssf::record::PageBreakRecord* breaks, int32_t start, int32_t stop, int32_t count);

public:
    void setRowBreak(int32_t row, int16_t fromCol, int16_t toCol);
    void removeRowBreak(int32_t row);
    bool isRowBroken(int32_t row);
    bool isColumnBroken(int32_t column);
    void shiftRowBreaks(int32_t startingRow, int32_t endingRow, int32_t count);
    void shiftColumnBreaks(int16_t startingCol, int16_t endingCol, int16_t count);
    ::int32_tArray* getRowBreaks();
    int32_t getNumRowBreaks();
    ::int32_tArray* getColumnBreaks();
    int32_t getNumColumnBreaks();
    ::poi::hssf::record::VCenterRecord* getVCenter();
    ::poi::hssf::record::HCenterRecord* getHCenter();
    void addLateHeaderFooter(::poi::hssf::record::HeaderFooterRecord* rec);
    void addLateRecords(::poi::hssf::model::RecordStream* rs);
    void positionRecords(::java::util::List* sheetRecords);

    // Generated
    PageSettingsBlock(::poi::hssf::model::RecordStream* rs);
    PageSettingsBlock();
protected:
    PageSettingsBlock(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    void init();
    virtual ::java::lang::Class* getClass0();
    friend class PageSettingsBlock_PLSAggregate;
    friend class PageSettingsBlock_positionRecords_1;
};
