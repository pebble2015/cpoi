// Generated from /POI/java/org/apache/poi/hssf/record/CommonObjectDataSubRecord.java
#include <org/apache/poi/hssf/record/CommonObjectDataSubRecord.hpp>

#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/lang/System.hpp>
#include <org/apache/poi/util/BitField.hpp>
#include <org/apache/poi/util/BitFieldFactory.hpp>
#include <org/apache/poi/util/HexDump.hpp>
#include <org/apache/poi/util/LittleEndianInput.hpp>
#include <org/apache/poi/util/LittleEndianOutput.hpp>
#include <org/apache/poi/util/RecordFormatException.hpp>
#include <Array.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::hssf::record::CommonObjectDataSubRecord::CommonObjectDataSubRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::record::CommonObjectDataSubRecord::CommonObjectDataSubRecord() 
    : CommonObjectDataSubRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::hssf::record::CommonObjectDataSubRecord::CommonObjectDataSubRecord(::org::apache::poi::util::LittleEndianInput* in, int32_t size) 
    : CommonObjectDataSubRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in,size);
}

constexpr int16_t org::apache::poi::hssf::record::CommonObjectDataSubRecord::sid;

org::apache::poi::util::BitField*& org::apache::poi::hssf::record::CommonObjectDataSubRecord::locked()
{
    clinit();
    return locked_;
}
org::apache::poi::util::BitField* org::apache::poi::hssf::record::CommonObjectDataSubRecord::locked_;

org::apache::poi::util::BitField*& org::apache::poi::hssf::record::CommonObjectDataSubRecord::printable()
{
    clinit();
    return printable_;
}
org::apache::poi::util::BitField* org::apache::poi::hssf::record::CommonObjectDataSubRecord::printable_;

org::apache::poi::util::BitField*& org::apache::poi::hssf::record::CommonObjectDataSubRecord::autofill()
{
    clinit();
    return autofill_;
}
org::apache::poi::util::BitField* org::apache::poi::hssf::record::CommonObjectDataSubRecord::autofill_;

org::apache::poi::util::BitField*& org::apache::poi::hssf::record::CommonObjectDataSubRecord::autoline()
{
    clinit();
    return autoline_;
}
org::apache::poi::util::BitField* org::apache::poi::hssf::record::CommonObjectDataSubRecord::autoline_;

constexpr int16_t org::apache::poi::hssf::record::CommonObjectDataSubRecord::OBJECT_TYPE_GROUP;

constexpr int16_t org::apache::poi::hssf::record::CommonObjectDataSubRecord::OBJECT_TYPE_LINE;

constexpr int16_t org::apache::poi::hssf::record::CommonObjectDataSubRecord::OBJECT_TYPE_RECTANGLE;

constexpr int16_t org::apache::poi::hssf::record::CommonObjectDataSubRecord::OBJECT_TYPE_OVAL;

constexpr int16_t org::apache::poi::hssf::record::CommonObjectDataSubRecord::OBJECT_TYPE_ARC;

constexpr int16_t org::apache::poi::hssf::record::CommonObjectDataSubRecord::OBJECT_TYPE_CHART;

constexpr int16_t org::apache::poi::hssf::record::CommonObjectDataSubRecord::OBJECT_TYPE_TEXT;

constexpr int16_t org::apache::poi::hssf::record::CommonObjectDataSubRecord::OBJECT_TYPE_BUTTON;

constexpr int16_t org::apache::poi::hssf::record::CommonObjectDataSubRecord::OBJECT_TYPE_PICTURE;

constexpr int16_t org::apache::poi::hssf::record::CommonObjectDataSubRecord::OBJECT_TYPE_POLYGON;

constexpr int16_t org::apache::poi::hssf::record::CommonObjectDataSubRecord::OBJECT_TYPE_RESERVED1;

constexpr int16_t org::apache::poi::hssf::record::CommonObjectDataSubRecord::OBJECT_TYPE_CHECKBOX;

constexpr int16_t org::apache::poi::hssf::record::CommonObjectDataSubRecord::OBJECT_TYPE_OPTION_BUTTON;

