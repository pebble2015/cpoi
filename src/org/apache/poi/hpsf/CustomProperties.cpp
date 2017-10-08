// Generated from /POI/java/org/apache/poi/hpsf/CustomProperties.java
#include <org/apache/poi/hpsf/CustomProperties.hpp>

#include <java/io/UnsupportedEncodingException.hpp>
#include <java/lang/Boolean.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/Double.hpp>
#include <java/lang/Float.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/IllegalStateException.hpp>
#include <java/lang/Integer.hpp>
#include <java/lang/Long.hpp>
#include <java/lang/Math.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/Short.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/math/BigInteger.hpp>
#include <java/nio/charset/Charset.hpp>
#include <java/nio/charset/CharsetEncoder.hpp>
#include <java/util/ArrayList.hpp>
#include <java/util/Collection.hpp>
#include <java/util/Collections.hpp>
#include <java/util/Date.hpp>
#include <java/util/HashMap.hpp>
#include <java/util/Iterator.hpp>
#include <java/util/LinkedHashMap.hpp>
#include <java/util/List.hpp>
#include <java/util/Map_Entry.hpp>
#include <java/util/Map.hpp>
#include <java/util/Set.hpp>
#include <org/apache/commons/collections4/bidimap/TreeBidiMap.hpp>
#include <org/apache/poi/hpsf/CustomProperty.hpp>
#include <org/apache/poi/hpsf/MutableProperty.hpp>
#include <org/apache/poi/hpsf/Property.hpp>
#include <org/apache/poi/hpsf/Variant.hpp>
#include <org/apache/poi/hpsf/wellknown/PropertyIDMap.hpp>
#include <org/apache/poi/util/CodePageUtil.hpp>
#include <org/apache/poi/util/POILogFactory.hpp>
#include <org/apache/poi/util/POILogger.hpp>
#include <ObjectArray.hpp>

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

