// Generated from /POI/java/org/apache/poi/ss/usermodel/CellValue.java
#include <org/apache/poi/ss/usermodel/CellValue.hpp>

#include <java/lang/Class.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <java/lang/StringBuilder.hpp>
#include <org/apache/poi/ss/formula/eval/ErrorEval.hpp>
#include <org/apache/poi/ss/usermodel/CellType.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::ss::usermodel::CellValue::CellValue(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::usermodel::CellValue::CellValue(CellType* cellType, double numberValue, bool booleanValue, ::java::lang::String* textValue, int32_t errorCode) 
    : CellValue(*static_cast< ::default_init_tag* >(0))
{
    ctor(cellType,numberValue,booleanValue,textValue,errorCode);
}

org::apache::poi::ss::usermodel::CellValue::CellValue(double numberValue) 
    : CellValue(*static_cast< ::default_init_tag* >(0))
{
    ctor(numberValue);
}

org::apache::poi::ss::usermodel::CellValue::CellValue(::java::lang::String* stringValue) 
    : CellValue(*static_cast< ::default_init_tag* >(0))
{
    ctor(stringValue);
}

org::apache::poi::ss::usermodel::CellValue*& org::apache::poi::ss::usermodel::CellValue::TRUE()
{
    clinit();
    return TRUE_;
}
org::apache::poi::ss::usermodel::CellValue* org::apache::poi::ss::usermodel::CellValue::TRUE_;

org::apache::poi::ss::usermodel::CellValue*& org::apache::poi::ss::usermodel::CellValue::FALSE()
{
    clinit();
    return FALSE_;
}
org::apache::poi::ss::usermodel::CellValue* org::apache::poi::ss::usermodel::CellValue::FALSE_;

void org::apache::poi::ss::usermodel::CellValue::ctor(CellType* cellType, double numberValue, bool booleanValue, ::java::lang::String* textValue, int32_t errorCode)
{
    super::ctor();
    _cellType = cellType;
    _numberValue = numberValue;
    _booleanValue = booleanValue;
    _textValue = textValue;
    _errorCode = errorCode;
}

void org::apache::poi::ss::usermodel::CellValue::ctor(double numberValue)
{
    ctor(CellType::NUMERIC, numberValue, false, nullptr, int32_t(0));
}

org::apache::poi::ss::usermodel::CellValue* org::apache::poi::ss::usermodel::CellValue::valueOf(bool booleanValue)
{
    clinit();
    return booleanValue ? TRUE_ : FALSE_;
}

void org::apache::poi::ss::usermodel::CellValue::ctor(::java::lang::String* stringValue)
{
    ctor(CellType::STRING, 0.0, false, stringValue, int32_t(0));
}

org::apache::poi::ss::usermodel::CellValue* org::apache::poi::ss::usermodel::CellValue::getError(int32_t errorCode)
{
    clinit();
    return new CellValue(CellType::ERROR, 0.0, false, nullptr, errorCode);
}

bool org::apache::poi::ss::usermodel::CellValue::getBooleanValue()
{
    return _booleanValue;
}

double org::apache::poi::ss::usermodel::CellValue::getNumberValue()
{
    return _numberValue;
}

java::lang::String* org::apache::poi::ss::usermodel::CellValue::getStringValue()
{
    return _textValue;
}

org::apache::poi::ss::usermodel::CellType* org::apache::poi::ss::usermodel::CellValue::getCellTypeEnum()
{
    return _cellType;
}

int32_t org::apache::poi::ss::usermodel::CellValue::getCellType()
{
    return npc(_cellType)->getCode();
}

int8_t org::apache::poi::ss::usermodel::CellValue::getErrorValue()
{
    return static_cast< int8_t >(_errorCode);
}

java::lang::String* org::apache::poi::ss::usermodel::CellValue::toString()
{
    auto sb = new ::java::lang::StringBuffer(int32_t(64));
    npc(npc(sb)->append(npc(getClass())->getName()))->append(u" ["_j);
    npc(sb)->append(formatAsString());
    npc(sb)->append(u"]"_j);
    return npc(sb)->toString();
}

java::lang::String* org::apache::poi::ss::usermodel::CellValue::formatAsString()
{
    {
        auto v = _cellType;
        if((v == CellType::NUMERIC)) {
            return ::java::lang::String::valueOf(_numberValue);
        }
        if((v == CellType::STRING)) {
            return ::java::lang::StringBuilder().append(u'"')->append(_textValue)
                ->append(u'"')->toString();
        }
        if((v == CellType::BOOLEAN)) {
            return _booleanValue ? u"TRUE"_j : u"FALSE"_j;
        }
        if((v == CellType::ERROR)) {
            return ::org::apache::poi::ss::formula::eval::ErrorEval::getText(_errorCode);
        }
        if((((v != CellType::NUMERIC) && (v != CellType::STRING) && (v != CellType::BOOLEAN) && (v != CellType::ERROR)))) {
            return ::java::lang::StringBuilder().append(u"<error unexpected cell type "_j)->append(static_cast< ::java::lang::Object* >(_cellType))
                ->append(u">"_j)->toString();
        }
end_switch0:;
    }

}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::usermodel::CellValue::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.usermodel.CellValue", 37);
    return c;
}

void org::apache::poi::ss::usermodel::CellValue::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        TRUE_ = new CellValue(CellType::BOOLEAN, 0.0, true, nullptr, int32_t(0));
        FALSE_ = new CellValue(CellType::BOOLEAN, 0.0, false, nullptr, int32_t(0));
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* org::apache::poi::ss::usermodel::CellValue::getClass0()
{
    return class_();
}

