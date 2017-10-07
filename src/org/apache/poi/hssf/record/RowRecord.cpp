// Generated from /POI/java/org/apache/poi/hssf/record/RowRecord.java
#include <org/apache/poi/hssf/record/RowRecord.hpp>

#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/Integer.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
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

org::apache::poi::hssf::record::RowRecord::RowRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::record::RowRecord::RowRecord(int32_t rowNumber) 
    : RowRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(rowNumber);
}

org::apache::poi::hssf::record::RowRecord::RowRecord(RecordInputStream* in) 
    : RowRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int16_t org::apache::poi::hssf::record::RowRecord::sid;

constexpr int32_t org::apache::poi::hssf::record::RowRecord::ENCODED_SIZE;

constexpr int32_t org::apache::poi::hssf::record::RowRecord::OPTION_BITS_ALWAYS_SET;

org::apache::poi::util::BitField*& org::apache::poi::hssf::record::RowRecord::outlineLevel()
{
    clinit();
    return outlineLevel_;
}
org::apache::poi::util::BitField* org::apache::poi::hssf::record::RowRecord::outlineLevel_;

org::apache::poi::util::BitField*& org::apache::poi::hssf::record::RowRecord::colapsed()
{
    clinit();
    return colapsed_;
}
org::apache::poi::util::BitField* org::apache::poi::hssf::record::RowRecord::colapsed_;

org::apache::poi::util::BitField*& org::apache::poi::hssf::record::RowRecord::zeroHeight()
{
    clinit();
    return zeroHeight_;
}
org::apache::poi::util::BitField* org::apache::poi::hssf::record::RowRecord::zeroHeight_;

org::apache::poi::util::BitField*& org::apache::poi::hssf::record::RowRecord::badFontHeight()
{
    clinit();
    return badFontHeight_;
}
org::apache::poi::util::BitField* org::apache::poi::hssf::record::RowRecord::badFontHeight_;

org::apache::poi::util::BitField*& org::apache::poi::hssf::record::RowRecord::formatted()
{
    clinit();
    return formatted_;
}
org::apache::poi::util::BitField* org::apache::poi::hssf::record::RowRecord::formatted_;

org::apache::poi::util::BitField*& org::apache::poi::hssf::record::RowRecord::xfIndex()
{
    clinit();
    return xfIndex_;
}
org::apache::poi::util::BitField* org::apache::poi::hssf::record::RowRecord::xfIndex_;

org::apache::poi::util::BitField*& org::apache::poi::hssf::record::RowRecord::topBorder()
{
    clinit();
    return topBorder_;
}
org::apache::poi::util::BitField* org::apache::poi::hssf::record::RowRecord::topBorder_;

org::apache::poi::util::BitField*& org::apache::poi::hssf::record::RowRecord::bottomBorder()
{
    clinit();
    return bottomBorder_;
}
org::apache::poi::util::BitField* org::apache::poi::hssf::record::RowRecord::bottomBorder_;

org::apache::poi::util::BitField*& org::apache::poi::hssf::record::RowRecord::phoeneticGuide()
{
    clinit();
    return phoeneticGuide_;
}
org::apache::poi::util::BitField* org::apache::poi::hssf::record::RowRecord::phoeneticGuide_;

void org::apache::poi::hssf::record::RowRecord::ctor(int32_t rowNumber)
{
    super::ctor();
    if(rowNumber < 0) {
        throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(u"Invalid row number ("_j)->append(rowNumber)
            ->append(u")"_j)->toString());
    }
    field_1_row_number = rowNumber;
    field_4_height = static_cast< int16_t >(int32_t(255));
    field_5_optimize = static_cast< int16_t >(int32_t(0));
    field_6_reserved = static_cast< int16_t >(int32_t(0));
    field_7_option_flags = OPTION_BITS_ALWAYS_SET;
    field_8_option_flags = static_cast< int16_t >(int32_t(15));
    setEmpty();
}

