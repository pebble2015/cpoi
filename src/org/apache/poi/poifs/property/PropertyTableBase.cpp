// Generated from /POI/java/org/apache/poi/poifs/property/PropertyTableBase.java
#include <org/apache/poi/poifs/property/PropertyTableBase.hpp>

#include <java/lang/Class.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/util/ArrayList.hpp>
#include <java/util/List.hpp>
#include <java/util/Stack.hpp>
#include <org/apache/poi/poifs/property/DirectoryProperty.hpp>
#include <org/apache/poi/poifs/property/Property.hpp>
#include <org/apache/poi/poifs/property/RootProperty.hpp>
#include <org/apache/poi/poifs/storage/HeaderBlock.hpp>
#include <org/apache/poi/util/POILogFactory.hpp>
#include <org/apache/poi/util/POILogger.hpp>
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

org::apache::poi::poifs::property::PropertyTableBase::PropertyTableBase(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::poifs::property::PropertyTableBase::PropertyTableBase(::org::apache::poi::poifs::storage::HeaderBlock* header_block) 
    : PropertyTableBase(*static_cast< ::default_init_tag* >(0))
{
    ctor(header_block);
}

org::apache::poi::poifs::property::PropertyTableBase::PropertyTableBase(::org::apache::poi::poifs::storage::HeaderBlock* header_block, ::java::util::List* properties)  /* throws(IOException) */
    : PropertyTableBase(*static_cast< ::default_init_tag* >(0))
{
    ctor(header_block,properties);
}

org::apache::poi::util::POILogger*& org::apache::poi::poifs::property::PropertyTableBase::_logger()
{
    clinit();
    return _logger_;
}
org::apache::poi::util::POILogger* org::apache::poi::poifs::property::PropertyTableBase::_logger_;

void org::apache::poi::poifs::property::PropertyTableBase::ctor(::org::apache::poi::poifs::storage::HeaderBlock* header_block)
{
    super::ctor();
    _header_block = header_block;
    _properties = new ::java::util::ArrayList();
    addProperty(new RootProperty());
}

void org::apache::poi::poifs::property::PropertyTableBase::ctor(::org::apache::poi::poifs::storage::HeaderBlock* header_block, ::java::util::List* properties) /* throws(IOException) */
{
    super::ctor();
    _header_block = header_block;
    _properties = properties;
    populatePropertyTree(java_cast< DirectoryProperty* >(java_cast< Property* >(npc(_properties)->get(0))));
}

void org::apache::poi::poifs::property::PropertyTableBase::addProperty(Property* property)
{
    npc(_properties)->add(static_cast< ::java::lang::Object* >(property));
}

void org::apache::poi::poifs::property::PropertyTableBase::removeProperty(Property* property)
{
    npc(_properties)->remove(static_cast< ::java::lang::Object* >(property));
}

org::apache::poi::poifs::property::RootProperty* org::apache::poi::poifs::property::PropertyTableBase::getRoot()
{
    return java_cast< RootProperty* >(java_cast< Property* >(npc(_properties)->get(0)));
}

void org::apache::poi::poifs::property::PropertyTableBase::populatePropertyTree(DirectoryProperty* root) /* throws(IOException) */
{
    auto index = npc(root)->getChildIndex();
    if(!Property::isValidIndex(index)) {
        return;
    }
    auto children = new ::java::util::Stack();
    npc(children)->push(java_cast< Property* >(npc(_properties)->get(index)));
    while (!npc(children)->empty()) {
        auto property = java_cast< Property* >(npc(children)->pop());
        if(property == nullptr) {
            continue;
        }
        npc(root)->addChild(property);
        if(npc(property)->isDirectory()) {
            populatePropertyTree(java_cast< DirectoryProperty* >(property));
        }
        index = npc(property)->getPreviousChildIndex();
        if(isValidIndex(index)) {
            npc(children)->push(java_cast< Property* >(npc(_properties)->get(index)));
        }
        index = npc(property)->getNextChildIndex();
        if(isValidIndex(index)) {
            npc(children)->push(java_cast< Property* >(npc(_properties)->get(index)));
        }
    }
}

bool org::apache::poi::poifs::property::PropertyTableBase::isValidIndex(int32_t index)
{
    if(!Property::isValidIndex(index))
        return false;

    if(index < 0 || index >= npc(_properties)->size()) {
        npc(_logger_)->log(::org::apache::poi::util::POILogger::WARN, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(::java::lang::StringBuilder().append(u"Property index "_j)->append(index)
            ->append(u"outside the valid range 0.."_j)
            ->append(npc(_properties)->size())->toString())}));
        return false;
    }
    return true;
}

int32_t org::apache::poi::poifs::property::PropertyTableBase::getStartBlock()
{
    return npc(_header_block)->getPropertyStart();
}

void org::apache::poi::poifs::property::PropertyTableBase::setStartBlock(int32_t index)
{
    npc(_header_block)->setPropertyStart(index);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::poifs::property::PropertyTableBase::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.poifs.property.PropertyTableBase", 47);
    return c;
}

void org::apache::poi::poifs::property::PropertyTableBase::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        _logger_ = ::org::apache::poi::util::POILogFactory::getLogger(static_cast< ::java::lang::Class* >(PropertyTableBase::class_()));
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* org::apache::poi::poifs::property::PropertyTableBase::getClass0()
{
    return class_();
}

