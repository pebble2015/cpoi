// Generated from /POI/java/org/apache/poi/hssf/record/aggregates/PageSettingsBlock.java
#include <org/apache/poi/hssf/record/aggregates/PageSettingsBlock.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/IllegalStateException.hpp>
#include <java/lang/Integer.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/util/ArrayList.hpp>
#include <java/util/Collection.hpp>
#include <java/util/HashMap.hpp>
#include <java/util/Iterator.hpp>
#include <java/util/List.hpp>
#include <java/util/Map.hpp>
#include <org/apache/poi/hssf/model/InternalSheet.hpp>
#include <org/apache/poi/hssf/model/RecordStream.hpp>
#include <org/apache/poi/hssf/record/BottomMarginRecord.hpp>
#include <org/apache/poi/hssf/record/FooterRecord.hpp>
#include <org/apache/poi/hssf/record/HCenterRecord.hpp>
#include <org/apache/poi/hssf/record/HeaderFooterRecord.hpp>
#include <org/apache/poi/hssf/record/HeaderRecord.hpp>
#include <org/apache/poi/hssf/record/HorizontalPageBreakRecord.hpp>
#include <org/apache/poi/hssf/record/LeftMarginRecord.hpp>
#include <org/apache/poi/hssf/record/Margin.hpp>
#include <org/apache/poi/hssf/record/PageBreakRecord_Break.hpp>
#include <org/apache/poi/hssf/record/PageBreakRecord.hpp>
#include <org/apache/poi/hssf/record/PrintSetupRecord.hpp>
#include <org/apache/poi/hssf/record/Record.hpp>
#include <org/apache/poi/hssf/record/RecordBase.hpp>
#include <org/apache/poi/hssf/record/RightMarginRecord.hpp>
#include <org/apache/poi/hssf/record/TopMarginRecord.hpp>
#include <org/apache/poi/hssf/record/UnknownRecord.hpp>
#include <org/apache/poi/hssf/record/VCenterRecord.hpp>
#include <org/apache/poi/hssf/record/VerticalPageBreakRecord.hpp>
#include <org/apache/poi/hssf/record/aggregates/CustomViewSettingsRecordAggregate.hpp>
#include <org/apache/poi/hssf/record/aggregates/PageSettingsBlock_positionRecords_1.hpp>
#include <org/apache/poi/hssf/record/aggregates/PageSettingsBlock_PLSAggregate.hpp>
#include <org/apache/poi/hssf/record/aggregates/RecordAggregate_RecordVisitor.hpp>
#include <org/apache/poi/hssf/record/aggregates/RecordAggregate.hpp>
#include <org/apache/poi/util/HexDump.hpp>
#include <org/apache/poi/util/RecordFormatException.hpp>
#include <Array.hpp>

