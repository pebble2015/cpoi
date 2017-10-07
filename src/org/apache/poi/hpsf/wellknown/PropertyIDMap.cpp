// Generated from /POI/java/org/apache/poi/hpsf/wellknown/PropertyIDMap.java
#include <org/apache/poi/hpsf/wellknown/PropertyIDMap.hpp>

#include <java/io/PrintStream.hpp>
#include <java/io/Serializable.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Cloneable.hpp>
#include <java/lang/Long.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/lang/System.hpp>
#include <java/util/Collection.hpp>
#include <java/util/Collections.hpp>
#include <java/util/HashMap.hpp>
#include <java/util/Map.hpp>
#include <java/util/Set.hpp>
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
typedef ::SubArray< ::java::lang::CharSequence, ObjectArray > CharSequenceArray;
typedef ::SubArray< ::java::lang::Cloneable, ObjectArray > CloneableArray;
typedef ::SubArray< ::java::lang::Comparable, ObjectArray > ComparableArray;
typedef ::SubArray< ::java::lang::String, ObjectArray, ::java::io::SerializableArray, ComparableArray, CharSequenceArray > StringArray;
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

org::apache::poi::hpsf::wellknown::PropertyIDMap::PropertyIDMap(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hpsf::wellknown::PropertyIDMap::PropertyIDMap(::java::lang::ObjectArrayArray* idValues) 
    : PropertyIDMap(*static_cast< ::default_init_tag* >(0))
{
    ctor(idValues);
}

constexpr int32_t org::apache::poi::hpsf::wellknown::PropertyIDMap::PID_TITLE;

constexpr int32_t org::apache::poi::hpsf::wellknown::PropertyIDMap::PID_SUBJECT;

constexpr int32_t org::apache::poi::hpsf::wellknown::PropertyIDMap::PID_AUTHOR;

constexpr int32_t org::apache::poi::hpsf::wellknown::PropertyIDMap::PID_KEYWORDS;

constexpr int32_t org::apache::poi::hpsf::wellknown::PropertyIDMap::PID_COMMENTS;

constexpr int32_t org::apache::poi::hpsf::wellknown::PropertyIDMap::PID_TEMPLATE;

constexpr int32_t org::apache::poi::hpsf::wellknown::PropertyIDMap::PID_LASTAUTHOR;

constexpr int32_t org::apache::poi::hpsf::wellknown::PropertyIDMap::PID_REVNUMBER;

constexpr int32_t org::apache::poi::hpsf::wellknown::PropertyIDMap::PID_EDITTIME;

constexpr int32_t org::apache::poi::hpsf::wellknown::PropertyIDMap::PID_LASTPRINTED;

constexpr int32_t org::apache::poi::hpsf::wellknown::PropertyIDMap::PID_CREATE_DTM;

constexpr int32_t org::apache::poi::hpsf::wellknown::PropertyIDMap::PID_LASTSAVE_DTM;

constexpr int32_t org::apache::poi::hpsf::wellknown::PropertyIDMap::PID_PAGECOUNT;

constexpr int32_t org::apache::poi::hpsf::wellknown::PropertyIDMap::PID_WORDCOUNT;

constexpr int32_t org::apache::poi::hpsf::wellknown::PropertyIDMap::PID_CHARCOUNT;

constexpr int32_t org::apache::poi::hpsf::wellknown::PropertyIDMap::PID_THUMBNAIL;

constexpr int32_t org::apache::poi::hpsf::wellknown::PropertyIDMap::PID_APPNAME;

constexpr int32_t org::apache::poi::hpsf::wellknown::PropertyIDMap::PID_SECURITY;

constexpr int32_t org::apache::poi::hpsf::wellknown::PropertyIDMap::PID_DICTIONARY;

constexpr int32_t org::apache::poi::hpsf::wellknown::PropertyIDMap::PID_CODEPAGE;

constexpr int32_t org::apache::poi::hpsf::wellknown::PropertyIDMap::PID_CATEGORY;

constexpr int32_t org::apache::poi::hpsf::wellknown::PropertyIDMap::PID_PRESFORMAT;

constexpr int32_t org::apache::poi::hpsf::wellknown::PropertyIDMap::PID_BYTECOUNT;

constexpr int32_t org::apache::poi::hpsf::wellknown::PropertyIDMap::PID_LINECOUNT;

constexpr int32_t org::apache::poi::hpsf::wellknown::PropertyIDMap::PID_PARCOUNT;

constexpr int32_t org::apache::poi::hpsf::wellknown::PropertyIDMap::PID_SLIDECOUNT;

constexpr int32_t org::apache::poi::hpsf::wellknown::PropertyIDMap::PID_NOTECOUNT;

constexpr int32_t org::apache::poi::hpsf::wellknown::PropertyIDMap::PID_HIDDENCOUNT;

constexpr int32_t org::apache::poi::hpsf::wellknown::PropertyIDMap::PID_MMCLIPCOUNT;

constexpr int32_t org::apache::poi::hpsf::wellknown::PropertyIDMap::PID_SCALE;

constexpr int32_t org::apache::poi::hpsf::wellknown::PropertyIDMap::PID_HEADINGPAIR;

constexpr int32_t org::apache::poi::hpsf::wellknown::PropertyIDMap::PID_DOCPARTS;

constexpr int32_t org::apache::poi::hpsf::wellknown::PropertyIDMap::PID_MANAGER;

constexpr int32_t org::apache::poi::hpsf::wellknown::PropertyIDMap::PID_COMPANY;

constexpr int32_t org::apache::poi::hpsf::wellknown::PropertyIDMap::PID_LINKSDIRTY;

constexpr int32_t org::apache::poi::hpsf::wellknown::PropertyIDMap::PID_CCHWITHSPACES;

constexpr int32_t org::apache::poi::hpsf::wellknown::PropertyIDMap::PID_HYPERLINKSCHANGED;

constexpr int32_t org::apache::poi::hpsf::wellknown::PropertyIDMap::PID_VERSION;

constexpr int32_t org::apache::poi::hpsf::wellknown::PropertyIDMap::PID_DIGSIG;

constexpr int32_t org::apache::poi::hpsf::wellknown::PropertyIDMap::PID_CONTENTTYPE;

constexpr int32_t org::apache::poi::hpsf::wellknown::PropertyIDMap::PID_CONTENTSTATUS;

constexpr int32_t org::apache::poi::hpsf::wellknown::PropertyIDMap::PID_LANGUAGE;

constexpr int32_t org::apache::poi::hpsf::wellknown::PropertyIDMap::PID_DOCVERSION;

constexpr int32_t org::apache::poi::hpsf::wellknown::PropertyIDMap::PID_MAX;

constexpr int32_t org::apache::poi::hpsf::wellknown::PropertyIDMap::PID_LOCALE;

constexpr int32_t org::apache::poi::hpsf::wellknown::PropertyIDMap::PID_BEHAVIOUR;

org::apache::poi::hpsf::wellknown::PropertyIDMap*& org::apache::poi::hpsf::wellknown::PropertyIDMap::summaryInformationProperties()
{
    clinit();
    return summaryInformationProperties_;
}
org::apache::poi::hpsf::wellknown::PropertyIDMap* org::apache::poi::hpsf::wellknown::PropertyIDMap::summaryInformationProperties_;

java::lang::ObjectArrayArray*& org::apache::poi::hpsf::wellknown::PropertyIDMap::summaryInformationIdValues()
{
    clinit();
    return summaryInformationIdValues_;
}
java::lang::ObjectArrayArray* org::apache::poi::hpsf::wellknown::PropertyIDMap::summaryInformationIdValues_;

org::apache::poi::hpsf::wellknown::PropertyIDMap*& org::apache::poi::hpsf::wellknown::PropertyIDMap::documentSummaryInformationProperties()
{
    clinit();
    return documentSummaryInformationProperties_;
}
org::apache::poi::hpsf::wellknown::PropertyIDMap* org::apache::poi::hpsf::wellknown::PropertyIDMap::documentSummaryInformationProperties_;

java::lang::ObjectArrayArray*& org::apache::poi::hpsf::wellknown::PropertyIDMap::documentSummaryInformationIdValues()
{
    clinit();
    return documentSummaryInformationIdValues_;
}
java::lang::ObjectArrayArray* org::apache::poi::hpsf::wellknown::PropertyIDMap::documentSummaryInformationIdValues_;

org::apache::poi::hpsf::wellknown::PropertyIDMap*& org::apache::poi::hpsf::wellknown::PropertyIDMap::fallbackProperties()
{
    clinit();
    return fallbackProperties_;
}
org::apache::poi::hpsf::wellknown::PropertyIDMap* org::apache::poi::hpsf::wellknown::PropertyIDMap::fallbackProperties_;

java::lang::ObjectArrayArray*& org::apache::poi::hpsf::wellknown::PropertyIDMap::fallbackIdValues()
{
    clinit();
    return fallbackIdValues_;
}
java::lang::ObjectArrayArray* org::apache::poi::hpsf::wellknown::PropertyIDMap::fallbackIdValues_;

void org::apache::poi::hpsf::wellknown::PropertyIDMap::ctor(::java::lang::ObjectArrayArray* idValues)
{
    super::ctor();
    ::java::util::Map* m = new ::java::util::HashMap(npc(idValues)->length);
    for(auto idValue : *npc(idValues)) {
        npc(m)->put(java_cast< ::java::lang::Long* >((*idValue)[int32_t(0)]), java_cast< ::java::lang::String* >((*idValue)[int32_t(1)]));
    }
    idMap = ::java::util::Collections::unmodifiableMap(m);
}

org::apache::poi::hpsf::wellknown::PropertyIDMap* org::apache::poi::hpsf::wellknown::PropertyIDMap::getSummaryInformationProperties()
{
    clinit();
    if(summaryInformationProperties_ == nullptr) {
        summaryInformationProperties_ = new PropertyIDMap(summaryInformationIdValues_);
    }
    return summaryInformationProperties_;
}

org::apache::poi::hpsf::wellknown::PropertyIDMap* org::apache::poi::hpsf::wellknown::PropertyIDMap::getDocumentSummaryInformationProperties()
{
    clinit();
    if(documentSummaryInformationProperties_ == nullptr) {
        documentSummaryInformationProperties_ = new PropertyIDMap(documentSummaryInformationIdValues_);
    }
    return documentSummaryInformationProperties_;
}

org::apache::poi::hpsf::wellknown::PropertyIDMap* org::apache::poi::hpsf::wellknown::PropertyIDMap::getFallbackProperties()
{
    clinit();
    if(fallbackProperties_ == nullptr) {
        fallbackProperties_ = new PropertyIDMap(fallbackIdValues_);
    }
    return fallbackProperties_;
}

int32_t org::apache::poi::hpsf::wellknown::PropertyIDMap::size()
{
    return npc(idMap)->size();
}

bool org::apache::poi::hpsf::wellknown::PropertyIDMap::isEmpty()
{
    return npc(idMap)->isEmpty();
}

bool org::apache::poi::hpsf::wellknown::PropertyIDMap::containsKey(::java::lang::Object* key)
{
    return npc(idMap)->containsKey(key);
}

bool org::apache::poi::hpsf::wellknown::PropertyIDMap::containsValue(::java::lang::Object* value)
{
    return npc(idMap)->containsValue(value);
}

java::lang::String* org::apache::poi::hpsf::wellknown::PropertyIDMap::get(::java::lang::Object* key)
{
    return java_cast< ::java::lang::String* >(npc(idMap)->get(key));
}

java::lang::String* org::apache::poi::hpsf::wellknown::PropertyIDMap::put(::java::lang::Long* key, ::java::lang::String* value)
{
    return java_cast< ::java::lang::String* >(npc(idMap)->put(key, value));
}

java::lang::Object* org::apache::poi::hpsf::wellknown::PropertyIDMap::put(::java::lang::Object* key, ::java::lang::Object* value)
{ 
    return put(dynamic_cast< ::java::lang::Long* >(key), dynamic_cast< ::java::lang::String* >(value));
}

java::lang::String* org::apache::poi::hpsf::wellknown::PropertyIDMap::remove(::java::lang::Object* key)
{
    return java_cast< ::java::lang::String* >(npc(idMap)->remove(key));
}

void org::apache::poi::hpsf::wellknown::PropertyIDMap::putAll(::java::util::Map* m)
{
    npc(idMap)->putAll(m);
}

void org::apache::poi::hpsf::wellknown::PropertyIDMap::clear()
{
    npc(idMap)->clear();
}

java::util::Set* org::apache::poi::hpsf::wellknown::PropertyIDMap::keySet()
{
    return npc(idMap)->keySet();
}

java::util::Collection* org::apache::poi::hpsf::wellknown::PropertyIDMap::values()
{
    return npc(idMap)->values();
}

java::util::Set* org::apache::poi::hpsf::wellknown::PropertyIDMap::entrySet()
{
    return npc(idMap)->entrySet();
}

void org::apache::poi::hpsf::wellknown::PropertyIDMap::main(::java::lang::StringArray* args)
{
    clinit();
    auto s1 = getSummaryInformationProperties();
    auto s2 = getDocumentSummaryInformationProperties();
    npc(::java::lang::System::out())->println(::java::lang::StringBuilder().append(u"s1: "_j)->append(static_cast< ::java::lang::Object* >(s1))->toString());
    npc(::java::lang::System::out())->println(::java::lang::StringBuilder().append(u"s2: "_j)->append(static_cast< ::java::lang::Object* >(s2))->toString());
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hpsf::wellknown::PropertyIDMap::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hpsf.wellknown.PropertyIDMap", 43);
    return c;
}

void org::apache::poi::hpsf::wellknown::PropertyIDMap::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        summaryInformationIdValues_ = (new ::java::lang::ObjectArrayArray({
            (new ::java::lang::ObjectArray({
            static_cast< ::java::lang::Object* >(::java::lang::Long::valueOf(static_cast< int64_t >(PID_TITLE)))
            , static_cast< ::java::lang::Object* >(u"PID_TITLE"_j)
        }))
            , (new ::java::lang::ObjectArray({
            static_cast< ::java::lang::Object* >(::java::lang::Long::valueOf(static_cast< int64_t >(PID_SUBJECT)))
            , static_cast< ::java::lang::Object* >(u"PID_SUBJECT"_j)
        }))
            , (new ::java::lang::ObjectArray({
            static_cast< ::java::lang::Object* >(::java::lang::Long::valueOf(static_cast< int64_t >(PID_AUTHOR)))
            , static_cast< ::java::lang::Object* >(u"PID_AUTHOR"_j)
        }))
            , (new ::java::lang::ObjectArray({
            static_cast< ::java::lang::Object* >(::java::lang::Long::valueOf(static_cast< int64_t >(PID_KEYWORDS)))
            , static_cast< ::java::lang::Object* >(u"PID_KEYWORDS"_j)
        }))
            , (new ::java::lang::ObjectArray({
            static_cast< ::java::lang::Object* >(::java::lang::Long::valueOf(static_cast< int64_t >(PID_COMMENTS)))
            , static_cast< ::java::lang::Object* >(u"PID_COMMENTS"_j)
        }))
            , (new ::java::lang::ObjectArray({
            static_cast< ::java::lang::Object* >(::java::lang::Long::valueOf(static_cast< int64_t >(PID_TEMPLATE)))
            , static_cast< ::java::lang::Object* >(u"PID_TEMPLATE"_j)
        }))
            , (new ::java::lang::ObjectArray({
            static_cast< ::java::lang::Object* >(::java::lang::Long::valueOf(static_cast< int64_t >(PID_LASTAUTHOR)))
            , static_cast< ::java::lang::Object* >(u"PID_LASTAUTHOR"_j)
        }))
            , (new ::java::lang::ObjectArray({
            static_cast< ::java::lang::Object* >(::java::lang::Long::valueOf(static_cast< int64_t >(PID_REVNUMBER)))
            , static_cast< ::java::lang::Object* >(u"PID_REVNUMBER"_j)
        }))
            , (new ::java::lang::ObjectArray({
            static_cast< ::java::lang::Object* >(::java::lang::Long::valueOf(static_cast< int64_t >(PID_EDITTIME)))
            , static_cast< ::java::lang::Object* >(u"PID_EDITTIME"_j)
        }))
            , (new ::java::lang::ObjectArray({
            static_cast< ::java::lang::Object* >(::java::lang::Long::valueOf(static_cast< int64_t >(PID_LASTPRINTED)))
            , static_cast< ::java::lang::Object* >(u"PID_LASTPRINTED"_j)
        }))
            , (new ::java::lang::ObjectArray({
            static_cast< ::java::lang::Object* >(::java::lang::Long::valueOf(static_cast< int64_t >(PID_CREATE_DTM)))
            , static_cast< ::java::lang::Object* >(u"PID_CREATE_DTM"_j)
        }))
            , (new ::java::lang::ObjectArray({
            static_cast< ::java::lang::Object* >(::java::lang::Long::valueOf(static_cast< int64_t >(PID_LASTSAVE_DTM)))
            , static_cast< ::java::lang::Object* >(u"PID_LASTSAVE_DTM"_j)
        }))
            , (new ::java::lang::ObjectArray({
            static_cast< ::java::lang::Object* >(::java::lang::Long::valueOf(static_cast< int64_t >(PID_PAGECOUNT)))
            , static_cast< ::java::lang::Object* >(u"PID_PAGECOUNT"_j)
        }))
            , (new ::java::lang::ObjectArray({
            static_cast< ::java::lang::Object* >(::java::lang::Long::valueOf(static_cast< int64_t >(PID_WORDCOUNT)))
            , static_cast< ::java::lang::Object* >(u"PID_WORDCOUNT"_j)
        }))
            , (new ::java::lang::ObjectArray({
            static_cast< ::java::lang::Object* >(::java::lang::Long::valueOf(static_cast< int64_t >(PID_CHARCOUNT)))
            , static_cast< ::java::lang::Object* >(u"PID_CHARCOUNT"_j)
        }))
            , (new ::java::lang::ObjectArray({
            static_cast< ::java::lang::Object* >(::java::lang::Long::valueOf(static_cast< int64_t >(PID_THUMBNAIL)))
            , static_cast< ::java::lang::Object* >(u"PID_THUMBNAIL"_j)
        }))
            , (new ::java::lang::ObjectArray({
            static_cast< ::java::lang::Object* >(::java::lang::Long::valueOf(static_cast< int64_t >(PID_APPNAME)))
            , static_cast< ::java::lang::Object* >(u"PID_APPNAME"_j)
        }))
            , (new ::java::lang::ObjectArray({
            static_cast< ::java::lang::Object* >(::java::lang::Long::valueOf(static_cast< int64_t >(PID_SECURITY)))
            , static_cast< ::java::lang::Object* >(u"PID_SECURITY"_j)
        }))
        }));
        documentSummaryInformationIdValues_ = (new ::java::lang::ObjectArrayArray({
            (new ::java::lang::ObjectArray({
            static_cast< ::java::lang::Object* >(::java::lang::Long::valueOf(static_cast< int64_t >(PID_DICTIONARY)))
            , static_cast< ::java::lang::Object* >(u"PID_DICTIONARY"_j)
        }))
            , (new ::java::lang::ObjectArray({
            static_cast< ::java::lang::Object* >(::java::lang::Long::valueOf(static_cast< int64_t >(PID_CODEPAGE)))
            , static_cast< ::java::lang::Object* >(u"PID_CODEPAGE"_j)
        }))
            , (new ::java::lang::ObjectArray({
            static_cast< ::java::lang::Object* >(::java::lang::Long::valueOf(static_cast< int64_t >(PID_CATEGORY)))
            , static_cast< ::java::lang::Object* >(u"PID_CATEGORY"_j)
        }))
            , (new ::java::lang::ObjectArray({
            static_cast< ::java::lang::Object* >(::java::lang::Long::valueOf(static_cast< int64_t >(PID_PRESFORMAT)))
            , static_cast< ::java::lang::Object* >(u"PID_PRESFORMAT"_j)
        }))
            , (new ::java::lang::ObjectArray({
            static_cast< ::java::lang::Object* >(::java::lang::Long::valueOf(static_cast< int64_t >(PID_BYTECOUNT)))
            , static_cast< ::java::lang::Object* >(u"PID_BYTECOUNT"_j)
        }))
            , (new ::java::lang::ObjectArray({
            static_cast< ::java::lang::Object* >(::java::lang::Long::valueOf(static_cast< int64_t >(PID_LINECOUNT)))
            , static_cast< ::java::lang::Object* >(u"PID_LINECOUNT"_j)
        }))
            , (new ::java::lang::ObjectArray({
            static_cast< ::java::lang::Object* >(::java::lang::Long::valueOf(static_cast< int64_t >(PID_PARCOUNT)))
            , static_cast< ::java::lang::Object* >(u"PID_PARCOUNT"_j)
        }))
            , (new ::java::lang::ObjectArray({
            static_cast< ::java::lang::Object* >(::java::lang::Long::valueOf(static_cast< int64_t >(PID_SLIDECOUNT)))
            , static_cast< ::java::lang::Object* >(u"PID_SLIDECOUNT"_j)
        }))
            , (new ::java::lang::ObjectArray({
            static_cast< ::java::lang::Object* >(::java::lang::Long::valueOf(static_cast< int64_t >(PID_NOTECOUNT)))
            , static_cast< ::java::lang::Object* >(u"PID_NOTECOUNT"_j)
        }))
            , (new ::java::lang::ObjectArray({
            static_cast< ::java::lang::Object* >(::java::lang::Long::valueOf(static_cast< int64_t >(PID_HIDDENCOUNT)))
            , static_cast< ::java::lang::Object* >(u"PID_HIDDENCOUNT"_j)
        }))
            , (new ::java::lang::ObjectArray({
            static_cast< ::java::lang::Object* >(::java::lang::Long::valueOf(static_cast< int64_t >(PID_MMCLIPCOUNT)))
            , static_cast< ::java::lang::Object* >(u"PID_MMCLIPCOUNT"_j)
        }))
            , (new ::java::lang::ObjectArray({
            static_cast< ::java::lang::Object* >(::java::lang::Long::valueOf(static_cast< int64_t >(PID_SCALE)))
            , static_cast< ::java::lang::Object* >(u"PID_SCALE"_j)
        }))
            , (new ::java::lang::ObjectArray({
            static_cast< ::java::lang::Object* >(::java::lang::Long::valueOf(static_cast< int64_t >(PID_HEADINGPAIR)))
            , static_cast< ::java::lang::Object* >(u"PID_HEADINGPAIR"_j)
        }))
            , (new ::java::lang::ObjectArray({
            static_cast< ::java::lang::Object* >(::java::lang::Long::valueOf(static_cast< int64_t >(PID_DOCPARTS)))
            , static_cast< ::java::lang::Object* >(u"PID_DOCPARTS"_j)
        }))
            , (new ::java::lang::ObjectArray({
            static_cast< ::java::lang::Object* >(::java::lang::Long::valueOf(static_cast< int64_t >(PID_MANAGER)))
            , static_cast< ::java::lang::Object* >(u"PID_MANAGER"_j)
        }))
            , (new ::java::lang::ObjectArray({
            static_cast< ::java::lang::Object* >(::java::lang::Long::valueOf(static_cast< int64_t >(PID_COMPANY)))
            , static_cast< ::java::lang::Object* >(u"PID_COMPANY"_j)
        }))
            , (new ::java::lang::ObjectArray({
            static_cast< ::java::lang::Object* >(::java::lang::Long::valueOf(static_cast< int64_t >(PID_LINKSDIRTY)))
            , static_cast< ::java::lang::Object* >(u"PID_LINKSDIRTY"_j)
        }))
        }));
        fallbackIdValues_ = (new ::java::lang::ObjectArrayArray({
            (new ::java::lang::ObjectArray({
            static_cast< ::java::lang::Object* >(::java::lang::Long::valueOf(static_cast< int64_t >(PID_DICTIONARY)))
            , static_cast< ::java::lang::Object* >(u"PID_DICTIONARY"_j)
        }))
            , (new ::java::lang::ObjectArray({
            static_cast< ::java::lang::Object* >(::java::lang::Long::valueOf(static_cast< int64_t >(PID_CODEPAGE)))
            , static_cast< ::java::lang::Object* >(u"PID_CODEPAGE"_j)
        }))
            , (new ::java::lang::ObjectArray({
            static_cast< ::java::lang::Object* >(::java::lang::Long::valueOf(static_cast< int64_t >(PID_CATEGORY)))
            , static_cast< ::java::lang::Object* >(u"PID_CATEGORY"_j)
        }))
            , (new ::java::lang::ObjectArray({
            static_cast< ::java::lang::Object* >(::java::lang::Long::valueOf(static_cast< int64_t >(PID_PRESFORMAT)))
            , static_cast< ::java::lang::Object* >(u"PID_PRESFORMAT"_j)
        }))
            , (new ::java::lang::ObjectArray({
            static_cast< ::java::lang::Object* >(::java::lang::Long::valueOf(static_cast< int64_t >(PID_BYTECOUNT)))
            , static_cast< ::java::lang::Object* >(u"PID_BYTECOUNT"_j)
        }))
            , (new ::java::lang::ObjectArray({
            static_cast< ::java::lang::Object* >(::java::lang::Long::valueOf(static_cast< int64_t >(PID_LINECOUNT)))
            , static_cast< ::java::lang::Object* >(u"PID_LINECOUNT"_j)
        }))
            , (new ::java::lang::ObjectArray({
            static_cast< ::java::lang::Object* >(::java::lang::Long::valueOf(static_cast< int64_t >(PID_PARCOUNT)))
            , static_cast< ::java::lang::Object* >(u"PID_PARCOUNT"_j)
        }))
            , (new ::java::lang::ObjectArray({
            static_cast< ::java::lang::Object* >(::java::lang::Long::valueOf(static_cast< int64_t >(PID_SLIDECOUNT)))
            , static_cast< ::java::lang::Object* >(u"PID_SLIDECOUNT"_j)
        }))
            , (new ::java::lang::ObjectArray({
            static_cast< ::java::lang::Object* >(::java::lang::Long::valueOf(static_cast< int64_t >(PID_NOTECOUNT)))
            , static_cast< ::java::lang::Object* >(u"PID_NOTECOUNT"_j)
        }))
            , (new ::java::lang::ObjectArray({
            static_cast< ::java::lang::Object* >(::java::lang::Long::valueOf(static_cast< int64_t >(PID_HIDDENCOUNT)))
            , static_cast< ::java::lang::Object* >(u"PID_HIDDENCOUNT"_j)
        }))
            , (new ::java::lang::ObjectArray({
            static_cast< ::java::lang::Object* >(::java::lang::Long::valueOf(static_cast< int64_t >(PID_MMCLIPCOUNT)))
            , static_cast< ::java::lang::Object* >(u"PID_MMCLIPCOUNT"_j)
        }))
            , (new ::java::lang::ObjectArray({
            static_cast< ::java::lang::Object* >(::java::lang::Long::valueOf(static_cast< int64_t >(PID_SCALE)))
            , static_cast< ::java::lang::Object* >(u"PID_SCALE"_j)
        }))
            , (new ::java::lang::ObjectArray({
            static_cast< ::java::lang::Object* >(::java::lang::Long::valueOf(static_cast< int64_t >(PID_HEADINGPAIR)))
            , static_cast< ::java::lang::Object* >(u"PID_HEADINGPAIR"_j)
        }))
            , (new ::java::lang::ObjectArray({
            static_cast< ::java::lang::Object* >(::java::lang::Long::valueOf(static_cast< int64_t >(PID_DOCPARTS)))
            , static_cast< ::java::lang::Object* >(u"PID_DOCPARTS"_j)
        }))
            , (new ::java::lang::ObjectArray({
            static_cast< ::java::lang::Object* >(::java::lang::Long::valueOf(static_cast< int64_t >(PID_MANAGER)))
            , static_cast< ::java::lang::Object* >(u"PID_MANAGER"_j)
        }))
            , (new ::java::lang::ObjectArray({
            static_cast< ::java::lang::Object* >(::java::lang::Long::valueOf(static_cast< int64_t >(PID_COMPANY)))
            , static_cast< ::java::lang::Object* >(u"PID_COMPANY"_j)
        }))
            , (new ::java::lang::ObjectArray({
            static_cast< ::java::lang::Object* >(::java::lang::Long::valueOf(static_cast< int64_t >(PID_LINKSDIRTY)))
            , static_cast< ::java::lang::Object* >(u"PID_LINKSDIRTY"_j)
        }))
            , (new ::java::lang::ObjectArray({
            static_cast< ::java::lang::Object* >(::java::lang::Long::valueOf(static_cast< int64_t >(PID_CCHWITHSPACES)))
            , static_cast< ::java::lang::Object* >(u"PID_CCHWITHSPACES"_j)
        }))
            , (new ::java::lang::ObjectArray({
            static_cast< ::java::lang::Object* >(::java::lang::Long::valueOf(static_cast< int64_t >(PID_HYPERLINKSCHANGED)))
            , static_cast< ::java::lang::Object* >(u"PID_HYPERLINKSCHANGED"_j)
        }))
            , (new ::java::lang::ObjectArray({
            static_cast< ::java::lang::Object* >(::java::lang::Long::valueOf(static_cast< int64_t >(PID_VERSION)))
            , static_cast< ::java::lang::Object* >(u"PID_VERSION"_j)
        }))
            , (new ::java::lang::ObjectArray({
            static_cast< ::java::lang::Object* >(::java::lang::Long::valueOf(static_cast< int64_t >(PID_DIGSIG)))
            , static_cast< ::java::lang::Object* >(u"PID_DIGSIG"_j)
        }))
            , (new ::java::lang::ObjectArray({
            static_cast< ::java::lang::Object* >(::java::lang::Long::valueOf(static_cast< int64_t >(PID_CONTENTTYPE)))
            , static_cast< ::java::lang::Object* >(u"PID_CONTENTTYPE"_j)
        }))
            , (new ::java::lang::ObjectArray({
            static_cast< ::java::lang::Object* >(::java::lang::Long::valueOf(static_cast< int64_t >(PID_CONTENTSTATUS)))
            , static_cast< ::java::lang::Object* >(u"PID_CONTENTSTATUS"_j)
        }))
            , (new ::java::lang::ObjectArray({
            static_cast< ::java::lang::Object* >(::java::lang::Long::valueOf(static_cast< int64_t >(PID_LANGUAGE)))
            , static_cast< ::java::lang::Object* >(u"PID_LANGUAGE"_j)
        }))
            , (new ::java::lang::ObjectArray({
            static_cast< ::java::lang::Object* >(::java::lang::Long::valueOf(static_cast< int64_t >(PID_DOCVERSION)))
            , static_cast< ::java::lang::Object* >(u"PID_DOCVERSION"_j)
        }))
            , (new ::java::lang::ObjectArray({
            static_cast< ::java::lang::Object* >(::java::lang::Long::valueOf(static_cast< int64_t >(PID_MAX)))
            , static_cast< ::java::lang::Object* >(u"PID_MAX"_j)
        }))
            , (new ::java::lang::ObjectArray({
            static_cast< ::java::lang::Object* >(::java::lang::Long::valueOf(static_cast< int64_t >(PID_LOCALE)))
            , static_cast< ::java::lang::Object* >(u"PID_LOCALE"_j)
        }))
            , (new ::java::lang::ObjectArray({
            static_cast< ::java::lang::Object* >(::java::lang::Long::valueOf(static_cast< int64_t >(PID_BEHAVIOUR)))
            , static_cast< ::java::lang::Object* >(u"PID_BEHAVIOUR"_j)
        }))
        }));
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

bool org::apache::poi::hpsf::wellknown::PropertyIDMap::equals(::java::lang::Object* o)
{
    return Object::equals(o);
}

int32_t org::apache::poi::hpsf::wellknown::PropertyIDMap::hashCode()
{
    return Object::hashCode();
}

bool org::apache::poi::hpsf::wellknown::PropertyIDMap::remove(::java::lang::Object* key, ::java::lang::Object* value)
{
    return remove(key, value);
}

java::lang::Class* org::apache::poi::hpsf::wellknown::PropertyIDMap::getClass0()
{
    return class_();
}

