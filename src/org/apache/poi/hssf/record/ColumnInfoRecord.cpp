// Generated from /POI/java/org/apache/poi/hssf/record/ColumnInfoRecord.java
#include <org/apache/poi/hssf/record/ColumnInfoRecord.hpp>

#include <java/lang/NullPointerException.hpp>
#include <java/lang/RuntimeException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <org/apache/poi/hssf/record/RecordInputStream.hpp>
#include <org/apache/poi/util/BitField.hpp>
#include <org/apache/poi/util/BitFieldFactory.hpp>
#include <org/apache/poi/util/HexDump.hpp>
#include <org/apache/poi/util/LittleEndianOutput.hpp>
#include <Array.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::hssf::record::ColumnInfoRecord::ColumnInfoRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::record::ColumnInfoRecord::ColumnInfoRecord() 
    : ColumnInfoRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::hssf::record::ColumnInfoRecord::ColumnInfoRecord(RecordInputStream* in) 
    : ColumnInfoRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int16_t org::apache::poi::hssf::record::ColumnInfoRecord::sid;

org::apache::poi::util::BitField*& org::apache::poi::hssf::record::ColumnInfoRecord::hidden()
{
    clinit();
    return hidden_;
}
org::apache::poi::util::BitField* org::apache::poi::hssf::record::ColumnInfoRecord::hidden_;

org::apache::poi::util::BitField*& org::apache::poi::hssf::record::ColumnInfoRecord::outlevel()
{
    clinit();
    return outlevel_;
}
org::apache::poi::util::BitField* org::apache::poi::hssf::record::ColumnInfoRecord::outlevel_;

org::apache::poi::util::BitField*& org::apache::poi::hssf::record::ColumnInfoRecord::collapsed()
{
    clinit();
    return collapsed_;
}
org::apache::poi::util::BitField* org::apache::poi::hssf::record::ColumnInfoRecord::collapsed_;

void org::apache::poi::hssf::record::ColumnInfoRecord::ctor()
{
    super::ctor();
    setColumnWidth(2275);
    _options = 2;
    _xfIndex = 15;
    field_6_reserved = 2;
}

void org::apache::poi::hssf::record::ColumnInfoRecord::ctor(RecordInputStream* in)
{
    super::ctor();
    _firstCol = npc(in)->readUShort();
    _lastCol = npc(in)->readUShort();
    _colWidth = npc(in)->readUShort();
    _xfIndex = npc(in)->readUShort();
    _options = npc(in)->readUShort();
    switch (npc(in)->remaining()) {
    case int32_t(2):
        field_6_reserved = npc(in)->readUShort();
        break;
    case int32_t(1):
        field_6_reserved = npc(in)->readByte();
        break;
    case int32_t(0):
        field_6_reserved = 0;
        break;
    default:
        throw new ::java::lang::RuntimeException(::java::lang::StringBuilder().append(u"Unusual record size remaining=("_j)->append(npc(in)->remaining())
            ->append(u")"_j)->toString());
    }

}

void org::apache::poi::hssf::record::ColumnInfoRecord::setFirstColumn(int32_t fc)
{
    _firstCol = fc;
}

void org::apache::poi::hssf::record::ColumnInfoRecord::setLastColumn(int32_t lc)
{
    _lastCol = lc;
}

void org::apache::poi::hssf::record::ColumnInfoRecord::setColumnWidth(int32_t cw)
{
    _colWidth = cw;
}

void org::apache::poi::hssf::record::ColumnInfoRecord::setXFIndex(int32_t xfi)
{
    _xfIndex = xfi;
}

void org::apache::poi::hssf::record::ColumnInfoRecord::setHidden(bool ishidden)
{
    _options = npc(hidden_)->setBoolean(_options, ishidden);
}

void org::apache::poi::hssf::record::ColumnInfoRecord::setOutlineLevel(int32_t olevel)
{
    _options = npc(outlevel_)->setValue(_options, olevel);
}

void org::apache::poi::hssf::record::ColumnInfoRecord::setCollapsed(bool isCollapsed)
{
    _options = npc(collapsed_)->setBoolean(_options, isCollapsed);
}

int32_t org::apache::poi::hssf::record::ColumnInfoRecord::getFirstColumn()
{
    return _firstCol;
}

int32_t org::apache::poi::hssf::record::ColumnInfoRecord::getLastColumn()
{
    return _lastCol;
}

int32_t org::apache::poi::hssf::record::ColumnInfoRecord::getColumnWidth()
{
    return _colWidth;
}

