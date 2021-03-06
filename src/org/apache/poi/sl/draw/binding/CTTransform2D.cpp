// Generated from /POI/java/org/apache/poi/sl/draw/binding/CTTransform2D.java
#include <org/apache/poi/sl/draw/binding/CTTransform2D.hpp>

#include <java/lang/Boolean.hpp>
#include <java/lang/Integer.hpp>
#include <java/lang/NullPointerException.hpp>
#include <org/apache/poi/sl/draw/binding/CTPoint2D.hpp>
#include <org/apache/poi/sl/draw/binding/CTPositiveSize2D.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::sl::draw::binding::CTTransform2D::CTTransform2D(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::sl::draw::binding::CTTransform2D::CTTransform2D()
    : CTTransform2D(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::sl::draw::binding::CTPoint2D* poi::sl::draw::binding::CTTransform2D::getOff()
{
    return off;
}

void poi::sl::draw::binding::CTTransform2D::setOff(CTPoint2D* value)
{
    this->off = value;
}

bool poi::sl::draw::binding::CTTransform2D::isSetOff()
{
    return (this->off != nullptr);
}

poi::sl::draw::binding::CTPositiveSize2D* poi::sl::draw::binding::CTTransform2D::getExt()
{
    return ext;
}

void poi::sl::draw::binding::CTTransform2D::setExt(CTPositiveSize2D* value)
{
    this->ext = value;
}

bool poi::sl::draw::binding::CTTransform2D::isSetExt()
{
    return (this->ext != nullptr);
}

int32_t poi::sl::draw::binding::CTTransform2D::getRot()
{
    if(rot == nullptr) {
        return 0;
    } else {
        return (npc(rot))->intValue();
    }
}

void poi::sl::draw::binding::CTTransform2D::setRot(int32_t value)
{
    this->rot = ::java::lang::Integer::valueOf(value);
}

bool poi::sl::draw::binding::CTTransform2D::isSetRot()
{
    return (this->rot != nullptr);
}

void poi::sl::draw::binding::CTTransform2D::unsetRot()
{
    this->rot = nullptr;
}

bool poi::sl::draw::binding::CTTransform2D::isFlipH()
{
    if(flipH == nullptr) {
        return false;
    } else {
        return (npc(flipH))->booleanValue();
    }
}

void poi::sl::draw::binding::CTTransform2D::setFlipH(bool value)
{
    this->flipH = ::java::lang::Boolean::valueOf(value);
}

bool poi::sl::draw::binding::CTTransform2D::isSetFlipH()
{
    return (this->flipH != nullptr);
}

void poi::sl::draw::binding::CTTransform2D::unsetFlipH()
{
    this->flipH = nullptr;
}

bool poi::sl::draw::binding::CTTransform2D::isFlipV()
{
    if(flipV == nullptr) {
        return false;
    } else {
        return (npc(flipV))->booleanValue();
    }
}

void poi::sl::draw::binding::CTTransform2D::setFlipV(bool value)
{
    this->flipV = ::java::lang::Boolean::valueOf(value);
}

bool poi::sl::draw::binding::CTTransform2D::isSetFlipV()
{
    return (this->flipV != nullptr);
}

void poi::sl::draw::binding::CTTransform2D::unsetFlipV()
{
    this->flipV = nullptr;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::sl::draw::binding::CTTransform2D::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.sl.draw.binding.CTTransform2D", 44);
    return c;
}

java::lang::Class* poi::sl::draw::binding::CTTransform2D::getClass0()
{
    return class_();
}

