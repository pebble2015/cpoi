// Generated from /POI/java/org/apache/poi/hpsf/extractor/HPSFPropertiesExtractor.java
#include <org/apache/poi/hpsf/extractor/HPSFPropertiesExtractor.hpp>

#include <java/io/File.hpp>
#include <java/io/PrintStream.hpp>
#include <java/io/Serializable.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/IllegalStateException.hpp>
#include <java/lang/Long.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/lang/System.hpp>
#include <java/util/Iterator.hpp>
#include <java/util/Set.hpp>
#include <org/apache/poi/POIDocument.hpp>
#include <org/apache/poi/hpsf/CustomProperties.hpp>
#include <org/apache/poi/hpsf/DocumentSummaryInformation.hpp>
#include <org/apache/poi/hpsf/HPSFPropertiesOnlyDocument.hpp>
#include <org/apache/poi/hpsf/Property.hpp>
#include <org/apache/poi/hpsf/PropertySet.hpp>
#include <org/apache/poi/hpsf/SummaryInformation.hpp>
#include <org/apache/poi/hpsf/wellknown/PropertyIDMap.hpp>
#include <org/apache/poi/poifs/filesystem/NPOIFSFileSystem.hpp>
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
typedef ::SubArray< ::java::lang::Comparable, ObjectArray > ComparableArray;
typedef ::SubArray< ::java::lang::String, ObjectArray, ::java::io::SerializableArray, ComparableArray, CharSequenceArray > StringArray;
    } // lang
} // java

namespace poi
{
    namespace hpsf
    {
typedef ::SubArray< ::poi::hpsf::Property, ::java::lang::ObjectArray > PropertyArray;
    } // hpsf
} // poi

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

namespace
{
    template<typename F>
    struct finally_
    {
        finally_(F f) : f(f), moved(false) { }
        finally_(finally_ &&x) : f(x.f), moved(false) { x.moved = true; }
        ~finally_() { if(!moved) f(); }
    private:
        finally_(const finally_&); finally_& operator=(const finally_&);
        F f;
        bool moved;
    };