template<typename T, typename U>
static T java_cast(U* u)
{
    if(!u) return static_cast<T>(nullptr);
    auto t = dynamic_cast<T>(u);
    if(!t) throw new ::java::lang::ClassCastException();
    return t;
}

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::hssf::record::aggregates::PageSettingsBlock::PageSettingsBlock(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::record::aggregates::PageSettingsBlock::PageSettingsBlock(::org::apache::poi::hssf::model::RecordStream* rs) 
    : PageSettingsBlock(*static_cast< ::default_init_tag* >(0))
{
    ctor(rs);
}

org::apache::poi::hssf::record::aggregates::PageSettingsBlock::PageSettingsBlock() 
    : PageSettingsBlock(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void org::apache::poi::hssf::record::aggregates::PageSettingsBlock::init()
{
    _sviewHeaderFooters = new ::java::util::ArrayList();
}

void org::apache::poi::hssf::record::aggregates::PageSettingsBlock::ctor(::org::apache::poi::hssf::model::RecordStream* rs)
{
    super::ctor();
    init();
    _plsRecords = new ::java::util::ArrayList();
    while (true) {
        if(!readARecord(rs)) {
            break;
        }
    }
}

void org::apache::poi::hssf::record::aggregates::PageSettingsBlock::ctor()
{
    super::ctor();
    init();
    _plsRecords = new ::java::util::ArrayList();
    _rowBreaksRecord = new ::org::apache::poi::hssf::record::HorizontalPageBreakRecord();
    _columnBreaksRecord = new ::org::apache::poi::hssf::record::VerticalPageBreakRecord();
    _header = new ::org::apache::poi::hssf::record::HeaderRecord(u""_j);
    _footer = new ::org::apache::poi::hssf::record::FooterRecord(u""_j);
    _hCenter = createHCenter();
    _vCenter = createVCenter();
    _printSetup = createPrintSetup();
}

bool org::apache::poi::hssf::record::aggregates::PageSettingsBlock::isComponentRecord(int32_t sid)
{
    clinit();
    switch (sid) {
    case ::org::apache::poi::hssf::record::HorizontalPageBreakRecord::sid:
    case ::org::apache::poi::hssf::record::VerticalPageBreakRecord::sid:
    case ::org::apache::poi::hssf::record::HeaderRecord::sid:
    case ::org::apache::poi::hssf::record::FooterRecord::sid:
    case ::org::apache::poi::hssf::record::HCenterRecord::sid:
    case ::org::apache::poi::hssf::record::VCenterRecord::sid:
    case ::org::apache::poi::hssf::record::LeftMarginRecord::sid:
    case ::org::apache::poi::hssf::record::RightMarginRecord::sid:
    case ::org::apache::poi::hssf::record::TopMarginRecord::sid:
    case ::org::apache::poi::hssf::record::BottomMarginRecord::sid:
    case ::org::apache::poi::hssf::record::UnknownRecord::PLS_004D:
    case ::org::apache::poi::hssf::record::PrintSetupRecord::sid:
    case ::org::apache::poi::hssf::record::UnknownRecord::BITMAP_00E9:
    case ::org::apache::poi::hssf::record::UnknownRecord::PRINTSIZE_0033:
    case ::org::apache::poi::hssf::record::HeaderFooterRecord::sid:
        return true;
    }

    return false;
}

bool org::apache::poi::hssf::record::aggregates::PageSettingsBlock::readARecord(::org::apache::poi::hssf::model::RecordStream* rs)
{
    {
        ::org::apache::poi::hssf::record::HeaderFooterRecord* hf;
        switch (npc(rs)->peekNextSid()) {
        case ::org::apache::poi::hssf::record::HorizontalPageBreakRecord::sid:
            checkNotPresent(_rowBreaksRecord);
            _rowBreaksRecord = java_cast< ::org::apache::poi::hssf::record::PageBreakRecord* >(npc(rs)->getNext());
            break;
        case ::org::apache::poi::hssf::record::VerticalPageBreakRecord::sid:
            checkNotPresent(_columnBreaksRecord);
            _columnBreaksRecord = java_cast< ::org::apache::poi::hssf::record::PageBreakRecord* >(npc(rs)->getNext());
            break;
        case ::org::apache::poi::hssf::record::HeaderRecord::sid:
            checkNotPresent(_header);
            _header = java_cast< ::org::apache::poi::hssf::record::HeaderRecord* >(npc(rs)->getNext());
            break;
        case ::org::apache::poi::hssf::record::FooterRecord::sid:
            checkNotPresent(_footer);
            _footer = java_cast< ::org::apache::poi::hssf::record::FooterRecord* >(npc(rs)->getNext());
            break;
        case ::org::apache::poi::hssf::record::HCenterRecord::sid:
            checkNotPresent(_hCenter);
            _hCenter = java_cast< ::org::apache::poi::hssf::record::HCenterRecord* >(npc(rs)->getNext());
            break;
        case ::org::apache::poi::hssf::record::VCenterRecord::sid:
            checkNotPresent(_vCenter);
            _vCenter = java_cast< ::org::apache::poi::hssf::record::VCenterRecord* >(npc(rs)->getNext());
            break;
        case ::org::apache::poi::hssf::record::LeftMarginRecord::sid:
            checkNotPresent(_leftMargin);
            _leftMargin = java_cast< ::org::apache::poi::hssf::record::LeftMarginRecord* >(npc(rs)->getNext());
            break;
        case ::org::apache::poi::hssf::record::RightMarginRecord::sid:
            checkNotPresent(_rightMargin);
            _rightMargin = java_cast< ::org::apache::poi::hssf::record::RightMarginRecord* >(npc(rs)->getNext());
            break;
        case ::org::apache::poi::hssf::record::TopMarginRecord::sid:
            checkNotPresent(_topMargin);
            _topMargin = java_cast< ::org::apache::poi::hssf::record::TopMarginRecord* >(npc(rs)->getNext());
            break;
        case ::org::apache::poi::hssf::record::BottomMarginRecord::sid:
            checkNotPresent(_bottomMargin);
            _bottomMargin = java_cast< ::org::apache::poi::hssf::record::BottomMarginRecord* >(npc(rs)->getNext());
            break;
        case ::org::apache::poi::hssf::record::UnknownRecord::PLS_004D:
            npc(_plsRecords)->add(static_cast< ::java::lang::Object* >(new PageSettingsBlock_PLSAggregate(rs)));
            break;
        case ::org::apache::poi::hssf::record::PrintSetupRecord::sid:
            checkNotPresent(_printSetup);
            _printSetup = java_cast< ::org::apache::poi::hssf::record::PrintSetupRecord* >(npc(rs)->getNext());
            break;
        case ::org::apache::poi::hssf::record::UnknownRecord::BITMAP_00E9:
            checkNotPresent(_bitmap);
            _bitmap = npc(rs)->getNext();
            break;
        case ::org::apache::poi::hssf::record::UnknownRecord::PRINTSIZE_0033:
            checkNotPresent(_printSize);
            _printSize = npc(rs)->getNext();
            break;
        case ::org::apache::poi::hssf::record::HeaderFooterRecord::sid:
            hf = java_cast< ::org::apache::poi::hssf::record::HeaderFooterRecord* >(npc(rs)->getNext());
            if(npc(hf)->isCurrentSheet()) {
                _headerFooter = hf;
            } else {
                npc(_sviewHeaderFooters)->add(static_cast< ::java::lang::Object* >(hf));
            }
            break;
        default:
            return false;
        }
    }

    return true;
}

void org::apache::poi::hssf::record::aggregates::PageSettingsBlock::checkNotPresent(::org::apache::poi::hssf::record::Record* rec)
{
    if(rec != nullptr) {
        throw new ::org::apache::poi::util::RecordFormatException(::java::lang::StringBuilder().append(u"Duplicate PageSettingsBlock record (sid=0x"_j)->append(::java::lang::Integer::toHexString(npc(rec)->getSid()))
            ->append(u")"_j)->toString());
    }
}

org::apache::poi::hssf::record::PageBreakRecord* org::apache::poi::hssf::record::aggregates::PageSettingsBlock::getRowBreaksRecord()
{
    if(_rowBreaksRecord == nullptr) {
        _rowBreaksRecord = new ::org::apache::poi::hssf::record::HorizontalPageBreakRecord();
    }
    return _rowBreaksRecord;
}

org::apache::poi::hssf::record::PageBreakRecord* org::apache::poi::hssf::record::aggregates::PageSettingsBlock::getColumnBreaksRecord()
{
    if(_columnBreaksRecord == nullptr) {
        _columnBreaksRecord = new ::org::apache::poi::hssf::record::VerticalPageBreakRecord();
    }
    return _columnBreaksRecord;
}

void org::apache::poi::hssf::record::aggregates::PageSettingsBlock::setColumnBreak(int16_t column, int16_t fromRow, int16_t toRow)
{
    npc(getColumnBreaksRecord())->addBreak(column, fromRow, toRow);
}

void org::apache::poi::hssf::record::aggregates::PageSettingsBlock::removeColumnBreak(int32_t column)
{
    npc(getColumnBreaksRecord())->removeBreak(column);
}

void org::apache::poi::hssf::record::aggregates::PageSettingsBlock::visitContainedRecords(RecordAggregate_RecordVisitor* rv)
{
    visitIfPresent(_rowBreaksRecord, rv);
    visitIfPresent(_columnBreaksRecord, rv);
    if(_header == nullptr) {
        npc(rv)->visitRecord(new ::org::apache::poi::hssf::record::HeaderRecord(u""_j));
    } else {
        npc(rv)->visitRecord(_header);
    }
    if(_footer == nullptr) {
        npc(rv)->visitRecord(new ::org::apache::poi::hssf::record::FooterRecord(u""_j));
    } else {
        npc(rv)->visitRecord(_footer);
    }
    visitIfPresent(static_cast< ::org::apache::poi::hssf::record::Record* >(_hCenter), rv);
    visitIfPresent(static_cast< ::org::apache::poi::hssf::record::Record* >(_vCenter), rv);
    visitIfPresent(static_cast< ::org::apache::poi::hssf::record::Record* >(_leftMargin), rv);
    visitIfPresent(static_cast< ::org::apache::poi::hssf::record::Record* >(_rightMargin), rv);
    visitIfPresent(static_cast< ::org::apache::poi::hssf::record::Record* >(_topMargin), rv);
    visitIfPresent(static_cast< ::org::apache::poi::hssf::record::Record* >(_bottomMargin), rv);
    for (auto _i = npc(_plsRecords)->iterator(); _i->hasNext(); ) {
        RecordAggregate* pls = java_cast< RecordAggregate* >(_i->next());
        {
            npc(pls)->visitContainedRecords(rv);
        }
    }
    visitIfPresent(static_cast< ::org::apache::poi::hssf::record::Record* >(_printSetup), rv);
    visitIfPresent(_printSize, rv);
    visitIfPresent(static_cast< ::org::apache::poi::hssf::record::Record* >(_headerFooter), rv);
    visitIfPresent(_bitmap, rv);
}

void org::apache::poi::hssf::record::aggregates::PageSettingsBlock::visitIfPresent(::org::apache::poi::hssf::record::Record* r, RecordAggregate_RecordVisitor* rv)
{
    clinit();
    if(r != nullptr) {
        npc(rv)->visitRecord(r);
    }
}

void org::apache::poi::hssf::record::aggregates::PageSettingsBlock::visitIfPresent(::org::apache::poi::hssf::record::PageBreakRecord* r, RecordAggregate_RecordVisitor* rv)
{
    clinit();
    if(r != nullptr) {
        if(npc(r)->isEmpty()) {
            return;
        }
        npc(rv)->visitRecord(r);
    }
}

org::apache::poi::hssf::record::HCenterRecord* org::apache::poi::hssf::record::aggregates::PageSettingsBlock::createHCenter()
{
    clinit();
    auto retval = new ::org::apache::poi::hssf::record::HCenterRecord();
    npc(retval)->setHCenter(false);
    return retval;
}

org::apache::poi::hssf::record::VCenterRecord* org::apache::poi::hssf::record::aggregates::PageSettingsBlock::createVCenter()
{
    clinit();
    auto retval = new ::org::apache::poi::hssf::record::VCenterRecord();
    npc(retval)->setVCenter(false);
    return retval;
}

org::apache::poi::hssf::record::PrintSetupRecord* org::apache::poi::hssf::record::aggregates::PageSettingsBlock::createPrintSetup()
{
    clinit();
    auto retval = new ::org::apache::poi::hssf::record::PrintSetupRecord();
    npc(retval)->setPaperSize(static_cast< int16_t >(int32_t(1)));
    npc(retval)->setScale(static_cast< int16_t >(int32_t(100)));
    npc(retval)->setPageStart(static_cast< int16_t >(int32_t(1)));
    npc(retval)->setFitWidth(static_cast< int16_t >(int32_t(1)));
    npc(retval)->setFitHeight(static_cast< int16_t >(int32_t(1)));
    npc(retval)->setOptions(static_cast< int16_t >(int32_t(2)));
    npc(retval)->setHResolution(static_cast< int16_t >(int32_t(300)));
    npc(retval)->setVResolution(static_cast< int16_t >(int32_t(300)));
    npc(retval)->setHeaderMargin(0.5);
    npc(retval)->setFooterMargin(0.5);
    npc(retval)->setCopies(static_cast< int16_t >(int32_t(1)));
    return retval;
}

org::apache::poi::hssf::record::HeaderRecord* org::apache::poi::hssf::record::aggregates::PageSettingsBlock::getHeader()
{
    return _header;
}

void org::apache::poi::hssf::record::aggregates::PageSettingsBlock::setHeader(::org::apache::poi::hssf::record::HeaderRecord* newHeader)
{
    _header = newHeader;
}

org::apache::poi::hssf::record::FooterRecord* org::apache::poi::hssf::record::aggregates::PageSettingsBlock::getFooter()
{
    return _footer;
}

void org::apache::poi::hssf::record::aggregates::PageSettingsBlock::setFooter(::org::apache::poi::hssf::record::FooterRecord* newFooter)
{
    _footer = newFooter;
}

org::apache::poi::hssf::record::PrintSetupRecord* org::apache::poi::hssf::record::aggregates::PageSettingsBlock::getPrintSetup()
{
    return _printSetup;
}

void org::apache::poi::hssf::record::aggregates::PageSettingsBlock::setPrintSetup(::org::apache::poi::hssf::record::PrintSetupRecord* newPrintSetup)
{
    _printSetup = newPrintSetup;
}

org::apache::poi::hssf::record::Margin* org::apache::poi::hssf::record::aggregates::PageSettingsBlock::getMarginRec(int32_t marginIndex)
{
    switch (marginIndex) {
    case ::org::apache::poi::hssf::model::InternalSheet::LeftMargin:
        return _leftMargin;
    case ::org::apache::poi::hssf::model::InternalSheet::RightMargin:
        return _rightMargin;
    case ::org::apache::poi::hssf::model::InternalSheet::TopMargin:
        return _topMargin;
    case ::org::apache::poi::hssf::model::InternalSheet::BottomMargin:
        return _bottomMargin;
    }

    throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(u"Unknown margin constant:  "_j)->append(marginIndex)->toString());
}

double org::apache::poi::hssf::record::aggregates::PageSettingsBlock::getMargin(int16_t margin)
{
    auto m = getMarginRec(margin);
    if(m != nullptr) {
        return npc(m)->getMargin();
    }
    switch (margin) {
    case ::org::apache::poi::hssf::model::InternalSheet::LeftMargin:
        return 0.75;
    case ::org::apache::poi::hssf::model::InternalSheet::RightMargin:
        return 0.75;
    case ::org::apache::poi::hssf::model::InternalSheet::TopMargin:
        return 1.0;
    case ::org::apache::poi::hssf::model::InternalSheet::BottomMargin:
        return 1.0;
    }

    throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(u"Unknown margin constant:  "_j)->append(margin)->toString());
}

