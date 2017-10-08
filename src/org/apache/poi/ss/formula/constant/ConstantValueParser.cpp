// Generated from /POI/java/org/apache/poi/ss/formula/constant/ConstantValueParser.java
#include <org/apache/poi/ss/formula/constant/ConstantValueParser.hpp>

#include <java/lang/Boolean.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Double.hpp>
#include <java/lang/IllegalStateException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/RuntimeException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <org/apache/poi/ss/formula/constant/ErrorConstant.hpp>
#include <org/apache/poi/util/LittleEndianInput.hpp>
#include <org/apache/poi/util/LittleEndianOutput.hpp>
#include <org/apache/poi/util/StringUtil.hpp>
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

poi::ss::formula::constant::ConstantValueParser::ConstantValueParser(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::formula::constant::ConstantValueParser::ConstantValueParser() 
    : ConstantValueParser(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

constexpr int32_t poi::ss::formula::constant::ConstantValueParser::TYPE_EMPTY;

constexpr int32_t poi::ss::formula::constant::ConstantValueParser::TYPE_NUMBER;

constexpr int32_t poi::ss::formula::constant::ConstantValueParser::TYPE_STRING;

constexpr int32_t poi::ss::formula::constant::ConstantValueParser::TYPE_BOOLEAN;

constexpr int32_t poi::ss::formula::constant::ConstantValueParser::TYPE_ERROR_CODE;

constexpr int32_t poi::ss::formula::constant::ConstantValueParser::TRUE_ENCODING;

constexpr int32_t poi::ss::formula::constant::ConstantValueParser::FALSE_ENCODING;

java::lang::Object*& poi::ss::formula::constant::ConstantValueParser::EMPTY_REPRESENTATION()
{
    clinit();
    return EMPTY_REPRESENTATION_;
}
java::lang::Object* poi::ss::formula::constant::ConstantValueParser::EMPTY_REPRESENTATION_;

void poi::ss::formula::constant::ConstantValueParser::ctor()
{
    super::ctor();
}

java::lang::ObjectArray* poi::ss::formula::constant::ConstantValueParser::parse(::poi::util::LittleEndianInput* in, int32_t nValues)
{
    clinit();
    auto result = new ::java::lang::ObjectArray(nValues);
    for (auto i = int32_t(0); i < npc(result)->length; i++) {
        result->set(i, readAConstantValue(in));
    }
    return result;
}

java::lang::Object* poi::ss::formula::constant::ConstantValueParser::readAConstantValue(::poi::util::LittleEndianInput* in)
{
    clinit();
    auto grbit = npc(in)->readByte();
    {
        int32_t errCode;
        switch (grbit) {
        case TYPE_EMPTY:
            npc(in)->readLong();
            return EMPTY_REPRESENTATION_;
        case TYPE_NUMBER:
            return new ::java::lang::Double(npc(in)->readDouble());
        case TYPE_STRING:
            return ::poi::util::StringUtil::readUnicodeString(in);
        case TYPE_BOOLEAN:
            return readBoolean(in);
        case TYPE_ERROR_CODE:
            errCode = npc(in)->readUShort();
            npc(in)->readUShort();
            npc(in)->readInt();
            return ErrorConstant::valueOf(errCode);
        }
    }

    throw new ::java::lang::RuntimeException(::java::lang::StringBuilder().append(u"Unknown grbit value ("_j)->append(grbit)
        ->append(u")"_j)->toString());
}

java::lang::Object* poi::ss::formula::constant::ConstantValueParser::readBoolean(::poi::util::LittleEndianInput* in)
{
    clinit();
    auto val = static_cast< int8_t >(npc(in)->readLong());
    switch (val) {
    case FALSE_ENCODING:
        return ::java::lang::Boolean::FALSE();
    case TRUE_ENCODING:
        return ::java::lang::Boolean::TRUE();
    }

    throw new ::java::lang::RuntimeException(::java::lang::StringBuilder().append(u"unexpected boolean encoding ("_j)->append(val)
        ->append(u")"_j)->toString());
}

int32_t poi::ss::formula::constant::ConstantValueParser::getEncodedSize(::java::lang::ObjectArray* values)
{
    clinit();
    auto result = npc(values)->length * int32_t(1);
    for (auto i = int32_t(0); i < npc(values)->length; i++) {
        result += getEncodedSize((*values)[i]);
    }
    return result;
}

int32_t poi::ss::formula::constant::ConstantValueParser::getEncodedSize(::java::lang::Object* object)
{
    clinit();
    if(object == EMPTY_REPRESENTATION_) {
        return 8;
    }
    auto cls = npc(object)->getClass();
    if(static_cast< ::java::lang::Object* >(cls) == static_cast< ::java::lang::Object* >(::java::lang::Boolean::class_()) || static_cast< ::java::lang::Object* >(cls) == static_cast< ::java::lang::Object* >(::java::lang::Double::class_()) || static_cast< ::java::lang::Object* >(cls) == static_cast< ::java::lang::Object* >(ErrorConstant::class_())) {
        return 8;
    }
    auto strVal = java_cast< ::java::lang::String* >(object);
    return ::poi::util::StringUtil::getEncodedSize(strVal);
}

void poi::ss::formula::constant::ConstantValueParser::encode(::poi::util::LittleEndianOutput* out, ::java::lang::ObjectArray* values)
{
    clinit();
    for (auto i = int32_t(0); i < npc(values)->length; i++) {
        encodeSingleValue(out, (*values)[i]);
    }
}

void poi::ss::formula::constant::ConstantValueParser::encodeSingleValue(::poi::util::LittleEndianOutput* out, ::java::lang::Object* value)
{
    clinit();
    if(value == EMPTY_REPRESENTATION_) {
        npc(out)->writeByte(TYPE_EMPTY);
        npc(out)->writeLong(0LL);
        return;
    }
    if(dynamic_cast< ::java::lang::Boolean* >(value) != nullptr) {
        auto bVal = (java_cast< ::java::lang::Boolean* >(value));
        npc(out)->writeByte(TYPE_BOOLEAN);
        auto longVal = npc(bVal)->booleanValue() ? int64_t(1LL) : int64_t(0LL);
        npc(out)->writeLong(longVal);
        return;
    }
    if(dynamic_cast< ::java::lang::Double* >(value) != nullptr) {
        auto dVal = java_cast< ::java::lang::Double* >(value);
        npc(out)->writeByte(TYPE_NUMBER);
        npc(out)->writeDouble(npc(dVal)->doubleValue());
        return;
    }
    if(dynamic_cast< ::java::lang::String* >(value) != nullptr) {
        auto val = java_cast< ::java::lang::String* >(value);
        npc(out)->writeByte(TYPE_STRING);
        ::poi::util::StringUtil::writeUnicodeString(out, val);
        return;
    }
    if(dynamic_cast< ErrorConstant* >(value) != nullptr) {
        auto ecVal = java_cast< ErrorConstant* >(value);
        npc(out)->writeByte(TYPE_ERROR_CODE);
        int64_t longVal = npc(ecVal)->getErrorCode();
        npc(out)->writeLong(longVal);
        return;
    }
    throw new ::java::lang::IllegalStateException(::java::lang::StringBuilder().append(u"Unexpected value type ("_j)->append(npc(npc(value)->getClass())->getName())
        ->append(u"'"_j)->toString());
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::constant::ConstantValueParser::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.constant.ConstantValueParser", 54);
    return c;
}

void poi::ss::formula::constant::ConstantValueParser::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        EMPTY_REPRESENTATION_ = nullptr;
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* poi::ss::formula::constant::ConstantValueParser::getClass0()
{
    return class_();
}

