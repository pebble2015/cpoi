// Generated from /POI/java/org/apache/poi/ss/formula/ptg/StringPtg.java
#include <org/apache/poi/ss/formula/ptg/StringPtg.hpp>

#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <org/apache/poi/util/LittleEndianInput.hpp>
#include <org/apache/poi/util/LittleEndianOutput.hpp>
#include <org/apache/poi/util/StringUtil.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::ss::formula::ptg::StringPtg::StringPtg(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::formula::ptg::StringPtg::StringPtg(::org::apache::poi::util::LittleEndianInput* in) 
    : StringPtg(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

org::apache::poi::ss::formula::ptg::StringPtg::StringPtg(::java::lang::String* value) 
    : StringPtg(*static_cast< ::default_init_tag* >(0))
{
    ctor(value);
}

constexpr int8_t org::apache::poi::ss::formula::ptg::StringPtg::sid;

constexpr char16_t org::apache::poi::ss::formula::ptg::StringPtg::FORMULA_DELIMITER;

void org::apache::poi::ss::formula::ptg::StringPtg::ctor(::org::apache::poi::util::LittleEndianInput* in)
{
    super::ctor();
    auto nChars = npc(in)->readUByte();
    _is16bitUnicode = (npc(in)->readByte() & int32_t(1)) != 0;
    if(_is16bitUnicode) {
        field_3_string = ::org::apache::poi::util::StringUtil::readUnicodeLE(in, nChars);
    } else {
        field_3_string = ::org::apache::poi::util::StringUtil::readCompressedUnicode(in, nChars);
    }
}

void org::apache::poi::ss::formula::ptg::StringPtg::ctor(::java::lang::String* value)
{
    super::ctor();
    if(npc(value)->length() > 255) {
        throw new ::java::lang::IllegalArgumentException(u"String literals in formulas can't be bigger than 255 characters ASCII"_j);
    }
    _is16bitUnicode = ::org::apache::poi::util::StringUtil::hasMultibyte(value);
    field_3_string = value;
}

java::lang::String* org::apache::poi::ss::formula::ptg::StringPtg::getValue()
{
    return field_3_string;
}

void org::apache::poi::ss::formula::ptg::StringPtg::write(::org::apache::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeByte(sid + getPtgClass());
    npc(out)->writeByte(npc(field_3_string)->length());
    npc(out)->writeByte(_is16bitUnicode ? int32_t(1) : int32_t(0));
    if(_is16bitUnicode) {
        ::org::apache::poi::util::StringUtil::putUnicodeLE(field_3_string, out);
    } else {
        ::org::apache::poi::util::StringUtil::putCompressedUnicode(field_3_string, out);
    }
}

int32_t org::apache::poi::ss::formula::ptg::StringPtg::getSize()
{
    return int32_t(3) + npc(field_3_string)->length() * (_is16bitUnicode ? int32_t(2) : int32_t(1));
}

java::lang::String* org::apache::poi::ss::formula::ptg::StringPtg::toFormulaString()
{
    auto value = field_3_string;
    auto len = npc(value)->length();
    auto sb = new ::java::lang::StringBuffer(len + int32_t(4));
    npc(sb)->append(FORMULA_DELIMITER);
    for (auto i = int32_t(0); i < len; i++) {
        auto c = npc(value)->charAt(i);
        if(c == FORMULA_DELIMITER) {
            npc(sb)->append(FORMULA_DELIMITER);
        }
        npc(sb)->append(c);
    }
    npc(sb)->append(FORMULA_DELIMITER);
    return npc(sb)->toString();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::formula::ptg::StringPtg::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.ptg.StringPtg", 39);
    return c;
}

java::lang::Class* org::apache::poi::ss::formula::ptg::StringPtg::getClass0()
{
    return class_();
}