void org::apache::poi::hssf::record::aggregates::PageSettingsBlock::setMargin(int16_t margin, double size)
{
    auto m = getMarginRec(margin);
    if(m == nullptr) {
        switch (margin) {
        case ::org::apache::poi::hssf::model::InternalSheet::LeftMargin:
            _leftMargin = new ::org::apache::poi::hssf::record::LeftMarginRecord();
            m = _leftMargin;
            break;
        case ::org::apache::poi::hssf::model::InternalSheet::RightMargin:
            _rightMargin = new ::org::apache::poi::hssf::record::RightMarginRecord();
            m = _rightMargin;
            break;
        case ::org::apache::poi::hssf::model::InternalSheet::TopMargin:
            _topMargin = new ::org::apache::poi::hssf::record::TopMarginRecord();
            m = _topMargin;
            break;
        case ::org::apache::poi::hssf::model::InternalSheet::BottomMargin:
            _bottomMargin = new ::org::apache::poi::hssf::record::BottomMarginRecord();
            m = _bottomMargin;
            break;
        default:
            throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(u"Unknown margin constant:  "_j)->append(margin)->toString());
        }

    }
    npc(m)->setMargin(size);
}

void org::apache::poi::hssf::record::aggregates::PageSettingsBlock::shiftBreaks(::org::apache::poi::hssf::record::PageBreakRecord* breaks, int32_t start, int32_t stop, int32_t count)
{
    clinit();
    auto iterator = npc(breaks)->getBreaksIterator();
    ::java::util::List* shiftedBreak = new ::java::util::ArrayList();
    while (npc(iterator)->hasNext()) {
        auto breakItem = java_cast< ::org::apache::poi::hssf::record::PageBreakRecord_Break* >(npc(iterator)->next());
        auto breakLocation = npc(breakItem)->main;
        auto inStart = (breakLocation >= start);
        auto inEnd = (breakLocation <= stop);
        if(inStart && inEnd) {
            npc(shiftedBreak)->add(static_cast< ::java::lang::Object* >(breakItem));
        }
    }
    iterator = npc(shiftedBreak)->iterator();
    while (npc(iterator)->hasNext()) {
        auto breakItem = java_cast< ::org::apache::poi::hssf::record::PageBreakRecord_Break* >(npc(iterator)->next());
        npc(breaks)->removeBreak(npc(breakItem)->main);
        npc(breaks)->addBreak(static_cast< int16_t >((npc(breakItem)->main + count)), npc(breakItem)->subFrom, npc(breakItem)->subTo);
    }
}

