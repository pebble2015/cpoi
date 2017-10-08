// Generated from /POI/java/org/apache/poi/ss/util/CellAddress.java
#include <org/apache/poi/ss/util/CellAddress.hpp>

#include <java/lang/Character.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Integer.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/util/Locale.hpp>
#include <org/apache/poi/ss/usermodel/Cell.hpp>
#include <org/apache/poi/ss/util/CellReference.hpp>

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

poi::ss::util::CellAddress::CellAddress(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::util::CellAddress::CellAddress(int32_t row, int32_t column) 
    : CellAddress(*static_cast< ::default_init_tag* >(0))
{
    ctor(row,column);
}

poi::ss::util::CellAddress::CellAddress(::java::lang::String* address) 
    : CellAddress(*static_cast< ::default_init_tag* >(0))
{
    ctor(address);
}

poi::ss::util::CellAddress::CellAddress(CellReference* reference) 
    : CellAddress(*static_cast< ::default_init_tag* >(0))
{
    ctor(reference);
}

poi::ss::util::CellAddress::CellAddress(CellAddress* address) 
    : CellAddress(*static_cast< ::default_init_tag* >(0))
{
    ctor(address);
}

poi::ss::util::CellAddress::CellAddress(::poi::ss::usermodel::Cell* cell) 
    : CellAddress(*static_cast< ::default_init_tag* >(0))
{
    ctor(cell);
}

poi::ss::util::CellAddress*& poi::ss::util::CellAddress::A1()
{
    clinit();
    return A1_;
}
poi::ss::util::CellAddress* poi::ss::util::CellAddress::A1_;

void poi::ss::util::CellAddress::ctor(int32_t row, int32_t column)
{
    super::ctor();
    this->_row = row;
    this->_col = column;
}

void poi::ss::util::CellAddress::ctor(::java::lang::String* address)
{
    super::ctor();
    auto length = npc(address)->length();
    auto loc = int32_t(0);
    for (; loc < length; loc++) {
        auto ch = npc(address)->charAt(loc);
        if(::java::lang::Character::isDigit(ch)) {
            break;
        }
    }
    auto sCol = npc(npc(address)->substring(0, loc))->toUpperCase(::java::util::Locale::ROOT());
    auto sRow = npc(address)->substring(loc);
    this->_row = ::java::lang::Integer::parseInt(sRow) - int32_t(1);
    this->_col = CellReference::convertColStringToIndex(sCol);
}

void poi::ss::util::CellAddress::ctor(CellReference* reference)
{
    ctor(npc(reference)->getRow(), npc(reference)->getCol());
}

void poi::ss::util::CellAddress::ctor(CellAddress* address)
{
    ctor(npc(address)->getRow(), npc(address)->getColumn());
}

void poi::ss::util::CellAddress::ctor(::poi::ss::usermodel::Cell* cell)
{
    ctor(npc(cell)->getRowIndex(), npc(cell)->getColumnIndex());
}

int32_t poi::ss::util::CellAddress::getRow()
{
    return _row;
}

int32_t poi::ss::util::CellAddress::getColumn()
{
    return _col;
}

int32_t poi::ss::util::CellAddress::compareTo(CellAddress* other)
{
    auto r = this->_row - npc(other)->_row;
    if(r != 0)
        return r;

    r = this->_col - npc(other)->_col;
    if(r != 0)
        return r;

    return 0;
}

int32_t poi::ss::util::CellAddress::compareTo(::java::lang::Object* o)
{ 
    return compareTo(dynamic_cast< CellAddress* >(o));
}

bool poi::ss::util::CellAddress::equals(::java::lang::Object* o)
{
    if(static_cast< ::java::lang::Object* >(this) == o) {
        return true;
    }
    if(!(dynamic_cast< CellAddress* >(o) != nullptr)) {
        return false;
    }
    auto other = java_cast< CellAddress* >(o);
    return _row == npc(other)->_row && _col == npc(other)->_col;
}

int32_t poi::ss::util::CellAddress::hashCode()
{
    return this->_row + this->_col << int32_t(16);
}

java::lang::String* poi::ss::util::CellAddress::toString()
{
    return formatAsString();
}

java::lang::String* poi::ss::util::CellAddress::formatAsString()
{
    return ::java::lang::StringBuilder().append(CellReference::convertNumToColString(this->_col))->append((this->_row + int32_t(1)))->toString();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::util::CellAddress::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.util.CellAddress", 34);
    return c;
}

void poi::ss::util::CellAddress::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        A1_ = new CellAddress(int32_t(0), int32_t(0));
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* poi::ss::util::CellAddress::getClass0()
{
    return class_();
}

