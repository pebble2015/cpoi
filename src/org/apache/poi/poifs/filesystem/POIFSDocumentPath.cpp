// Generated from /POI/java/org/apache/poi/poifs/filesystem/POIFSDocumentPath.java
#include <org/apache/poi/poifs/filesystem/POIFSDocumentPath.hpp>

#include <java/io/File.hpp>
#include <java/io/Serializable.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/lang/System.hpp>
#include <org/apache/poi/util/POILogFactory.hpp>
#include <org/apache/poi/util/POILogger.hpp>
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

org::apache::poi::poifs::filesystem::POIFSDocumentPath::POIFSDocumentPath(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::poifs::filesystem::POIFSDocumentPath::POIFSDocumentPath(::java::lang::StringArray* components)  /* throws(IllegalArgumentException) */
    : POIFSDocumentPath(*static_cast< ::default_init_tag* >(0))
{
    ctor(components);
}

org::apache::poi::poifs::filesystem::POIFSDocumentPath::POIFSDocumentPath() 
    : POIFSDocumentPath(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::poifs::filesystem::POIFSDocumentPath::POIFSDocumentPath(POIFSDocumentPath* path, ::java::lang::StringArray* components)  /* throws(IllegalArgumentException) */
    : POIFSDocumentPath(*static_cast< ::default_init_tag* >(0))
{
    ctor(path,components);
}

void org::apache::poi::poifs::filesystem::POIFSDocumentPath::init()
{
    hashcode = int32_t(0);
}

org::apache::poi::util::POILogger*& org::apache::poi::poifs::filesystem::POIFSDocumentPath::log()
{
    clinit();
    return log_;
}
org::apache::poi::util::POILogger* org::apache::poi::poifs::filesystem::POIFSDocumentPath::log_;

void org::apache::poi::poifs::filesystem::POIFSDocumentPath::ctor(::java::lang::StringArray* components) /* throws(IllegalArgumentException) */
{
    super::ctor();
    init();
    if(components == nullptr) {
        this->components = new ::java::lang::StringArray(int32_t(0));
    } else {
        this->components = new ::java::lang::StringArray(npc(components)->length);
        for (auto j = int32_t(0); j < npc(components)->length; j++) {
            if(((*components)[j] == nullptr) || (npc((*components)[j])->length() == 0)) {
                throw new ::java::lang::IllegalArgumentException(u"components cannot contain null or empty strings"_j);
            }
            this->components->set(j, (*components)[j]);
        }
    }
}

void org::apache::poi::poifs::filesystem::POIFSDocumentPath::ctor()
{
    super::ctor();
    init();
    this->components = new ::java::lang::StringArray(int32_t(0));
}

void org::apache::poi::poifs::filesystem::POIFSDocumentPath::ctor(POIFSDocumentPath* path, ::java::lang::StringArray* components) /* throws(IllegalArgumentException) */
{
    super::ctor();
    init();
    if(components == nullptr) {
        this->components = new ::java::lang::StringArray(npc(npc(path)->components)->length);
    } else {
        this->components = new ::java::lang::StringArray(npc(npc(path)->components)->length + npc(components)->length);
    }
    for (auto j = int32_t(0); j < npc(npc(path)->components)->length; j++) {
        this->components->set(j, (*npc(path)->components)[j]);
    }
    if(components != nullptr) {
        for (auto j = int32_t(0); j < npc(components)->length; j++) {
            if((*components)[j] == nullptr) {
                throw new ::java::lang::IllegalArgumentException(u"components cannot contain null"_j);
            }
            if(npc((*components)[j])->length() == 0) {
                npc(log_)->log(::org::apache::poi::util::POILogger::WARN, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(::java::lang::StringBuilder().append(u"Directory under "_j)->append(static_cast< ::java::lang::Object* >(path))
                    ->append(u" has an empty name, "_j)
                    ->append(u"not all OLE2 readers will handle this file correctly!"_j)->toString())}));
            }
            this->components->set(j + npc(npc(path)->components)->length, (*components)[j]);
        }
    }
}

bool org::apache::poi::poifs::filesystem::POIFSDocumentPath::equals(::java::lang::Object* o)
{
    auto rval = false;
    if((o != nullptr) && (static_cast< ::java::lang::Object* >(npc(o)->getClass()) == static_cast< ::java::lang::Object* >(this->getClass()))) {
        if(static_cast< ::java::lang::Object* >(this) == o) {
            rval = true;
        } else {
            auto path = java_cast< POIFSDocumentPath* >(o);
            if(npc(npc(path)->components)->length == npc(this->components)->length) {
                rval = true;
                for (auto j = int32_t(0); j < npc(this->components)->length; j++) {
                    if(!npc((*npc(path)->components)[j])->equals(static_cast< ::java::lang::Object* >((*this->components)[j]))) {
                        rval = false;
                        break;
                    }
                }
            }
        }
    }
    return rval;
}

int32_t org::apache::poi::poifs::filesystem::POIFSDocumentPath::hashCode()
{
    if(hashcode == 0) {
        hashcode = computeHashCode();
    }
    return hashcode;
}

int32_t org::apache::poi::poifs::filesystem::POIFSDocumentPath::computeHashCode()
{
    auto code = int32_t(0);
    for (auto j = int32_t(0); j < npc(components)->length; j++) {
        code += npc((*components)[j])->hashCode();
    }
    return code;
}

int32_t org::apache::poi::poifs::filesystem::POIFSDocumentPath::length()
{
    return npc(components)->length;
}

java::lang::String* org::apache::poi::poifs::filesystem::POIFSDocumentPath::getComponent(int32_t n) /* throws(ArrayIndexOutOfBoundsException) */
{
    return (*components)[n];
}

org::apache::poi::poifs::filesystem::POIFSDocumentPath* org::apache::poi::poifs::filesystem::POIFSDocumentPath::getParent()
{
    auto const length = npc(components)->length - int32_t(1);
    if(length < 0) {
        return nullptr;
    }
    auto parentComponents = new ::java::lang::StringArray(length);
    ::java::lang::System::arraycopy(components, 0, parentComponents, 0, length);
    auto parent = new POIFSDocumentPath(parentComponents);
    return parent;
}

java::lang::String* org::apache::poi::poifs::filesystem::POIFSDocumentPath::getName()
{
    if(npc(components)->length == 0) {
        return u""_j;
    }
    return (*components)[npc(components)->length - int32_t(1)];
}

java::lang::String* org::apache::poi::poifs::filesystem::POIFSDocumentPath::toString()
{
    auto const b = new ::java::lang::StringBuffer();
    auto const l = length();
    npc(b)->append(::java::io::File::separatorChar());
    for (auto i = int32_t(0); i < l; i++) {
        npc(b)->append(getComponent(i));
        if(i < l - int32_t(1)) {
            npc(b)->append(::java::io::File::separatorChar());
        }
    }
    return npc(b)->toString();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::poifs::filesystem::POIFSDocumentPath::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.poifs.filesystem.POIFSDocumentPath", 49);
    return c;
}

void org::apache::poi::poifs::filesystem::POIFSDocumentPath::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        log_ = ::org::apache::poi::util::POILogFactory::getLogger(static_cast< ::java::lang::Class* >(POIFSDocumentPath::class_()));
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* org::apache::poi::poifs::filesystem::POIFSDocumentPath::getClass0()
{
    return class_();
}

