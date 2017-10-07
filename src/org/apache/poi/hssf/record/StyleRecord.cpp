// Generated from /POI/java/org/apache/poi/hssf/record/StyleRecord.java
#include <org/apache/poi/hssf/record/StyleRecord.hpp>

#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <org/apache/poi/hssf/record/RecordInputStream.hpp>
#include <org/apache/poi/util/BitField.hpp>
#include <org/apache/poi/util/BitFieldFactory.hpp>
#include <org/apache/poi/util/HexDump.hpp>
#include <org/apache/poi/util/LittleEndianOutput.hpp>
#include <org/apache/poi/util/RecordFormatException.hpp>
#include <org/apache/poi/util/StringUtil.hpp>
#include <Array.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::hssf::record::StyleRecord::StyleRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::record::StyleRecord::StyleRecord() 
    : StyleRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::hssf::record::StyleRecord::StyleRecord(RecordInputStream* in) 
    : StyleRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int16_t org::apache::poi::hssf::record::StyleRecord::sid;

org::apache::poi::util::BitField*& org::apache::poi::hssf::record::StyleRecord::styleIndexMask()
{
    clinit();
    return styleIndexMask_;
}
org::apache::poi::util::BitField* org::apache::poi::hssf::record::StyleRecord::styleIndexMask_;

org::apache::poi::util::BitField*& org::apache::poi::hssf::record::StyleRecord::isBuiltinFlag()
{
    clinit();
    return isBuiltinFlag_;
}
org::apache::poi::util::BitField* org::apache::poi::hssf::record::StyleRecord::isBuiltinFlag_;

void org::apache::poi::hssf::record::StyleRecord::ctor()
{
    super::ctor();
    field_1_xf_index = npc(isBuiltinFlag_)->set(0);
}

void org::apache::poi::hssf::record::StyleRecord::ctor(RecordInputStream* in)
{
    super::ctor();
    field_1_xf_index = npc(in)->readShort();
    if(isBuiltin()) {
        field_2_builtin_style = npc(in)->readByte();
        field_3_outline_style_level = npc(in)->readByte();
    } else {
        int32_t field_2_name_length = npc(in)->readShort();
        if(npc(in)->remaining() < 1) {
            if(field_2_name_length != 0) {
                throw new ::org::apache::poi::util::RecordFormatException(u"Ran out of data reading style record"_j);
            }
            field_4_name = u""_j;
        } else {
            field_3_stringHasMultibyte = npc(in)->readByte() != 0;
            if(field_3_stringHasMultibyte) {
                field_4_name = ::org::apache::poi::util::StringUtil::readUnicodeLE(in, field_2_name_length);
            } else {
                field_4_name = ::org::apache::poi::util::StringUtil::readCompressedUnicode(in, field_2_name_length);
            }
        }
    }
}

void org::apache::poi::hssf::record::StyleRecord::setXFIndex(int32_t xfIndex)
{
    field_1_xf_index = npc(styleIndexMask_)->setValue(field_1_xf_index, xfIndex);
}

int32_t org::apache::poi::hssf::record::StyleRecord::getXFIndex()
{
    return npc(styleIndexMask_)->getValue(field_1_xf_index);
}

void org::apache::poi::hssf::record::StyleRecord::setName(::java::lang::String* name)
{
    field_4_name = name;
    field_3_stringHasMultibyte = ::org::apache::poi::util::StringUtil::hasMultibyte(name);
    field_1_xf_index = npc(isBuiltinFlag_)->clear(field_1_xf_index);
}

void org::apache::poi::hssf::record::StyleRecord::setBuiltinStyle(int32_t builtinStyleId)
{
    field_1_xf_index = npc(isBuiltinFlag_)->set(field_1_xf_index);
    field_2_builtin_style = builtinStyleId;
}

void org::apache::poi::hssf::record::StyleRecord::setOutlineStyleLevel(int32_t level)
{
    field_3_outline_style_level = level & int32_t(255);
}

bool org::apache::poi::hssf::record::StyleRecord::isBuiltin()
{
    return npc(isBuiltinFlag_)->isSet(field_1_xf_index);
}

java::lang::String* org::apache::poi::hssf::record::StyleRecord::getName()
{
    return field_4_name;
}

java::lang::String* org::apache::poi::hssf::record::StyleRecord::toString()
{
    auto sb = new ::java::lang::StringBuilder();
    npc(sb)->append(u"[STYLE]\n"_j);
    npc(npc(npc(sb)->append(u"    .xf_index_raw ="_j))->append(::org::apache::poi::util::HexDump::shortToHex(field_1_xf_index)))->append(u"\n"_j);
    npc(npc(npc(sb)->append(u"        .type     ="_j))->append(isBuiltin() ? u"built-in"_j : u"user-defined"_j))->append(u"\n"_j);
    npc(npc(npc(sb)->append(u"        .xf_index ="_j))->append(::org::apache::poi::util::HexDump::shortToHex(getXFIndex())))->append(u"\n"_j);
    if(isBuiltin()) {
        npc(npc(npc(sb)->append(u"    .builtin_style="_j))->append(::org::apache::poi::util::HexDump::byteToHex(field_2_builtin_style)))->append(u"\n"_j);
        npc(npc(npc(sb)->append(u"    .outline_level="_j))->append(::org::apache::poi::util::HexDump::byteToHex(field_3_outline_style_level)))->append(u"\n"_j);
    } else {
        npc(npc(npc(sb)->append(u"    .name        ="_j))->append(getName()))->append(u"\n"_j);
    }
    npc(sb)->append(u"[/STYLE]\n"_j);
    return npc(sb)->toString();
}

int32_t org::apache::poi::hssf::record::StyleRecord::getDataSize()
{
    if(isBuiltin()) {
        return 4;
    }
    return int32_t(2) + int32_t(3) + npc(field_4_name)->length() * (field_3_stringHasMultibyte ? int32_t(2) : int32_t(1));
}

void org::apache::poi::hssf::record::StyleRecord::serialize(::org::apache::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeShort(field_1_xf_index);
    if(isBuiltin()) {
        npc(out)->writeByte(field_2_builtin_style);
        npc(out)->writeByte(field_3_outline_style_level);
    } else {
        npc(out)->writeShort(npc(field_4_name)->length());
        npc(out)->writeByte(field_3_stringHasMultibyte ? int32_t(1) : int32_t(0));
        if(field_3_stringHasMultibyte) {
            ::org::apache::poi::util::StringUtil::putUnicodeLE(getName(), out);
        } else {
            ::org::apache::poi::util::StringUtil::putCompressedUnicode(getName(), out);
        }
    }
}

int16_t org::apache::poi::hssf::record::StyleRecord::getSid()
{
    return sid;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::record::StyleRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.StyleRecord", 38);
    return c;
}

void org::apache::poi::hssf::record::StyleRecord::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        styleIndexMask_ = ::org::apache::poi::util::BitFieldFactory::getInstance(4095);
        isBuiltinFlag_ = ::org::apache::poi::util::BitFieldFactory::getInstance(32768);
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

int32_t org::apache::poi::hssf::record::StyleRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

int8_tArray* org::apache::poi::hssf::record::StyleRecord::serialize()
{
    return super::serialize();
}

java::lang::Class* org::apache::poi::hssf::record::StyleRecord::getClass0()
{
    return class_();
}

