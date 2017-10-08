// Generated from /POI/java/org/apache/poi/hssf/record/NameRecord.java
#include <org/apache/poi/hssf/record/NameRecord.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <java/lang/StringBuilder.hpp>
#include <org/apache/poi/hssf/record/NameRecord_Option.hpp>
#include <org/apache/poi/hssf/record/RecordInputStream.hpp>
#include <org/apache/poi/hssf/record/cont/ContinuableRecordOutput.hpp>
#include <org/apache/poi/ss/formula/Formula.hpp>
#include <org/apache/poi/ss/formula/ptg/Area3DPtg.hpp>
#include <org/apache/poi/ss/formula/ptg/Ptg.hpp>
#include <org/apache/poi/ss/formula/ptg/Ref3DPtg.hpp>
#include <org/apache/poi/util/HexDump.hpp>
#include <org/apache/poi/util/LittleEndianByteArrayInputStream.hpp>
#include <org/apache/poi/util/LittleEndianInput.hpp>
#include <org/apache/poi/util/StringUtil.hpp>
#include <Array.hpp>
#include <ObjectArray.hpp>
#include <SubArray.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace poi
{
    namespace ss
    {
        namespace formula
        {
            namespace ptg
            {
typedef ::SubArray< ::poi::ss::formula::ptg::Ptg, ::java::lang::ObjectArray > PtgArray;
            } // ptg
        } // formula
    } // ss
} // poi

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

poi::hssf::record::NameRecord::NameRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::record::NameRecord::NameRecord() 
    : NameRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::hssf::record::NameRecord::NameRecord(int8_t builtin, int32_t sheetNumber) 
    : NameRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(builtin,sheetNumber);
}

poi::hssf::record::NameRecord::NameRecord(RecordInputStream* ris) 
    : NameRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(ris);
}

constexpr int16_t poi::hssf::record::NameRecord::sid;

constexpr int8_t poi::hssf::record::NameRecord::BUILTIN_CONSOLIDATE_AREA;

constexpr int8_t poi::hssf::record::NameRecord::BUILTIN_AUTO_OPEN;

constexpr int8_t poi::hssf::record::NameRecord::BUILTIN_AUTO_CLOSE;

constexpr int8_t poi::hssf::record::NameRecord::BUILTIN_DATABASE;

constexpr int8_t poi::hssf::record::NameRecord::BUILTIN_CRITERIA;

constexpr int8_t poi::hssf::record::NameRecord::BUILTIN_PRINT_AREA;

constexpr int8_t poi::hssf::record::NameRecord::BUILTIN_PRINT_TITLE;

constexpr int8_t poi::hssf::record::NameRecord::BUILTIN_RECORDER;

constexpr int8_t poi::hssf::record::NameRecord::BUILTIN_DATA_FORM;

constexpr int8_t poi::hssf::record::NameRecord::BUILTIN_AUTO_ACTIVATE;

constexpr int8_t poi::hssf::record::NameRecord::BUILTIN_AUTO_DEACTIVATE;

constexpr int8_t poi::hssf::record::NameRecord::BUILTIN_SHEET_TITLE;

constexpr int8_t poi::hssf::record::NameRecord::BUILTIN_FILTER_DB;

void poi::hssf::record::NameRecord::ctor()
{
    super::ctor();
    field_13_name_definition = ::poi::ss::formula::Formula::create(::poi::ss::formula::ptg::Ptg::EMPTY_PTG_ARRAY());
    field_12_name_text = u""_j;
    field_14_custom_menu_text = u""_j;
    field_15_description_text = u""_j;
    field_16_help_topic_text = u""_j;
    field_17_status_bar_text = u""_j;
}

void poi::hssf::record::NameRecord::ctor(int8_t builtin, int32_t sheetNumber)
{
    ctor();
    field_12_built_in_code = builtin;
    setOptionFlag(static_cast< int16_t >((field_1_option_flag | NameRecord_Option::OPT_BUILTIN)));
    field_6_sheetNumber = sheetNumber;
}

