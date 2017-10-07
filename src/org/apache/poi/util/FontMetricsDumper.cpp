// Generated from /POI/java/org/apache/poi/util/FontMetricsDumper.java
#include <org/apache/poi/util/FontMetricsDumper.hpp>

#include <java/awt/Font.hpp>
#include <java/awt/FontMetrics.hpp>
#include <java/awt/GraphicsEnvironment.hpp>
#include <java/awt/Toolkit.hpp>
#include <java/io/FileOutputStream.hpp>
#include <java/io/OutputStream.hpp>
#include <java/io/Serializable.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/util/Properties.hpp>
#include <Array.hpp>
#include <SubArray.hpp>
#include <ObjectArray.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace io
    {
typedef ::SubArray< ::java::io::Serializable, ::java::lang::ObjectArray > SerializableArray;
    } // io

    namespace awt
    {
typedef ::SubArray< ::java::awt::Font, ::java::lang::ObjectArray, ::java::io::SerializableArray > FontArray;
    } // awt

    namespace lang
    {
typedef ::SubArray< ::java::lang::CharSequence, ObjectArray > CharSequenceArray;
typedef ::SubArray< ::java::lang::Comparable, ObjectArray > ComparableArray;
typedef ::SubArray< ::java::lang::String, ObjectArray, ::java::io::SerializableArray, ComparableArray, CharSequenceArray > StringArray;
    } // lang
} // java

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
org::apache::poi::util::FontMetricsDumper::FontMetricsDumper(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::util::FontMetricsDumper::FontMetricsDumper()
    : FontMetricsDumper(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void org::apache::poi::util::FontMetricsDumper::main(::java::lang::StringArray* args) /* throws(IOException) */
{
    clinit();
    auto props = new ::java::util::Properties();
    auto allFonts = npc(::java::awt::GraphicsEnvironment::getLocalGraphicsEnvironment())->getAllFonts();
    for(auto allFont : *npc(allFonts)) {
        auto fontName = npc(allFont)->getFontName();
        auto font = new ::java::awt::Font(fontName, ::java::awt::Font::BOLD, int32_t(10));
        auto fontMetrics = npc(::java::awt::Toolkit::getDefaultToolkit())->getFontMetrics(font);
        auto fontHeight = npc(fontMetrics)->getHeight();
        npc(props)->setProperty(::java::lang::StringBuilder().append(u"font."_j)->append(fontName)
            ->append(u".height"_j)->toString(), ::java::lang::StringBuilder().append(fontHeight)->append(u""_j)->toString());
        auto characters = new ::java::lang::StringBuilder();
        for (auto c = u'a'; c <= u'z'; c++) {
            npc(npc(characters)->append(c))->append(u", "_j);
        }
        for (auto c = u'A'; c <= u'Z'; c++) {
            npc(npc(characters)->append(c))->append(u", "_j);
        }
        for (auto c = u'0'; c <= u'9'; c++) {
            npc(npc(characters)->append(c))->append(u", "_j);
        }
        auto widths = new ::java::lang::StringBuilder();
        for (auto c = u'a'; c <= u'z'; c++) {
            npc(npc(widths)->append((*npc(fontMetrics)->getWidths())[c]))->append(u", "_j);
        }
        for (auto c = u'A'; c <= u'Z'; c++) {
            npc(npc(widths)->append((*npc(fontMetrics)->getWidths())[c]))->append(u", "_j);
        }
        for (auto c = u'0'; c <= u'9'; c++) {
            npc(npc(widths)->append((*npc(fontMetrics)->getWidths())[c]))->append(u", "_j);
        }
        npc(props)->setProperty(::java::lang::StringBuilder().append(u"font."_j)->append(fontName)
            ->append(u".characters"_j)->toString(), npc(characters)->toString());
        npc(props)->setProperty(::java::lang::StringBuilder().append(u"font."_j)->append(fontName)
            ->append(u".widths"_j)->toString(), npc(widths)->toString());
    }
    ::java::io::OutputStream* fileOut = new ::java::io::FileOutputStream(u"font_metrics.properties"_j);
    {
        auto finally0 = finally([&] {
            npc(fileOut)->close();
        });
        {
            npc(props)->store(fileOut, u"Font Metrics"_j);
        }
    }

}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::util::FontMetricsDumper::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.util.FontMetricsDumper", 37);
    return c;
}

java::lang::Class* org::apache::poi::util::FontMetricsDumper::getClass0()
{
    return class_();
}