constexpr int16_t org::apache::poi::hssf::record::CommonObjectDataSubRecord::OBJECT_TYPE_EDIT_BOX;

constexpr int16_t org::apache::poi::hssf::record::CommonObjectDataSubRecord::OBJECT_TYPE_LABEL;

constexpr int16_t org::apache::poi::hssf::record::CommonObjectDataSubRecord::OBJECT_TYPE_DIALOG_BOX;

constexpr int16_t org::apache::poi::hssf::record::CommonObjectDataSubRecord::OBJECT_TYPE_SPINNER;

constexpr int16_t org::apache::poi::hssf::record::CommonObjectDataSubRecord::OBJECT_TYPE_SCROLL_BAR;

constexpr int16_t org::apache::poi::hssf::record::CommonObjectDataSubRecord::OBJECT_TYPE_LIST_BOX;

constexpr int16_t org::apache::poi::hssf::record::CommonObjectDataSubRecord::OBJECT_TYPE_GROUP_BOX;

constexpr int16_t org::apache::poi::hssf::record::CommonObjectDataSubRecord::OBJECT_TYPE_COMBO_BOX;

constexpr int16_t org::apache::poi::hssf::record::CommonObjectDataSubRecord::OBJECT_TYPE_RESERVED2;

constexpr int16_t org::apache::poi::hssf::record::CommonObjectDataSubRecord::OBJECT_TYPE_RESERVED3;

constexpr int16_t org::apache::poi::hssf::record::CommonObjectDataSubRecord::OBJECT_TYPE_RESERVED4;

constexpr int16_t org::apache::poi::hssf::record::CommonObjectDataSubRecord::OBJECT_TYPE_RESERVED5;

constexpr int16_t org::apache::poi::hssf::record::CommonObjectDataSubRecord::OBJECT_TYPE_COMMENT;

constexpr int16_t org::apache::poi::hssf::record::CommonObjectDataSubRecord::OBJECT_TYPE_RESERVED6;

constexpr int16_t org::apache::poi::hssf::record::CommonObjectDataSubRecord::OBJECT_TYPE_RESERVED7;

constexpr int16_t org::apache::poi::hssf::record::CommonObjectDataSubRecord::OBJECT_TYPE_RESERVED8;

constexpr int16_t org::apache::poi::hssf::record::CommonObjectDataSubRecord::OBJECT_TYPE_RESERVED9;

constexpr int16_t org::apache::poi::hssf::record::CommonObjectDataSubRecord::OBJECT_TYPE_MICROSOFT_OFFICE_DRAWING;

void org::apache::poi::hssf::record::CommonObjectDataSubRecord::ctor()
{
    super::ctor();
}

void org::apache::poi::hssf::record::CommonObjectDataSubRecord::ctor(::org::apache::poi::util::LittleEndianInput* in, int32_t size)
{
    super::ctor();
    if(size != 18) {
        throw new ::org::apache::poi::util::RecordFormatException(::java::lang::StringBuilder().append(u"Expected size 18 but got ("_j)->append(size)
            ->append(u")"_j)->toString());
    }
    field_1_objectType = npc(in)->readShort();
    field_2_objectId = npc(in)->readUShort();
    field_3_option = npc(in)->readShort();
    field_4_reserved1 = npc(in)->readInt();
    field_5_reserved2 = npc(in)->readInt();
    field_6_reserved3 = npc(in)->readInt();
}