void org::apache::poi::hssf::record::aggregates::PageSettingsBlock::setRowBreak(int32_t row, int16_t fromCol, int16_t toCol)
{
    npc(getRowBreaksRecord())->addBreak(static_cast< int16_t >(row), fromCol, toCol);
}

void org::apache::poi::hssf::record::aggregates::PageSettingsBlock::removeRowBreak(int32_t row)
{
    if(npc(npc(getRowBreaksRecord())->getBreaks())->length < 1) {
        throw new ::java::lang::IllegalArgumentException(u"Sheet does not define any row breaks"_j);
    }
    npc(getRowBreaksRecord())->removeBreak(static_cast< int16_t >(row));
}

bool org::apache::poi::hssf::record::aggregates::PageSettingsBlock::isRowBroken(int32_t row)
{
    return npc(getRowBreaksRecord())->getBreak(row) != nullptr;
}

bool org::apache::poi::hssf::record::aggregates::PageSettingsBlock::isColumnBroken(int32_t column)
{
    return npc(getColumnBreaksRecord())->getBreak(column) != nullptr;
}

void org::apache::poi::hssf::record::aggregates::PageSettingsBlock::shiftRowBreaks(int32_t startingRow, int32_t endingRow, int32_t count)
{
    shiftBreaks(getRowBreaksRecord(), startingRow, endingRow, count);
}

