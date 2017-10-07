// Generated from /POI/java/org/apache/poi/poifs/property/PropertyFactory.java
#include <org/apache/poi/poifs/property/PropertyFactory.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/util/ArrayList.hpp>
#include <java/util/List.hpp>
#include <org/apache/poi/poifs/common/POIFSConstants.hpp>
#include <org/apache/poi/poifs/property/DirectoryProperty.hpp>
#include <org/apache/poi/poifs/property/DocumentProperty.hpp>
#include <org/apache/poi/poifs/property/PropertyConstants.hpp>
#include <org/apache/poi/poifs/property/RootProperty.hpp>
#include <org/apache/poi/poifs/storage/ListManagedBlock.hpp>
#include <Array.hpp>
#include <ObjectArray.hpp>
#include <SubArray.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace org
{
    namespace apache
    {
        namespace poi
        {
            namespace poifs
            {
                namespace storage
                {
typedef ::SubArray< ::org::apache::poi::poifs::storage::ListManagedBlock, ::java::lang::ObjectArray > ListManagedBlockArray;
                } // storage
            } // poifs
        } // poi
    } // apache
} // org

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::poifs::property::PropertyFactory::PropertyFactory(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::poifs::property::PropertyFactory::PropertyFactory() 
    : PropertyFactory(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void org::apache::poi::poifs::property::PropertyFactory::ctor()
{
    super::ctor();
}

java::util::List* org::apache::poi::poifs::property::PropertyFactory::convertToProperties(::org::apache::poi::poifs::storage::ListManagedBlockArray* blocks) /* throws(IOException) */
{
    clinit();
    ::java::util::List* properties = new ::java::util::ArrayList();
    for(auto block : *npc(blocks)) {
        auto data = npc(block)->getData();
        convertToProperties(data, properties);
    }
    return properties;
}

void org::apache::poi::poifs::property::PropertyFactory::convertToProperties(::int8_tArray* data, ::java::util::List* properties) /* throws(IOException) */
{
    clinit();
    auto property_count = npc(data)->length / ::org::apache::poi::poifs::common::POIFSConstants::PROPERTY_SIZE;
    auto offset = int32_t(0);
    for (auto k = int32_t(0); k < property_count; k++) {
        switch ((*data)[offset + PropertyConstants::PROPERTY_TYPE_OFFSET]) {
        case PropertyConstants::DIRECTORY_TYPE:
            npc(properties)->add(static_cast< ::java::lang::Object* >(new DirectoryProperty(npc(properties)->size(), data, offset)));
            break;
        case PropertyConstants::DOCUMENT_TYPE:
            npc(properties)->add(static_cast< ::java::lang::Object* >(new DocumentProperty(npc(properties)->size(), data, offset)));
            break;
        case PropertyConstants::ROOT_TYPE:
            npc(properties)->add(static_cast< ::java::lang::Object* >(new RootProperty(npc(properties)->size(), data, offset)));
            break;
        default:
            npc(properties)->add(static_cast< ::java::lang::Object* >(nullptr));
            break;
        }

        offset += ::org::apache::poi::poifs::common::POIFSConstants::PROPERTY_SIZE;
    }
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::poifs::property::PropertyFactory::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.poifs.property.PropertyFactory", 45);
    return c;
}

java::lang::Class* org::apache::poi::poifs::property::PropertyFactory::getClass0()
{
    return class_();
}

