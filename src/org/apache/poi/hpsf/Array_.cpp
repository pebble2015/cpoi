// Generated from /POI/java/org/apache/poi/hpsf/Array.java
#include <org/apache/poi/hpsf/Array_.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/Integer.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/lang/UnsupportedOperationException.hpp>
#include <org/apache/poi/hpsf/Array__ArrayHeader.hpp>
#include <org/apache/poi/hpsf/TypedPropertyValue.hpp>
#include <org/apache/poi/hpsf/Variant.hpp>
#include <ObjectArray.hpp>
#include <SubArray.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace org
{
    namespace apache
    {
        namespace poi
        {
            namespace hpsf
            {
typedef ::SubArray< ::org::apache::poi::hpsf::TypedPropertyValue, ::java::lang::ObjectArray > TypedPropertyValueArray;
            } // hpsf
        } // poi
    } // apache
} // org

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::hpsf::Array_::Array_(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hpsf::Array_::Array_() 
    : Array_(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void org::apache::poi::hpsf::Array_::init()
{
    _header = new Array__ArrayHeader();
}

void org::apache::poi::hpsf::Array_::ctor()
{
    super::ctor();
    init();
}

void org::apache::poi::hpsf::Array_::read(::org::apache::poi::util::LittleEndianByteArrayInputStream* lei)
{
    npc(_header)->read(lei);
    auto numberOfScalarsLong = npc(_header)->getNumberOfScalarValues();
    if(numberOfScalarsLong > ::java::lang::Integer::MAX_VALUE) {
        auto msg = ::java::lang::StringBuilder().append(u"Sorry, but POI can't store array of properties with size of "_j)->append(numberOfScalarsLong)
            ->append(u" in memory"_j)->toString();
        throw new ::java::lang::UnsupportedOperationException(msg);
    }
    auto numberOfScalars = static_cast< int32_t >(numberOfScalarsLong);
    _values = new TypedPropertyValueArray(numberOfScalars);
    auto paddedType = (npc(_header)->_type == Variant::VT_VARIANT) ? int32_t(0) : npc(_header)->_type;
    for (auto i = int32_t(0); i < numberOfScalars; i++) {
        auto typedPropertyValue = new TypedPropertyValue(paddedType, nullptr);
        npc(typedPropertyValue)->read(lei);
        _values->set(i, typedPropertyValue);
        if(paddedType != 0) {
            TypedPropertyValue::skipPadding(lei);
        }
    }
}

org::apache::poi::hpsf::TypedPropertyValueArray* org::apache::poi::hpsf::Array_::getValues()
{
    return _values;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hpsf::Array_::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hpsf.Array", 25);
    return c;
}

java::lang::Class* org::apache::poi::hpsf::Array_::getClass0()
{
    return class_();
}

