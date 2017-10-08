// Generated from /POI/java/org/apache/poi/ss/formula/ptg/ArrayPtg.java
#include <org/apache/poi/ss/formula/ptg/ArrayPtg.hpp>

#include <java/io/Serializable.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/Boolean.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Cloneable.hpp>
#include <java/lang/Double.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/IllegalStateException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/RuntimeException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <java/lang/StringBuilder.hpp>
#include <org/apache/poi/ss/formula/constant/ConstantValueParser.hpp>
#include <org/apache/poi/ss/formula/constant/ErrorConstant.hpp>
#include <org/apache/poi/ss/formula/ptg/Ptg.hpp>
#include <org/apache/poi/ss/util/NumberToTextConverter.hpp>
#include <org/apache/poi/util/LittleEndianOutput.hpp>
#include <SubArray.hpp>
#include <ObjectArray.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace io
    {
typedef ::SubArray< ::java::io::Serializable, ::java::lang::ObjectArray > SerializableArray;
    } // io

    namespace lang
    {
typedef ::SubArray< ::java::lang::Cloneable, ObjectArray > CloneableArray;
typedef ::SubArray< ::java::lang::ObjectArray, CloneableArray, ::java::io::SerializableArray > ObjectArrayArray;
    } // lang
} // java

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

poi::ss::formula::ptg::ArrayPtg::ArrayPtg(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::formula::ptg::ArrayPtg::ArrayPtg(int32_t reserved0, int32_t reserved1, int32_t reserved2, int32_t nColumns, int32_t nRows, ::java::lang::ObjectArray* arrayValues) 
    : ArrayPtg(*static_cast< ::default_init_tag* >(0))
{
    ctor(reserved0,reserved1,reserved2,nColumns,nRows,arrayValues);
}

poi::ss::formula::ptg::ArrayPtg::ArrayPtg(::java::lang::ObjectArrayArray* values2d) 
    : ArrayPtg(*static_cast< ::default_init_tag* >(0))
{
    ctor(values2d);
}

constexpr int8_t poi::ss::formula::ptg::ArrayPtg::sid;

constexpr int32_t poi::ss::formula::ptg::ArrayPtg::RESERVED_FIELD_LEN;

constexpr int32_t poi::ss::formula::ptg::ArrayPtg::PLAIN_TOKEN_SIZE;

void poi::ss::formula::ptg::ArrayPtg::ctor(int32_t reserved0, int32_t reserved1, int32_t reserved2, int32_t nColumns, int32_t nRows, ::java::lang::ObjectArray* arrayValues)
{
    super::ctor();
    _reserved0Int = reserved0;
    _reserved1Short = reserved1;
    _reserved2Byte = reserved2;
    _nColumns = nColumns;
    _nRows = nRows;
    _arrayValues = npc(arrayValues)->clone();
}

void poi::ss::formula::ptg::ArrayPtg::ctor(::java::lang::ObjectArrayArray* values2d)
{
    super::ctor();
    auto nColumns = npc((*values2d)[int32_t(0)])->length;
    auto nRows = npc(values2d)->length;
    _nColumns = static_cast< int16_t >(nColumns);
    _nRows = static_cast< int16_t >(nRows);
    auto vv = new ::java::lang::ObjectArray(_nColumns * _nRows);
    for (auto r = int32_t(0); r < nRows; r++) {
        auto rowData = (*values2d)[r];
        for (auto c = int32_t(0); c < nColumns; c++) {
            vv->set(getValueIndex(c, r), (*rowData)[c]);
        }
    }
    _arrayValues = vv;
    _reserved0Int = 0;
    _reserved1Short = 0;
    _reserved2Byte = 0;
}

java::lang::ObjectArrayArray* poi::ss::formula::ptg::ArrayPtg::getTokenArrayValues()
{
    if(_arrayValues == nullptr) {
        throw new ::java::lang::IllegalStateException(u"array values not read yet"_j);
    }
    auto result = new ::java::lang::ObjectArrayArray(_nRows);
    for (auto r = int32_t(0); r < _nRows; r++) {
        auto rowData = (*result)[r];
        for (auto c = int32_t(0); c < _nColumns; c++) {
            rowData->set(c, (*_arrayValues)[getValueIndex(c, r)]);
        }
    }
    return result;
}

bool poi::ss::formula::ptg::ArrayPtg::isBaseToken()
{
    return false;
}

java::lang::String* poi::ss::formula::ptg::ArrayPtg::toString()
{
    auto sb = new ::java::lang::StringBuffer(u"[ArrayPtg]\n"_j);
    npc(npc(npc(sb)->append(u"nRows = "_j))->append(getRowCount()))->append(u"\n"_j);
    npc(npc(npc(sb)->append(u"nCols = "_j))->append(getColumnCount()))->append(u"\n"_j);
    if(_arrayValues == nullptr) {
        npc(sb)->append(u"  #values#uninitialised#\n"_j);
    } else {
        npc(npc(sb)->append(u"  "_j))->append(toFormulaString());
    }
    return npc(sb)->toString();
}

int32_t poi::ss::formula::ptg::ArrayPtg::getValueIndex(int32_t colIx, int32_t rowIx)
{
    if(colIx < 0 || colIx >= _nColumns) {
        throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(u"Specified colIx ("_j)->append(colIx)
            ->append(u") is outside the allowed range (0.."_j)
            ->append((_nColumns - int32_t(1)))
            ->append(u")"_j)->toString());
    }
    if(rowIx < 0 || rowIx >= _nRows) {
        throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(u"Specified rowIx ("_j)->append(rowIx)
            ->append(u") is outside the allowed range (0.."_j)
            ->append((_nRows - int32_t(1)))
            ->append(u")"_j)->toString());
    }
    return rowIx * _nColumns + colIx;
}

