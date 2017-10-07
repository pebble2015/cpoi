// Generated from /POI/java/org/apache/poi/poifs/filesystem/DocumentDescriptor.java
#include <org/apache/poi/poifs/filesystem/DocumentDescriptor.hpp>

#include <java/lang/Class.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <org/apache/poi/poifs/filesystem/POIFSDocumentPath.hpp>

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

org::apache::poi::poifs::filesystem::DocumentDescriptor::DocumentDescriptor(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::poifs::filesystem::DocumentDescriptor::DocumentDescriptor(POIFSDocumentPath* path, ::java::lang::String* name) 
    : DocumentDescriptor(*static_cast< ::default_init_tag* >(0))
{
    ctor(path,name);
}

void org::apache::poi::poifs::filesystem::DocumentDescriptor::init()
{
    hashcode = int32_t(0);
}

void org::apache::poi::poifs::filesystem::DocumentDescriptor::ctor(POIFSDocumentPath* path, ::java::lang::String* name)
{
    super::ctor();
    init();
    if(path == nullptr) {
        throw new ::java::lang::NullPointerException(u"path must not be null"_j);
    }
    if(name == nullptr) {
        throw new ::java::lang::NullPointerException(u"name must not be null"_j);
    }
    if(npc(name)->length() == 0) {
        throw new ::java::lang::IllegalArgumentException(u"name cannot be empty"_j);
    }
    this->path = path;
    this->name = name;
}

bool org::apache::poi::poifs::filesystem::DocumentDescriptor::equals(::java::lang::Object* o)
{
    auto rval = false;
    if((o != nullptr) && (static_cast< ::java::lang::Object* >(npc(o)->getClass()) == static_cast< ::java::lang::Object* >(this->getClass()))) {
        if(static_cast< ::java::lang::Object* >(this) == o) {
            rval = true;
        } else {
            auto descriptor = java_cast< DocumentDescriptor* >(o);
            rval = npc(this->path)->equals(static_cast< ::java::lang::Object* >(npc(descriptor)->path)) && npc(this->name)->equals(static_cast< ::java::lang::Object* >(npc(descriptor)->name));
        }
    }
    return rval;
}

int32_t org::apache::poi::poifs::filesystem::DocumentDescriptor::hashCode()
{
    if(hashcode == 0) {
        hashcode = npc(path)->hashCode() ^ npc(name)->hashCode();
    }
    return hashcode;
}

java::lang::String* org::apache::poi::poifs::filesystem::DocumentDescriptor::toString()
{
    auto buffer = new ::java::lang::StringBuffer(int32_t(40) * (npc(path)->length() + int32_t(1)));
    for (auto j = int32_t(0); j < npc(path)->length(); j++) {
        npc(npc(buffer)->append(npc(path)->getComponent(j)))->append(u"/"_j);
    }
    npc(buffer)->append(name);
    return npc(buffer)->toString();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::poifs::filesystem::DocumentDescriptor::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.poifs.filesystem.DocumentDescriptor", 50);
    return c;
}

java::lang::Class* org::apache::poi::poifs::filesystem::DocumentDescriptor::getClass0()
{
    return class_();
}