int32_t org::apache::poi::hssf::record::ColumnInfoRecord::getXFIndex()
{
    return _xfIndex;
}

bool org::apache::poi::hssf::record::ColumnInfoRecord::getHidden()
{
    return npc(hidden_)->isSet(_options);
}

int32_t org::apache::poi::hssf::record::ColumnInfoRecord::getOutlineLevel()
{
    return npc(outlevel_)->getValue(_options);
}

bool org::apache::poi::hssf::record::ColumnInfoRecord::getCollapsed()
{
    return npc(collapsed_)->isSet(_options);
}

bool org::apache::poi::hssf::record::ColumnInfoRecord::containsColumn(int32_t columnIndex)
{
    return _firstCol <= columnIndex && columnIndex <= _lastCol;
}

bool org::apache::poi::hssf::record::ColumnInfoRecord::isAdjacentBefore(ColumnInfoRecord* other)
{
    return _lastCol == npc(other)->_firstCol - int32_t(1);
}

bool org::apache::poi::hssf::record::ColumnInfoRecord::formatMatches(ColumnInfoRecord* other)
{
    if(_xfIndex != npc(other)->_xfIndex) {
        return false;
    }
    if(_options != npc(other)->_options) {
        return false;
    }
    if(_colWidth != npc(other)->_colWidth) {
        return false;
    }
    return true;
}

int16_t org::apache::poi::hssf::record::ColumnInfoRecord::getSid()
{
    return sid;
}

void org::apache::poi::hssf::record::ColumnInfoRecord::serialize(::org::apache::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeShort(getFirstColumn());
    npc(out)->writeShort(getLastColumn());
    npc(out)->writeShort(getColumnWidth());
    npc(out)->writeShort(getXFIndex());
    npc(out)->writeShort(_options);
    npc(out)->writeShort(field_6_reserved);
}

int32_t org::apache::poi::hssf::record::ColumnInfoRecord::getDataSize()
{
    return 12;
}

java::lang::String* org::apache::poi::hssf::record::ColumnInfoRecord::toString()
{
    auto sb = new ::java::lang::StringBuilder();
    npc(sb)->append(u"[COLINFO]\n"_j);
    npc(npc(npc(sb)->append(u"  colfirst = "_j))->append(getFirstColumn()))->append(u"\n"_j);
    npc(npc(npc(sb)->append(u"  collast  = "_j))->append(getLastColumn()))->append(u"\n"_j);
    npc(npc(npc(sb)->append(u"  colwidth = "_j))->append(getColumnWidth()))->append(u"\n"_j);
    npc(npc(npc(sb)->append(u"  xfindex  = "_j))->append(getXFIndex()))->append(u"\n"_j);
    npc(npc(npc(sb)->append(u"  options  = "_j))->append(::org::apache::poi::util::HexDump::shortToHex(_options)))->append(u"\n"_j);
    npc(npc(npc(sb)->append(u"    hidden   = "_j))->append(getHidden()))->append(u"\n"_j);
    npc(npc(npc(sb)->append(u"    olevel   = "_j))->append(getOutlineLevel()))->append(u"\n"_j);
    npc(npc(npc(sb)->append(u"    collapsed= "_j))->append(getCollapsed()))->append(u"\n"_j);
    npc(sb)->append(u"[/COLINFO]\n"_j);
    return npc(sb)->toString();
}

org::apache::poi::hssf::record::ColumnInfoRecord* org::apache::poi::hssf::record::ColumnInfoRecord::clone()
{
    auto rec = new ColumnInfoRecord();
    npc(rec)->_firstCol = _firstCol;
    npc(rec)->_lastCol = _lastCol;
    npc(rec)->_colWidth = _colWidth;
    npc(rec)->_xfIndex = _xfIndex;
    npc(rec)->_options = _options;
    npc(rec)->field_6_reserved = field_6_reserved;
    return rec;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::record::ColumnInfoRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.ColumnInfoRecord", 43);
    return c;
}

void org::apache::poi::hssf::record::ColumnInfoRecord::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        hidden_ = ::org::apache::poi::util::BitFieldFactory::getInstance(1);
        outlevel_ = ::org::apache::poi::util::BitFieldFactory::getInstance(1792);
        collapsed_ = ::org::apache::poi::util::BitFieldFactory::getInstance(4096);
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

int32_t org::apache::poi::hssf::record::ColumnInfoRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

int8_tArray* org::apache::poi::hssf::record::ColumnInfoRecord::serialize()
{
    return super::serialize();
}

java::lang::Class* org::apache::poi::hssf::record::ColumnInfoRecord::getClass0()
{
    return class_();
}

