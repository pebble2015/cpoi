// Generated from /POI/java/org/apache/poi/hssf/record/common/UnicodeString.java
#include <org/apache/poi/hssf/record/common/UnicodeString.hpp>

#include <java/lang/Class.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Integer.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/util/ArrayList.hpp>
#include <java/util/Collections.hpp>
#include <java/util/Iterator.hpp>
#include <java/util/List.hpp>
#include <org/apache/poi/hssf/record/RecordInputStream.hpp>
#include <org/apache/poi/hssf/record/common/UnicodeString_ExtRst.hpp>
#include <org/apache/poi/hssf/record/common/UnicodeString_FormatRun.hpp>
#include <org/apache/poi/hssf/record/cont/ContinuableRecordInput.hpp>
#include <org/apache/poi/hssf/record/cont/ContinuableRecordOutput.hpp>
#include <org/apache/poi/util/BitField.hpp>
#include <org/apache/poi/util/BitFieldFactory.hpp>
#include <org/apache/poi/util/POILogFactory.hpp>
#include <org/apache/poi/util/POILogger.hpp>
#include <ObjectArray.hpp>

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

org::apache::poi::hssf::record::common::UnicodeString::UnicodeString(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::record::common::UnicodeString::UnicodeString() 
    : UnicodeString(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::hssf::record::common::UnicodeString::UnicodeString(::java::lang::String* str) 
    : UnicodeString(*static_cast< ::default_init_tag* >(0))
{
    ctor(str);
}

org::apache::poi::hssf::record::common::UnicodeString::UnicodeString(::org::apache::poi::hssf::record::RecordInputStream* in) 
    : UnicodeString(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

org::apache::poi::util::POILogger*& org::apache::poi::hssf::record::common::UnicodeString::_logger()
{
    clinit();
    return _logger_;
}
org::apache::poi::util::POILogger* org::apache::poi::hssf::record::common::UnicodeString::_logger_;

org::apache::poi::util::BitField*& org::apache::poi::hssf::record::common::UnicodeString::highByte()
{
    clinit();
    return highByte_;
}
org::apache::poi::util::BitField* org::apache::poi::hssf::record::common::UnicodeString::highByte_;

org::apache::poi::util::BitField*& org::apache::poi::hssf::record::common::UnicodeString::extBit()
{
    clinit();
    return extBit_;
}
org::apache::poi::util::BitField* org::apache::poi::hssf::record::common::UnicodeString::extBit_;

org::apache::poi::util::BitField*& org::apache::poi::hssf::record::common::UnicodeString::richText()
{
    clinit();
    return richText_;
}
org::apache::poi::util::BitField* org::apache::poi::hssf::record::common::UnicodeString::richText_;

void org::apache::poi::hssf::record::common::UnicodeString::ctor()
{
    super::ctor();
}

void org::apache::poi::hssf::record::common::UnicodeString::ctor(::java::lang::String* str)
{
    super::ctor();
    setString(str);
}

int32_t org::apache::poi::hssf::record::common::UnicodeString::hashCode()
{
    auto stringHash = int32_t(0);
    if(field_3_string != nullptr) {
        stringHash = npc(field_3_string)->hashCode();
    }
    return field_1_charCount + stringHash;
}

bool org::apache::poi::hssf::record::common::UnicodeString::equals(::java::lang::Object* o)
{
    if(!(dynamic_cast< UnicodeString* >(o) != nullptr)) {
        return false;
    }
    auto other = java_cast< UnicodeString* >(o);
    if(field_1_charCount != npc(other)->field_1_charCount || field_2_optionflags != npc(other)->field_2_optionflags || !npc(field_3_string)->equals(static_cast< ::java::lang::Object* >(npc(other)->field_3_string))) {
        return false;
    }
    if(field_4_format_runs == nullptr) {
        return (npc(other)->field_4_format_runs == nullptr);
    } else if(npc(other)->field_4_format_runs == nullptr) {
        return false;
    }
    auto size = npc(field_4_format_runs)->size();
    if(size != npc(npc(other)->field_4_format_runs)->size()) {
        return false;
    }
    for (auto i = int32_t(0); i < size; i++) {
        auto run1 = java_cast< UnicodeString_FormatRun* >(npc(field_4_format_runs)->get(i));
        auto run2 = java_cast< UnicodeString_FormatRun* >(npc(npc(other)->field_4_format_runs)->get(i));
        if(!npc(run1)->equals(static_cast< ::java::lang::Object* >(run2))) {
            return false;
        }
    }
    if(field_5_ext_rst == nullptr) {
        return (npc(other)->field_5_ext_rst == nullptr);
    } else if(npc(other)->field_5_ext_rst == nullptr) {
        return false;
    }
    return npc(field_5_ext_rst)->equals(static_cast< ::java::lang::Object* >(npc(other)->field_5_ext_rst));
}

void org::apache::poi::hssf::record::common::UnicodeString::ctor(::org::apache::poi::hssf::record::RecordInputStream* in)
{
    super::ctor();
    field_1_charCount = npc(in)->readShort();
    field_2_optionflags = npc(in)->readByte();
    auto runCount = int32_t(0);
    auto extensionLength = int32_t(0);
    if(isRichText()) {
        runCount = npc(in)->readShort();
    }
    if(isExtendedText()) {
        extensionLength = npc(in)->readInt();
    }
    auto isCompressed = ((field_2_optionflags & int32_t(1)) == 0);
    auto cc = getCharCount();
    field_3_string = (isCompressed) ? npc(in)->readCompressedUnicode(cc) : npc(in)->readUnicodeLEString(cc);
    if(isRichText() && (runCount > 0)) {
        field_4_format_runs = new ::java::util::ArrayList(runCount);
        for (auto i = int32_t(0); i < runCount; i++) {
            npc(field_4_format_runs)->add(static_cast< ::java::lang::Object* >(new UnicodeString_FormatRun(in)));
        }
    }
    if(isExtendedText() && (extensionLength > 0)) {
        field_5_ext_rst = new UnicodeString_ExtRst(new ::org::apache::poi::hssf::record::cont::ContinuableRecordInput(in), extensionLength);
        if(npc(field_5_ext_rst)->getDataSize() + int32_t(4) != extensionLength) {
            npc(_logger_)->log(::org::apache::poi::util::POILogger::WARN, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(::java::lang::StringBuilder().append(u"ExtRst was supposed to be "_j)->append(extensionLength)
                ->append(u" bytes long, but seems to actually be "_j)
                ->append((npc(field_5_ext_rst)->getDataSize() + int32_t(4)))->toString())}));
        }
    }
}

int32_t org::apache::poi::hssf::record::common::UnicodeString::getCharCount()
{
    if(field_1_charCount < 0) {
        return field_1_charCount + int32_t(65536);
    }
    return field_1_charCount;
}

int16_t org::apache::poi::hssf::record::common::UnicodeString::getCharCountShort()
{
    return field_1_charCount;
}

void org::apache::poi::hssf::record::common::UnicodeString::setCharCount(int16_t cc)
{
    field_1_charCount = cc;
}

int8_t org::apache::poi::hssf::record::common::UnicodeString::getOptionFlags()
{
    return field_2_optionflags;
}

void org::apache::poi::hssf::record::common::UnicodeString::setOptionFlags(int8_t of)
{
    field_2_optionflags = of;
}

java::lang::String* org::apache::poi::hssf::record::common::UnicodeString::getString()
{
    return field_3_string;
}

void org::apache::poi::hssf::record::common::UnicodeString::setString(::java::lang::String* string)
{
    field_3_string = string;
    setCharCount(static_cast< int16_t >(npc(field_3_string)->length()));
    auto useUTF16 = false;
    auto strlen = npc(string)->length();
    for (auto j = int32_t(0); j < strlen; j++) {
        if(npc(string)->charAt(j) > 255) {
            useUTF16 = true;
            break;
        }
    }
    if(useUTF16) {
        field_2_optionflags = npc(highByte_)->setByte(field_2_optionflags);
    } else {
        field_2_optionflags = npc(highByte_)->clearByte(field_2_optionflags);
    }
}

int32_t org::apache::poi::hssf::record::common::UnicodeString::getFormatRunCount()
{
    return (field_4_format_runs == nullptr) ? int32_t(0) : npc(field_4_format_runs)->size();
}

org::apache::poi::hssf::record::common::UnicodeString_FormatRun* org::apache::poi::hssf::record::common::UnicodeString::getFormatRun(int32_t index)
{
    if(field_4_format_runs == nullptr) {
        return nullptr;
    }
    if(index < 0 || index >= npc(field_4_format_runs)->size()) {
        return nullptr;
    }
    return java_cast< UnicodeString_FormatRun* >(npc(field_4_format_runs)->get(index));
}

int32_t org::apache::poi::hssf::record::common::UnicodeString::findFormatRunAt(int32_t characterPos)
{
    auto size = npc(field_4_format_runs)->size();
    for (auto i = int32_t(0); i < size; i++) {
        auto r = java_cast< UnicodeString_FormatRun* >(npc(field_4_format_runs)->get(i));
        if(npc(r)->_character == characterPos) {
            return i;
        } else if(npc(r)->_character > characterPos) {
            return -int32_t(1);
        }
    }
    return -int32_t(1);
}

void org::apache::poi::hssf::record::common::UnicodeString::addFormatRun(UnicodeString_FormatRun* r)
{
    if(field_4_format_runs == nullptr) {
        field_4_format_runs = new ::java::util::ArrayList();
    }
    auto index = findFormatRunAt(npc(r)->_character);
    if(index != -int32_t(1)) {
        npc(field_4_format_runs)->remove(index);
    }
    npc(field_4_format_runs)->add(static_cast< ::java::lang::Object* >(r));
    ::java::util::Collections::sort(field_4_format_runs);
    field_2_optionflags = npc(richText_)->setByte(field_2_optionflags);
}

java::util::Iterator* org::apache::poi::hssf::record::common::UnicodeString::formatIterator()
{
    if(field_4_format_runs != nullptr) {
        return npc(field_4_format_runs)->iterator();
    }
    return nullptr;
}

void org::apache::poi::hssf::record::common::UnicodeString::removeFormatRun(UnicodeString_FormatRun* r)
{
    npc(field_4_format_runs)->remove(static_cast< ::java::lang::Object* >(r));
    if(npc(field_4_format_runs)->size() == 0) {
        field_4_format_runs = nullptr;
        field_2_optionflags = npc(richText_)->clearByte(field_2_optionflags);
    }
}

void org::apache::poi::hssf::record::common::UnicodeString::clearFormatting()
{
    field_4_format_runs = nullptr;
    field_2_optionflags = npc(richText_)->clearByte(field_2_optionflags);
}

org::apache::poi::hssf::record::common::UnicodeString_ExtRst* org::apache::poi::hssf::record::common::UnicodeString::getExtendedRst()
{
    return this->field_5_ext_rst;
}

void org::apache::poi::hssf::record::common::UnicodeString::setExtendedRst(UnicodeString_ExtRst* ext_rst)
{
    if(ext_rst != nullptr) {
        field_2_optionflags = npc(extBit_)->setByte(field_2_optionflags);
    } else {
        field_2_optionflags = npc(extBit_)->clearByte(field_2_optionflags);
    }
    this->field_5_ext_rst = ext_rst;
}

void org::apache::poi::hssf::record::common::UnicodeString::swapFontUse(int16_t oldFontIndex, int16_t newFontIndex)
{
    for (auto _i = npc(field_4_format_runs)->iterator(); _i->hasNext(); ) {
        UnicodeString_FormatRun* run = java_cast< UnicodeString_FormatRun* >(_i->next());
        {
            if(npc(run)->_fontIndex == oldFontIndex) {
                npc(run)->_fontIndex = newFontIndex;
            }
        }
    }
}

java::lang::String* org::apache::poi::hssf::record::common::UnicodeString::toString()
{
    return getString();
}

java::lang::String* org::apache::poi::hssf::record::common::UnicodeString::getDebugInfo()
{
    auto buffer = new ::java::lang::StringBuffer();
    npc(buffer)->append(u"[UNICODESTRING]\n"_j);
    npc(npc(npc(buffer)->append(u"    .charcount       = "_j))->append(::java::lang::Integer::toHexString(getCharCount())))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"    .optionflags     = "_j))->append(::java::lang::Integer::toHexString(getOptionFlags())))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"    .string          = "_j))->append(getString()))->append(u"\n"_j);
    if(field_4_format_runs != nullptr) {
        for (auto i = int32_t(0); i < npc(field_4_format_runs)->size(); i++) {
            auto r = java_cast< UnicodeString_FormatRun* >(npc(field_4_format_runs)->get(i));
            npc(npc(npc(buffer)->append(::java::lang::StringBuilder().append(u"      .format_run"_j)->append(i)
                ->append(u"          = "_j)->toString()))->append(static_cast< ::java::lang::Object* >(r)))->append(u"\n"_j);
        }
    }
    if(field_5_ext_rst != nullptr) {
        npc(npc(buffer)->append(u"    .field_5_ext_rst          = "_j))->append(u"\n"_j);
        npc(npc(buffer)->append(static_cast< ::java::lang::Object* >(field_5_ext_rst)))->append(u"\n"_j);
    }
    npc(buffer)->append(u"[/UNICODESTRING]\n"_j);
    return npc(buffer)->toString();
}

