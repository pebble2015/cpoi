// Generated from /POI/java/org/apache/poi/hssf/record/FormulaRecord.java
#include <org/apache/poi/hssf/record/FormulaRecord_SpecialCachedValue.hpp>

#include <java/lang/Class.hpp>
#include <java/lang/IllegalStateException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <org/apache/poi/ss/formula/eval/ErrorEval.hpp>
#include <org/apache/poi/ss/usermodel/CellType.hpp>
#include <org/apache/poi/util/HexDump.hpp>
#include <org/apache/poi/util/LittleEndianOutput.hpp>
#include <org/apache/poi/util/RecordFormatException.hpp>
#include <Array.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::hssf::record::FormulaRecord_SpecialCachedValue::FormulaRecord_SpecialCachedValue(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::record::FormulaRecord_SpecialCachedValue::FormulaRecord_SpecialCachedValue(::int8_tArray* data) 
    : FormulaRecord_SpecialCachedValue(*static_cast< ::default_init_tag* >(0))
{
    ctor(data);
}

constexpr int64_t poi::hssf::record::FormulaRecord_SpecialCachedValue::BIT_MARKER;

constexpr int32_t poi::hssf::record::FormulaRecord_SpecialCachedValue::VARIABLE_DATA_LENGTH;

constexpr int32_t poi::hssf::record::FormulaRecord_SpecialCachedValue::DATA_INDEX;

constexpr int32_t poi::hssf::record::FormulaRecord_SpecialCachedValue::STRING;

constexpr int32_t poi::hssf::record::FormulaRecord_SpecialCachedValue::BOOLEAN;

constexpr int32_t poi::hssf::record::FormulaRecord_SpecialCachedValue::ERROR_CODE;

constexpr int32_t poi::hssf::record::FormulaRecord_SpecialCachedValue::EMPTY;

void poi::hssf::record::FormulaRecord_SpecialCachedValue::ctor(::int8_tArray* data)
{
    super::ctor();
    _variableData = data;
}

int32_t poi::hssf::record::FormulaRecord_SpecialCachedValue::getTypeCode()
{
    return (*_variableData)[int32_t(0)];
}

poi::hssf::record::FormulaRecord_SpecialCachedValue* poi::hssf::record::FormulaRecord_SpecialCachedValue::create(int64_t valueLongBits)
{
    clinit();
    if((BIT_MARKER & valueLongBits) != BIT_MARKER) {
        return nullptr;
    }
    auto result = new ::int8_tArray(VARIABLE_DATA_LENGTH);
    auto x = valueLongBits;
    for (auto i = int32_t(0); i < VARIABLE_DATA_LENGTH; i++) {
        (*result)[i] = static_cast< int8_t >(x);
        x >>= 8;
    }
    switch ((*result)[int32_t(0)]) {
    case STRING:
    case BOOLEAN:
    case ERROR_CODE:
    case EMPTY:
        break;
    default:
        throw new ::poi::util::RecordFormatException(::java::lang::StringBuilder().append(u"Bad special value code ("_j)->append((*result)[int32_t(0)])
            ->append(u")"_j)->toString());
    }

    return new FormulaRecord_SpecialCachedValue(result);
}

void poi::hssf::record::FormulaRecord_SpecialCachedValue::serialize(::poi::util::LittleEndianOutput* out)
{
    npc(out)->write(_variableData);
    npc(out)->writeShort(65535);
}

java::lang::String* poi::hssf::record::FormulaRecord_SpecialCachedValue::formatDebugString()
{
    return ::java::lang::StringBuilder().append(formatValue())->append(u' ')
        ->append(::poi::util::HexDump::toHex(_variableData))->toString();
}

java::lang::String* poi::hssf::record::FormulaRecord_SpecialCachedValue::formatValue()
{
    auto typeCode = getTypeCode();
    switch (typeCode) {
    case STRING:
        return u"<string>"_j;
    case BOOLEAN:
        return getDataValue() == 0 ? u"FALSE"_j : u"TRUE"_j;
    case ERROR_CODE:
        return ::poi::ss::formula::eval::ErrorEval::getText(getDataValue());
    case EMPTY:
        return u"<empty>"_j;
    }

    return ::java::lang::StringBuilder().append(u"#error(type="_j)->append(typeCode)
        ->append(u")#"_j)->toString();
}

