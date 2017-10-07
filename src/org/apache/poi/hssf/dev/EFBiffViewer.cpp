// Generated from /POI/java/org/apache/poi/hssf/dev/EFBiffViewer.java
#include <org/apache/poi/hssf/dev/EFBiffViewer.hpp>

#include <java/io/File.hpp>
#include <java/io/InputStream.hpp>
#include <java/io/PrintStream.hpp>
#include <java/io/Serializable.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/lang/System.hpp>
#include <org/apache/poi/hssf/dev/BiffViewer.hpp>
#include <org/apache/poi/hssf/dev/EFBiffViewer_run_1.hpp>
#include <org/apache/poi/hssf/eventusermodel/HSSFEventFactory.hpp>
#include <org/apache/poi/hssf/eventusermodel/HSSFRequest.hpp>
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
org::apache::poi::hssf::dev::EFBiffViewer::EFBiffViewer(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::dev::EFBiffViewer::EFBiffViewer() 
    : EFBiffViewer(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void org::apache::poi::hssf::dev::EFBiffViewer::ctor()
{
    super::ctor();
}

void org::apache::poi::hssf::dev::EFBiffViewer::run() /* throws(IOException) */
{
    auto fs = new ::org::apache::poi::poifs::filesystem::NPOIFSFileSystem(new ::java::io::File(file), true);
    {
        auto finally0 = finally([&] {
            npc(fs)->close();
        });
        {
            auto din = BiffViewer::getPOIFSInputStream(fs);
            {
                auto finally1 = finally([&] {
                    npc(din)->close();
                });
                {
                    auto req = new ::org::apache::poi::hssf::eventusermodel::HSSFRequest();
                    npc(req)->addListenerForAllRecords(new EFBiffViewer_run_1(this));
                    auto factory = new ::org::apache::poi::hssf::eventusermodel::HSSFEventFactory();
                    npc(factory)->processEvents(req, din);
                }
            }

        }
    }

}

void org::apache::poi::hssf::dev::EFBiffViewer::setFile(::java::lang::String* file)
{
    this->file = file;
}

void org::apache::poi::hssf::dev::EFBiffViewer::main(::java::lang::StringArray* args) /* throws(IOException) */
{
    clinit();
    if((npc(args)->length == 1) && !npc((*args)[int32_t(0)])->equals(static_cast< ::java::lang::Object* >(u"--help"_j))) {
        auto viewer = new EFBiffViewer();
        npc(viewer)->setFile((*args)[int32_t(0)]);
        npc(viewer)->run();
    } else {
        npc(::java::lang::System::out())->println(u"EFBiffViewer"_j);
        npc(::java::lang::System::out())->println(u"Outputs biffview of records based on HSSFEventFactory"_j);
        npc(::java::lang::System::out())->println(::java::lang::StringBuilder().append(u"usage: java org.apache.poi.hssf.dev.EBBiffViewer "_j)->append(u"filename"_j)->toString());
    }
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::dev::EFBiffViewer::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.dev.EFBiffViewer", 36);
    return c;
}

java::lang::Class* org::apache::poi::hssf::dev::EFBiffViewer::getClass0()
{
    return class_();
}

