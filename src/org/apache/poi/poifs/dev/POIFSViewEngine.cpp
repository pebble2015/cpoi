// Generated from /POI/java/org/apache/poi/poifs/dev/POIFSViewEngine.java
#include <org/apache/poi/poifs/dev/POIFSViewEngine.hpp>

#include <java/io/IOException.hpp>
#include <java/io/LineNumberReader.hpp>
#include <java/io/StringReader.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <java/lang/System.hpp>
#include <java/util/ArrayList.hpp>
#include <java/util/Collection.hpp>
#include <java/util/Iterator.hpp>
#include <java/util/List.hpp>
#include <org/apache/poi/poifs/dev/POIFSViewable.hpp>
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

poi::poifs::dev::POIFSViewEngine::POIFSViewEngine(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::poifs::dev::POIFSViewEngine::POIFSViewEngine()
    : POIFSViewEngine(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

java::lang::String*& poi::poifs::dev::POIFSViewEngine::_EOL()
{
    clinit();
    return _EOL_;
}
java::lang::String* poi::poifs::dev::POIFSViewEngine::_EOL_;

java::util::List* poi::poifs::dev::POIFSViewEngine::inspectViewable(::java::lang::Object* viewable, bool drilldown, int32_t indentLevel, ::java::lang::String* indentString)
{
    clinit();
    ::java::util::List* objects = new ::java::util::ArrayList();
    if(dynamic_cast< POIFSViewable* >(viewable) != nullptr) {
        auto inspected = java_cast< POIFSViewable* >(viewable);
        npc(objects)->add(static_cast< ::java::lang::Object* >(indent(indentLevel, indentString, npc(inspected)->getShortDescription())));
        if(drilldown) {
            if(npc(inspected)->preferArray_()) {
                auto data = npc(inspected)->getViewableArray_();
                for (auto j = int32_t(0); j < npc(data)->length; j++) {
                    npc(objects)->addAll(static_cast< ::java::util::Collection* >(inspectViewable((*data)[j], drilldown, indentLevel + int32_t(1), indentString)));
                }
            } else {
                auto iter = npc(inspected)->getViewableIterator();
                while (npc(iter)->hasNext()) {
                    npc(objects)->addAll(static_cast< ::java::util::Collection* >(inspectViewable(java_cast< ::java::lang::Object* >(npc(iter)->next()), drilldown, indentLevel + int32_t(1), indentString)));
                }
            }
        }
    } else {
        npc(objects)->add(static_cast< ::java::lang::Object* >(indent(indentLevel, indentString, npc(viewable)->toString())));
    }
    return objects;
}

java::lang::String* poi::poifs::dev::POIFSViewEngine::indent(int32_t indentLevel, ::java::lang::String* indentString, ::java::lang::String* data)
{
    clinit();
    auto finalBuffer = new ::java::lang::StringBuffer();
    auto indentPrefix = new ::java::lang::StringBuffer();
    for (auto j = int32_t(0); j < indentLevel; j++) {
        npc(indentPrefix)->append(indentString);
    }
    auto reader = new ::java::io::LineNumberReader(new ::java::io::StringReader(data));
    try {
        auto line = npc(reader)->readLine();
        while (line != nullptr) {
            npc(npc(npc(finalBuffer)->append(indentPrefix))->append(line))->append(_EOL_);
            line = npc(reader)->readLine();
        }
    } catch (::java::io::IOException* e) {
        npc(npc(npc(finalBuffer)->append(indentPrefix))->append(npc(e)->getMessage()))->append(_EOL_);
    }
    return npc(finalBuffer)->toString();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::poifs::dev::POIFSViewEngine::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.poifs.dev.POIFSViewEngine", 40);
    return c;
}

void poi::poifs::dev::POIFSViewEngine::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        _EOL_ = ::java::lang::System::getProperty(u"line.separator"_j);
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* poi::poifs::dev::POIFSViewEngine::getClass0()
{
    return class_();
}

