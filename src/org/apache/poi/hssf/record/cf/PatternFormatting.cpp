// Generated from /POI/java/org/apache/poi/hssf/record/cf/PatternFormatting.java
#include <org/apache/poi/hssf/record/cf/PatternFormatting.hpp>

#include <java/lang/Integer.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <org/apache/poi/util/BitField.hpp>
#include <org/apache/poi/util/BitFieldFactory.hpp>
#include <org/apache/poi/util/LittleEndianInput.hpp>
#include <org/apache/poi/util/LittleEndianOutput.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::hssf::record::cf::PatternFormatting::PatternFormatting(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::record::cf::PatternFormatting::PatternFormatting() 
    : PatternFormatting(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::hssf::record::cf::PatternFormatting::PatternFormatting(::org::apache::poi::util::LittleEndianInput* in) 
    : PatternFormatting(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int16_t org::apache::poi::hssf::record::cf::PatternFormatting::NO_FILL;

constexpr int16_t org::apache::poi::hssf::record::cf::PatternFormatting::SOLID_FOREGROUND;

constexpr int16_t org::apache::poi::hssf::record::cf::PatternFormatting::FINE_DOTS;

constexpr int16_t org::apache::poi::hssf::record::cf::PatternFormatting::ALT_BARS;

constexpr int16_t org::apache::poi::hssf::record::cf::PatternFormatting::SPARSE_DOTS;

constexpr int16_t org::apache::poi::hssf::record::cf::PatternFormatting::THICK_HORZ_BANDS;

constexpr int16_t org::apache::poi::hssf::record::cf::PatternFormatting::THICK_VERT_BANDS;

constexpr int16_t org::apache::poi::hssf::record::cf::PatternFormatting::THICK_BACKWARD_DIAG;

constexpr int16_t org::apache::poi::hssf::record::cf::PatternFormatting::THICK_FORWARD_DIAG;

constexpr int16_t org::apache::poi::hssf::record::cf::PatternFormatting::BIG_SPOTS;

constexpr int16_t org::apache::poi::hssf::record::cf::PatternFormatting::BRICKS;

constexpr int16_t org::apache::poi::hssf::record::cf::PatternFormatting::THIN_HORZ_BANDS;

constexpr int16_t org::apache::poi::hssf::record::cf::PatternFormatting::THIN_VERT_BANDS;

constexpr int16_t org::apache::poi::hssf::record::cf::PatternFormatting::THIN_BACKWARD_DIAG;

constexpr int16_t org::apache::poi::hssf::record::cf::PatternFormatting::THIN_FORWARD_DIAG;

constexpr int16_t org::apache::poi::hssf::record::cf::PatternFormatting::SQUARES;

constexpr int16_t org::apache::poi::hssf::record::cf::PatternFormatting::DIAMONDS;

constexpr int16_t org::apache::poi::hssf::record::cf::PatternFormatting::LESS_DOTS;

constexpr int16_t org::apache::poi::hssf::record::cf::PatternFormatting::LEAST_DOTS;

org::apache::poi::util::BitField*& org::apache::poi::hssf::record::cf::PatternFormatting::fillPatternStyle()
{
    clinit();
    return fillPatternStyle_;
}
org::apache::poi::util::BitField* org::apache::poi::hssf::record::cf::PatternFormatting::fillPatternStyle_;

org::apache::poi::util::BitField*& org::apache::poi::hssf::record::cf::PatternFormatting::patternColorIndex()
{
    clinit();
    return patternColorIndex_;
}
org::apache::poi::util::BitField* org::apache::poi::hssf::record::cf::PatternFormatting::patternColorIndex_;

org::apache::poi::util::BitField*& org::apache::poi::hssf::record::cf::PatternFormatting::patternBackgroundColorIndex()
{
    clinit();
    return patternBackgroundColorIndex_;
}
org::apache::poi::util::BitField* org::apache::poi::hssf::record::cf::PatternFormatting::patternBackgroundColorIndex_;

void org::apache::poi::hssf::record::cf::PatternFormatting::ctor()
{
    super::ctor();
    field_15_pattern_style = 0;
    field_16_pattern_color_indexes = 0;
}

void org::apache::poi::hssf::record::cf::PatternFormatting::ctor(::org::apache::poi::util::LittleEndianInput* in)
{
    super::ctor();
    field_15_pattern_style = npc(in)->readUShort();
    field_16_pattern_color_indexes = npc(in)->readUShort();
}

int32_t org::apache::poi::hssf::record::cf::PatternFormatting::getDataLength()
{
    return 4;
}

void org::apache::poi::hssf::record::cf::PatternFormatting::setFillPattern(int32_t fp)
{
    field_15_pattern_style = npc(fillPatternStyle_)->setValue(field_15_pattern_style, fp);
}

int32_t org::apache::poi::hssf::record::cf::PatternFormatting::getFillPattern()
{
    return npc(fillPatternStyle_)->getValue(field_15_pattern_style);
}

void org::apache::poi::hssf::record::cf::PatternFormatting::setFillBackgroundColor(int32_t bg)
{
    field_16_pattern_color_indexes = npc(patternBackgroundColorIndex_)->setValue(field_16_pattern_color_indexes, bg);
}

int32_t org::apache::poi::hssf::record::cf::PatternFormatting::getFillBackgroundColor()
{
    return npc(patternBackgroundColorIndex_)->getValue(field_16_pattern_color_indexes);
}

void org::apache::poi::hssf::record::cf::PatternFormatting::setFillForegroundColor(int32_t fg)
{
    field_16_pattern_color_indexes = npc(patternColorIndex_)->setValue(field_16_pattern_color_indexes, fg);
}

int32_t org::apache::poi::hssf::record::cf::PatternFormatting::getFillForegroundColor()
{
    return npc(patternColorIndex_)->getValue(field_16_pattern_color_indexes);
}

java::lang::String* org::apache::poi::hssf::record::cf::PatternFormatting::toString()
{
    auto buffer = new ::java::lang::StringBuffer();
    npc(buffer)->append(u"    [Pattern Formatting]\n"_j);
    npc(npc(npc(buffer)->append(u"          .fillpattern= "_j))->append(::java::lang::Integer::toHexString(getFillPattern())))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"          .fgcoloridx= "_j))->append(::java::lang::Integer::toHexString(getFillForegroundColor())))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"          .bgcoloridx= "_j))->append(::java::lang::Integer::toHexString(getFillBackgroundColor())))->append(u"\n"_j);
    npc(buffer)->append(u"    [/Pattern Formatting]\n"_j);
    return npc(buffer)->toString();
}

java::lang::Object* org::apache::poi::hssf::record::cf::PatternFormatting::clone()
{
    auto rec = new PatternFormatting();
    npc(rec)->field_15_pattern_style = field_15_pattern_style;
    npc(rec)->field_16_pattern_color_indexes = field_16_pattern_color_indexes;
    return rec;
}

void org::apache::poi::hssf::record::cf::PatternFormatting::serialize(::org::apache::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeShort(field_15_pattern_style);
    npc(out)->writeShort(field_16_pattern_color_indexes);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::record::cf::PatternFormatting::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.cf.PatternFormatting", 47);
    return c;
}

void org::apache::poi::hssf::record::cf::PatternFormatting::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        fillPatternStyle_ = ::org::apache::poi::util::BitFieldFactory::getInstance(64512);
        patternColorIndex_ = ::org::apache::poi::util::BitFieldFactory::getInstance(127);
        patternBackgroundColorIndex_ = ::org::apache::poi::util::BitFieldFactory::getInstance(16256);
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* org::apache::poi::hssf::record::cf::PatternFormatting::getClass0()
{
    return class_();
}

