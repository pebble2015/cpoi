// Generated from /POI/java/org/apache/poi/hssf/usermodel/HSSFChildAnchor.java
#include <org/apache/poi/hssf/usermodel/HSSFChildAnchor.hpp>

#include <java/lang/Class.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Math.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <org/apache/poi/ddf/EscherChildAnchorRecord.hpp>

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

poi::hssf::usermodel::HSSFChildAnchor::HSSFChildAnchor(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::usermodel::HSSFChildAnchor::HSSFChildAnchor(::poi::ddf::EscherChildAnchorRecord* escherChildAnchorRecord) 
    : HSSFChildAnchor(*static_cast< ::default_init_tag* >(0))
{
    ctor(escherChildAnchorRecord);
}

poi::hssf::usermodel::HSSFChildAnchor::HSSFChildAnchor() 
    : HSSFChildAnchor(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::hssf::usermodel::HSSFChildAnchor::HSSFChildAnchor(int32_t dx1, int32_t dy1, int32_t dx2, int32_t dy2) 
    : HSSFChildAnchor(*static_cast< ::default_init_tag* >(0))
{
    ctor(dx1,dy1,dx2,dy2);
}

void poi::hssf::usermodel::HSSFChildAnchor::ctor(::poi::ddf::EscherChildAnchorRecord* escherChildAnchorRecord)
{
    super::ctor();
    this->_escherChildAnchor = escherChildAnchorRecord;
}

void poi::hssf::usermodel::HSSFChildAnchor::ctor()
{
    super::ctor();
    _escherChildAnchor = new ::poi::ddf::EscherChildAnchorRecord();
}

void poi::hssf::usermodel::HSSFChildAnchor::ctor(int32_t dx1, int32_t dy1, int32_t dx2, int32_t dy2)
{
    super::ctor(::java::lang::Math::min(dx1, dx2), ::java::lang::Math::min(dy1, dy2), ::java::lang::Math::max(dx1, dx2), ::java::lang::Math::max(dy1, dy2));
    if(dx1 > dx2) {
        _isHorizontallyFlipped = true;
    }
    if(dy1 > dy2) {
        _isVerticallyFlipped = true;
    }
}

int32_t poi::hssf::usermodel::HSSFChildAnchor::getDx1()
{
    return npc(_escherChildAnchor)->getDx1();
}

void poi::hssf::usermodel::HSSFChildAnchor::setDx1(int32_t dx1)
{
    npc(_escherChildAnchor)->setDx1(dx1);
}

int32_t poi::hssf::usermodel::HSSFChildAnchor::getDy1()
{
    return npc(_escherChildAnchor)->getDy1();
}

void poi::hssf::usermodel::HSSFChildAnchor::setDy1(int32_t dy1)
{
    npc(_escherChildAnchor)->setDy1(dy1);
}

int32_t poi::hssf::usermodel::HSSFChildAnchor::getDy2()
{
    return npc(_escherChildAnchor)->getDy2();
}

void poi::hssf::usermodel::HSSFChildAnchor::setDy2(int32_t dy2)
{
    npc(_escherChildAnchor)->setDy2(dy2);
}

int32_t poi::hssf::usermodel::HSSFChildAnchor::getDx2()
{
    return npc(_escherChildAnchor)->getDx2();
}

void poi::hssf::usermodel::HSSFChildAnchor::setDx2(int32_t dx2)
{
    npc(_escherChildAnchor)->setDx2(dx2);
}

void poi::hssf::usermodel::HSSFChildAnchor::setAnchor(int32_t dx1, int32_t dy1, int32_t dx2, int32_t dy2)
{
    setDx1(::java::lang::Math::min(dx1, dx2));
    setDy1(::java::lang::Math::min(dy1, dy2));
    setDx2(::java::lang::Math::max(dx1, dx2));
    setDy2(::java::lang::Math::max(dy1, dy2));
}

bool poi::hssf::usermodel::HSSFChildAnchor::isHorizontallyFlipped()
{
    return _isHorizontallyFlipped;
}

bool poi::hssf::usermodel::HSSFChildAnchor::isVerticallyFlipped()
{
    return _isVerticallyFlipped;
}

poi::ddf::EscherRecord* poi::hssf::usermodel::HSSFChildAnchor::getEscherAnchor()
{
    return _escherChildAnchor;
}

void poi::hssf::usermodel::HSSFChildAnchor::createEscherAnchor()
{
    _escherChildAnchor = new ::poi::ddf::EscherChildAnchorRecord();
}

bool poi::hssf::usermodel::HSSFChildAnchor::equals(::java::lang::Object* obj)
{
    if(obj == nullptr)
        return false;

    if(obj == static_cast< ::java::lang::Object* >(this))
        return true;

    if(static_cast< ::java::lang::Object* >(npc(obj)->getClass()) != static_cast< ::java::lang::Object* >(getClass()))
        return false;

    auto anchor = java_cast< HSSFChildAnchor* >(obj);
    return npc(anchor)->getDx1() == getDx1() && npc(anchor)->getDx2() == getDx2() && npc(anchor)->getDy1() == getDy1() && npc(anchor)->getDy2() == getDy2();
}

int32_t poi::hssf::usermodel::HSSFChildAnchor::hashCode()
{
    /* assert(false : u"hashCode not designed"_j) */ ;
    return 42;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::usermodel::HSSFChildAnchor::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.usermodel.HSSFChildAnchor", 45);
    return c;
}

java::lang::Class* poi::hssf::usermodel::HSSFChildAnchor::getClass0()
{
    return class_();
}

