// Generated from /POI/java/org/apache/poi/hssf/record/common/UnicodeString.java
#include <org/apache/poi/hssf/record/common/UnicodeString_FormatRun.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <org/apache/poi/util/LittleEndianInput.hpp>
#include <org/apache/poi/util/LittleEndianOutput.hpp>

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

poi::hssf::record::common::UnicodeString_FormatRun::UnicodeString_FormatRun(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::record::common::UnicodeString_FormatRun::UnicodeString_FormatRun(int16_t character, int16_t fontIndex) 
    : UnicodeString_FormatRun(*static_cast< ::default_init_tag* >(0))
{
    ctor(character,fontIndex);
}

poi::hssf::record::common::UnicodeString_FormatRun::UnicodeString_FormatRun(::poi::util::LittleEndianInput* in) 
    : UnicodeString_FormatRun(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

void poi::hssf::record::common::UnicodeString_FormatRun::ctor(int16_t character, int16_t fontIndex)
{
    super::ctor();
    this->_character = character;
    this->_fontIndex = fontIndex;
}

void poi::hssf::record::common::UnicodeString_FormatRun::ctor(::poi::util::LittleEndianInput* in)
{
    ctor(npc(in)->readShort(), npc(in)->readShort());
}

int16_t poi::hssf::record::common::UnicodeString_FormatRun::getCharacterPos()
{
    return _character;
}

int16_t poi::hssf::record::common::UnicodeString_FormatRun::getFontIndex()
{
    return _fontIndex;
}

bool poi::hssf::record::common::UnicodeString_FormatRun::equals(::java::lang::Object* o)
{
    if(!(dynamic_cast< UnicodeString_FormatRun* >(o) != nullptr)) {
        return false;
    }
    auto other = java_cast< UnicodeString_FormatRun* >(o);
    return _character == npc(other)->_character && _fontIndex == npc(other)->_fontIndex;
}

int32_t poi::hssf::record::common::UnicodeString_FormatRun::compareTo(UnicodeString_FormatRun* r)
{
    if(_character == npc(r)->_character && _fontIndex == npc(r)->_fontIndex) {
        return 0;
    }
    if(_character == npc(r)->_character) {
        return _fontIndex - npc(r)->_fontIndex;
    }
    return _character - npc(r)->_character;
}

int32_t poi::hssf::record::common::UnicodeString_FormatRun::compareTo(::java::lang::Object* o)
{ 
    return compareTo(dynamic_cast< UnicodeString_FormatRun* >(o));
}

int32_t poi::hssf::record::common::UnicodeString_FormatRun::hashCode()
{
    /* assert(false : u"hashCode not designed"_j) */ ;
    return 42;
}

java::lang::String* poi::hssf::record::common::UnicodeString_FormatRun::toString()
{
    return ::java::lang::StringBuilder().append(u"character="_j)->append(_character)
        ->append(u",fontIndex="_j)
        ->append(_fontIndex)->toString();
}

void poi::hssf::record::common::UnicodeString_FormatRun::serialize(::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeShort(_character);
    npc(out)->writeShort(_fontIndex);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::record::common::UnicodeString_FormatRun::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.common.UnicodeString.FormatRun", 57);
    return c;
}

java::lang::Class* poi::hssf::record::common::UnicodeString_FormatRun::getClass0()
{
    return class_();
}