void org::apache::poi::hssf::record::RowRecord::ctor(RecordInputStream* in)
{
    super::ctor();
    field_1_row_number = npc(in)->readUShort();
    if(field_1_row_number < 0) {
        throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(u"Invalid row number "_j)->append(field_1_row_number)
            ->append(u" found in InputStream"_j)->toString());
    }
    field_2_first_col = npc(in)->readShort();
    field_3_last_col = npc(in)->readShort();
    field_4_height = npc(in)->readShort();
    field_5_optimize = npc(in)->readShort();
    field_6_reserved = npc(in)->readShort();
    field_7_option_flags = npc(in)->readShort();
    field_8_option_flags = npc(in)->readShort();
}

void org::apache::poi::hssf::record::RowRecord::setEmpty()
{
    field_2_first_col = 0;
    field_3_last_col = 0;
}

bool org::apache::poi::hssf::record::RowRecord::isEmpty()
{
    return (field_2_first_col | field_3_last_col) == 0;
}

void org::apache::poi::hssf::record::RowRecord::setRowNumber(int32_t row)
{
    field_1_row_number = row;
}

void org::apache::poi::hssf::record::RowRecord::setFirstCol(int32_t col)
{
    field_2_first_col = col;
}

void org::apache::poi::hssf::record::RowRecord::setLastCol(int32_t col)
{
    field_3_last_col = col;
}

void org::apache::poi::hssf::record::RowRecord::setHeight(int16_t height)
{
    field_4_height = height;
}

void org::apache::poi::hssf::record::RowRecord::setOptimize(int16_t optimize)
{
    field_5_optimize = optimize;
}

void org::apache::poi::hssf::record::RowRecord::setOutlineLevel(int16_t ol)
{
    field_7_option_flags = npc(outlineLevel_)->setValue(field_7_option_flags, ol);
}

void org::apache::poi::hssf::record::RowRecord::setColapsed(bool c)
{
    field_7_option_flags = npc(colapsed_)->setBoolean(field_7_option_flags, c);
}

void org::apache::poi::hssf::record::RowRecord::setZeroHeight(bool z)
{
    field_7_option_flags = npc(zeroHeight_)->setBoolean(field_7_option_flags, z);
}

void org::apache::poi::hssf::record::RowRecord::setBadFontHeight(bool f)
{
    field_7_option_flags = npc(badFontHeight_)->setBoolean(field_7_option_flags, f);
}

void org::apache::poi::hssf::record::RowRecord::setFormatted(bool f)
{
    field_7_option_flags = npc(formatted_)->setBoolean(field_7_option_flags, f);
}

void org::apache::poi::hssf::record::RowRecord::setXFIndex(int16_t index)
{
    field_8_option_flags = npc(xfIndex_)->setValue(field_8_option_flags, index);
}

void org::apache::poi::hssf::record::RowRecord::setTopBorder(bool f)
{
    field_8_option_flags = npc(topBorder_)->setBoolean(field_8_option_flags, f);
}

void org::apache::poi::hssf::record::RowRecord::setBottomBorder(bool f)
{
    field_8_option_flags = npc(bottomBorder_)->setBoolean(field_8_option_flags, f);
}

void org::apache::poi::hssf::record::RowRecord::setPhoeneticGuide(bool f)
{
    field_8_option_flags = npc(phoeneticGuide_)->setBoolean(field_8_option_flags, f);
}

int32_t org::apache::poi::hssf::record::RowRecord::getRowNumber()
{
    return field_1_row_number;
}

int32_t org::apache::poi::hssf::record::RowRecord::getFirstCol()
{
    return field_2_first_col;
}

int32_t org::apache::poi::hssf::record::RowRecord::getLastCol()
{
    return field_3_last_col;
}

int16_t org::apache::poi::hssf::record::RowRecord::getHeight()
{
    return field_4_height;
}

