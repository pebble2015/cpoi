// Generated from /POI/java/org/apache/poi/hssf/usermodel/HSSFClientAnchor.java
#include <org/apache/poi/hssf/usermodel/HSSFClientAnchor.hpp>

#include <java/lang/Class.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/Integer.hpp>
#include <java/lang/Math.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <org/apache/poi/ddf/EscherClientAnchorRecord.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFRow.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFSheet.hpp>
#include <org/apache/poi/ss/SpreadsheetVersion.hpp>
#include <org/apache/poi/ss/usermodel/ClientAnchor_AnchorType.hpp>
#include <org/apache/poi/ss/usermodel/Row.hpp>

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

poi::hssf::usermodel::HSSFClientAnchor::HSSFClientAnchor(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::usermodel::HSSFClientAnchor::HSSFClientAnchor(::poi::ddf::EscherClientAnchorRecord* escherClientAnchorRecord) 
    : HSSFClientAnchor(*static_cast< ::default_init_tag* >(0))
{
    ctor(escherClientAnchorRecord);
}

poi::hssf::usermodel::HSSFClientAnchor::HSSFClientAnchor() 
    : HSSFClientAnchor(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::hssf::usermodel::HSSFClientAnchor::HSSFClientAnchor(int32_t dx1, int32_t dy1, int32_t dx2, int32_t dy2, int16_t col1, int32_t row1, int16_t col2, int32_t row2) 
    : HSSFClientAnchor(*static_cast< ::default_init_tag* >(0))
{
    ctor(dx1,dy1,dx2,dy2,col1,row1,col2,row2);
}

int32_t& poi::hssf::usermodel::HSSFClientAnchor::MAX_COL()
{
    clinit();
    return MAX_COL_;
}
int32_t poi::hssf::usermodel::HSSFClientAnchor::MAX_COL_;

int32_t& poi::hssf::usermodel::HSSFClientAnchor::MAX_ROW()
{
    clinit();
    return MAX_ROW_;
}
int32_t poi::hssf::usermodel::HSSFClientAnchor::MAX_ROW_;

void poi::hssf::usermodel::HSSFClientAnchor::ctor(::poi::ddf::EscherClientAnchorRecord* escherClientAnchorRecord)
{
    super::ctor();
    this->_escherClientAnchor = escherClientAnchorRecord;
}

void poi::hssf::usermodel::HSSFClientAnchor::ctor()
{
    super::ctor();
}

void poi::hssf::usermodel::HSSFClientAnchor::ctor(int32_t dx1, int32_t dy1, int32_t dx2, int32_t dy2, int16_t col1, int32_t row1, int16_t col2, int32_t row2)
{
    super::ctor(dx1, dy1, dx2, dy2);
    checkRange(dx1, 0, 1023, u"dx1"_j);
    checkRange(dx2, 0, 1023, u"dx2"_j);
    checkRange(dy1, 0, 255, u"dy1"_j);
    checkRange(dy2, 0, 255, u"dy2"_j);
    checkRange(col1, 0, MAX_COL_, u"col1"_j);
    checkRange(col2, 0, MAX_COL_, u"col2"_j);
    checkRange(row1, 0, MAX_ROW_, u"row1"_j);
    checkRange(row2, 0, MAX_ROW_, u"row2"_j);
    setCol1(static_cast< int16_t >(::java::lang::Math::min(static_cast< int32_t >(col1), static_cast< int32_t >(col2))));
    setCol2(static_cast< int16_t >(::java::lang::Math::max(static_cast< int32_t >(col1), static_cast< int32_t >(col2))));
    setRow1(::java::lang::Math::min(row1, row2));
    setRow2(::java::lang::Math::max(row1, row2));
    if(col1 > col2) {
        _isHorizontallyFlipped = true;
    }
    if(row1 > row2) {
        _isVerticallyFlipped = true;
    }
}

float poi::hssf::usermodel::HSSFClientAnchor::getAnchorHeightInPoints(HSSFSheet* sheet)
{
    auto y1 = getDy1();
    auto y2 = getDy2();
    auto row1 = ::java::lang::Math::min(getRow1(), getRow2());
    auto row2 = ::java::lang::Math::max(getRow1(), getRow2());
    float points = int32_t(0);
    if(row1 == row2) {
        points = ((y2 - y1) / 256.0f) * getRowHeightInPoints(sheet, row2);
    } else {
        points += ((256.0f - y1) / 256.0f) * getRowHeightInPoints(sheet, row1);
        for (auto i = row1 + int32_t(1); i < row2; i++) {
            points += getRowHeightInPoints(sheet, i);
        }
        points += (y2 / 256.0f) * getRowHeightInPoints(sheet, row2);
    }
    return points;
}

float poi::hssf::usermodel::HSSFClientAnchor::getRowHeightInPoints(HSSFSheet* sheet, int32_t rowNum)
{
    auto row = java_cast< HSSFRow* >(npc(sheet)->getRow(rowNum));
    if(row == nullptr) {
        return npc(sheet)->getDefaultRowHeightInPoints();
    }
    return npc(row)->getHeightInPoints();
}

int16_t poi::hssf::usermodel::HSSFClientAnchor::getCol1()
{
    return npc(_escherClientAnchor)->getCol1();
}

void poi::hssf::usermodel::HSSFClientAnchor::setCol1(int16_t col1)
{
    checkRange(col1, 0, MAX_COL_, u"col1"_j);
    npc(_escherClientAnchor)->setCol1(col1);
}

void poi::hssf::usermodel::HSSFClientAnchor::setCol1(int32_t col1)
{
    setCol1(static_cast< int16_t >(col1));
}

int16_t poi::hssf::usermodel::HSSFClientAnchor::getCol2()
{
    return npc(_escherClientAnchor)->getCol2();
}

void poi::hssf::usermodel::HSSFClientAnchor::setCol2(int16_t col2)
{
    checkRange(col2, 0, MAX_COL_, u"col2"_j);
    npc(_escherClientAnchor)->setCol2(col2);
}

void poi::hssf::usermodel::HSSFClientAnchor::setCol2(int32_t col2)
{
    setCol2(static_cast< int16_t >(col2));
}

int32_t poi::hssf::usermodel::HSSFClientAnchor::getRow1()
{
    return unsignedValue(npc(_escherClientAnchor)->getRow1());
}

void poi::hssf::usermodel::HSSFClientAnchor::setRow1(int32_t row1)
{
    checkRange(row1, 0, MAX_ROW_, u"row1"_j);
    npc(_escherClientAnchor)->setRow1(npc(::java::lang::Integer::valueOf(row1))->shortValue());
}

int32_t poi::hssf::usermodel::HSSFClientAnchor::getRow2()
{
    return unsignedValue(npc(_escherClientAnchor)->getRow2());
}

void poi::hssf::usermodel::HSSFClientAnchor::setRow2(int32_t row2)
{
    checkRange(row2, 0, MAX_ROW_, u"row2"_j);
    npc(_escherClientAnchor)->setRow2(npc(::java::lang::Integer::valueOf(row2))->shortValue());
}

void poi::hssf::usermodel::HSSFClientAnchor::setAnchor(int16_t col1, int32_t row1, int32_t x1, int32_t y1, int16_t col2, int32_t row2, int32_t x2, int32_t y2)
{
    checkRange(getDx1(), 0, 1023, u"dx1"_j);
    checkRange(getDx2(), 0, 1023, u"dx2"_j);
    checkRange(getDy1(), 0, 255, u"dy1"_j);
    checkRange(getDy2(), 0, 255, u"dy2"_j);
    checkRange(getCol1(), 0, MAX_COL_, u"col1"_j);
    checkRange(getCol2(), 0, MAX_COL_, u"col2"_j);
    checkRange(getRow1(), 0, MAX_ROW_, u"row1"_j);
    checkRange(getRow2(), 0, MAX_ROW_, u"row2"_j);
    setCol1(col1);
    setRow1(row1);
    setDx1(x1);
    setDy1(y1);
    setCol2(col2);
    setRow2(row2);
    setDx2(x2);
    setDy2(y2);
}

bool poi::hssf::usermodel::HSSFClientAnchor::isHorizontallyFlipped()
{
    return _isHorizontallyFlipped;
}

bool poi::hssf::usermodel::HSSFClientAnchor::isVerticallyFlipped()
{
    return _isVerticallyFlipped;
}

poi::ddf::EscherRecord* poi::hssf::usermodel::HSSFClientAnchor::getEscherAnchor()
{
    return _escherClientAnchor;
}

void poi::hssf::usermodel::HSSFClientAnchor::createEscherAnchor()
{
    _escherClientAnchor = new ::poi::ddf::EscherClientAnchorRecord();
}

poi::ss::usermodel::ClientAnchor_AnchorType* poi::hssf::usermodel::HSSFClientAnchor::getAnchorType()
{
    return ::poi::ss::usermodel::ClientAnchor_AnchorType::byId(npc(_escherClientAnchor)->getFlag());
}

void poi::hssf::usermodel::HSSFClientAnchor::setAnchorType(::poi::ss::usermodel::ClientAnchor_AnchorType* anchorType)
{
    npc(_escherClientAnchor)->setFlag(npc(anchorType)->value);
}

void poi::hssf::usermodel::HSSFClientAnchor::checkRange(int32_t value, int32_t minRange, int32_t maxRange, ::java::lang::String* varName)
{
    if(value < minRange || value > maxRange)
        throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(varName)->append(u" must be between "_j)
            ->append(minRange)
            ->append(u" and "_j)
            ->append(maxRange)
            ->append(u", but was: "_j)
            ->append(value)->toString());

}

int32_t poi::hssf::usermodel::HSSFClientAnchor::unsignedValue(int16_t s)
{
    clinit();
    return (s < 0 ? int32_t(65536) + s : static_cast< int32_t >(s));
}

bool poi::hssf::usermodel::HSSFClientAnchor::equals(::java::lang::Object* obj)
{
    if(obj == nullptr)
        return false;

    if(obj == static_cast< ::java::lang::Object* >(this))
        return true;

    if(static_cast< ::java::lang::Object* >(npc(obj)->getClass()) != static_cast< ::java::lang::Object* >(getClass()))
        return false;

    auto anchor = java_cast< HSSFClientAnchor* >(obj);
    return npc(anchor)->getCol1() == getCol1() && npc(anchor)->getCol2() == getCol2() && npc(anchor)->getDx1() == getDx1() && npc(anchor)->getDx2() == getDx2() && npc(anchor)->getDy1() == getDy1() && npc(anchor)->getDy2() == getDy2() && npc(anchor)->getRow1() == getRow1() && npc(anchor)->getRow2() == getRow2() && npc(anchor)->getAnchorType() == getAnchorType();
}

int32_t poi::hssf::usermodel::HSSFClientAnchor::hashCode()
{
    /* assert(false : u"hashCode not designed"_j) */ ;
    return 42;
}

int32_t poi::hssf::usermodel::HSSFClientAnchor::getDx1()
{
    return npc(_escherClientAnchor)->getDx1();
}

void poi::hssf::usermodel::HSSFClientAnchor::setDx1(int32_t dx1)
{
    npc(_escherClientAnchor)->setDx1(npc(::java::lang::Integer::valueOf(dx1))->shortValue());
}

int32_t poi::hssf::usermodel::HSSFClientAnchor::getDy1()
{
    return npc(_escherClientAnchor)->getDy1();
}

void poi::hssf::usermodel::HSSFClientAnchor::setDy1(int32_t dy1)
{
    npc(_escherClientAnchor)->setDy1(npc(::java::lang::Integer::valueOf(dy1))->shortValue());
}

int32_t poi::hssf::usermodel::HSSFClientAnchor::getDy2()
{
    return npc(_escherClientAnchor)->getDy2();
}

void poi::hssf::usermodel::HSSFClientAnchor::setDy2(int32_t dy2)
{
    npc(_escherClientAnchor)->setDy2(npc(::java::lang::Integer::valueOf(dy2))->shortValue());
}

int32_t poi::hssf::usermodel::HSSFClientAnchor::getDx2()
{
    return npc(_escherClientAnchor)->getDx2();
}

void poi::hssf::usermodel::HSSFClientAnchor::setDx2(int32_t dx2)
{
    npc(_escherClientAnchor)->setDx2(npc(::java::lang::Integer::valueOf(dx2))->shortValue());
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::usermodel::HSSFClientAnchor::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.usermodel.HSSFClientAnchor", 46);
    return c;
}

void poi::hssf::usermodel::HSSFClientAnchor::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        MAX_COL_ = npc(::poi::ss::SpreadsheetVersion::EXCEL97)->getLastColumnIndex();
        MAX_ROW_ = npc(::poi::ss::SpreadsheetVersion::EXCEL97)->getLastRowIndex();
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* poi::hssf::usermodel::HSSFClientAnchor::getClass0()
{
    return class_();
}

