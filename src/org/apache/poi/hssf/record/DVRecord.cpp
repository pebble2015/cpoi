// Generated from /POI/java/org/apache/poi/hssf/record/DVRecord.java
#include <org/apache/poi/hssf/record/DVRecord.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/IllegalStateException.hpp>
#include <java/lang/Integer.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <java/lang/StringBuilder.hpp>
#include <org/apache/poi/hssf/record/Record.hpp>
#include <org/apache/poi/hssf/record/RecordInputStream.hpp>
#include <org/apache/poi/hssf/record/common/UnicodeString.hpp>
#include <org/apache/poi/ss/formula/Formula.hpp>
#include <org/apache/poi/ss/formula/ptg/Ptg.hpp>
#include <org/apache/poi/ss/util/CellRangeAddress.hpp>
#include <org/apache/poi/ss/util/CellRangeAddressList.hpp>
#include <org/apache/poi/util/BitField.hpp>
#include <org/apache/poi/util/LittleEndianOutput.hpp>
#include <org/apache/poi/util/StringUtil.hpp>
#include <Array.hpp>
#include <ObjectArray.hpp>
#include <SubArray.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace org
{
    namespace apache
    {
        namespace poi
        {
            namespace ss
            {
                namespace formula
                {
                    namespace ptg
                    {
typedef ::SubArray< ::org::apache::poi::ss::formula::ptg::Ptg, ::java::lang::ObjectArray > PtgArray;
                    } // ptg
                } // formula
            } // ss
        } // poi
    } // apache
} // org

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

org::apache::poi::hssf::record::DVRecord::DVRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::record::DVRecord::DVRecord(int32_t validationType, int32_t operator_, int32_t errorStyle, bool emptyCellAllowed, bool suppressDropDownArrow, bool isExplicitList, bool showPromptBox, ::java::lang::String* promptTitle, ::java::lang::String* promptText, bool showErrorBox, ::java::lang::String* errorTitle, ::java::lang::String* errorText, ::org::apache::poi::ss::formula::ptg::PtgArray* formula1, ::org::apache::poi::ss::formula::ptg::PtgArray* formula2, ::org::apache::poi::ss::util::CellRangeAddressList* regions) 
    : DVRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(validationType,operator_,errorStyle,emptyCellAllowed,suppressDropDownArrow,isExplicitList,showPromptBox,promptTitle,promptText,showErrorBox,errorTitle,errorText,formula1,formula2,regions);
}

org::apache::poi::hssf::record::DVRecord::DVRecord(RecordInputStream* in) 
    : DVRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

void org::apache::poi::hssf::record::DVRecord::init()
{
    _not_used_1 = int32_t(16352);
    _not_used_2 = int32_t(0);
}

constexpr int16_t org::apache::poi::hssf::record::DVRecord::sid;

org::apache::poi::hssf::record::common::UnicodeString*& org::apache::poi::hssf::record::DVRecord::NULL_TEXT_STRING()
{
    clinit();
    return NULL_TEXT_STRING_;
}
org::apache::poi::hssf::record::common::UnicodeString* org::apache::poi::hssf::record::DVRecord::NULL_TEXT_STRING_;

org::apache::poi::util::BitField*& org::apache::poi::hssf::record::DVRecord::opt_data_type()
{
    clinit();
    return opt_data_type_;
}
org::apache::poi::util::BitField* org::apache::poi::hssf::record::DVRecord::opt_data_type_;

org::apache::poi::util::BitField*& org::apache::poi::hssf::record::DVRecord::opt_error_style()
{
    clinit();
    return opt_error_style_;
}
org::apache::poi::util::BitField* org::apache::poi::hssf::record::DVRecord::opt_error_style_;

org::apache::poi::util::BitField*& org::apache::poi::hssf::record::DVRecord::opt_string_list_formula()
{
    clinit();
    return opt_string_list_formula_;
}
org::apache::poi::util::BitField* org::apache::poi::hssf::record::DVRecord::opt_string_list_formula_;

