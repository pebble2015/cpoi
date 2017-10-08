// Generated from /POI/java/org/apache/poi/sl/draw/geom/PresetGeometries.java
#include <org/apache/poi/sl/draw/geom/PresetGeometries.hpp>

#include <java/io/InputStream.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Exception.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/RuntimeException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/lang/Throwable.hpp>
#include <javax/xml/bind/JAXBContext.hpp>
#include <javax/xml/bind/JAXBElement.hpp>
#include <javax/xml/bind/JAXBException.hpp>
#include <javax/xml/bind/Unmarshaller.hpp>
#include <javax/xml/namespace_/QName.hpp>
#include <javax/xml/stream/XMLEventReader.hpp>
#include <javax/xml/stream/XMLInputFactory.hpp>
#include <javax/xml/stream/events/StartElement.hpp>
#include <javax/xml/stream/events/XMLEvent.hpp>
#include <org/apache/poi/sl/draw/binding/CTCustomGeometry2D.hpp>
#include <org/apache/poi/sl/draw/geom/CustomGeometry.hpp>
#include <org/apache/poi/sl/draw/geom/PresetGeometries_init_1.hpp>
#include <org/apache/poi/util/POILogFactory.hpp>
#include <org/apache/poi/util/POILogger.hpp>
#include <org/apache/poi/util/StaxHelper.hpp>
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
poi::sl::draw::geom::PresetGeometries::PresetGeometries(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::sl::draw::geom::PresetGeometries::PresetGeometries() 
    : PresetGeometries(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::util::POILogger*& poi::sl::draw::geom::PresetGeometries::LOG()
{
    clinit();
    return LOG_;
}
poi::util::POILogger* poi::sl::draw::geom::PresetGeometries::LOG_;

java::lang::String*& poi::sl::draw::geom::PresetGeometries::BINDING_PACKAGE()
{
    clinit();
    return BINDING_PACKAGE_;
}
java::lang::String* poi::sl::draw::geom::PresetGeometries::BINDING_PACKAGE_;

poi::sl::draw::geom::PresetGeometries*& poi::sl::draw::geom::PresetGeometries::_inst()
{
    clinit();
    return _inst_;
}
poi::sl::draw::geom::PresetGeometries* poi::sl::draw::geom::PresetGeometries::_inst_;

void poi::sl::draw::geom::PresetGeometries::ctor()
{
    super::ctor();
}

void poi::sl::draw::geom::PresetGeometries::init_(::java::io::InputStream* is) /* throws(XMLStreamException, JAXBException) */
{
    ::javax::xml::stream::EventFilter* startElementFilter = new PresetGeometries_init_1(this);
    auto staxFactory = ::poi::util::StaxHelper::newXMLInputFactory();
    auto staxReader = npc(staxFactory)->createXMLEventReader(is);
    auto staxFiltRd = npc(staxFactory)->createFilteredReader(staxReader, startElementFilter);
    npc(staxFiltRd)->nextEvent();
    auto jaxbContext = ::javax::xml::bind::JAXBContext::newInstance(BINDING_PACKAGE_);
    auto unmarshaller = npc(jaxbContext)->createUnmarshaller();
    int64_t cntElem = int32_t(0);
    while (npc(staxFiltRd)->peek() != nullptr) {
        auto evRoot = java_cast< ::javax::xml::stream::events::StartElement* >(npc(staxFiltRd)->peek());
        auto name = npc(npc(evRoot)->getName())->getLocalPart();
        auto el = npc(unmarshaller)->unmarshal(staxReader, static_cast< ::java::lang::Class* >(::poi::sl::draw::binding::CTCustomGeometry2D::class_()));
        auto cus = java_cast< ::poi::sl::draw::binding::CTCustomGeometry2D* >(npc(el)->getValue());
        cntElem++;
        if(containsKey(static_cast< ::java::lang::Object* >(name))) {
            npc(LOG_)->log(::poi::util::POILogger::WARN, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(::java::lang::StringBuilder().append(u"Duplicate definition of "_j)->append(name)->toString())}));
        }
        put(static_cast< ::java::lang::Object* >(name), static_cast< ::java::lang::Object* >(new CustomGeometry(cus)));
    }
}

poi::sl::draw::geom::CustomGeometry* poi::sl::draw::geom::PresetGeometries::convertCustomGeometry(::javax::xml::stream::XMLStreamReader* staxReader)
{
    clinit();
    try {
        auto jaxbContext = ::javax::xml::bind::JAXBContext::newInstance(BINDING_PACKAGE_);
        auto unmarshaller = npc(jaxbContext)->createUnmarshaller();
        auto el = npc(unmarshaller)->unmarshal(staxReader, static_cast< ::java::lang::Class* >(::poi::sl::draw::binding::CTCustomGeometry2D::class_()));
        return new CustomGeometry(java_cast< ::poi::sl::draw::binding::CTCustomGeometry2D* >(npc(el)->getValue()));
    } catch (::javax::xml::bind::JAXBException* e) {
        npc(LOG_)->log(::poi::util::POILogger::ERROR, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(u"Unable to parse single custom geometry"_j), static_cast< ::java::lang::Object* >(e)}));
        return nullptr;
    }
}

poi::sl::draw::geom::PresetGeometries* poi::sl::draw::geom::PresetGeometries::getInstance()
{
    clinit();
    if(_inst_ == nullptr) {
        auto lInst = new PresetGeometries();
        try {
            auto is = npc(PresetGeometries::class_())->getResourceAsStream(u"presetShapeDefinitions.xml"_j);
            {
                auto finally0 = finally([&] {
                    npc(is)->close();
                });
                {
                    npc(lInst)->init_(is);
                }
            }

        } catch (::java::lang::Exception* e) {
            throw new ::java::lang::RuntimeException(static_cast< ::java::lang::Throwable* >(e));
        }
        _inst_ = lInst;
    }
    return _inst_;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::sl::draw::geom::PresetGeometries::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.sl.draw.geom.PresetGeometries", 44);
    return c;
}

void poi::sl::draw::geom::PresetGeometries::clinit()
{
struct string_init_ {
    string_init_() {
    BINDING_PACKAGE_ = u"org.apache.poi.sl.draw.binding"_j;
    }
};

    static string_init_ string_init_instance;

    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        LOG_ = ::poi::util::POILogFactory::getLogger(static_cast< ::java::lang::Class* >(PresetGeometries::class_()));
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* poi::sl::draw::geom::PresetGeometries::getClass0()
{
    return class_();
}

