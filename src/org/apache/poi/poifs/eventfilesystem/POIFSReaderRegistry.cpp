// Generated from /POI/java/org/apache/poi/poifs/eventfilesystem/POIFSReaderRegistry.java
#include <org/apache/poi/poifs/eventfilesystem/POIFSReaderRegistry.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/util/Collection.hpp>
#include <java/util/HashMap.hpp>
#include <java/util/HashSet.hpp>
#include <java/util/Iterator.hpp>
#include <java/util/Map.hpp>
#include <java/util/Set.hpp>
#include <org/apache/poi/poifs/eventfilesystem/POIFSReaderListener.hpp>
#include <org/apache/poi/poifs/filesystem/DocumentDescriptor.hpp>

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

org::apache::poi::poifs::eventfilesystem::POIFSReaderRegistry::POIFSReaderRegistry(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::poifs::eventfilesystem::POIFSReaderRegistry::POIFSReaderRegistry() 
    : POIFSReaderRegistry(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void org::apache::poi::poifs::eventfilesystem::POIFSReaderRegistry::ctor()
{
    super::ctor();
    omnivorousListeners = new ::java::util::HashSet();
    selectiveListeners = new ::java::util::HashMap();
    chosenDocumentDescriptors = new ::java::util::HashMap();
}

void org::apache::poi::poifs::eventfilesystem::POIFSReaderRegistry::registerListener(POIFSReaderListener* listener, ::org::apache::poi::poifs::filesystem::POIFSDocumentPath* path, ::java::lang::String* documentName)
{
    if(!npc(omnivorousListeners)->contains(static_cast< ::java::lang::Object* >(listener))) {
        auto descriptors = java_cast< ::java::util::Set* >(npc(selectiveListeners)->get(listener));
        if(descriptors == nullptr) {
            descriptors = new ::java::util::HashSet();
            npc(selectiveListeners)->put(listener, descriptors);
        }
        auto descriptor = new ::org::apache::poi::poifs::filesystem::DocumentDescriptor(path, documentName);
        if(npc(descriptors)->add(static_cast< ::java::lang::Object* >(descriptor))) {
            auto listeners = java_cast< ::java::util::Set* >(npc(chosenDocumentDescriptors)->get(descriptor));
            if(listeners == nullptr) {
                listeners = new ::java::util::HashSet();
                npc(chosenDocumentDescriptors)->put(descriptor, listeners);
            }
            npc(listeners)->add(static_cast< ::java::lang::Object* >(listener));
        }
    }
}

void org::apache::poi::poifs::eventfilesystem::POIFSReaderRegistry::registerListener(POIFSReaderListener* listener)
{
    if(!npc(omnivorousListeners)->contains(static_cast< ::java::lang::Object* >(listener))) {
        removeSelectiveListener(listener);
        npc(omnivorousListeners)->add(static_cast< ::java::lang::Object* >(listener));
    }
}

java::util::Iterator* org::apache::poi::poifs::eventfilesystem::POIFSReaderRegistry::getListeners(::org::apache::poi::poifs::filesystem::POIFSDocumentPath* path, ::java::lang::String* name)
{
    ::java::util::Set* rval = new ::java::util::HashSet(static_cast< ::java::util::Collection* >(omnivorousListeners));
    auto selectiveListenersInner = java_cast< ::java::util::Set* >(npc(chosenDocumentDescriptors)->get(new ::org::apache::poi::poifs::filesystem::DocumentDescriptor(path, name)));
    if(selectiveListenersInner != nullptr) {
        npc(rval)->addAll(static_cast< ::java::util::Collection* >(selectiveListenersInner));
    }
    return npc(rval)->iterator();
}

void org::apache::poi::poifs::eventfilesystem::POIFSReaderRegistry::removeSelectiveListener(POIFSReaderListener* listener)
{
    auto selectedDescriptors = java_cast< ::java::util::Set* >(npc(selectiveListeners)->remove(listener));
    if(selectedDescriptors != nullptr) {
        auto iter = npc(selectedDescriptors)->iterator();
        while (npc(iter)->hasNext()) {
            dropDocument(listener, java_cast< ::org::apache::poi::poifs::filesystem::DocumentDescriptor* >(npc(iter)->next()));
        }
    }
}

void org::apache::poi::poifs::eventfilesystem::POIFSReaderRegistry::dropDocument(POIFSReaderListener* listener, ::org::apache::poi::poifs::filesystem::DocumentDescriptor* descriptor)
{
    auto listeners = java_cast< ::java::util::Set* >(npc(chosenDocumentDescriptors)->get(descriptor));
    npc(listeners)->remove(static_cast< ::java::lang::Object* >(listener));
    if(npc(listeners)->size() == 0) {
        npc(chosenDocumentDescriptors)->remove(descriptor);
    }
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::poifs::eventfilesystem::POIFSReaderRegistry::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.poifs.eventfilesystem.POIFSReaderRegistry", 56);
    return c;
}

java::lang::Class* org::apache::poi::poifs::eventfilesystem::POIFSReaderRegistry::getClass0()
{
    return class_();
}

