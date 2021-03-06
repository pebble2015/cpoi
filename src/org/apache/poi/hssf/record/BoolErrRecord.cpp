// Generated from /POI/java/org/apache/poi/hssf/record/BoolErrRecord.java
#include <org/apache/poi/hssf/record/BoolErrRecord.hpp>

#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <org/apache/poi/hssf/record/RecordInputStream.hpp>
#include <org/apache/poi/ss/usermodel/FormulaError.hpp>
#include <org/apache/poi/util/HexDump.hpp>
#include <org/apache/poi/util/LittleEndianOutput.hpp>
#include <org/apache/poi/util/RecordFormatException.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::hssf::record::BoolErrRecord::BoolErrRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::record::BoolErrRecord::BoolErrRecord() 
    : BoolErrRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::hssf::record::BoolErrRecord::BoolErrRecord(RecordInputStream* in) 
    : BoolErrRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int16_t poi::hssf::record::BoolErrRecord::sid;

void poi::hssf::record::BoolErrRecord::ctor()
{
    super::ctor();
}

void poi::hssf::record::BoolErrRecord::ctor(RecordInputStream* in)
{
    super::ctor(in);
    switch (npc(in)->remaining()) {
    case int32_t(2):
        _value = npc(in)->readByte();
        break;
    case int32_t(3):
        _value = npc(in)->readUShort();
        break;
    default:
        throw new ::poi::util::RecordFormatException(::java::lang::StringBuilder().append(u"Unexpected size ("_j)->append(npc(in)->remaining())
            ->append(u") for BOOLERR record."_j)->toString());
    }

    auto flag = npc(in)->readUByte();
    switch (flag) {
    case int32_t(0):
        _isError = false;
        break;
    case int32_t(1):
        _isError = true;
        break;
    default:
        throw new ::poi::util::RecordFormatException(::java::lang::StringBuilder().append(u"Unexpected isError flag ("_j)->append(flag)
            ->append(u") for BOOLERR record."_j)->toString());
    }

}

void poi::hssf::record::BoolErrRecord::setValue(bool value)
{
    _value = value ? int32_t(1) : int32_t(0);
    _isError = false;
}

void poi::hssf::record::BoolErrRecord::setValue(int8_t value)
{
    setValue(::poi::ss::usermodel::FormulaError::forInt(value));
}

void poi::hssf::record::BoolErrRecord::setValue(::poi::ss::usermodel::FormulaError* value)
{
    {
        auto v = value;
        if((v == ::poi::ss::usermodel::FormulaError::NULL_) || (v == ::poi::ss::usermodel::FormulaError::DIV0) || (v == ::poi::ss::usermodel::FormulaError::VALUE) || (v == ::poi::ss::usermodel::FormulaError::REF) || (v == ::poi::ss::usermodel::FormulaError::NAME) || (v == ::poi::ss::usermodel::FormulaError::NUM) || (v == ::poi::ss::usermodel::FormulaError::NA)) {
            _value = npc(value)->getCode();
            _isError = true;
            return;
        }
        if((((v != ::poi::ss::usermodel::FormulaError::NULL_) && (v != ::poi::ss::usermodel::FormulaError::DIV0) && (v != ::poi::ss::usermodel::FormulaError::VALUE) && (v != ::poi::ss::usermodel::FormulaError::REF) && (v != ::poi::ss::usermodel::FormulaError::NAME) && (v != ::poi::ss::usermodel::FormulaError::NUM) && (v != ::poi::ss::usermodel::FormulaError::NA)))) {
            throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(u"Error Value can only be 0,7,15,23,29,36 or 42. It cannot be "_j)->append(npc(value)->getCode())
                ->append(u" ("_j)
                ->append(static_cast< ::java::lang::Object* >(value))
                ->append(u")"_j)->toString());
        }
end_switch0:;
    }

}

bool poi::hssf::record::BoolErrRecord::getBooleanValue()
{
    return _value != 0;
}

int8_t poi::hssf::record::BoolErrRecord::getErrorValue()
{
    return static_cast< int8_t >(_value);
}

bool poi::hssf::record::BoolErrRecord::isBoolean()
{
    return !_isError;
}

bool poi::hssf::record::BoolErrRecord::isError()
{
    return _isError;
}

java::lang::String* poi::hssf::record::BoolErrRecord::getRecordName()
{
    return u"BOOLERR"_j;
}

void poi::hssf::record::BoolErrRecord::appendValueText(::java::lang::StringBuilder* sb)
{
    if(isBoolean()) {
        npc(sb)->append(u"  .boolVal = "_j);
        npc(sb)->append(getBooleanValue());
    } else {
        npc(sb)->append(u"  .errCode = "_j);
        npc(sb)->append(npc(::poi::ss::usermodel::FormulaError::forInt(getErrorValue()))->getString());
        npc(npc(npc(sb)->append(u" ("_j))->append(::poi::util::HexDump::byteToHex(getErrorValue())))->append(u")"_j);
    }
}

void poi::hssf::record::BoolErrRecord::serializeValue(::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeByte(_value);
    npc(out)->writeByte(_isError ? int32_t(1) : int32_t(0));
}

int32_t poi::hssf::record::BoolErrRecord::getValueDataSize()
{
    return 2;
}

int16_t poi::hssf::record::BoolErrRecord::getSid()
{
    return sid;
}

poi::hssf::record::BoolErrRecord* poi::hssf::record::BoolErrRecord::clone()
{
    auto rec = new BoolErrRecord();
    copyBaseFields(rec);
    npc(rec)->_value = _value;
    npc(rec)->_isError = _isError;
    return rec;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::record::BoolErrRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.BoolErrRecord", 40);
    return c;
}

java::lang::Class* poi::hssf::record::BoolErrRecord::getClass0()
{
    return class_();
}

