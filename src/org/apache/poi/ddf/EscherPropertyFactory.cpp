// Generated from /POI/java/org/apache/poi/ddf/EscherPropertyFactory.java
#include <org/apache/poi/ddf/EscherPropertyFactory.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/lang/IllegalStateException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/lang/System.hpp>
#include <java/util/ArrayList.hpp>
#include <java/util/Iterator.hpp>
#include <java/util/List.hpp>
#include <org/apache/poi/ddf/EscherArrayProperty.hpp>
#include <org/apache/poi/ddf/EscherBoolProperty.hpp>
#include <org/apache/poi/ddf/EscherComplexProperty.hpp>
#include <org/apache/poi/ddf/EscherProperties.hpp>
#include <org/apache/poi/ddf/EscherProperty.hpp>
#include <org/apache/poi/ddf/EscherPropertyMetaData.hpp>
#include <org/apache/poi/ddf/EscherRGBProperty.hpp>
#include <org/apache/poi/ddf/EscherShapePathProperty.hpp>
#include <org/apache/poi/ddf/EscherSimpleProperty.hpp>
#include <org/apache/poi/util/LittleEndian.hpp>
#include <Array.hpp>

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

org::apache::poi::ddf::EscherPropertyFactory::EscherPropertyFactory(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ddf::EscherPropertyFactory::EscherPropertyFactory()
    : EscherPropertyFactory(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

java::util::List* org::apache::poi::ddf::EscherPropertyFactory::createProperties(::int8_tArray* data, int32_t offset, int16_t numProperties)
{
    ::java::util::List* results = new ::java::util::ArrayList();
    auto pos = offset;
    for (auto i = int32_t(0); i < numProperties; i++) {
        int16_t propId;
        int32_t propData;
        propId = ::org::apache::poi::util::LittleEndian::getShort(data, pos);
        propData = ::org::apache::poi::util::LittleEndian::getInt(data, pos + int32_t(2));
        auto propNumber = static_cast< int16_t >((propId & static_cast< int16_t >(int32_t(16383))));
        auto isComplex = (propId & static_cast< int16_t >(int32_t(32768))) != 0;
        auto propertyType = EscherProperties::getPropertyType(propNumber);
        EscherProperty* ep;
        switch (propertyType) {
        case EscherPropertyMetaData::TYPE_BOOLEAN:
            ep = new EscherBoolProperty(propId, propData);
            break;
        case EscherPropertyMetaData::TYPE_RGB:
            ep = new EscherRGBProperty(propId, propData);
            break;
        case EscherPropertyMetaData::TYPE_SHAPEPATH:
            ep = new EscherShapePathProperty(propId, propData);
            break;
        default:
            if(!isComplex) {
                ep = new EscherSimpleProperty(propId, propData);
            } else if(propertyType == EscherPropertyMetaData::TYPE_ARRAY) {
                ep = new EscherArrayProperty(propId, new ::int8_tArray(propData));
            } else {
                ep = new EscherComplexProperty(propId, new ::int8_tArray(propData));
            }
            break;
        }

        npc(results)->add(static_cast< ::java::lang::Object* >(ep));
        pos += 6;
    }
    for (auto _i = npc(results)->iterator(); _i->hasNext(); ) {
        EscherProperty* p = java_cast< EscherProperty* >(_i->next());
        {
            if(dynamic_cast< EscherComplexProperty* >(p) != nullptr) {
                if(dynamic_cast< EscherArrayProperty* >(p) != nullptr) {
                    pos += npc((java_cast< EscherArrayProperty* >(p)))->setArrayData(data, pos);
                } else {
                    auto complexData = npc((java_cast< EscherComplexProperty* >(p)))->getComplexData();
                    auto leftover = npc(data)->length - pos;
                    if(leftover < npc(complexData)->length) {
                        throw new ::java::lang::IllegalStateException(::java::lang::StringBuilder().append(u"Could not read complex escher property, length was "_j)->append(npc(complexData)->length)
                            ->append(u", but had only "_j)
                            ->append(leftover)
                            ->append(u" bytes left"_j)->toString());
                    }
                    ::java::lang::System::arraycopy(data, pos, complexData, 0, npc(complexData)->length);
                    pos += npc(complexData)->length;
                }
            }
        }
    }
    return results;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ddf::EscherPropertyFactory::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ddf.EscherPropertyFactory", 40);
    return c;
}

java::lang::Class* org::apache::poi::ddf::EscherPropertyFactory::getClass0()
{
    return class_();
}

