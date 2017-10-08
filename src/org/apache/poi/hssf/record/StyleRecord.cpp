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

poi::hssf::record::StyleRecord::StyleRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::record::StyleRecord::StyleRecord() 
    : StyleRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::hssf::record::StyleRecord::StyleRecord(RecordInputStream* in) 
    : StyleRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int16_t poi::hssf::record::StyleRecord::sid;

poi::util::BitField*& poi::hssf::record::StyleRecord::styleIndexMask()
{
    clinit();
    return styleIndexMask_;
}
poi::util::BitField* poi::hssf::record::StyleRecord::styleIndexMask_;

poi::util::BitField*& poi::hssf::record::StyleRecord::isBuiltinFlag()
{
    clinit();
    return isBuiltinFlag_;
}
poi::util::BitField* poi::hssf::record::StyleRecord::isBuiltinFlag_;

void poi::hssf::record::StyleRecord::ctor()
{
    super::ctor();
    field_1_xf_index = npc(isBuiltinFlag_)->set(0);
}

void poi::hssf::record::StyleRecord::ctor(RecordInputStream* in)
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
                throw new ::poi::util::RecordFormatException(u"Ran out of data reading style record"_j);
            }
            field_4_name = u""_j;
        } else {
            field_3_stringHasMultibyte = npc(in)->readByte() != 0;
            if(field_3_stringHasMultibyte) {
                field_4_name = ::poi::util::StringUtil::readUnicodeLE(in, field_2_name_length);
            } else {
                field_4_name = ::poi::util::StringUtil::readCompressedUnicode(in, field_2_name_length);
            }
        }
    }
}

void poi::hssf::record::StyleRecord::setXFIndex(int32_t xfIndex)
{
    field_1_xf_index = npc(styleIndexMask_)->setValue(field_1_xf_index, xfIndex);
}

int32_t poi::hssf::record::StyleRecord::getXFIndex()
{
    return npc(styleIndexMask_)->getValue(field_1_xf_index);
}

void poi::hssf::record::StyleRecord::setName(::java::lang::String* name)
{
    field_4_name = name;
    field_3_stringHasMultibyte = ::poi::util::StringUtil::hasMultibyte(name);
    field_1_xf_index = npc(isBuiltinFlag_)->clear(field_1_xf_index);
}

void poi::hssf::record::StyleRecord::setBuiltinStyle(int32_t builtinStyleId)
{
    field_1_xf_index = npc(isBuiltinFlag_)->set(field_1_xf_index);
    field_2_builtin_style = builtinStyleId;
}

void poi::hssf::record::StyleRecord::setOutlineStyleLevel(int32_t level)
{
    field_3_outline_style_level = level & int32_t(255);
}

bool poi::hssf::record::StyleRecord::isBuiltin()
{
    return npc(isBuiltinFlag_)->isSet(field_1_xf_index);
}

java::lang::String* poi::hssf::record::StyleRecord::getName()
{
    return field_4_name;
}

java::lang::String* poi::hssf::record::StyleRecord::toString()
{
    auto sb = new ::java::lang::StringBuilder();
    npc(sb)->append(u"[STYLE]\n"_j);
    npc(npc(npc(sb)->append(u"    .xf_index_raw ="_j))->append(::poi::util::HexDump::shortToHex(field_1_xf_index)))->append(u"\n"_j);
    npc(npc(npc(sb)->append(u"        .type     ="_j))->append(isBuiltin() ? u"built-in"_j : u"user-defined"_j))->append(u"\n"_j);
    npc(npc(npc(sb)->append(u"        .xf_index ="_j))->append(::poi::util::HexDump::shortToHex(getXFIndex())))->append(u"\n"_j);
    if(isBuiltin()) {
        npc(npc(npc(sb)->append(u"    .builtin_style="_j))->append(::poi::util::HexDump::byteToHex(field_2_builtin_style)))->append(u"\n"_j);
        npc(npc(npc(sb)->append(u"    .outline_level="_j))->append(::poi::util::HexDump::byteToHex(field_3_outline_style_level)))->append(u"\n"_j);
    } else {
        npc(npc(npc(sb)->append(u"    .name        ="_j))->append(getName()))->append(u"\n"_j);
    }
    npc(sb)->append(u"[/STYLE]\n"_j);
    return npc(sb)->toString();
}

int32_t poi::hssf::record::StyleRecord::getDataSize()
{
    if(isBuiltin()) {
        return 4;
    }
    return int32_t(2) + int32_t(3) + npc(field_4_name)->length() * (field_3_stringHasMultibyte ? int32_t(2) : int32_t(1));
}

void poi::hssf::record::StyleRecord::serialize(::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeShort(field_1_xf_index);
    if(isBuiltin()) {
        npc(out)->writeByte(field_2_builtin_style);
        npc(out)->writeByte(field_3_outline_style_level);
    } else {
        npc(out)->writeShort(npc(field_4_name)->length());
        npc(out)->writeByte(field_3_stringHasMultibyte ? int32_t(1) : int32_t(0));
        if(field_3_stringHasMultibyte) {
            ::poi::util::StringUtil::putUnicodeLE(getName(), out);
        } else {
            ::poi::util::StringUtil::putCompressedUnicode(getName(), out);
        }
    }
}

int16_t poi::hssf::record::StyleRecord::getSid()
{
    return sid;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::record::StyleRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.StyleRecord", 38);
    return c;
}

void poi::hssf::record::StyleRecord::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        styleIndexMask_ = ::poi::util::BitFieldFactory::getInstance(4095);
        isBuiltinFlag_ = ::poi::util::BitFieldFactory::getInstance(32768);
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

int32_t poi::hssf::record::StyleRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

int8_tArray* poi::hssf::record::StyleRecord::serialize()
{
    return super::serialize();
}

java::lang::Class* poi::hssf::record::StyleRecord::getClass0()
{
    return class_();
}

