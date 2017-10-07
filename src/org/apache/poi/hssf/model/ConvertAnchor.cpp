// Generated from /POI/java/org/apache/poi/hssf/model/ConvertAnchor.java
#include <org/apache/poi/hssf/model/ConvertAnchor.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/lang/Math.hpp>
#include <java/lang/NullPointerException.hpp>
#include <org/apache/poi/ddf/EscherChildAnchorRecord.hpp>
#include <org/apache/poi/ddf/EscherClientAnchorRecord.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFAnchor.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFChildAnchor.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFClientAnchor.hpp>
#include <org/apache/poi/ss/usermodel/ClientAnchor_AnchorType.hpp>

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

org::apache::poi::hssf::model::ConvertAnchor::ConvertAnchor(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::model::ConvertAnchor::ConvertAnchor()
    : ConvertAnchor(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::ddf::EscherRecord* org::apache::poi::hssf::model::ConvertAnchor::createAnchor(::org::apache::poi::hssf::usermodel::HSSFAnchor* userAnchor)
{
    clinit();
    if(dynamic_cast< ::org::apache::poi::hssf::usermodel::HSSFClientAnchor* >(userAnchor) != nullptr) {
        auto a = java_cast< ::org::apache::poi::hssf::usermodel::HSSFClientAnchor* >(userAnchor);
        auto anchor = new ::org::apache::poi::ddf::EscherClientAnchorRecord();
        npc(anchor)->setRecordId(::org::apache::poi::ddf::EscherClientAnchorRecord::RECORD_ID);
        npc(anchor)->setOptions(static_cast< int16_t >(int32_t(0)));
        npc(anchor)->setFlag(npc(npc(a)->getAnchorType())->value);
        npc(anchor)->setCol1(static_cast< int16_t >(::java::lang::Math::min(static_cast< int32_t >(npc(a)->getCol1()), static_cast< int32_t >(npc(a)->getCol2()))));
        npc(anchor)->setDx1(static_cast< int16_t >(npc(a)->getDx1()));
        npc(anchor)->setRow1(static_cast< int16_t >(::java::lang::Math::min(npc(a)->getRow1(), npc(a)->getRow2())));
        npc(anchor)->setDy1(static_cast< int16_t >(npc(a)->getDy1()));
        npc(anchor)->setCol2(static_cast< int16_t >(::java::lang::Math::max(static_cast< int32_t >(npc(a)->getCol1()), static_cast< int32_t >(npc(a)->getCol2()))));
        npc(anchor)->setDx2(static_cast< int16_t >(npc(a)->getDx2()));
        npc(anchor)->setRow2(static_cast< int16_t >(::java::lang::Math::max(npc(a)->getRow1(), npc(a)->getRow2())));
        npc(anchor)->setDy2(static_cast< int16_t >(npc(a)->getDy2()));
        return anchor;
    }
    auto a = java_cast< ::org::apache::poi::hssf::usermodel::HSSFChildAnchor* >(userAnchor);
    auto anchor = new ::org::apache::poi::ddf::EscherChildAnchorRecord();
    npc(anchor)->setRecordId(::org::apache::poi::ddf::EscherChildAnchorRecord::RECORD_ID);
    npc(anchor)->setOptions(static_cast< int16_t >(int32_t(0)));
    npc(anchor)->setDx1(static_cast< int16_t >(::java::lang::Math::min(npc(a)->getDx1(), npc(a)->getDx2())));
    npc(anchor)->setDy1(static_cast< int16_t >(::java::lang::Math::min(npc(a)->getDy1(), npc(a)->getDy2())));
    npc(anchor)->setDx2(static_cast< int16_t >(::java::lang::Math::max(npc(a)->getDx2(), npc(a)->getDx1())));
    npc(anchor)->setDy2(static_cast< int16_t >(::java::lang::Math::max(npc(a)->getDy2(), npc(a)->getDy1())));
    return anchor;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::model::ConvertAnchor::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.model.ConvertAnchor", 39);
    return c;
}

java::lang::Class* org::apache::poi::hssf::model::ConvertAnchor::getClass0()
{
    return class_();
}

