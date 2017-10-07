// Generated from /POI/java/org/apache/poi/hpsf/Array.java
#include <org/apache/poi/hpsf/Array__ArrayHeader.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <org/apache/poi/hpsf/Array__ArrayDimension.hpp>
#include <org/apache/poi/hpsf/IllegalPropertySetDataException.hpp>
#include <org/apache/poi/util/LittleEndianByteArrayInputStream.hpp>
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
typedef ::SubArray< ::org::apache::poi::hpsf::Array__ArrayDimension, ::java::lang::ObjectArray > Array__ArrayDimensionArray;
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

org::apache::poi::hpsf::Array__ArrayHeader::Array__ArrayHeader(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hpsf::Array__ArrayHeader::Array__ArrayHeader()
    : Array__ArrayHeader(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void org::apache::poi::hpsf::Array__ArrayHeader::read(::org::apache::poi::util::LittleEndianByteArrayInputStream* lei)
{
    _type = npc(lei)->readInt();
    auto numDimensionsUnsigned = npc(lei)->readUInt();
    if(!(1 <= numDimensionsUnsigned && numDimensionsUnsigned <= 31)) {
        auto msg = ::java::lang::StringBuilder().append(u"Array dimension number "_j)->append(numDimensionsUnsigned)
            ->append(u" is not in [1; 31] range"_j)->toString();
        throw new IllegalPropertySetDataException(msg);
    }
    auto numDimensions = static_cast< int32_t >(numDimensionsUnsigned);
    _dimensions = new Array__ArrayDimensionArray(numDimensions);
    for (auto i = int32_t(0); i < numDimensions; i++) {
        auto ad = new Array__ArrayDimension();
        npc(ad)->read(lei);
        _dimensions->set(i, ad);
    }
}

int64_t org::apache::poi::hpsf::Array__ArrayHeader::getNumberOfScalarValues()
{
    int64_t result = int32_t(1);
    for(auto dimension : *npc(_dimensions)) {
        result *= npc(dimension)->_size;
    }
    return result;
}

int32_t org::apache::poi::hpsf::Array__ArrayHeader::getType()
{
    return _type;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hpsf::Array__ArrayHeader::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hpsf.Array.ArrayHeader", 37);
    return c;
}

java::lang::Class* org::apache::poi::hpsf::Array__ArrayHeader::getClass0()
{
    return class_();
}