int16_t org::apache::poi::hssf::record::RowRecord::getOptimize()
{
    return field_5_optimize;
}

int16_t org::apache::poi::hssf::record::RowRecord::getOptionFlags()
{
    return static_cast< int16_t >(field_7_option_flags);
}

int16_t org::apache::poi::hssf::record::RowRecord::getOutlineLevel()
{
    return static_cast< int16_t >(npc(outlineLevel_)->getValue(field_7_option_flags));
}

bool org::apache::poi::hssf::record::RowRecord::getColapsed()
{
    return (npc(colapsed_)->isSet(field_7_option_flags));
}

bool org::apache::poi::hssf::record::RowRecord::getZeroHeight()
{
    return npc(zeroHeight_)->isSet(field_7_option_flags);
}

bool org::apache::poi::hssf::record::RowRecord::getBadFontHeight()
{
    return npc(badFontHeight_)->isSet(field_7_option_flags);
}

bool org::apache::poi::hssf::record::RowRecord::getFormatted()
{
    return npc(formatted_)->isSet(field_7_option_flags);
}

int16_t org::apache::poi::hssf::record::RowRecord::getOptionFlags2()
{
    return static_cast< int16_t >(field_8_option_flags);
}

int16_t org::apache::poi::hssf::record::RowRecord::getXFIndex()
{
    return npc(xfIndex_)->getShortValue(static_cast< int16_t >(field_8_option_flags));
}

bool org::apache::poi::hssf::record::RowRecord::getTopBorder()
{
    return npc(topBorder_)->isSet(field_8_option_flags);
}

bool org::apache::poi::hssf::record::RowRecord::getBottomBorder()
{
    return npc(bottomBorder_)->isSet(field_8_option_flags);
}

bool org::apache::poi::hssf::record::RowRecord::getPhoeneticGuide()
{
    return npc(phoeneticGuide_)->isSet(field_8_option_flags);
}

java::lang::String* org::apache::poi::hssf::record::RowRecord::toString()
{
    auto sb = new ::java::lang::StringBuffer();
    npc(sb)->append(u"[ROW]\n"_j);
    npc(npc(npc(sb)->append(u"    .rownumber      = "_j))->append(::java::lang::Integer::toHexString(getRowNumber())))->append(u"\n"_j);
    npc(npc(npc(sb)->append(u"    .firstcol       = "_j))->append(::org::apache::poi::util::HexDump::shortToHex(getFirstCol())))->append(u"\n"_j);
    npc(npc(npc(sb)->append(u"    .lastcol        = "_j))->append(::org::apache::poi::util::HexDump::shortToHex(getLastCol())))->append(u"\n"_j);
    npc(npc(npc(sb)->append(u"    .height         = "_j))->append(::org::apache::poi::util::HexDump::shortToHex(getHeight())))->append(u"\n"_j);
    npc(npc(npc(sb)->append(u"    .optimize       = "_j))->append(::org::apache::poi::util::HexDump::shortToHex(getOptimize())))->append(u"\n"_j);
    npc(npc(npc(sb)->append(u"    .reserved       = "_j))->append(::org::apache::poi::util::HexDump::shortToHex(field_6_reserved)))->append(u"\n"_j);
    npc(npc(npc(sb)->append(u"    .optionflags    = "_j))->append(::org::apache::poi::util::HexDump::shortToHex(getOptionFlags())))->append(u"\n"_j);
    npc(npc(npc(sb)->append(u"        .outlinelvl = "_j))->append(::java::lang::Integer::toHexString(getOutlineLevel())))->append(u"\n"_j);
    npc(npc(npc(sb)->append(u"        .colapsed   = "_j))->append(getColapsed()))->append(u"\n"_j);
    npc(npc(npc(sb)->append(u"        .zeroheight = "_j))->append(getZeroHeight()))->append(u"\n"_j);
    npc(npc(npc(sb)->append(u"        .badfontheig= "_j))->append(getBadFontHeight()))->append(u"\n"_j);
    npc(npc(npc(sb)->append(u"        .formatted  = "_j))->append(getFormatted()))->append(u"\n"_j);
    npc(npc(npc(sb)->append(u"    .optionsflags2  = "_j))->append(::org::apache::poi::util::HexDump::shortToHex(getOptionFlags2())))->append(u"\n"_j);
    npc(npc(npc(sb)->append(u"        .xfindex       = "_j))->append(::java::lang::Integer::toHexString(getXFIndex())))->append(u"\n"_j);
    npc(npc(npc(sb)->append(u"        .topBorder     = "_j))->append(getTopBorder()))->append(u"\n"_j);
    npc(npc(npc(sb)->append(u"        .bottomBorder  = "_j))->append(getBottomBorder()))->append(u"\n"_j);
    npc(npc(npc(sb)->append(u"        .phoeneticGuide= "_j))->append(getPhoeneticGuide()))->append(u"\n"_j);
    npc(sb)->append(u"[/ROW]\n"_j);
    return npc(sb)->toString();
}