int32_t poi::hssf::record::FormulaRecord_SpecialCachedValue::getDataValue()
{
    return (*_variableData)[DATA_INDEX];
}

poi::hssf::record::FormulaRecord_SpecialCachedValue* poi::hssf::record::FormulaRecord_SpecialCachedValue::createCachedEmptyValue()
{
    clinit();
    return create(EMPTY, 0);
}

poi::hssf::record::FormulaRecord_SpecialCachedValue* poi::hssf::record::FormulaRecord_SpecialCachedValue::createForString()
{
    clinit();
    return create(STRING, 0);
}

poi::hssf::record::FormulaRecord_SpecialCachedValue* poi::hssf::record::FormulaRecord_SpecialCachedValue::createCachedBoolean(bool b)
{
    clinit();
    return create(BOOLEAN, b ? int32_t(1) : int32_t(0));
}

poi::hssf::record::FormulaRecord_SpecialCachedValue* poi::hssf::record::FormulaRecord_SpecialCachedValue::createCachedErrorCode(int32_t errorCode)
{
    clinit();
    return create(ERROR_CODE, errorCode);
}

poi::hssf::record::FormulaRecord_SpecialCachedValue* poi::hssf::record::FormulaRecord_SpecialCachedValue::create(int32_t code, int32_t data)
{
    clinit();
    auto vd = (new ::int8_tArray({
        static_cast< int8_t >(code)
        , static_cast< int8_t >(int32_t(0))
        , static_cast< int8_t >(data)
        , static_cast< int8_t >(int32_t(0))
        , static_cast< int8_t >(int32_t(0))
        , static_cast< int8_t >(int32_t(0))
    }));
    return new FormulaRecord_SpecialCachedValue(vd);
}

java::lang::String* poi::hssf::record::FormulaRecord_SpecialCachedValue::toString()
{
    return ::java::lang::StringBuilder().append(npc(getClass())->getName())->append(u'[')
        ->append(formatValue())
        ->append(u']')->toString();
}

int32_t poi::hssf::record::FormulaRecord_SpecialCachedValue::getValueType()
{
    auto typeCode = getTypeCode();
    switch (typeCode) {
    case STRING:
        return npc(::poi::ss::usermodel::CellType::STRING)->getCode();
    case BOOLEAN:
        return npc(::poi::ss::usermodel::CellType::BOOLEAN)->getCode();
    case ERROR_CODE:
        return npc(::poi::ss::usermodel::CellType::ERROR)->getCode();
    case EMPTY:
        return npc(::poi::ss::usermodel::CellType::STRING)->getCode();
    }

    throw new ::java::lang::IllegalStateException(::java::lang::StringBuilder().append(u"Unexpected type id ("_j)->append(typeCode)
        ->append(u")"_j)->toString());
}

bool poi::hssf::record::FormulaRecord_SpecialCachedValue::getBooleanValue()
{
    if(getTypeCode() != BOOLEAN) {
        throw new ::java::lang::IllegalStateException(::java::lang::StringBuilder().append(u"Not a boolean cached value - "_j)->append(formatValue())->toString());
    }
    return getDataValue() != 0;
}

int32_t poi::hssf::record::FormulaRecord_SpecialCachedValue::getErrorValue()
{
    if(getTypeCode() != ERROR_CODE) {
        throw new ::java::lang::IllegalStateException(::java::lang::StringBuilder().append(u"Not an error cached value - "_j)->append(formatValue())->toString());
    }
    return getDataValue();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::record::FormulaRecord_SpecialCachedValue::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.FormulaRecord.SpecialCachedValue", 59);
    return c;
}

java::lang::Class* poi::hssf::record::FormulaRecord_SpecialCachedValue::getClass0()
{
    return class_();
}