void poi::hssf::record::NameRecord::setOptionFlag(int16_t flag)
{
    field_1_option_flag = flag;
}

void poi::hssf::record::NameRecord::setKeyboardShortcut(int8_t shortcut)
{
    field_2_keyboard_shortcut = shortcut;
}

int32_t poi::hssf::record::NameRecord::getSheetNumber()
{
    return field_6_sheetNumber;
}

int8_t poi::hssf::record::NameRecord::getFnGroup()
{
    auto masked = field_1_option_flag & int32_t(4032);
    return static_cast< int8_t >((masked >> int32_t(4)));
}

void poi::hssf::record::NameRecord::setSheetNumber(int32_t value)
{
    field_6_sheetNumber = value;
}

void poi::hssf::record::NameRecord::setNameText(::java::lang::String* name)
{
    field_12_name_text = name;
    field_11_nameIsMultibyte = ::poi::util::StringUtil::hasMultibyte(name);
}

void poi::hssf::record::NameRecord::setCustomMenuText(::java::lang::String* text)
{
    field_14_custom_menu_text = text;
}

void poi::hssf::record::NameRecord::setDescriptionText(::java::lang::String* text)
{
    field_15_description_text = text;
}

void poi::hssf::record::NameRecord::setHelpTopicText(::java::lang::String* text)
{
    field_16_help_topic_text = text;
}

void poi::hssf::record::NameRecord::setStatusBarText(::java::lang::String* text)
{
    field_17_status_bar_text = text;
}

int16_t poi::hssf::record::NameRecord::getOptionFlag()
{
    return field_1_option_flag;
}

int8_t poi::hssf::record::NameRecord::getKeyboardShortcut()
{
    return field_2_keyboard_shortcut;
}

int32_t poi::hssf::record::NameRecord::getNameTextLength()
{
    if(isBuiltInName()) {
        return 1;
    }
    return npc(field_12_name_text)->length();
}

bool poi::hssf::record::NameRecord::isHiddenName()
{
    return (field_1_option_flag & NameRecord_Option::OPT_HIDDEN_NAME) != 0;
}

void poi::hssf::record::NameRecord::setHidden(bool b)
{
    if(b) {
        field_1_option_flag |= NameRecord_Option::OPT_HIDDEN_NAME;
    } else {
        field_1_option_flag &= (~NameRecord_Option::OPT_HIDDEN_NAME);
    }
}

bool poi::hssf::record::NameRecord::isFunctionName()
{
    return (field_1_option_flag & NameRecord_Option::OPT_FUNCTION_NAME) != 0;
}

void poi::hssf::record::NameRecord::setFunction(bool function)
{
    if(function) {
        field_1_option_flag |= NameRecord_Option::OPT_FUNCTION_NAME;
    } else {
        field_1_option_flag &= (~NameRecord_Option::OPT_FUNCTION_NAME);
    }
}

bool poi::hssf::record::NameRecord::hasFormula()
{
    return NameRecord_Option::isFormula(field_1_option_flag) && npc(field_13_name_definition)->getEncodedTokenSize() > 0;
}

bool poi::hssf::record::NameRecord::isCommandName()
{
    return (field_1_option_flag & NameRecord_Option::OPT_COMMAND_NAME) != 0;
}

bool poi::hssf::record::NameRecord::isMacro()
{
    return (field_1_option_flag & NameRecord_Option::OPT_MACRO) != 0;
}

bool poi::hssf::record::NameRecord::isComplexFunction()
{
    return (field_1_option_flag & NameRecord_Option::OPT_COMPLEX) != 0;
}

bool poi::hssf::record::NameRecord::isBuiltInName()
{
    return ((field_1_option_flag & NameRecord_Option::OPT_BUILTIN) != 0);
}

java::lang::String* poi::hssf::record::NameRecord::getNameText()
{
    return isBuiltInName() ? translateBuiltInName(getBuiltInName()) : field_12_name_text;
}

int8_t poi::hssf::record::NameRecord::getBuiltInName()
{
    return field_12_built_in_code;
}