java::lang::String* org::apache::poi::hssf::record::CommonObjectDataSubRecord::toString()
{
    auto buffer = new ::java::lang::StringBuffer();
    npc(buffer)->append(u"[ftCmo]\n"_j);
    npc(npc(npc(npc(npc(npc(buffer)->append(u"    .objectType           = "_j))->append(u"0x"_j))->append(::org::apache::poi::util::HexDump::toHex(getObjectType())))->append(u" ("_j))->append(static_cast< int32_t >(getObjectType())))->append(u" )"_j);
    npc(buffer)->append(::java::lang::System::getProperty(u"line.separator"_j));
    npc(npc(npc(npc(npc(npc(buffer)->append(u"    .objectId             = "_j))->append(u"0x"_j))->append(::org::apache::poi::util::HexDump::toHex(getObjectId())))->append(u" ("_j))->append(getObjectId()))->append(u" )"_j);
    npc(buffer)->append(::java::lang::System::getProperty(u"line.separator"_j));
    npc(npc(npc(npc(npc(npc(buffer)->append(u"    .option               = "_j))->append(u"0x"_j))->append(::org::apache::poi::util::HexDump::toHex(getOption())))->append(u" ("_j))->append(static_cast< int32_t >(getOption())))->append(u" )"_j);
    npc(buffer)->append(::java::lang::System::getProperty(u"line.separator"_j));
    npc(npc(npc(buffer)->append(u"         .locked                   = "_j))->append(isLocked()))->append(u'\u000a');
    npc(npc(npc(buffer)->append(u"         .printable                = "_j))->append(isPrintable()))->append(u'\u000a');
    npc(npc(npc(buffer)->append(u"         .autofill                 = "_j))->append(isAutofill()))->append(u'\u000a');
    npc(npc(npc(buffer)->append(u"         .autoline                 = "_j))->append(isAutoline()))->append(u'\u000a');
    npc(npc(npc(npc(npc(npc(buffer)->append(u"    .reserved1            = "_j))->append(u"0x"_j))->append(::org::apache::poi::util::HexDump::toHex(getReserved1())))->append(u" ("_j))->append(getReserved1()))->append(u" )"_j);
    npc(buffer)->append(::java::lang::System::getProperty(u"line.separator"_j));
    npc(npc(npc(npc(npc(npc(buffer)->append(u"    .reserved2            = "_j))->append(u"0x"_j))->append(::org::apache::poi::util::HexDump::toHex(getReserved2())))->append(u" ("_j))->append(getReserved2()))->append(u" )"_j);
    npc(buffer)->append(::java::lang::System::getProperty(u"line.separator"_j));
    npc(npc(npc(npc(npc(npc(buffer)->append(u"    .reserved3            = "_j))->append(u"0x"_j))->append(::org::apache::poi::util::HexDump::toHex(getReserved3())))->append(u" ("_j))->append(getReserved3()))->append(u" )"_j);
    npc(buffer)->append(::java::lang::System::getProperty(u"line.separator"_j));
    npc(buffer)->append(u"[/ftCmo]\n"_j);
    return npc(buffer)->toString();
}

void org::apache::poi::hssf::record::CommonObjectDataSubRecord::serialize(::org::apache::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeShort(sid);
    npc(out)->writeShort(getDataSize());
    npc(out)->writeShort(field_1_objectType);
    npc(out)->writeShort(field_2_objectId);
    npc(out)->writeShort(field_3_option);
    npc(out)->writeInt(field_4_reserved1);
    npc(out)->writeInt(field_5_reserved2);
    npc(out)->writeInt(field_6_reserved3);
}

int32_t org::apache::poi::hssf::record::CommonObjectDataSubRecord::getDataSize()
{
    return int32_t(2) + int32_t(2) + int32_t(2)+ int32_t(4)+ int32_t(4)+ int32_t(4);
}

int16_t org::apache::poi::hssf::record::CommonObjectDataSubRecord::getSid()
{
    return sid;
}

org::apache::poi::hssf::record::CommonObjectDataSubRecord* org::apache::poi::hssf::record::CommonObjectDataSubRecord::clone()
{
    auto rec = new CommonObjectDataSubRecord();
    npc(rec)->field_1_objectType = field_1_objectType;
    npc(rec)->field_2_objectId = field_2_objectId;
    npc(rec)->field_3_option = field_3_option;
    npc(rec)->field_4_reserved1 = field_4_reserved1;
    npc(rec)->field_5_reserved2 = field_5_reserved2;
    npc(rec)->field_6_reserved3 = field_6_reserved3;
    return rec;
}

int16_t org::apache::poi::hssf::record::CommonObjectDataSubRecord::getObjectType()
{
    return field_1_objectType;
}

