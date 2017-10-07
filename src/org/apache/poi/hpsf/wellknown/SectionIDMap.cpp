// Generated from /POI/java/org/apache/poi/hpsf/wellknown/SectionIDMap.java
#include <org/apache/poi/hpsf/wellknown/SectionIDMap.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Long.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/ThreadLocal.hpp>
#include <java/util/HashMap.hpp>
#include <java/util/Map.hpp>
#include <org/apache/poi/hpsf/ClassID.hpp>
#include <org/apache/poi/hpsf/wellknown/PropertyIDMap.hpp>
#include <ObjectArray.hpp>
#include <SubArray.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace org
{
    namespace apache
    {
        namespace poi
        {
            namespace hpsf
            {
typedef ::SubArray< ::org::apache::poi::hpsf::ClassID, ::java::lang::ObjectArray > ClassIDArray;
            } // hpsf
        } // poi
    } // apache
} // org

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

org::apache::poi::hpsf::wellknown::SectionIDMap::SectionIDMap(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hpsf::wellknown::SectionIDMap::SectionIDMap()
    : SectionIDMap(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

java::lang::ThreadLocal*& org::apache::poi::hpsf::wellknown::SectionIDMap::defaultMap()
{
    clinit();
    return defaultMap_;
}
java::lang::ThreadLocal* org::apache::poi::hpsf::wellknown::SectionIDMap::defaultMap_;

org::apache::poi::hpsf::ClassID*& org::apache::poi::hpsf::wellknown::SectionIDMap::SUMMARY_INFORMATION_ID()
{
    clinit();
    return SUMMARY_INFORMATION_ID_;
}
org::apache::poi::hpsf::ClassID* org::apache::poi::hpsf::wellknown::SectionIDMap::SUMMARY_INFORMATION_ID_;

org::apache::poi::hpsf::ClassID*& org::apache::poi::hpsf::wellknown::SectionIDMap::DOC_SUMMARY_INFORMATION()
{
    clinit();
    return DOC_SUMMARY_INFORMATION_;
}
org::apache::poi::hpsf::ClassID* org::apache::poi::hpsf::wellknown::SectionIDMap::DOC_SUMMARY_INFORMATION_;

org::apache::poi::hpsf::ClassID*& org::apache::poi::hpsf::wellknown::SectionIDMap::USER_DEFINED_PROPERTIES()
{
    clinit();
    return USER_DEFINED_PROPERTIES_;
}
org::apache::poi::hpsf::ClassID* org::apache::poi::hpsf::wellknown::SectionIDMap::USER_DEFINED_PROPERTIES_;

org::apache::poi::hpsf::ClassIDArray*& org::apache::poi::hpsf::wellknown::SectionIDMap::DOCUMENT_SUMMARY_INFORMATION_ID()
{
    clinit();
    return DOCUMENT_SUMMARY_INFORMATION_ID_;
}
org::apache::poi::hpsf::ClassIDArray* org::apache::poi::hpsf::wellknown::SectionIDMap::DOCUMENT_SUMMARY_INFORMATION_ID_;

java::lang::String*& org::apache::poi::hpsf::wellknown::SectionIDMap::UNDEFINED()
{
    clinit();
    return UNDEFINED_;
}
java::lang::String* org::apache::poi::hpsf::wellknown::SectionIDMap::UNDEFINED_;

org::apache::poi::hpsf::wellknown::SectionIDMap* org::apache::poi::hpsf::wellknown::SectionIDMap::getInstance()
{
    clinit();
    auto m = java_cast< ::java::util::Map* >(npc(defaultMap_)->get());
    if(m == nullptr) {
        m = new ::java::util::HashMap();
        npc(m)->put(SUMMARY_INFORMATION_ID_, PropertyIDMap::getSummaryInformationProperties());
        npc(m)->put((*DOCUMENT_SUMMARY_INFORMATION_ID_)[int32_t(0)], PropertyIDMap::getDocumentSummaryInformationProperties());
        npc(defaultMap_)->set(m);
    }
    return new SectionIDMap();
}

java::lang::String* org::apache::poi::hpsf::wellknown::SectionIDMap::getPIDString(::org::apache::poi::hpsf::ClassID* sectionFormatID, int64_t pid)
{
    clinit();
    auto const m = npc(getInstance())->get(sectionFormatID);
    if(m == nullptr) {
        return UNDEFINED_;
    }
    auto const s = java_cast< ::java::lang::String* >(npc(m)->get(::java::lang::Long::valueOf(pid)));
    if(s == nullptr) {
        return UNDEFINED_;
    }
    return s;
}

org::apache::poi::hpsf::wellknown::PropertyIDMap* org::apache::poi::hpsf::wellknown::SectionIDMap::get(::org::apache::poi::hpsf::ClassID* sectionFormatID)
{
    return npc(getInstance())->get(sectionFormatID);
}

org::apache::poi::hpsf::wellknown::PropertyIDMap* org::apache::poi::hpsf::wellknown::SectionIDMap::put(::org::apache::poi::hpsf::ClassID* sectionFormatID, PropertyIDMap* propertyIDMap)
{
    return npc(getInstance())->put(sectionFormatID, propertyIDMap);
}

org::apache::poi::hpsf::wellknown::PropertyIDMap* org::apache::poi::hpsf::wellknown::SectionIDMap::put(::java::lang::String* key, PropertyIDMap* value)
{
    return put(new ::org::apache::poi::hpsf::ClassID(key), value);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hpsf::wellknown::SectionIDMap::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hpsf.wellknown.SectionIDMap", 42);
    return c;
}

void org::apache::poi::hpsf::wellknown::SectionIDMap::clinit()
{
struct string_init_ {
    string_init_() {
    UNDEFINED_ = u"[undefined]"_j;
    }
};

    static string_init_ string_init_instance;

    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        defaultMap_ = new ::java::lang::ThreadLocal();
        SUMMARY_INFORMATION_ID_ = new ::org::apache::poi::hpsf::ClassID(u"{F29F85E0-4FF9-1068-AB91-08002B27B3D9}"_j);
        DOC_SUMMARY_INFORMATION_ = new ::org::apache::poi::hpsf::ClassID(u"{D5CDD502-2E9C-101B-9397-08002B2CF9AE}"_j);
        USER_DEFINED_PROPERTIES_ = new ::org::apache::poi::hpsf::ClassID(u"{D5CDD505-2E9C-101B-9397-08002B2CF9AE}"_j);
        DOCUMENT_SUMMARY_INFORMATION_ID_ = (new ::org::apache::poi::hpsf::ClassIDArray({
            DOC_SUMMARY_INFORMATION_
            , USER_DEFINED_PROPERTIES_
        }));
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* org::apache::poi::hpsf::wellknown::SectionIDMap::getClass0()
{
    return class_();
}

