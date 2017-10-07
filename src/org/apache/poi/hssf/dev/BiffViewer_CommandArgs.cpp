// Generated from /POI/java/org/apache/poi/hssf/dev/BiffViewer.java
#include <org/apache/poi/hssf/dev/BiffViewer_CommandArgs.hpp>

#include <java/io/File.hpp>
#include <java/io/Serializable.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/lang/System.hpp>
#include <org/apache/poi/hssf/dev/BiffViewer_CommandParseException.hpp>
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

org::apache::poi::hssf::dev::BiffViewer_CommandArgs::BiffViewer_CommandArgs(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::dev::BiffViewer_CommandArgs::BiffViewer_CommandArgs(bool biffhex, bool noint, bool out, bool rawhex, bool noHeader, ::java::io::File* file) 
    : BiffViewer_CommandArgs(*static_cast< ::default_init_tag* >(0))
{
    ctor(biffhex,noint,out,rawhex,noHeader,file);
}

void org::apache::poi::hssf::dev::BiffViewer_CommandArgs::ctor(bool biffhex, bool noint, bool out, bool rawhex, bool noHeader, ::java::io::File* file)
{
    super::ctor();
    _biffhex = biffhex;
    _noint = noint;
    _out = out;
    _rawhex = rawhex;
    _file = file;
    _noHeader = noHeader;
}

org::apache::poi::hssf::dev::BiffViewer_CommandArgs* org::apache::poi::hssf::dev::BiffViewer_CommandArgs::parse(::java::lang::StringArray* args) /* throws(CommandParseException) */
{
    clinit();
    auto nArgs = npc(args)->length;
    auto biffhex = false;
    auto noint = false;
    auto out = false;
    auto rawhex = false;
    auto noheader = false;
    ::java::io::File* file = nullptr;
    for (auto i = int32_t(0); i < nArgs; i++) {
        auto arg = (*args)[i];
        if(npc(arg)->startsWith(u"--"_j)) {
            if(npc(u"--biffhex"_j)->equals(static_cast< ::java::lang::Object* >(arg))) {
                biffhex = true;
            } else if(npc(u"--noint"_j)->equals(static_cast< ::java::lang::Object* >(arg))) {
                noint = true;
            } else if(npc(u"--out"_j)->equals(static_cast< ::java::lang::Object* >(arg))) {
                out = true;
            } else if(npc(u"--escher"_j)->equals(static_cast< ::java::lang::Object* >(arg))) {
                ::java::lang::System::setProperty(u"poi.deserialize.escher"_j, u"true"_j);
            } else if(npc(u"--rawhex"_j)->equals(static_cast< ::java::lang::Object* >(arg))) {
                rawhex = true;
            } else if(npc(u"--noheader"_j)->equals(static_cast< ::java::lang::Object* >(arg))) {
                noheader = true;
            } else {
                throw new BiffViewer_CommandParseException(::java::lang::StringBuilder().append(u"Unexpected option '"_j)->append(arg)
                    ->append(u"'"_j)->toString());
            }
            continue;
        }
        file = new ::java::io::File(arg);
        if(!npc(file)->exists()) {
            throw new BiffViewer_CommandParseException(::java::lang::StringBuilder().append(u"Specified file '"_j)->append(arg)
                ->append(u"' does not exist"_j)->toString());
        }
        if(i + int32_t(1) < nArgs) {
            throw new BiffViewer_CommandParseException(u"File name must be the last arg"_j);
        }
    }
    if(file == nullptr) {
        throw new BiffViewer_CommandParseException(u"Biff viewer needs a filename"_j);
    }
    return new BiffViewer_CommandArgs(biffhex, noint, out, rawhex, noheader, file);
}

bool org::apache::poi::hssf::dev::BiffViewer_CommandArgs::shouldDumpBiffHex()
{
    return _biffhex;
}

bool org::apache::poi::hssf::dev::BiffViewer_CommandArgs::shouldDumpRecordInterpretations()
{
    return !_noint;
}

bool org::apache::poi::hssf::dev::BiffViewer_CommandArgs::shouldOutputToFile()
{
    return _out;
}

bool org::apache::poi::hssf::dev::BiffViewer_CommandArgs::shouldOutputRawHexOnly()
{
    return _rawhex;
}

bool org::apache::poi::hssf::dev::BiffViewer_CommandArgs::suppressHeader()
{
    return _noHeader;
}

java::io::File* org::apache::poi::hssf::dev::BiffViewer_CommandArgs::getFile()
{
    return _file;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::dev::BiffViewer_CommandArgs::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.dev.BiffViewer.CommandArgs", 46);
    return c;
}

java::lang::Class* org::apache::poi::hssf::dev::BiffViewer_CommandArgs::getClass0()
{
    return class_();
}