org::apache::poi::util::BitField*& org::apache::poi::hssf::record::DVRecord::opt_empty_cell_allowed()
{
    clinit();
    return opt_empty_cell_allowed_;
}
org::apache::poi::util::BitField* org::apache::poi::hssf::record::DVRecord::opt_empty_cell_allowed_;

org::apache::poi::util::BitField*& org::apache::poi::hssf::record::DVRecord::opt_suppress_dropdown_arrow()
{
    clinit();
    return opt_suppress_dropdown_arrow_;
}
org::apache::poi::util::BitField* org::apache::poi::hssf::record::DVRecord::opt_suppress_dropdown_arrow_;

org::apache::poi::util::BitField*& org::apache::poi::hssf::record::DVRecord::opt_show_prompt_on_cell_selected()
{
    clinit();
    return opt_show_prompt_on_cell_selected_;
}
org::apache::poi::util::BitField* org::apache::poi::hssf::record::DVRecord::opt_show_prompt_on_cell_selected_;

org::apache::poi::util::BitField*& org::apache::poi::hssf::record::DVRecord::opt_show_error_on_invalid_value()
{
    clinit();
    return opt_show_error_on_invalid_value_;
}
org::apache::poi::util::BitField* org::apache::poi::hssf::record::DVRecord::opt_show_error_on_invalid_value_;

org::apache::poi::util::BitField*& org::apache::poi::hssf::record::DVRecord::opt_condition_operator()
{
    clinit();
    return opt_condition_operator_;
}
org::apache::poi::util::BitField* org::apache::poi::hssf::record::DVRecord::opt_condition_operator_;

void org::apache::poi::hssf::record::DVRecord::ctor(int32_t validationType, int32_t operator_, int32_t errorStyle, bool emptyCellAllowed, bool suppressDropDownArrow, bool isExplicitList, bool showPromptBox, ::java::lang::String* promptTitle, ::java::lang::String* promptText, bool showErrorBox, ::java::lang::String* errorTitle, ::java::lang::String* errorText, ::org::apache::poi::ss::formula::ptg::PtgArray* formula1, ::org::apache::poi::ss::formula::ptg::PtgArray* formula2, ::org::apache::poi::ss::util::CellRangeAddressList* regions)
{
    super::ctor();
    init();
    if(promptTitle != nullptr && npc(promptTitle)->length() > 32) {
        throw new ::java::lang::IllegalStateException(::java::lang::StringBuilder().append(u"Prompt-title cannot be longer than 32 characters, but had: "_j)->append(promptTitle)->toString());
    }
    if(promptText != nullptr && npc(promptText)->length() > 255) {
        throw new ::java::lang::IllegalStateException(::java::lang::StringBuilder().append(u"Prompt-text cannot be longer than 255 characters, but had: "_j)->append(promptText)->toString());
    }
    if(errorTitle != nullptr && npc(errorTitle)->length() > 32) {
        throw new ::java::lang::IllegalStateException(::java::lang::StringBuilder().append(u"Error-title cannot be longer than 32 characters, but had: "_j)->append(errorTitle)->toString());
    }
    if(errorText != nullptr && npc(errorText)->length() > 255) {
        throw new ::java::lang::IllegalStateException(::java::lang::StringBuilder().append(u"Error-text cannot be longer than 255 characters, but had: "_j)->append(errorText)->toString());
    }
    auto flags = int32_t(0);
    flags = npc(opt_data_type_)->setValue(flags, validationType);
    flags = npc(opt_condition_operator_)->setValue(flags, operator_);
    flags = npc(opt_error_style_)->setValue(flags, errorStyle);
    flags = npc(opt_empty_cell_allowed_)->setBoolean(flags, emptyCellAllowed);
    flags = npc(opt_suppress_dropdown_arrow_)->setBoolean(flags, suppressDropDownArrow);
    flags = npc(opt_string_list_formula_)->setBoolean(flags, isExplicitList);
    flags = npc(opt_show_prompt_on_cell_selected_)->setBoolean(flags, showPromptBox);
    flags = npc(opt_show_error_on_invalid_value_)->setBoolean(flags, showErrorBox);
    _option_flags = flags;
    _promptTitle = resolveTitleText(promptTitle);
    _promptText = resolveTitleText(promptText);
    _errorTitle = resolveTitleText(errorTitle);
    _errorText = resolveTitleText(errorText);
    _formula1 = ::org::apache::poi::ss::formula::Formula::create(formula1);
    _formula2 = ::org::apache::poi::ss::formula::Formula::create(formula2);
    _regions = regions;
}

