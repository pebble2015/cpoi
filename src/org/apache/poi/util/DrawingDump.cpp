// Generated from /POI/java/org/apache/poi/util/DrawingDump.java
#include <org/apache/poi/util/DrawingDump.hpp>

#include <java/io/File.hpp>
#include <java/io/OutputStream.hpp>
#include <java/io/OutputStreamWriter.hpp>
#include <java/io/PrintStream.hpp>
#include <java/io/PrintWriter.hpp>
#include <java/io/Serializable.hpp>
#include <java/io/Writer.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/lang/System.hpp>
#include <java/nio/charset/Charset.hpp>
#include <java/util/Iterator.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFSheet.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFWorkbook.hpp>
#include <org/apache/poi/poifs/filesystem/NPOIFSFileSystem.hpp>
#include <org/apache/poi/ss/usermodel/Sheet.hpp>
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
poi::util::DrawingDump::DrawingDump(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::util::DrawingDump::DrawingDump()
    : DrawingDump(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void poi::util::DrawingDump::main(::java::lang::StringArray* args) /* throws(IOException) */
{
    clinit();
    auto osw = new ::java::io::OutputStreamWriter(static_cast< ::java::io::OutputStream* >(::java::lang::System::out()), ::java::nio::charset::Charset::defaultCharset());
    auto pw = new ::java::io::PrintWriter(static_cast< ::java::io::Writer* >(osw));
    auto fs = new ::poi::poifs::filesystem::NPOIFSFileSystem(new ::java::io::File((*args)[int32_t(0)]));
    auto wb = new ::poi::hssf::usermodel::HSSFWorkbook(fs);
    {
        auto finally0 = finally([&] {
            npc(wb)->close();
            npc(fs)->close();
        });
        {
            npc(pw)->println(u"Drawing group:"_j);
            npc(wb)->dumpDrawingGroupRecords(true);
            auto i = int32_t(1);
            for (auto _i = npc(wb)->iterator(); _i->hasNext(); ) {
                ::poi::ss::usermodel::Sheet* sheet = java_cast< ::poi::ss::usermodel::Sheet* >(_i->next());
                {
                    npc(pw)->println(::java::lang::StringBuilder().append(u"Sheet "_j)->append(i)
                        ->append(u"("_j)
                        ->append(npc(sheet)->getSheetName())
                        ->append(u"):"_j)->toString());
                    npc((java_cast< ::poi::hssf::usermodel::HSSFSheet* >(sheet)))->dumpDrawingRecords(true, pw);
                }
            }
        }
    }

}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::util::DrawingDump::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.util.DrawingDump", 31);
    return c;
}

java::lang::Class* poi::util::DrawingDump::getClass0()
{
    return class_();
}

