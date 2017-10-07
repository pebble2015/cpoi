// Generated from /POI/java/org/apache/poi/poifs/macros/VBAMacroExtractor.java
#include <org/apache/poi/poifs/macros/VBAMacroExtractor.hpp>

#include <java/io/File.hpp>
#include <java/io/FileNotFoundException.hpp>
#include <java/io/FileOutputStream.hpp>
#include <java/io/IOException.hpp>
#include <java/io/OutputStream.hpp>
#include <java/io/OutputStreamWriter.hpp>
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
#include <java/util/Iterator.hpp>
#include <java/util/Map_Entry.hpp>
#include <java/util/Map.hpp>
#include <java/util/Set.hpp>
#include <org/apache/poi/poifs/macros/VBAMacroReader.hpp>
#include <org/apache/poi/util/StringUtil.hpp>
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

org::apache::poi::poifs::macros::VBAMacroExtractor::VBAMacroExtractor(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::poifs::macros::VBAMacroExtractor::VBAMacroExtractor()
    : VBAMacroExtractor(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void org::apache::poi::poifs::macros::VBAMacroExtractor::main(::java::lang::StringArray* args) /* throws(IOException) */
{
    clinit();
    if(npc(args)->length == 0) {
        npc(::java::lang::System::err())->println(u"Use:"_j);
        npc(::java::lang::System::err())->println(u"   VBAMacroExtractor <office.doc> [output]"_j);
        npc(::java::lang::System::err())->println(u""_j);
        npc(::java::lang::System::err())->println(u"If an output directory is given, macros are written there"_j);
        npc(::java::lang::System::err())->println(u"Otherwise they are output to the screen"_j);
        ::java::lang::System::exit(1);
    }
    auto input = new ::java::io::File((*args)[int32_t(0)]);
    ::java::io::File* output = nullptr;
    if(npc(args)->length > 1) {
        output = new ::java::io::File((*args)[int32_t(1)]);
    }
    auto extractor = new VBAMacroExtractor();
    npc(extractor)->extract(input, output);
}

void org::apache::poi::poifs::macros::VBAMacroExtractor::extract(::java::io::File* input, ::java::io::File* outputDir, ::java::lang::String* extension) /* throws(IOException) */
{
    if(!npc(input)->exists())
        throw new ::java::io::FileNotFoundException(npc(input)->toString());

    npc(::java::lang::System::err())->print(::java::lang::StringBuilder().append(u"Extracting VBA Macros from "_j)->append(static_cast< ::java::lang::Object* >(input))
        ->append(u" to "_j)->toString());
    if(outputDir != nullptr) {
        if(!npc(outputDir)->exists() && !npc(outputDir)->mkdirs()) {
            throw new ::java::io::IOException(::java::lang::StringBuilder().append(u"Output directory "_j)->append(static_cast< ::java::lang::Object* >(outputDir))
                ->append(u" could not be created"_j)->toString());
        }
        npc(::java::lang::System::err())->println(static_cast< ::java::lang::Object* >(outputDir));
    } else {
        npc(::java::lang::System::err())->println(u"STDOUT"_j);
    }
    auto reader = new VBAMacroReader(input);
    auto macros = npc(reader)->readMacros();
    npc(reader)->close();
    auto const divider = u"---------------------------------------"_j;
    for (auto _i = npc(npc(macros)->entrySet())->iterator(); _i->hasNext(); ) {
        ::java::util::Map_Entry* entry = java_cast< ::java::util::Map_Entry* >(_i->next());
        {
            auto moduleName = java_cast< ::java::lang::String* >(npc(entry)->getKey());
            auto moduleCode = java_cast< ::java::lang::String* >(npc(entry)->getValue());
            if(outputDir == nullptr) {
                npc(::java::lang::System::out())->println(divider);
                npc(::java::lang::System::out())->println(moduleName);
                npc(::java::lang::System::out())->println(u""_j);
                npc(::java::lang::System::out())->println(moduleCode);
            } else {
                auto out = new ::java::io::File(outputDir, ::java::lang::StringBuilder().append(moduleName)->append(extension)->toString());
                auto fout = new ::java::io::FileOutputStream(out);
                auto fwriter = new ::java::io::OutputStreamWriter(static_cast< ::java::io::OutputStream* >(fout), ::org::apache::poi::util::StringUtil::UTF8());
                npc(fwriter)->write(moduleCode);
                npc(fwriter)->close();
                npc(fout)->close();
                npc(::java::lang::System::out())->println(::java::lang::StringBuilder().append(u"Extracted "_j)->append(static_cast< ::java::lang::Object* >(out))->toString());
            }
        }
    }
    if(outputDir == nullptr) {
        npc(::java::lang::System::out())->println(divider);
    }
}

void org::apache::poi::poifs::macros::VBAMacroExtractor::extract(::java::io::File* input, ::java::io::File* outputDir) /* throws(IOException) */
{
    extract(input, outputDir, u".vba"_j);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::poifs::macros::VBAMacroExtractor::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.poifs.macros.VBAMacroExtractor", 45);
    return c;
}

java::lang::Class* org::apache::poi::poifs::macros::VBAMacroExtractor::getClass0()
{
    return class_();
}