void org::apache::poi::hssf::record::CommonObjectDataSubRecord::setObjectType(int16_t field_1_objectType)
{
    this->field_1_objectType = field_1_objectType;
}

int32_t org::apache::poi::hssf::record::CommonObjectDataSubRecord::getObjectId()
{
    return field_2_objectId;
}

void org::apache::poi::hssf::record::CommonObjectDataSubRecord::setObjectId(int32_t field_2_objectId)
{
    this->field_2_objectId = field_2_objectId;
}

int16_t org::apache::poi::hssf::record::CommonObjectDataSubRecord::getOption()
{
    return field_3_option;
}

void org::apache::poi::hssf::record::CommonObjectDataSubRecord::setOption(int16_t field_3_option)
{
    this->field_3_option = field_3_option;
}

int32_t org::apache::poi::hssf::record::CommonObjectDataSubRecord::getReserved1()
{
    return field_4_reserved1;
}

void org::apache::poi::hssf::record::CommonObjectDataSubRecord::setReserved1(int32_t field_4_reserved1)
{
    this->field_4_reserved1 = field_4_reserved1;
}

int32_t org::apache::poi::hssf::record::CommonObjectDataSubRecord::getReserved2()
{
    return field_5_reserved2;
}

void org::apache::poi::hssf::record::CommonObjectDataSubRecord::setReserved2(int32_t field_5_reserved2)
{
    this->field_5_reserved2 = field_5_reserved2;
}

int32_t org::apache::poi::hssf::record::CommonObjectDataSubRecord::getReserved3()
{
    return field_6_reserved3;
}

void org::apache::poi::hssf::record::CommonObjectDataSubRecord::setReserved3(int32_t field_6_reserved3)
{
    this->field_6_reserved3 = field_6_reserved3;
}

void org::apache::poi::hssf::record::CommonObjectDataSubRecord::setLocked(bool value)
{
    field_3_option = npc(locked_)->setShortBoolean(field_3_option, value);
}

bool org::apache::poi::hssf::record::CommonObjectDataSubRecord::isLocked()
{
    return npc(locked_)->isSet(field_3_option);
}

void org::apache::poi::hssf::record::CommonObjectDataSubRecord::setPrintable(bool value)
{
    field_3_option = npc(printable_)->setShortBoolean(field_3_option, value);
}

bool org::apache::poi::hssf::record::CommonObjectDataSubRecord::isPrintable()
{
    return npc(printable_)->isSet(field_3_option);
}

void org::apache::poi::hssf::record::CommonObjectDataSubRecord::setAutofill(bool value)
{
    field_3_option = npc(autofill_)->setShortBoolean(field_3_option, value);
}

bool org::apache::poi::hssf::record::CommonObjectDataSubRecord::isAutofill()
{
    return npc(autofill_)->isSet(field_3_option);
}

void org::apache::poi::hssf::record::CommonObjectDataSubRecord::setAutoline(bool value)
{
    field_3_option = npc(autoline_)->setShortBoolean(field_3_option, value);
}

bool org::apache::poi::hssf::record::CommonObjectDataSubRecord::isAutoline()
{
    return npc(autoline_)->isSet(field_3_option);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::record::CommonObjectDataSubRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.CommonObjectDataSubRecord", 52);
    return c;
}

void org::apache::poi::hssf::record::CommonObjectDataSubRecord::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        locked_ = ::org::apache::poi::util::BitFieldFactory::getInstance(1);
        printable_ = ::org::apache::poi::util::BitFieldFactory::getInstance(16);
        autofill_ = ::org::apache::poi::util::BitFieldFactory::getInstance(8192);
        autoline_ = ::org::apache::poi::util::BitFieldFactory::getInstance(16384);
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

int8_tArray* org::apache::poi::hssf::record::CommonObjectDataSubRecord::serialize()
{
    return super::serialize();
}

java::lang::Class* org::apache::poi::hssf::record::CommonObjectDataSubRecord::getClass0()
{
    return class_();
}