poi::hpsf::CustomProperties::CustomProperties(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hpsf::CustomProperties::CustomProperties()
    : CustomProperties(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void poi::hpsf::CustomProperties::ctor()
{
    super::ctor();
    init();
}

void poi::hpsf::CustomProperties::init()
{
    props = new ::java::util::HashMap();
    dictionary = new ::org::apache::commons::collections4::bidimap::TreeBidiMap();
    isPure_ = true;
    codepage = -int32_t(1);
}

poi::util::POILogger*& poi::hpsf::CustomProperties::LOG()
{
    clinit();
    return LOG_;
}
poi::util::POILogger* poi::hpsf::CustomProperties::LOG_;

poi::hpsf::CustomProperty* poi::hpsf::CustomProperties::put(::java::lang::String* name, CustomProperty* cp)
{
    if(name == nullptr) {
        isPure_ = false;
        return nullptr;
    }
    if(!npc(name)->equals(static_cast< ::java::lang::Object* >(npc(cp)->getName()))) {
        throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(u"Parameter \"name\" ("_j)->append(name)
            ->append(u") and custom property's name ("_j)
            ->append(npc(cp)->getName())
            ->append(u") do not match."_j)->toString());
    }
    checkCodePage(name);
    npc(props)->remove(static_cast< ::java::lang::Object* >(java_cast< ::java::lang::Long* >(npc(dictionary)->getKey(static_cast< ::java::lang::Object* >(name)))));
    npc(dictionary)->put(::java::lang::Long::valueOf(npc(cp)->getID()), static_cast< ::java::lang::Comparable* >(name));
    return java_cast< CustomProperty* >(npc(props)->put(::java::lang::Long::valueOf(npc(cp)->getID()), static_cast< ::java::lang::Object* >(cp)));
}

java::lang::Object* poi::hpsf::CustomProperties::put(::java::lang::String* key, ::java::lang::Object* value)
{
    int32_t variantType;
    if(dynamic_cast< ::java::lang::String* >(value) != nullptr) {
        variantType = Variant::VT_LPSTR;
    } else if(dynamic_cast< ::java::lang::Short* >(value) != nullptr) {
        variantType = Variant::VT_I2;
    } else if(dynamic_cast< ::java::lang::Integer* >(value) != nullptr) {
        variantType = Variant::VT_I4;
    } else if(dynamic_cast< ::java::lang::Long* >(value) != nullptr) {
        variantType = Variant::VT_I8;
    } else if(dynamic_cast< ::java::lang::Float* >(value) != nullptr) {
        variantType = Variant::VT_R4;
    } else if(dynamic_cast< ::java::lang::Double* >(value) != nullptr) {
        variantType = Variant::VT_R8;
    } else if(dynamic_cast< ::java::lang::Boolean* >(value) != nullptr) {
        variantType = Variant::VT_BOOL;
    } else if(dynamic_cast< ::java::math::BigInteger* >(value) != nullptr && npc((java_cast< ::java::math::BigInteger* >(value)))->bitLength() <= 64 && npc((java_cast< ::java::math::BigInteger* >(value)))->compareTo(::java::math::BigInteger::ZERO()) >= 0) {
        variantType = Variant::VT_UI8;
    } else if(dynamic_cast< ::java::util::Date* >(value) != nullptr) {
        variantType = Variant::VT_FILETIME;
    } else {
        throw new ::java::lang::IllegalStateException(u"unsupported datatype - currently String,Short,Integer,Long,Float,Double,Boolean,BigInteger(unsigned long),Date can be processed."_j);
    }
    Property* const p = new MutableProperty(-int32_t(1), variantType, value);
    return put(new CustomProperty(p, key));
}

java::lang::Object* poi::hpsf::CustomProperties::put(::java::lang::Object* key, ::java::lang::Object* value)
{ 
    return put(dynamic_cast< ::java::lang::String* >(key), dynamic_cast< ::java::lang::Object* >(value));
}

java::lang::Object* poi::hpsf::CustomProperties::get(::java::lang::Object* key)
{
    auto const id = java_cast< ::java::lang::Long* >(npc(dictionary)->getKey(key));
    auto const cp = java_cast< CustomProperty* >(npc(props)->get(static_cast< ::java::lang::Object* >(id)));
    return cp != nullptr ? npc(cp)->getValue() : static_cast< ::java::lang::Object* >(nullptr);
}

poi::hpsf::CustomProperty* poi::hpsf::CustomProperties::remove(::java::lang::Object* key)
{
    auto const id = java_cast< ::java::lang::Long* >(npc(dictionary)->removeValue(key));
    return java_cast< CustomProperty* >(npc(props)->remove(static_cast< ::java::lang::Object* >(id)));
}

int32_t poi::hpsf::CustomProperties::size()
{
    return npc(props)->size();
}

bool poi::hpsf::CustomProperties::isEmpty()
{
    return npc(props)->isEmpty();
}

void poi::hpsf::CustomProperties::clear()
{
    npc(props)->clear();
}

int32_t poi::hpsf::CustomProperties::hashCode()
{
    return npc(props)->hashCode();
}

bool poi::hpsf::CustomProperties::equals(::java::lang::Object* obj)
{
    if(!(dynamic_cast< CustomProperties* >(obj) != nullptr)) {
        return false;
    }
    return npc(props)->equals(static_cast< ::java::lang::Object* >(java_cast< ::java::util::HashMap* >(npc((java_cast< CustomProperties* >(obj)))->props)));
}

void poi::hpsf::CustomProperties::putAll(::java::util::Map* m)
{
    for (auto _i = npc(npc(m)->entrySet())->iterator(); _i->hasNext(); ) {
        ::java::util::Map_Entry* me = java_cast< ::java::util::Map_Entry* >(_i->next());
        {
            put(static_cast< ::java::lang::String* >(java_cast< ::java::lang::String* >(npc(me)->getKey())), static_cast< ::java::lang::Object* >(java_cast< ::java::lang::Object* >(npc(me)->getValue())));
        }
    }
}

java::util::List* poi::hpsf::CustomProperties::properties()
{
    ::java::util::List* list = new ::java::util::ArrayList(npc(props)->size());
    for (auto _i = npc(npc(dictionary)->keySet())->iterator(); _i->hasNext(); ) {
        ::java::lang::Long* l = java_cast< ::java::lang::Long* >(_i->next());
        {
            npc(list)->add(static_cast< ::java::lang::Object* >(java_cast< CustomProperty* >(npc(props)->get(static_cast< ::java::lang::Object* >(l)))));
        }
    }
    return ::java::util::Collections::unmodifiableList(list);
}

java::util::Collection* poi::hpsf::CustomProperties::values()
{
    ::java::util::List* list = new ::java::util::ArrayList(npc(props)->size());
    for (auto _i = npc(npc(dictionary)->keySet())->iterator(); _i->hasNext(); ) {
        ::java::lang::Long* l = java_cast< ::java::lang::Long* >(_i->next());
        {
            npc(list)->add(static_cast< ::java::lang::Object* >(npc(java_cast< CustomProperty* >(npc(props)->get(static_cast< ::java::lang::Object* >(l))))->getValue()));
        }
    }
    return ::java::util::Collections::unmodifiableCollection(list);
}

java::util::Set* poi::hpsf::CustomProperties::entrySet()
{
    ::java::util::Map* set = new ::java::util::LinkedHashMap(npc(props)->size());
    for (auto _i = npc(npc(dictionary)->entrySet())->iterator(); _i->hasNext(); ) {
        ::java::util::Map_Entry* se = java_cast< ::java::util::Map_Entry* >(_i->next());
        {
            npc(set)->put(java_cast< ::java::lang::String* >(npc(se)->getValue()), npc(java_cast< CustomProperty* >(npc(props)->get(static_cast< ::java::lang::Object* >(java_cast< ::java::lang::Long* >(npc(se)->getKey())))))->getValue());
        }
    }
    return ::java::util::Collections::unmodifiableSet(npc(set)->entrySet());
}

java::util::Set* poi::hpsf::CustomProperties::keySet()
{
    return ::java::util::Collections::unmodifiableSet(npc(dictionary)->values());
}

java::util::Set* poi::hpsf::CustomProperties::nameSet()
{
    return ::java::util::Collections::unmodifiableSet(npc(dictionary)->values());
}

java::util::Set* poi::hpsf::CustomProperties::idSet()
{
    return ::java::util::Collections::unmodifiableSet(npc(dictionary)->keySet());
}

void poi::hpsf::CustomProperties::setCodepage(int32_t codepage)
{
    this->codepage = codepage;
}

int32_t poi::hpsf::CustomProperties::getCodepage()
{
    return codepage;
}

java::util::Map* poi::hpsf::CustomProperties::getDictionary()
{
    return dictionary;
}

bool poi::hpsf::CustomProperties::containsKey(::java::lang::Object* key)
{
    return ((dynamic_cast< ::java::lang::Long* >(key) != nullptr && npc(dictionary)->containsKey(key)) || npc(dictionary)->containsValue(key));
}

bool poi::hpsf::CustomProperties::containsValue(::java::lang::Object* value)
{
    if(dynamic_cast< CustomProperty* >(value) != nullptr) {
        return npc(props)->containsValue(value);
    }
    for (auto _i = npc(npc(props)->values())->iterator(); _i->hasNext(); ) {
        CustomProperty* cp = java_cast< CustomProperty* >(_i->next());
        {
            if(npc(cp)->getValue() == value) {
                return true;
            }
        }
    }
    return false;
}

bool poi::hpsf::CustomProperties::isPure()
{
    return isPure_;
}

void poi::hpsf::CustomProperties::setPure(bool isPure)
{
    this->isPure_ = isPure;
}

java::lang::Object* poi::hpsf::CustomProperties::put(CustomProperty* customProperty) /* throws(ClassCastException) */
{
    auto const name = npc(customProperty)->getName();
    auto const oldId = (name == nullptr) ? static_cast< ::java::lang::Long* >(nullptr) : java_cast< ::java::lang::Long* >(npc(dictionary)->getKey(static_cast< ::java::lang::Object* >(name)));
    if(oldId != nullptr) {
        npc(customProperty)->setID((npc(oldId))->longValue());
    } else {
        auto lastKey = (npc(dictionary)->isEmpty()) ? static_cast< int64_t >(int32_t(0)) : (npc(java_cast< ::java::lang::Long* >(npc(dictionary)->lastKey())))->longValue();
        auto nextKey = ::java::lang::Math::max(lastKey, static_cast< int64_t >(::poi::hpsf::wellknown::PropertyIDMap::PID_MAX)) + int32_t(1);
        npc(customProperty)->setID(nextKey);
    }
    return this->put(name, customProperty);
}

void poi::hpsf::CustomProperties::checkCodePage(::java::lang::String* value)
{
    auto cp = getCodepage();
    if(cp == -int32_t(1)) {
        cp = Property::DEFAULT_CODEPAGE;
    }
    if(cp == ::poi::util::CodePageUtil::CP_UNICODE) {
        return;
    }
    auto cps = u""_j;
    try {
        cps = ::poi::util::CodePageUtil::codepageToEncoding(cp, false);
    } catch (::java::io::UnsupportedEncodingException* e) {
        npc(LOG_)->log(::poi::util::POILogger::ERROR, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(::java::lang::StringBuilder().append(u"Codepage '"_j)->append(cp)
            ->append(u"' can't be found."_j)->toString())}));
    }
    if(!npc(cps)->isEmpty() && npc(npc(::java::nio::charset::Charset::forName(cps))->newEncoder())->canEncode(static_cast< ::java::lang::CharSequence* >(value))) {
        return;
    }
    npc(LOG_)->log(::poi::util::POILogger::DEBUG, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(::java::lang::StringBuilder().append(u"Charset '"_j)->append(cps)
        ->append(u"' can't encode '"_j)
        ->append(value)
        ->append(u"' - switching to unicode."_j)->toString())}));
    setCodepage(::poi::util::CodePageUtil::CP_UNICODE);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hpsf::CustomProperties::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hpsf.CustomProperties", 36);
    return c;
}

void poi::hpsf::CustomProperties::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        LOG_ = ::poi::util::POILogFactory::getLogger(static_cast< ::java::lang::Class* >(CustomProperties::class_()));
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

bool poi::hpsf::CustomProperties::remove(::java::lang::Object* key, ::java::lang::Object* value)
{
    return remove(key, value);
}

java::lang::Class* poi::hpsf::CustomProperties::getClass0()
{
    return class_();
}

