// Generated from /POI/java/org/apache/poi/poifs/eventfilesystem/POIFSReader.java
#include <org/apache/poi/poifs/eventfilesystem/POIFSReader_SampleListener.hpp>

#include <java/io/IOException.hpp>
#include <java/io/PrintStream.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/lang/System.hpp>
#include <org/apache/poi/poifs/eventfilesystem/POIFSReaderEvent.hpp>
#include <org/apache/poi/poifs/filesystem/DocumentInputStream.hpp>
#include <org/apache/poi/poifs/filesystem/POIFSDocumentPath.hpp>
#include <org/apache/poi/util/IOUtils.hpp>
#include <Array.hpp>

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
org::apache::poi::poifs::eventfilesystem::POIFSReader_SampleListener::POIFSReader_SampleListener(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::poifs::eventfilesystem::POIFSReader_SampleListener::POIFSReader_SampleListener() 
    : POIFSReader_SampleListener(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void org::apache::poi::poifs::eventfilesystem::POIFSReader_SampleListener::ctor()
{
    super::ctor();
}

void org::apache::poi::poifs::eventfilesystem::POIFSReader_SampleListener::processPOIFSReaderEvent(POIFSReaderEvent* event)
{
    auto istream = npc(event)->getStream();
    auto path = npc(event)->getPath();
    auto name = npc(event)->getName();
    {
        auto finally0 = finally([&] {
            ::org::apache::poi::util::IOUtils::closeQuietly(istream);
        });
        try {
            auto data = ::org::apache::poi::util::IOUtils::toByteArray_(istream);
            auto pathLength = npc(path)->length();
            for (auto k = int32_t(0); k < pathLength; k++) {
                npc(::java::lang::System::out())->print(::java::lang::StringBuilder().append(u"/"_j)->append(npc(path)->getComponent(k))->toString());
            }
            npc(::java::lang::System::out())->println(::java::lang::StringBuilder().append(u"/"_j)->append(name)
                ->append(u": "_j)
                ->append(npc(data)->length)
                ->append(u" bytes read"_j)->toString());
        } catch (::java::io::IOException* ignored) {
        }
    }
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::poifs::eventfilesystem::POIFSReader_SampleListener::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.poifs.eventfilesystem.POIFSReader.SampleListener", 63);
    return c;
}

java::lang::Class* org::apache::poi::poifs::eventfilesystem::POIFSReader_SampleListener::getClass0()
{
    return class_();
}