poi::ss::formula::ptg::PtgArray* poi::hssf::record::NameRecord::getNameDefinition()
{
    return npc(field_13_name_definition)->getTokens();
}

void poi::hssf::record::NameRecord::setNameDefinition(::poi::ss::formula::ptg::PtgArray* ptgs)
{
    field_13_name_definition = ::poi::ss::formula::Formula::create(ptgs);
}

java::lang::String* poi::hssf::record::NameRecord::getCustomMenuText()
{
    return field_14_custom_menu_text;
}

java::lang::String* poi::hssf::record::NameRecord::getDescriptionText()
{
    return field_15_description_text;
}

java::lang::String* poi::hssf::record::NameRecord::getHelpTopicText()
{
    return field_16_help_topic_text;
}

java::lang::String* poi::hssf::record::NameRecord::getStatusBarText()
{
    return field_17_status_bar_text;
}

void poi::hssf::record::NameRecord::serialize(::poi::hssf::record::cont::ContinuableRecordOutput* out)
{
    auto field_7_length_custom_menu = npc(field_14_custom_menu_text)->length();
    auto field_8_length_description_text = npc(field_15_description_text)->length();
    auto field_9_length_help_topic_text = npc(field_16_help_topic_text)->length();
    auto field_10_length_status_bar_text = npc(field_17_status_bar_text)->length();
    npc(out)->writeShort(static_cast< int32_t >(getOptionFlag()));
    npc(out)->writeByte(static_cast< int32_t >(getKeyboardShortcut()));
    npc(out)->writeByte(getNameTextLength());
    npc(out)->writeShort(npc(field_13_name_definition)->getEncodedTokenSize());
    npc(out)->writeShort(static_cast< int32_t >(field_5_externSheetIndex_plus1));
    npc(out)->writeShort(field_6_sheetNumber);
    npc(out)->writeByte(field_7_length_custom_menu);
    npc(out)->writeByte(field_8_length_description_text);
    npc(out)->writeByte(field_9_length_help_topic_text);
    npc(out)->writeByte(field_10_length_status_bar_text);
    npc(out)->writeByte(field_11_nameIsMultibyte ? int32_t(1) : int32_t(0));
    if(isBuiltInName()) {
        npc(out)->writeByte(static_cast< int32_t >(field_12_built_in_code));
    } else {
        auto nameText = field_12_name_text;
        if(field_11_nameIsMultibyte) {
            ::poi::util::StringUtil::putUnicodeLE(nameText, out);
        } else {
            ::poi::util::StringUtil::putCompressedUnicode(nameText, out);
        }
    }
    npc(field_13_name_definition)->serializeTokens(out);
    npc(field_13_name_definition)->serializeArrayConstantData(out);
    ::poi::util::StringUtil::putCompressedUnicode(getCustomMenuText(), out);
    ::poi::util::StringUtil::putCompressedUnicode(getDescriptionText(), out);
    ::poi::util::StringUtil::putCompressedUnicode(getHelpTopicText(), out);
    ::poi::util::StringUtil::putCompressedUnicode(getStatusBarText(), out);
}

int32_t poi::hssf::record::NameRecord::getNameRawSize()
{
    if(isBuiltInName()) {
        return 1;
    }
    auto nChars = npc(field_12_name_text)->length();
    if(field_11_nameIsMultibyte) {
        return int32_t(2) * nChars;
    }
    return nChars;
}

int32_t poi::hssf::record::NameRecord::getDataSize()
{
    return int32_t(13) + getNameRawSize() + npc(field_14_custom_menu_text)->length()+ npc(field_15_description_text)->length()+ npc(field_16_help_topic_text)->length()+ npc(field_17_status_bar_text)->length()+ npc(field_13_name_definition)->getEncodedSize();
}

