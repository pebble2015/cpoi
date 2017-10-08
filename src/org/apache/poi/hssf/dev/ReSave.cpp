// Generated from /POI/java/org/apache/poi/hssf/dev/ReSave.java
#include <org/apache/poi/hssf/dev/ReSave.hpp>

#include <java/io/ByteArrayOutputStream.hpp>
#include <java/io/FileInputStream.hpp>
#include <java/io/FileOutputStream.hpp>
#include <java/io/InputStream.hpp>
#include <java/io/OutputStream.hpp>
#include <java/io/PrintStream.hpp>
#include <java/io/Serializable.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/lang/System.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFPatriarch.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFSheet.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFWorkbook.hpp>
#include <org/apache/poi/ss/usermodel/Drawing.hpp>
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
poi::hssf::dev::ReSave::ReSave(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::dev::ReSave::ReSave()
    : ReSave(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void poi::hssf::dev::ReSave::main(::java::lang::StringArray* args) /* throws(Exception) */
{
    clinit();
    auto initDrawing = false;
    auto saveToMemory = false;
    auto bos = new ::java::io::ByteArrayOutputStream();
    for(auto filename : *npc(args)) {
        if(npc(filename)->equals(static_cast< ::java::lang::Object* >(u"-dg"_j))) {
            initDrawing = true;
        } else if(npc(filename)->equals(static_cast< ::java::lang::Object* >(u"-bos"_j))) {
            saveToMemory = true;
        } else {
            npc(::java::lang::System::out())->print(::java::lang::StringBuilder().append(u"reading "_j)->append(filename)
                ->append(u"..."_j)->toString());
            auto is = new ::java::io::FileInputStream(filename);
            auto wb = new ::poi::hssf::usermodel::HSSFWorkbook(static_cast< ::java::io::InputStream* >(is));
            {
                auto finally0 = finally([&] {
                    npc(wb)->close();
                    npc(is)->close();
                });
                {
                    npc(::java::lang::System::out())->println(u"done"_j);
                    for (auto i = int32_t(0); i < npc(wb)->getNumberOfSheets(); i++) {
                        auto sheet = java_cast< ::poi::hssf::usermodel::HSSFSheet* >(npc(wb)->getSheetAt(i));
                        if(initDrawing) {
                            java_cast< ::poi::hssf::usermodel::HSSFPatriarch* >(npc(sheet)->getDrawingPatriarch());
                        }
                    }
                    ::java::io::OutputStream* os;
                    if(saveToMemory) {
                        npc(bos)->reset();
                        os = bos;
                    } else {
                        auto outputFile = npc(filename)->replace(static_cast< ::java::lang::CharSequence* >(u".xls"_j), static_cast< ::java::lang::CharSequence* >(u"-saved.xls"_j));
                        npc(::java::lang::System::out())->print(::java::lang::StringBuilder().append(u"saving to "_j)->append(outputFile)
                            ->append(u"..."_j)->toString());
                        os = new ::java::io::FileOutputStream(outputFile);
                    }
                    {
                        auto finally1 = finally([&] {
                            npc(os)->close();
                        });
                        {
                            npc(wb)->write(os);
                        }
                    }

                    npc(::java::lang::System::out())->println(u"done"_j);
                }
            }

        }
    }
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::dev::ReSave::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.dev.ReSave", 30);
    return c;
}

java::lang::Class* poi::hssf::dev::ReSave::getClass0()
{
    return class_();
}

