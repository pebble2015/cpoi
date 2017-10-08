// Generated from /POI/java/org/apache/poi/poifs/property/DirectoryProperty.java
#include <org/apache/poi/poifs/property/DirectoryProperty.hpp>

#include <java/io/IOException.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/util/ArrayList.hpp>
#include <java/util/Arrays.hpp>
#include <java/util/HashSet.hpp>
#include <java/util/Iterator.hpp>
#include <java/util/List.hpp>
#include <java/util/Set.hpp>
#include <org/apache/poi/poifs/dev/POIFSViewable.hpp>
#include <org/apache/poi/poifs/property/Child.hpp>
#include <org/apache/poi/poifs/property/DirectoryProperty_PropertyComparator.hpp>
#include <org/apache/poi/poifs/property/Property.hpp>
#include <org/apache/poi/poifs/property/PropertyConstants.hpp>
#include <ObjectArray.hpp>
#include <SubArray.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace poi
{
    namespace poifs
    {
        namespace dev
        {
typedef ::SubArray< ::poi::poifs::dev::POIFSViewable, ::java::lang::ObjectArray > POIFSViewableArray;
        } // dev

        namespace property
        {
typedef ::SubArray< ::poi::poifs::property::Child, ::java::lang::ObjectArray > ChildArray;
typedef ::SubArray< ::poi::poifs::property::Property, ::java::lang::ObjectArray, ChildArray, ::poi::poifs::dev::POIFSViewableArray > PropertyArray;
        } // property
    } // poifs
} // poi

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

poi::poifs::property::DirectoryProperty::DirectoryProperty(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::poifs::property::DirectoryProperty::DirectoryProperty(::java::lang::String* name) 
    : DirectoryProperty(*static_cast< ::default_init_tag* >(0))
{
    ctor(name);
}

poi::poifs::property::DirectoryProperty::DirectoryProperty(int32_t index, ::int8_tArray* array, int32_t offset) 
    : DirectoryProperty(*static_cast< ::default_init_tag* >(0))
{
    ctor(index,array,offset);
}

void poi::poifs::property::DirectoryProperty::ctor(::java::lang::String* name)
{
    super::ctor();
    _children = new ::java::util::ArrayList();
    _children_names = new ::java::util::HashSet();
    setName(name);
    setSize(0);
    setPropertyType(PropertyConstants::DIRECTORY_TYPE);
    setStartBlock(0);
    setNodeColor(_NODE_BLACK);
}

void poi::poifs::property::DirectoryProperty::ctor(int32_t index, ::int8_tArray* array, int32_t offset)
{
    super::ctor(index, array, offset);
    _children = new ::java::util::ArrayList();
    _children_names = new ::java::util::HashSet();
}

bool poi::poifs::property::DirectoryProperty::changeName(Property* property, ::java::lang::String* newName)
{
    bool result;
    auto oldName = npc(property)->getName();
    npc(property)->setName(newName);
    auto cleanNewName = npc(property)->getName();
    if(npc(_children_names)->contains(static_cast< ::java::lang::Object* >(cleanNewName))) {
        npc(property)->setName(oldName);
        result = false;
    } else {
        npc(_children_names)->add(static_cast< ::java::lang::Object* >(cleanNewName));
        npc(_children_names)->remove(static_cast< ::java::lang::Object* >(oldName));
        result = true;
    }
    return result;
}

bool poi::poifs::property::DirectoryProperty::deleteChild(Property* property)
{
    auto result = npc(_children)->remove(static_cast< ::java::lang::Object* >(property));
    if(result) {
        npc(_children_names)->remove(static_cast< ::java::lang::Object* >(npc(property)->getName()));
    }
    return result;
}

bool poi::poifs::property::DirectoryProperty::isDirectory()
{
    return true;
}

void poi::poifs::property::DirectoryProperty::preWrite()
{
    if(npc(_children)->size() > 0) {
        auto children = java_cast< PropertyArray* >(npc(_children)->toArray_(static_cast< ::java::lang::ObjectArray* >(new PropertyArray(int32_t(0)))));
        ::java::util::Arrays::sort(children, new DirectoryProperty_PropertyComparator());
        auto midpoint = npc(children)->length / int32_t(2);
        setChildProperty(npc((*children)[midpoint])->getIndex());
        npc((*children)[int32_t(0)])->setPreviousChild(static_cast< Child* >(nullptr));
        npc((*children)[int32_t(0)])->setNextChild(static_cast< Child* >(nullptr));
        for (auto j = int32_t(1); j < midpoint; j++) {
            npc((*children)[j])->setPreviousChild(static_cast< Child* >((*children)[j - int32_t(1)]));
            npc((*children)[j])->setNextChild(static_cast< Child* >(nullptr));
        }
        if(midpoint != 0) {
            npc((*children)[midpoint])->setPreviousChild(static_cast< Child* >((*children)[midpoint - int32_t(1)]));
        }
        if(midpoint != (npc(children)->length - int32_t(1))) {
            npc((*children)[midpoint])->setNextChild(static_cast< Child* >((*children)[midpoint + int32_t(1)]));
            for (auto j = midpoint + int32_t(1); j < npc(children)->length - int32_t(1); j++) {
                npc((*children)[j])->setPreviousChild(static_cast< Child* >(nullptr));
                npc((*children)[j])->setNextChild(static_cast< Child* >((*children)[j + int32_t(1)]));
            }
            npc((*children)[npc(children)->length - int32_t(1)])->setPreviousChild(static_cast< Child* >(nullptr));
            npc((*children)[npc(children)->length - int32_t(1)])->setNextChild(static_cast< Child* >(nullptr));
        } else {
            npc((*children)[midpoint])->setNextChild(static_cast< Child* >(nullptr));
        }
    }
}

java::util::Iterator* poi::poifs::property::DirectoryProperty::getChildren()
{
    return npc(_children)->iterator();
}

java::util::Iterator* poi::poifs::property::DirectoryProperty::iterator()
{
    return getChildren();
}

void poi::poifs::property::DirectoryProperty::addChild(Property* property) /* throws(IOException) */
{
    auto name = npc(property)->getName();
    if(npc(_children_names)->contains(static_cast< ::java::lang::Object* >(name))) {
        throw new ::java::io::IOException(::java::lang::StringBuilder().append(u"Duplicate name \""_j)->append(name)
            ->append(u"\""_j)->toString());
    }
    npc(_children_names)->add(static_cast< ::java::lang::Object* >(name));
    npc(_children)->add(static_cast< ::java::lang::Object* >(property));
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::poifs::property::DirectoryProperty::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.poifs.property.DirectoryProperty", 47);
    return c;
}

poi::poifs::property::Child* poi::poifs::property::DirectoryProperty::getNextChild()
{
    return Property::getNextChild();
}

poi::poifs::property::Child* poi::poifs::property::DirectoryProperty::getPreviousChild()
{
    return Property::getPreviousChild();
}

void poi::poifs::property::DirectoryProperty::setNextChild(Child* child)
{
    Property::setNextChild(child);
}

void poi::poifs::property::DirectoryProperty::setPreviousChild(Child* child)
{
    Property::setPreviousChild(child);
}

java::lang::Class* poi::poifs::property::DirectoryProperty::getClass0()
{
    return class_();
}