void org::apache::poi::hssf::record::aggregates::PageSettingsBlock::shiftColumnBreaks(int16_t startingCol, int16_t endingCol, int16_t count)
{
    shiftBreaks(getColumnBreaksRecord(), startingCol, endingCol, count);
}

int32_tArray* org::apache::poi::hssf::record::aggregates::PageSettingsBlock::getRowBreaks()
{
    return npc(getRowBreaksRecord())->getBreaks();
}

int32_t org::apache::poi::hssf::record::aggregates::PageSettingsBlock::getNumRowBreaks()
{
    return npc(getRowBreaksRecord())->getNumBreaks();
}

int32_tArray* org::apache::poi::hssf::record::aggregates::PageSettingsBlock::getColumnBreaks()
{
    return npc(getColumnBreaksRecord())->getBreaks();
}

int32_t org::apache::poi::hssf::record::aggregates::PageSettingsBlock::getNumColumnBreaks()
{
    return npc(getColumnBreaksRecord())->getNumBreaks();
}

org::apache::poi::hssf::record::VCenterRecord* org::apache::poi::hssf::record::aggregates::PageSettingsBlock::getVCenter()
{
    return _vCenter;
}

org::apache::poi::hssf::record::HCenterRecord* org::apache::poi::hssf::record::aggregates::PageSettingsBlock::getHCenter()
{
    return _hCenter;
}