void org::apache::poi::hssf::record::DVRecord::ctor(RecordInputStream* in)
{
    super::ctor();
    init();
    _option_flags = npc(in)->readInt();
    _promptTitle = readUnicodeString(in);
    _errorTitle = readUnicodeString(in);
    _promptText = readUnicodeString(in);
    _errorText = readUnicodeString(in);
    auto field_size_first_formula = npc(in)->readUShort();
    _not_used_1 = npc(in)->readShort();
    _formula1 = ::org::apache::poi::ss::formula::Formula::read(field_size_first_formula, in);
    auto field_size_sec_formula = npc(in)->readUShort();
    _not_used_2 = npc(in)->readShort();
    _formula2 = ::org::apache::poi::ss::formula::Formula::read(field_size_sec_formula, in);
    _regions = new ::org::apache::poi::ss::util::CellRangeAddressList(in);
}

int32_t org::apache::poi::hssf::record::DVRecord::getDataType()
{
    return npc(opt_data_type_)->getValue(_option_flags);
}

int32_t org::apache::poi::hssf::record::DVRecord::getErrorStyle()
{
    return npc(opt_error_style_)->getValue(_option_flags);
}

bool org::apache::poi::hssf::record::DVRecord::getListExplicitFormula()
{
    return (npc(opt_string_list_formula_)->isSet(_option_flags));
}

bool org::apache::poi::hssf::record::DVRecord::getEmptyCellAllowed()
{
    return (npc(opt_empty_cell_allowed_)->isSet(_option_flags));
}

bool org::apache::poi::hssf::record::DVRecord::getSuppressDropdownArrow()
{
    return (npc(opt_suppress_dropdown_arrow_)->isSet(_option_flags));
}

bool org::apache::poi::hssf::record::DVRecord::getShowPromptOnCellSelected()
{
    return (npc(opt_show_prompt_on_cell_selected_)->isSet(_option_flags));
}

bool org::apache::poi::hssf::record::DVRecord::getShowErrorOnInvalidValue()
{
    return (npc(opt_show_error_on_invalid_value_)->isSet(_option_flags));
}

int32_t org::apache::poi::hssf::record::DVRecord::getConditionOperator()
{
    return npc(opt_condition_operator_)->getValue(_option_flags);
}

java::lang::String* org::apache::poi::hssf::record::DVRecord::getPromptTitle()
{
    return resolveTitleString(_promptTitle);
}

java::lang::String* org::apache::poi::hssf::record::DVRecord::getErrorTitle()
{
    return resolveTitleString(_errorTitle);
}

java::lang::String* org::apache::poi::hssf::record::DVRecord::getPromptText()
{
    return resolveTitleString(_promptText);
}

java::lang::String* org::apache::poi::hssf::record::DVRecord::getErrorText()
{
    return resolveTitleString(_errorText);
}

org::apache::poi::ss::formula::ptg::PtgArray* org::apache::poi::hssf::record::DVRecord::getFormula1()
{
    return ::org::apache::poi::ss::formula::Formula::getTokens(_formula1);
}