int32_t poi::hssf::record::NameRecord::getExternSheetNumber()
{
    auto tokens = npc(field_13_name_definition)->getTokens();
    if(npc(tokens)->length == 0) {
        return 0;
    }
    auto ptg = (*tokens)[int32_t(0)];
    if(static_cast< ::java::lang::Object* >(npc(ptg)->getClass()) == static_cast< ::java::lang::Object* >(::poi::ss::formula::ptg::Area3DPtg::class_())) {
        return npc((java_cast< ::poi::ss::formula::ptg::Area3DPtg* >(ptg)))->getExternSheetIndex();
    }
    if(static_cast< ::java::lang::Object* >(npc(ptg)->getClass()) == static_cast< ::java::lang::Object* >(::poi::ss::formula::ptg::Ref3DPtg::class_())) {
        return npc((java_cast< ::poi::ss::formula::ptg::Ref3DPtg* >(ptg)))->getExternSheetIndex();
    }
    return 0;
}

void poi::hssf::record::NameRecord::ctor(RecordInputStream* ris)
{
    super::ctor();
    auto remainder = npc(ris)->readAllContinuedRemainder();
    ::poi::util::LittleEndianInput* in = new ::poi::util::LittleEndianByteArrayInputStream(remainder);
    field_1_option_flag = npc(in)->readShort();
    field_2_keyboard_shortcut = npc(in)->readByte();
    auto field_3_length_name_text = npc(in)->readUByte();
    int32_t field_4_length_name_definition = npc(in)->readShort();
    field_5_externSheetIndex_plus1 = npc(in)->readShort();
    field_6_sheetNumber = npc(in)->readUShort();
    auto f7_customMenuLen = npc(in)->readUByte();
    auto f8_descriptionTextLen = npc(in)->readUByte();
    auto f9_helpTopicTextLen = npc(in)->readUByte();
    auto f10_statusBarTextLen = npc(in)->readUByte();
    field_11_nameIsMultibyte = (npc(in)->readByte() != 0);
    if(isBuiltInName()) {
        field_12_built_in_code = npc(in)->readByte();
    } else {
        if(field_11_nameIsMultibyte) {
            field_12_name_text = ::poi::util::StringUtil::readUnicodeLE(in, field_3_length_name_text);
        } else {
            field_12_name_text = ::poi::util::StringUtil::readCompressedUnicode(in, field_3_length_name_text);
        }
    }
    auto nBytesAvailable = npc(in)->available() - (f7_customMenuLen + f8_descriptionTextLen + f9_helpTopicTextLen+ f10_statusBarTextLen);
    field_13_name_definition = ::poi::ss::formula::Formula::read(field_4_length_name_definition, in, nBytesAvailable);
    field_14_custom_menu_text = ::poi::util::StringUtil::readCompressedUnicode(in, f7_customMenuLen);
    field_15_description_text = ::poi::util::StringUtil::readCompressedUnicode(in, f8_descriptionTextLen);
    field_16_help_topic_text = ::poi::util::StringUtil::readCompressedUnicode(in, f9_helpTopicTextLen);
    field_17_status_bar_text = ::poi::util::StringUtil::readCompressedUnicode(in, f10_statusBarTextLen);
}

int16_t poi::hssf::record::NameRecord::getSid()
{
    return sid;
}

