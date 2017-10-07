// Generated from /POI/java/org/apache/poi/poifs/crypt/DataSpaceMapUtils.java
#include <org/apache/poi/poifs/crypt/DataSpaceMapUtils_DataSpaceDefinition.hpp>

#include <java/io/Serializable.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <org/apache/poi/poifs/crypt/DataSpaceMapUtils.hpp>
#include <org/apache/poi/util/LittleEndianByteArrayOutputStream.hpp>
#include <org/apache/poi/util/LittleEndianInput.hpp>
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

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::poifs::crypt::DataSpaceMapUtils_DataSpaceDefinition::DataSpaceMapUtils_DataSpaceDefinition(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::poifs::crypt::DataSpaceMapUtils_DataSpaceDefinition::DataSpaceMapUtils_DataSpaceDefinition(::java::lang::StringArray* transformer) 
    : DataSpaceMapUtils_DataSpaceDefinition(*static_cast< ::default_init_tag* >(0))
{
    ctor(transformer);
}

org::apache::poi::poifs::crypt::DataSpaceMapUtils_DataSpaceDefinition::DataSpaceMapUtils_DataSpaceDefinition(::org::apache::poi::util::LittleEndianInput* is) 
    : DataSpaceMapUtils_DataSpaceDefinition(*static_cast< ::default_init_tag* >(0))
{
    ctor(is);
}

void org::apache::poi::poifs::crypt::DataSpaceMapUtils_DataSpaceDefinition::ctor(::java::lang::StringArray* transformer)
{
    super::ctor();
    this->transformer = npc(transformer)->clone();
}

void org::apache::poi::poifs::crypt::DataSpaceMapUtils_DataSpaceDefinition::ctor(::org::apache::poi::util::LittleEndianInput* is)
{
    super::ctor();
    npc(is)->readInt();
    auto transformReferenceCount = npc(is)->readInt();
    transformer = new ::java::lang::StringArray(transformReferenceCount);
    for (auto i = int32_t(0); i < transformReferenceCount; i++) {
        transformer->set(i, DataSpaceMapUtils::readUnicodeLPP4(is));
    }
}

void org::apache::poi::poifs::crypt::DataSpaceMapUtils_DataSpaceDefinition::write(::org::apache::poi::util::LittleEndianByteArrayOutputStream* bos)
{
    npc(bos)->writeInt(int32_t(8));
    npc(bos)->writeInt(npc(transformer)->length);
    for(auto str : *npc(transformer)) {
        DataSpaceMapUtils::writeUnicodeLPP4(bos, str);
    }
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::poifs::crypt::DataSpaceMapUtils_DataSpaceDefinition::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.poifs.crypt.DataSpaceMapUtils.DataSpaceDefinition", 64);
    return c;
}

java::lang::Class* org::apache::poi::poifs::crypt::DataSpaceMapUtils_DataSpaceDefinition::getClass0()
{
    return class_();
}