org::apache::poi::ss::formula::ptg::PtgArray* org::apache::poi::hssf::record::DVRecord::getFormula2()
{
    return ::org::apache::poi::ss::formula::Formula::getTokens(_formula2);
}

org::apache::poi::ss::util::CellRangeAddressList* org::apache::poi::hssf::record::DVRecord::getCellRangeAddress()
{
    return this->_regions;
}

java::lang::String* org::apache::poi::hssf::record::DVRecord::toString()
{
    auto sb = new ::java::lang::StringBuffer();
    npc(sb)->append(u"[DV]\n"_j);
    npc(npc(sb)->append(u" options="_j))->append(::java::lang::Integer::toHexString(_option_flags));
    npc(npc(sb)->append(u" title-prompt="_j))->append(formatTextTitle(_promptTitle));
    npc(npc(sb)->append(u" title-error="_j))->append(formatTextTitle(_errorTitle));
    npc(npc(sb)->append(u" text-prompt="_j))->append(formatTextTitle(_promptText));
    npc(npc(sb)->append(u" text-error="_j))->append(formatTextTitle(_errorText));
    npc(sb)->append(u"\n"_j);
    appendFormula(sb, u"Formula 1:"_j, _formula1);
    appendFormula(sb, u"Formula 2:"_j, _formula2);
    npc(sb)->append(u"Regions: "_j);
    auto nRegions = npc(_regions)->countRanges();
    for (auto i = int32_t(0); i < nRegions; i++) {
        if(i > 0) {
            npc(sb)->append(u", "_j);
        }
        auto addr = npc(_regions)->getCellRangeAddress(i);
        npc(npc(npc(npc(sb)->append(u'('))->append(npc(addr)->getFirstRow()))->append(u','))->append(npc(addr)->getLastRow());
        npc(npc(npc(npc(npc(sb)->append(u','))->append(npc(addr)->getFirstColumn()))->append(u','))->append(npc(addr)->getLastColumn()))->append(u')');
    }
    npc(sb)->append(u"\n"_j);
    npc(sb)->append(u"[/DV]"_j);
    return npc(sb)->toString();
}

java::lang::String* org::apache::poi::hssf::record::DVRecord::formatTextTitle(::org::apache::poi::hssf::record::common::UnicodeString* us)
{
    clinit();
    auto str = npc(us)->getString();
    if(npc(str)->length() == 1 && npc(str)->charAt(int32_t(0)) == char16_t(0x0000)) {
        return u"'\\0'"_j;
    }
    return str;
}

void org::apache::poi::hssf::record::DVRecord::appendFormula(::java::lang::StringBuffer* sb, ::java::lang::String* label, ::org::apache::poi::ss::formula::Formula* f)
{
    clinit();
    npc(sb)->append(label);
    if(f == nullptr) {
        npc(sb)->append(u"<empty>\n"_j);
        return;
    }
    auto ptgs = npc(f)->getTokens();
    npc(sb)->append(u'\u000a');
    for(auto ptg : *npc(ptgs)) {
        npc(npc(npc(sb)->append(u'\u0009'))->append(static_cast< ::java::lang::Object* >(ptg)))->append(u'\u000a');
    }
}

void org::apache::poi::hssf::record::DVRecord::serialize(::org::apache::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeInt(_option_flags);
    serializeUnicodeString(_promptTitle, out);
    serializeUnicodeString(_errorTitle, out);
    serializeUnicodeString(_promptText, out);
    serializeUnicodeString(_errorText, out);
    npc(out)->writeShort(npc(_formula1)->getEncodedTokenSize());
    npc(out)->writeShort(_not_used_1);
    npc(_formula1)->serializeTokens(out);
    npc(out)->writeShort(npc(_formula2)->getEncodedTokenSize());
    npc(out)->writeShort(_not_used_2);
    npc(_formula2)->serializeTokens(out);
    npc(_regions)->serialize(out);
}