void poi::ss::formula::ptg::ArrayPtg::write(::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeByte(sid + getPtgClass());
    npc(out)->writeInt(_reserved0Int);
    npc(out)->writeShort(_reserved1Short);
    npc(out)->writeByte(_reserved2Byte);
}

int32_t poi::ss::formula::ptg::ArrayPtg::writeTokenValueBytes(::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeByte(_nColumns - int32_t(1));
    npc(out)->writeShort(_nRows - int32_t(1));
    ::poi::ss::formula::constant::ConstantValueParser::encode(out, _arrayValues);
    return int32_t(3) + ::poi::ss::formula::constant::ConstantValueParser::getEncodedSize(_arrayValues);
}

int32_t poi::ss::formula::ptg::ArrayPtg::getRowCount()
{
    return _nRows;
}

int32_t poi::ss::formula::ptg::ArrayPtg::getColumnCount()
{
    return _nColumns;
}

int32_t poi::ss::formula::ptg::ArrayPtg::getSize()
{
    return PLAIN_TOKEN_SIZE + int32_t(1) + int32_t(2)+ ::poi::ss::formula::constant::ConstantValueParser::getEncodedSize(_arrayValues);
}

java::lang::String* poi::ss::formula::ptg::ArrayPtg::toFormulaString()
{
    auto b = new ::java::lang::StringBuffer();
    npc(b)->append(u"{"_j);
    for (auto y = int32_t(0); y < _nRows; y++) {
        if(y > 0) {
            npc(b)->append(u";"_j);
        }
        for (auto x = int32_t(0); x < _nColumns; x++) {
            if(x > 0) {
                npc(b)->append(u","_j);
            }
            auto o = (*_arrayValues)[getValueIndex(x, y)];
            npc(b)->append(getConstantText(o));
        }
    }
    npc(b)->append(u"}"_j);
    return npc(b)->toString();
}

java::lang::String* poi::ss::formula::ptg::ArrayPtg::getConstantText(::java::lang::Object* o)
{
    clinit();
    if(o == nullptr) {
        throw new ::java::lang::RuntimeException(u"Array item cannot be null"_j);
    }
    if(dynamic_cast< ::java::lang::String* >(o) != nullptr) {
        return ::java::lang::StringBuilder().append(u"\""_j)->append(java_cast< ::java::lang::String* >(o))
            ->append(u"\""_j)->toString();
    }
    if(dynamic_cast< ::java::lang::Double* >(o) != nullptr) {
        return ::poi::ss::util::NumberToTextConverter::toText(npc((java_cast< ::java::lang::Double* >(o)))->doubleValue());
    }
    if(dynamic_cast< ::java::lang::Boolean* >(o) != nullptr) {
        return npc((java_cast< ::java::lang::Boolean* >(o)))->booleanValue() ? u"TRUE"_j : u"FALSE"_j;
    }
    if(dynamic_cast< ::poi::ss::formula::constant::ErrorConstant* >(o) != nullptr) {
        return npc((java_cast< ::poi::ss::formula::constant::ErrorConstant* >(o)))->getText();
    }
    throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(u"Unexpected constant class ("_j)->append(npc(npc(o)->getClass())->getName())
        ->append(u")"_j)->toString());
}

int8_t poi::ss::formula::ptg::ArrayPtg::getDefaultOperandClass()
{
    return Ptg::CLASS_ARRAY;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::ptg::ArrayPtg::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.ptg.ArrayPtg", 38);
    return c;
}

java::lang::Class* poi::ss::formula::ptg::ArrayPtg::getClass0()
{
    return class_();
}