void org::apache::poi::hssf::record::common::UnicodeString::serialize(::org::apache::poi::hssf::record::cont::ContinuableRecordOutput* out)
{
    auto numberOfRichTextRuns = int32_t(0);
    auto extendedDataSize = int32_t(0);
    if(isRichText() && field_4_format_runs != nullptr) {
        numberOfRichTextRuns = npc(field_4_format_runs)->size();
    }
    if(isExtendedText() && field_5_ext_rst != nullptr) {
        extendedDataSize = int32_t(4) + npc(field_5_ext_rst)->getDataSize();
    }
    npc(out)->writeString(field_3_string, numberOfRichTextRuns, extendedDataSize);
    if(numberOfRichTextRuns > 0) {
        for (auto i = int32_t(0); i < numberOfRichTextRuns; i++) {
            if(npc(out)->getAvailableSpace() < 4) {
                npc(out)->writeContinue();
            }
            auto r = java_cast< UnicodeString_FormatRun* >(npc(field_4_format_runs)->get(i));
            npc(r)->serialize(out);
        }
    }
    if(extendedDataSize > 0 && field_5_ext_rst != nullptr) {
        npc(field_5_ext_rst)->serialize(out);
    }
}

int32_t org::apache::poi::hssf::record::common::UnicodeString::compareTo(UnicodeString* str)
{
    auto result = npc(getString())->compareTo(npc(str)->getString());
    if(result != 0) {
        return result;
    }
    if(field_4_format_runs == nullptr) {
        return (npc(str)->field_4_format_runs == nullptr) ? int32_t(0) : int32_t(1);
    } else if(npc(str)->field_4_format_runs == nullptr) {
        return -int32_t(1);
    }
    auto size = npc(field_4_format_runs)->size();
    if(size != npc(npc(str)->field_4_format_runs)->size()) {
        return size - npc(npc(str)->field_4_format_runs)->size();
    }
    for (auto i = int32_t(0); i < size; i++) {
        auto run1 = java_cast< UnicodeString_FormatRun* >(npc(field_4_format_runs)->get(i));
        auto run2 = java_cast< UnicodeString_FormatRun* >(npc(npc(str)->field_4_format_runs)->get(i));
        result = npc(run1)->compareTo(run2);
        if(result != 0) {
            return result;
        }
    }
    if(field_5_ext_rst == nullptr) {
        return (npc(str)->field_5_ext_rst == nullptr) ? int32_t(0) : int32_t(1);
    } else if(npc(str)->field_5_ext_rst == nullptr) {
        return -int32_t(1);
    } else {
        return npc(field_5_ext_rst)->compareTo(npc(str)->field_5_ext_rst);
    }
}