    template<typename F> finally_<F> finally(F f) { return finally_<F>(f); }
}
poi::hpsf::extractor::HPSFPropertiesExtractor::HPSFPropertiesExtractor(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hpsf::extractor::HPSFPropertiesExtractor::HPSFPropertiesExtractor(::poi::POIOLE2TextExtractor* mainExtractor) 
    : HPSFPropertiesExtractor(*static_cast< ::default_init_tag* >(0))
{
    ctor(mainExtractor);
}

poi::hpsf::extractor::HPSFPropertiesExtractor::HPSFPropertiesExtractor(::poi::POIDocument* doc) 
    : HPSFPropertiesExtractor(*static_cast< ::default_init_tag* >(0))
{
    ctor(doc);
}

poi::hpsf::extractor::HPSFPropertiesExtractor::HPSFPropertiesExtractor(::poi::poifs::filesystem::POIFSFileSystem* fs) 
    : HPSFPropertiesExtractor(*static_cast< ::default_init_tag* >(0))
{
    ctor(fs);
}

poi::hpsf::extractor::HPSFPropertiesExtractor::HPSFPropertiesExtractor(::poi::poifs::filesystem::NPOIFSFileSystem* fs) 
    : HPSFPropertiesExtractor(*static_cast< ::default_init_tag* >(0))
{
    ctor(fs);
}

void poi::hpsf::extractor::HPSFPropertiesExtractor::ctor(::poi::POIOLE2TextExtractor* mainExtractor)
{
    super::ctor(mainExtractor);
}

void poi::hpsf::extractor::HPSFPropertiesExtractor::ctor(::poi::POIDocument* doc)
{
    super::ctor(doc);
}

void poi::hpsf::extractor::HPSFPropertiesExtractor::ctor(::poi::poifs::filesystem::POIFSFileSystem* fs)
{
    super::ctor(static_cast< ::poi::POIDocument* >(new ::poi::hpsf::HPSFPropertiesOnlyDocument(fs)));
}

void poi::hpsf::extractor::HPSFPropertiesExtractor::ctor(::poi::poifs::filesystem::NPOIFSFileSystem* fs)
{
    super::ctor(static_cast< ::poi::POIDocument* >(new ::poi::hpsf::HPSFPropertiesOnlyDocument(fs)));
}

java::lang::String* poi::hpsf::extractor::HPSFPropertiesExtractor::getDocumentSummaryInformationText()
{
    if(document == nullptr) {
        return u""_j;
    }
    auto dsi = npc(document)->getDocumentSummaryInformation();
    auto text = new ::java::lang::StringBuilder();
    npc(text)->append(getPropertiesText(dsi));
    auto cps = dsi == nullptr ? static_cast< ::poi::hpsf::CustomProperties* >(nullptr) : npc(dsi)->getCustomProperties();
    if(cps != nullptr) {
        for (auto _i = npc(npc(cps)->nameSet())->iterator(); _i->hasNext(); ) {
            ::java::lang::String* key = java_cast< ::java::lang::String* >(_i->next());
            {
                auto val = getPropertyValueText(npc(cps)->get(static_cast< ::java::lang::Object* >(key)));
                npc(npc(npc(npc(text)->append(key))->append(u" = "_j))->append(val))->append(u"\n"_j);
            }
        }
    }
    return npc(text)->toString();
}

java::lang::String* poi::hpsf::extractor::HPSFPropertiesExtractor::getSummaryInformationText()
{
    if(document == nullptr) {
        return u""_j;
    }
    auto si = npc(document)->getSummaryInformation();
    return getPropertiesText(si);
}

java::lang::String* poi::hpsf::extractor::HPSFPropertiesExtractor::getPropertiesText(::poi::hpsf::PropertySet* ps)
{
    clinit();
    if(ps == nullptr) {
        return u""_j;
    }
    auto text = new ::java::lang::StringBuilder();
    auto idMap = npc(ps)->getPropertySetIDMap();
    auto props = npc(ps)->getProperties();
    for(auto prop : *npc(props)) {
        auto type = ::java::lang::Long::toString(npc(prop)->getID());
        auto typeObj = (idMap == nullptr) ? static_cast< ::java::lang::Object* >(nullptr) : static_cast< ::java::lang::Object* >(npc(idMap)->get(::java::lang::Long::valueOf(npc(prop)->getID())));
        if(typeObj != nullptr) {
            type = npc(typeObj)->toString();
        }
        auto val = getPropertyValueText(npc(prop)->getValue());
        npc(npc(npc(npc(text)->append(type))->append(u" = "_j))->append(val))->append(u"\n"_j);
    }
    return npc(text)->toString();
}

java::lang::String* poi::hpsf::extractor::HPSFPropertiesExtractor::getText()
{
    return ::java::lang::StringBuilder().append(getSummaryInformationText())->append(getDocumentSummaryInformationText())->toString();
}

poi::POITextExtractor* poi::hpsf::extractor::HPSFPropertiesExtractor::getMetadataTextExtractor()
{
    throw new ::java::lang::IllegalStateException(u"You already have the Metadata Text Extractor, not recursing!"_j);
}

java::lang::String* poi::hpsf::extractor::HPSFPropertiesExtractor::getPropertyValueText(::java::lang::Object* val)
{
    clinit();
    return (val == nullptr) ? u"(not set)"_j : ::poi::hpsf::PropertySet::getPropertyStringValue(val);
}

bool poi::hpsf::extractor::HPSFPropertiesExtractor::equals(::java::lang::Object* o)
{
    return super::equals(o);
}

int32_t poi::hpsf::extractor::HPSFPropertiesExtractor::hashCode()
{
    return super::hashCode();
}

void poi::hpsf::extractor::HPSFPropertiesExtractor::main(::java::lang::StringArray* args) /* throws(IOException) */
{
    clinit();
    for(auto file : *npc(args)) {
        auto ext = new HPSFPropertiesExtractor(new ::poi::poifs::filesystem::NPOIFSFileSystem(new ::java::io::File(file)));
        {
            auto finally0 = finally([&] {
                npc(ext)->close();
            });
            {
                npc(::java::lang::System::out())->println(npc(ext)->getText());
            }
        }

    }
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hpsf::extractor::HPSFPropertiesExtractor::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hpsf.extractor.HPSFPropertiesExtractor", 53);
    return c;
}

java::lang::Class* poi::hpsf::extractor::HPSFPropertiesExtractor::getClass0()
{
    return class_();
}