void org::apache::poi::hssf::record::aggregates::PageSettingsBlock::addLateHeaderFooter(::org::apache::poi::hssf::record::HeaderFooterRecord* rec)
{
    if(_headerFooter != nullptr) {
        throw new ::java::lang::IllegalStateException(u"This page settings block already has a header/footer record"_j);
    }
    if(npc(rec)->getSid() != ::org::apache::poi::hssf::record::HeaderFooterRecord::sid) {
        throw new ::org::apache::poi::util::RecordFormatException(::java::lang::StringBuilder().append(u"Unexpected header-footer record sid: 0x"_j)->append(::java::lang::Integer::toHexString(npc(rec)->getSid()))->toString());
    }
    _headerFooter = rec;
}

void org::apache::poi::hssf::record::aggregates::PageSettingsBlock::addLateRecords(::org::apache::poi::hssf::model::RecordStream* rs)
{
    while (true) {
        if(!readARecord(rs)) {
            break;
        }
    }
}

void org::apache::poi::hssf::record::aggregates::PageSettingsBlock::positionRecords(::java::util::List* sheetRecords)
{
    ::java::util::List* hfRecordsToIterate = new ::java::util::ArrayList(static_cast< ::java::util::Collection* >(_sviewHeaderFooters));
    ::java::util::Map* const hfGuidMap = new ::java::util::HashMap();
    for (auto _i = npc(hfRecordsToIterate)->iterator(); _i->hasNext(); ) {
        ::org::apache::poi::hssf::record::HeaderFooterRecord* hf = java_cast< ::org::apache::poi::hssf::record::HeaderFooterRecord* >(_i->next());
        {
            npc(hfGuidMap)->put(::org::apache::poi::util::HexDump::toHex(npc(hf)->getGuid()), hf);
        }
    }
    for (auto _i = npc(sheetRecords)->iterator(); _i->hasNext(); ) {
        ::org::apache::poi::hssf::record::RecordBase* rb = java_cast< ::org::apache::poi::hssf::record::RecordBase* >(_i->next());
        {
            if(dynamic_cast< CustomViewSettingsRecordAggregate* >(rb) != nullptr) {
                auto const cv = java_cast< CustomViewSettingsRecordAggregate* >(rb);
                npc(cv)->visitContainedRecords(static_cast< RecordAggregate_RecordVisitor* >(new PageSettingsBlock_positionRecords_1(this, hfGuidMap, cv)));
            }
        }
    }
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::record::aggregates::PageSettingsBlock::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.aggregates.PageSettingsBlock", 55);
    return c;
}

java::lang::Class* org::apache::poi::hssf::record::aggregates::PageSettingsBlock::getClass0()
{
    return class_();
}