int32_t org::apache::poi::hssf::record::common::UnicodeString::compareTo(::java::lang::Object* o)
{ 
    return compareTo(dynamic_cast< UnicodeString* >(o));
}

bool org::apache::poi::hssf::record::common::UnicodeString::isRichText()
{
    return npc(richText_)->isSet(getOptionFlags());
}

bool org::apache::poi::hssf::record::common::UnicodeString::isExtendedText()
{
    return npc(extBit_)->isSet(getOptionFlags());
}

java::lang::Object* org::apache::poi::hssf::record::common::UnicodeString::clone()
{
    auto str = new UnicodeString();
    npc(str)->field_1_charCount = field_1_charCount;
    npc(str)->field_2_optionflags = field_2_optionflags;
    npc(str)->field_3_string = field_3_string;
    if(field_4_format_runs != nullptr) {
        npc(str)->field_4_format_runs = new ::java::util::ArrayList();
        for (auto _i = npc(field_4_format_runs)->iterator(); _i->hasNext(); ) {
            UnicodeString_FormatRun* r = java_cast< UnicodeString_FormatRun* >(_i->next());
            {
                npc(npc(str)->field_4_format_runs)->add(static_cast< ::java::lang::Object* >(new UnicodeString_FormatRun(npc(r)->_character, npc(r)->_fontIndex)));
            }
        }
    }
    if(field_5_ext_rst != nullptr) {
        npc(str)->field_5_ext_rst = npc(field_5_ext_rst)->clone();
    }
    return str;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::record::common::UnicodeString::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.common.UnicodeString", 47);
    return c;
}

void org::apache::poi::hssf::record::common::UnicodeString::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        _logger_ = ::org::apache::poi::util::POILogFactory::getLogger(static_cast< ::java::lang::Class* >(UnicodeString::class_()));
        highByte_ = ::org::apache::poi::util::BitFieldFactory::getInstance(1);
        extBit_ = ::org::apache::poi::util::BitFieldFactory::getInstance(4);
        richText_ = ::org::apache::poi::util::BitFieldFactory::getInstance(8);
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* org::apache::poi::hssf::record::common::UnicodeString::getClass0()
{
    return class_();
}

