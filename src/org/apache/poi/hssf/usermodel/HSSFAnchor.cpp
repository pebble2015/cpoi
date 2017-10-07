// Generated from /POI/java/org/apache/poi/hssf/usermodel/HSSFAnchor.java
#include <org/apache/poi/hssf/usermodel/HSSFAnchor.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <org/apache/poi/ddf/EscherChildAnchorRecord.hpp>
#include <org/apache/poi/ddf/EscherClientAnchorRecord.hpp>
#include <org/apache/poi/ddf/EscherContainerRecord.hpp>
#include <org/apache/poi/ddf/EscherRecord.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFChildAnchor.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFClientAnchor.hpp>

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

org::apache::poi::hssf::usermodel::HSSFAnchor::HSSFAnchor(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::usermodel::HSSFAnchor::HSSFAnchor() 
    : HSSFAnchor(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::hssf::usermodel::HSSFAnchor::HSSFAnchor(int32_t dx1, int32_t dy1, int32_t dx2, int32_t dy2) 
    : HSSFAnchor(*static_cast< ::default_init_tag* >(0))
{
    ctor(dx1,dy1,dx2,dy2);
}

void org::apache::poi::hssf::usermodel::HSSFAnchor::init()
{
    _isHorizontallyFlipped = false;
    _isVerticallyFlipped = false;
}

void org::apache::poi::hssf::usermodel::HSSFAnchor::ctor()
{
    super::ctor();
    init();
    createEscherAnchor();
}

void org::apache::poi::hssf::usermodel::HSSFAnchor::ctor(int32_t dx1, int32_t dy1, int32_t dx2, int32_t dy2)
{
    super::ctor();
    init();
    createEscherAnchor();
    setDx1(dx1);
    setDy1(dy1);
    setDx2(dx2);
    setDy2(dy2);
}

org::apache::poi::hssf::usermodel::HSSFAnchor* org::apache::poi::hssf::usermodel::HSSFAnchor::createAnchorFromEscher(::org::apache::poi::ddf::EscherContainerRecord* container)
{
    clinit();
    if(nullptr != java_cast< ::org::apache::poi::ddf::EscherRecord* >(npc(container)->getChildById(::org::apache::poi::ddf::EscherChildAnchorRecord::RECORD_ID))) {
        return new HSSFChildAnchor(java_cast< ::org::apache::poi::ddf::EscherChildAnchorRecord* >(java_cast< ::org::apache::poi::ddf::EscherRecord* >(npc(container)->getChildById(::org::apache::poi::ddf::EscherChildAnchorRecord::RECORD_ID))));
    } else {
        if(nullptr != java_cast< ::org::apache::poi::ddf::EscherRecord* >(npc(container)->getChildById(::org::apache::poi::ddf::EscherClientAnchorRecord::RECORD_ID))) {
            return new HSSFClientAnchor(java_cast< ::org::apache::poi::ddf::EscherClientAnchorRecord* >(java_cast< ::org::apache::poi::ddf::EscherRecord* >(npc(container)->getChildById(::org::apache::poi::ddf::EscherClientAnchorRecord::RECORD_ID))));
        }
        return nullptr;
    }
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::usermodel::HSSFAnchor::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.usermodel.HSSFAnchor", 40);
    return c;
}

java::lang::Class* org::apache::poi::hssf::usermodel::HSSFAnchor::getClass0()
{
    return class_();
}