void org::apache::poi::hssf::record::RowRecord::serialize(::org::apache::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeShort(getRowNumber());
    npc(out)->writeShort(getFirstCol() == -int32_t(1) ? static_cast< int32_t >(static_cast< int16_t >(int32_t(0))) : getFirstCol());
    npc(out)->writeShort(getLastCol() == -int32_t(1) ? static_cast< int32_t >(static_cast< int16_t >(int32_t(0))) : getLastCol());
    npc(out)->writeShort(getHeight());
    npc(out)->writeShort(getOptimize());
    npc(out)->writeShort(field_6_reserved);
    npc(out)->writeShort(getOptionFlags());
    npc(out)->writeShort(getOptionFlags2());
}

int32_t org::apache::poi::hssf::record::RowRecord::getDataSize()
{
    return ENCODED_SIZE - int32_t(4);
}

int16_t org::apache::poi::hssf::record::RowRecord::getSid()
{
    return sid;
}

java::lang::Object* org::apache::poi::hssf::record::RowRecord::clone()
{
    auto rec = new RowRecord(field_1_row_number);
    npc(rec)->field_2_first_col = field_2_first_col;
    npc(rec)->field_3_last_col = field_3_last_col;
    npc(rec)->field_4_height = field_4_height;
    npc(rec)->field_5_optimize = field_5_optimize;
    npc(rec)->field_6_reserved = field_6_reserved;
    npc(rec)->field_7_option_flags = field_7_option_flags;
    npc(rec)->field_8_option_flags = field_8_option_flags;
    return rec;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::record::RowRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.RowRecord", 36);
    return c;
}

void org::apache::poi::hssf::record::RowRecord::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        outlineLevel_ = ::org::apache::poi::util::BitFieldFactory::getInstance(7);
        colapsed_ = ::org::apache::poi::util::BitFieldFactory::getInstance(16);
        zeroHeight_ = ::org::apache::poi::util::BitFieldFactory::getInstance(32);
        badFontHeight_ = ::org::apache::poi::util::BitFieldFactory::getInstance(64);
        formatted_ = ::org::apache::poi::util::BitFieldFactory::getInstance(128);
        xfIndex_ = ::org::apache::poi::util::BitFieldFactory::getInstance(4095);
        topBorder_ = ::org::apache::poi::util::BitFieldFactory::getInstance(4096);
        bottomBorder_ = ::org::apache::poi::util::BitFieldFactory::getInstance(8192);
        phoeneticGuide_ = ::org::apache::poi::util::BitFieldFactory::getInstance(16384);
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

int32_t org::apache::poi::hssf::record::RowRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

int8_tArray* org::apache::poi::hssf::record::RowRecord::serialize()
{
    return super::serialize();
}

java::lang::Class* org::apache::poi::hssf::record::RowRecord::getClass0()
{
    return class_();
}

