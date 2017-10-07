// Generated from /POI/java/org/apache/poi/hssf/usermodel/StaticFontMetrics.java
#include <org/apache/poi/hssf/usermodel/StaticFontMetrics.hpp>

#include <java/awt/Font.hpp>
#include <java/io/File.hpp>
#include <java/io/FileInputStream.hpp>
#include <java/io/IOException.hpp>
#include <java/io/InputStream.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/RuntimeException.hpp>
#include <java/lang/SecurityException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/lang/System.hpp>
#include <java/util/HashMap.hpp>
#include <java/util/Map.hpp>
#include <java/util/Properties.hpp>
#include <org/apache/poi/hssf/usermodel/FontDetails.hpp>
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
org::apache::poi::hssf::usermodel::StaticFontMetrics::StaticFontMetrics(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::usermodel::StaticFontMetrics::StaticFontMetrics() 
    : StaticFontMetrics(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::util::POILogger*& org::apache::poi::hssf::usermodel::StaticFontMetrics::LOGGER()
{
    clinit();
    return LOGGER_;
}
org::apache::poi::util::POILogger* org::apache::poi::hssf::usermodel::StaticFontMetrics::LOGGER_;

java::util::Properties*& org::apache::poi::hssf::usermodel::StaticFontMetrics::fontMetricsProps()
{
    clinit();
    return fontMetricsProps_;
}
java::util::Properties* org::apache::poi::hssf::usermodel::StaticFontMetrics::fontMetricsProps_;

java::util::Map*& org::apache::poi::hssf::usermodel::StaticFontMetrics::fontDetailsMap()
{
    clinit();
    return fontDetailsMap_;
}
java::util::Map* org::apache::poi::hssf::usermodel::StaticFontMetrics::fontDetailsMap_;

void org::apache::poi::hssf::usermodel::StaticFontMetrics::ctor()
{
    super::ctor();
}

org::apache::poi::hssf::usermodel::FontDetails* org::apache::poi::hssf::usermodel::StaticFontMetrics::getFontDetails(::java::awt::Font* font)
{
    clinit();
    if(fontMetricsProps_ == nullptr) {
        try {
            fontMetricsProps_ = loadMetrics();
        } catch (::java::io::IOException* e) {
            throw new ::java::lang::RuntimeException(u"Could not load font metrics"_j, e);
        }
    }
    auto fontName = npc(font)->getName();
    auto fontStyle = u""_j;
    if(npc(font)->isPlain()) {
        fontStyle = ::java::lang::StringBuilder(fontStyle).append(u"plain"_j)->toString();
    }
    if(npc(font)->isBold()) {
        fontStyle = ::java::lang::StringBuilder(fontStyle).append(u"bold"_j)->toString();
    }
    if(npc(font)->isItalic()) {
        fontStyle = ::java::lang::StringBuilder(fontStyle).append(u"italic"_j)->toString();
    }
    auto fontHeight = FontDetails::buildFontHeightProperty(fontName);
    auto styleHeight = FontDetails::buildFontHeightProperty(::java::lang::StringBuilder().append(fontName)->append(u"."_j)
        ->append(fontStyle)->toString());
    if(java_cast< ::java::lang::Object* >(npc(fontMetricsProps_)->get(static_cast< ::java::lang::Object* >(fontHeight))) == nullptr && java_cast< ::java::lang::Object* >(npc(fontMetricsProps_)->get(static_cast< ::java::lang::Object* >(styleHeight))) != nullptr) {
        fontName = ::java::lang::StringBuilder(fontName).append(::java::lang::StringBuilder().append(u"."_j)->append(fontStyle)->toString())->toString();
    }
    auto fontDetails = java_cast< FontDetails* >(npc(fontDetailsMap_)->get(fontName));
    if(fontDetails == nullptr) {
        fontDetails = FontDetails::create(fontName, fontMetricsProps_);
        npc(fontDetailsMap_)->put(fontName, fontDetails);
    }
    return fontDetails;
}

java::util::Properties* org::apache::poi::hssf::usermodel::StaticFontMetrics::loadMetrics() /* throws(IOException) */
{
    clinit();
    ::java::io::File* propFile = nullptr;
    try {
        auto propFileName = ::java::lang::System::getProperty(u"font.metrics.filename"_j);
        if(propFileName != nullptr) {
            propFile = new ::java::io::File(propFileName);
            if(!npc(propFile)->exists()) {
                npc(LOGGER_)->log(::org::apache::poi::util::POILogger::WARN, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(::java::lang::StringBuilder().append(u"font_metrics.properties not found at path "_j)->append(npc(propFile)->getAbsolutePath())->toString())}));
                propFile = nullptr;
            }
        }
    } catch (::java::lang::SecurityException* e) {
        npc(LOGGER_)->log(::org::apache::poi::util::POILogger::WARN, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(u"Can't access font.metrics.filename system property"_j), static_cast< ::java::lang::Object* >(e)}));
    }
    ::java::io::InputStream* metricsIn = nullptr;
    {
        auto finally0 = finally([&] {
            if(metricsIn != nullptr) {
                npc(metricsIn)->close();
            }
        });
        {
            if(propFile != nullptr) {
                metricsIn = new ::java::io::FileInputStream(propFile);
            } else {
                metricsIn = npc(FontDetails::class_())->getResourceAsStream(u"/font_metrics.properties"_j);
                if(metricsIn == nullptr) {
                    auto err = u"font_metrics.properties not found in classpath"_j;
                    throw new ::java::io::IOException(err);
                }
            }
            auto props = new ::java::util::Properties();
            npc(props)->load(metricsIn);
            return props;
        }
    }

}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::usermodel::StaticFontMetrics::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.usermodel.StaticFontMetrics", 47);
    return c;
}

void org::apache::poi::hssf::usermodel::StaticFontMetrics::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        LOGGER_ = ::org::apache::poi::util::POILogFactory::getLogger(static_cast< ::java::lang::Class* >(StaticFontMetrics::class_()));
        fontDetailsMap_ = new ::java::util::HashMap();
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* org::apache::poi::hssf::usermodel::StaticFontMetrics::getClass0()
{
    return class_();
}