org::apache::poi::hssf::record::common::UnicodeString* org::apache::poi::hssf::record::DVRecord::resolveTitleText(::java::lang::String* str)
{
    clinit();
    if(str == nullptr || npc(str)->length() < 1) {
        return NULL_TEXT_STRING_;
    }
    return new ::org::apache::poi::hssf::record::common::UnicodeString(str);
}

java::lang::String* org::apache::poi::hssf::record::DVRecord::resolveTitleString(::org::apache::poi::hssf::record::common::UnicodeString* us)
{
    clinit();
    if(us == nullptr || npc(us)->equals(static_cast< ::java::lang::Object* >(NULL_TEXT_STRING_))) {
        return nullptr;
    }
    return npc(us)->getString();
}

org::apache::poi::hssf::record::common::UnicodeString* org::apache::poi::hssf::record::DVRecord::readUnicodeString(RecordInputStream* in)
{
    clinit();
    return new ::org::apache::poi::hssf::record::common::UnicodeString(in);
}

void org::apache::poi::hssf::record::DVRecord::serializeUnicodeString(::org::apache::poi::hssf::record::common::UnicodeString* us, ::org::apache::poi::util::LittleEndianOutput* out)
{
    clinit();
    ::org::apache::poi::util::StringUtil::writeUnicodeString(out, npc(us)->getString());
}

int32_t org::apache::poi::hssf::record::DVRecord::getUnicodeStringSize(::org::apache::poi::hssf::record::common::UnicodeString* us)
{
    clinit();
    auto str = npc(us)->getString();
    return int32_t(3) + npc(str)->length() * (::org::apache::poi::util::StringUtil::hasMultibyte(str) ? int32_t(2) : int32_t(1));
}

int32_t org::apache::poi::hssf::record::DVRecord::getDataSize()
{
    auto size = int32_t(4) + int32_t(2) + int32_t(2)+ int32_t(2)+ int32_t(2);
    size += getUnicodeStringSize(_promptTitle);
    size += getUnicodeStringSize(_errorTitle);
    size += getUnicodeStringSize(_promptText);
    size += getUnicodeStringSize(_errorText);
    size += npc(_formula1)->getEncodedTokenSize();
    size += npc(_formula2)->getEncodedTokenSize();
    size += npc(_regions)->getSize();
    return size;
}

int16_t org::apache::poi::hssf::record::DVRecord::getSid()
{
    return sid;
}

org::apache::poi::hssf::record::DVRecord* org::apache::poi::hssf::record::DVRecord::clone()
{
    return java_cast< DVRecord* >(cloneViaReserialise());
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::record::DVRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.DVRecord", 35);
    return c;
}

void org::apache::poi::hssf::record::DVRecord::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        NULL_TEXT_STRING_ = new ::org::apache::poi::hssf::record::common::UnicodeString(u"\0"_j);
        opt_data_type_ = new ::org::apache::poi::util::BitField(int32_t(15));
        opt_error_style_ = new ::org::apache::poi::util::BitField(int32_t(112));
        opt_string_list_formula_ = new ::org::apache::poi::util::BitField(int32_t(128));
        opt_empty_cell_allowed_ = new ::org::apache::poi::util::BitField(int32_t(256));
        opt_suppress_dropdown_arrow_ = new ::org::apache::poi::util::BitField(int32_t(512));
        opt_show_prompt_on_cell_selected_ = new ::org::apache::poi::util::BitField(int32_t(262144));
        opt_show_error_on_invalid_value_ = new ::org::apache::poi::util::BitField(int32_t(524288));
        opt_condition_operator_ = new ::org::apache::poi::util::BitField(int32_t(7340032));
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

int32_t org::apache::poi::hssf::record::DVRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

int8_tArray* org::apache::poi::hssf::record::DVRecord::serialize()
{
    return super::serialize();
}

java::lang::Class* org::apache::poi::hssf::record::DVRecord::getClass0()
{
    return class_();
}