java::lang::String* poi::hssf::record::NameRecord::toString()
{
    auto sb = new ::java::lang::StringBuffer();
    npc(sb)->append(u"[NAME]\n"_j);
    npc(npc(npc(sb)->append(u"    .option flags           = "_j))->append(::poi::util::HexDump::shortToHex(field_1_option_flag)))->append(u"\n"_j);
    npc(npc(npc(sb)->append(u"    .keyboard shortcut      = "_j))->append(::poi::util::HexDump::byteToHex(field_2_keyboard_shortcut)))->append(u"\n"_j);
    npc(npc(npc(sb)->append(u"    .length of the name     = "_j))->append(getNameTextLength()))->append(u"\n"_j);
    npc(npc(npc(sb)->append(u"    .extSheetIx(1-based, 0=Global)= "_j))->append(static_cast< int32_t >(field_5_externSheetIndex_plus1)))->append(u"\n"_j);
    npc(npc(npc(sb)->append(u"    .sheetTabIx             = "_j))->append(field_6_sheetNumber))->append(u"\n"_j);
    npc(npc(npc(sb)->append(u"    .Menu text length       = "_j))->append(npc(field_14_custom_menu_text)->length()))->append(u"\n"_j);
    npc(npc(npc(sb)->append(u"    .Description text length= "_j))->append(npc(field_15_description_text)->length()))->append(u"\n"_j);
    npc(npc(npc(sb)->append(u"    .Help topic text length = "_j))->append(npc(field_16_help_topic_text)->length()))->append(u"\n"_j);
    npc(npc(npc(sb)->append(u"    .Status bar text length = "_j))->append(npc(field_17_status_bar_text)->length()))->append(u"\n"_j);
    npc(npc(npc(sb)->append(u"    .NameIsMultibyte        = "_j))->append(field_11_nameIsMultibyte))->append(u"\n"_j);
    npc(npc(npc(sb)->append(u"    .Name (Unicode text)    = "_j))->append(getNameText()))->append(u"\n"_j);
    auto ptgs = npc(field_13_name_definition)->getTokens();
    npc(npc(npc(npc(sb)->append(u"    .Formula (nTokens="_j))->append(npc(ptgs)->length))->append(u"):"_j))->append(u"\n"_j);
    for(auto ptg : *npc(ptgs)) {
        npc(npc(npc(sb)->append(::java::lang::StringBuilder().append(u"       "_j)->append(static_cast< ::java::lang::Object* >(ptg))->toString()))->append(npc(ptg)->getRVAType()))->append(u"\n"_j);
    }
    npc(npc(npc(sb)->append(u"    .Menu text       = "_j))->append(field_14_custom_menu_text))->append(u"\n"_j);
    npc(npc(npc(sb)->append(u"    .Description text= "_j))->append(field_15_description_text))->append(u"\n"_j);
    npc(npc(npc(sb)->append(u"    .Help topic text = "_j))->append(field_16_help_topic_text))->append(u"\n"_j);
    npc(npc(npc(sb)->append(u"    .Status bar text = "_j))->append(field_17_status_bar_text))->append(u"\n"_j);
    npc(sb)->append(u"[/NAME]\n"_j);
    return npc(sb)->toString();
}

java::lang::String* poi::hssf::record::NameRecord::translateBuiltInName(int8_t name)
{
    clinit();
    switch (name) {
    case NameRecord::BUILTIN_AUTO_ACTIVATE:
        return u"Auto_Activate"_j;
    case NameRecord::BUILTIN_AUTO_CLOSE:
        return u"Auto_Close"_j;
    case NameRecord::BUILTIN_AUTO_DEACTIVATE:
        return u"Auto_Deactivate"_j;
    case NameRecord::BUILTIN_AUTO_OPEN:
        return u"Auto_Open"_j;
    case NameRecord::BUILTIN_CONSOLIDATE_AREA:
        return u"Consolidate_Area"_j;
    case NameRecord::BUILTIN_CRITERIA:
        return u"Criteria"_j;
    case NameRecord::BUILTIN_DATABASE:
        return u"Database"_j;
    case NameRecord::BUILTIN_DATA_FORM:
        return u"Data_Form"_j;
    case NameRecord::BUILTIN_PRINT_AREA:
        return u"Print_Area"_j;
    case NameRecord::BUILTIN_PRINT_TITLE:
        return u"Print_Titles"_j;
    case NameRecord::BUILTIN_RECORDER:
        return u"Recorder"_j;
    case NameRecord::BUILTIN_SHEET_TITLE:
        return u"Sheet_Title"_j;
    case NameRecord::BUILTIN_FILTER_DB:
        return u"_FilterDatabase"_j;
    }

    return u"Unknown"_j;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::record::NameRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.NameRecord", 37);
    return c;
}

int32_t poi::hssf::record::NameRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

int8_tArray* poi::hssf::record::NameRecord::serialize()
{
    return super::serialize();
}

java::lang::Class* poi::hssf::record::NameRecord::getClass0()
{
    return class_();
}

