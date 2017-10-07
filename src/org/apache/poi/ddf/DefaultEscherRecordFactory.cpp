// Generated from /POI/java/org/apache/poi/ddf/DefaultEscherRecordFactory.java
#include <org/apache/poi/ddf/DefaultEscherRecordFactory.hpp>

#include <java/io/Serializable.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Exception.hpp>
#include <java/lang/IllegalAccessException.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/NoSuchFieldException.hpp>
#include <java/lang/NoSuchMethodException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/RuntimeException.hpp>
#include <java/lang/Short.hpp>
#include <java/lang/String.hpp>
#include <java/lang/Throwable.hpp>
#include <java/lang/reflect/AnnotatedElement.hpp>
#include <java/lang/reflect/Constructor.hpp>
#include <java/lang/reflect/Field.hpp>
#include <java/lang/reflect/GenericDeclaration.hpp>
#include <java/lang/reflect/Type.hpp>
#include <java/util/HashMap.hpp>
#include <java/util/Map.hpp>
#include <org/apache/poi/ddf/EscherBSERecord.hpp>
#include <org/apache/poi/ddf/EscherBitmapBlip.hpp>
#include <org/apache/poi/ddf/EscherBlipRecord.hpp>
#include <org/apache/poi/ddf/EscherChildAnchorRecord.hpp>
#include <org/apache/poi/ddf/EscherClientAnchorRecord.hpp>
#include <org/apache/poi/ddf/EscherClientDataRecord.hpp>
#include <org/apache/poi/ddf/EscherContainerRecord.hpp>
#include <org/apache/poi/ddf/EscherDgRecord.hpp>
#include <org/apache/poi/ddf/EscherDggRecord.hpp>
#include <org/apache/poi/ddf/EscherMetafileBlip.hpp>
#include <org/apache/poi/ddf/EscherOptRecord.hpp>
#include <org/apache/poi/ddf/EscherRecord.hpp>
#include <org/apache/poi/ddf/EscherSpRecord.hpp>
#include <org/apache/poi/ddf/EscherSpgrRecord.hpp>
#include <org/apache/poi/ddf/EscherSplitMenuColorsRecord.hpp>
#include <org/apache/poi/ddf/EscherTertiaryOptRecord.hpp>
#include <org/apache/poi/ddf/EscherTextboxRecord.hpp>
#include <org/apache/poi/ddf/UnknownEscherRecord.hpp>
#include <org/apache/poi/util/LittleEndian.hpp>
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
        namespace reflect
        {
typedef ::SubArray< ::java::lang::reflect::AnnotatedElement, ::java::lang::ObjectArray > AnnotatedElementArray;
typedef ::SubArray< ::java::lang::reflect::GenericDeclaration, ::java::lang::ObjectArray, AnnotatedElementArray > GenericDeclarationArray;
typedef ::SubArray< ::java::lang::reflect::Type, ::java::lang::ObjectArray > TypeArray;
        } // reflect
typedef ::SubArray< ::java::lang::Class, ObjectArray, ::java::io::SerializableArray, ::java::lang::reflect::GenericDeclarationArray, ::java::lang::reflect::TypeArray, ::java::lang::reflect::AnnotatedElementArray > ClassArray;
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

org::apache::poi::ddf::DefaultEscherRecordFactory::DefaultEscherRecordFactory(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ddf::DefaultEscherRecordFactory::DefaultEscherRecordFactory() 
    : DefaultEscherRecordFactory(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

java::lang::ClassArray*& org::apache::poi::ddf::DefaultEscherRecordFactory::escherRecordClasses()
{
    clinit();
    return escherRecordClasses_;
}
java::lang::ClassArray* org::apache::poi::ddf::DefaultEscherRecordFactory::escherRecordClasses_;

java::util::Map*& org::apache::poi::ddf::DefaultEscherRecordFactory::recordsMap()
{
    clinit();
    return recordsMap_;
}
java::util::Map* org::apache::poi::ddf::DefaultEscherRecordFactory::recordsMap_;

void org::apache::poi::ddf::DefaultEscherRecordFactory::ctor()
{
    super::ctor();
}

org::apache::poi::ddf::EscherRecord* org::apache::poi::ddf::DefaultEscherRecordFactory::createRecord(::int8_tArray* data, int32_t offset)
{
    auto options = ::org::apache::poi::util::LittleEndian::getShort(data, offset);
    auto recordId = ::org::apache::poi::util::LittleEndian::getShort(data, offset + int32_t(2));
    if(isContainer(options, recordId)) {
        auto r = new EscherContainerRecord();
        npc(r)->setRecordId(recordId);
        npc(r)->setOptions(options);
        return r;
    }
    if(recordId >= EscherBlipRecord::RECORD_ID_START && recordId <= EscherBlipRecord::RECORD_ID_END) {
        EscherBlipRecord* r;
        if(recordId == EscherBitmapBlip::RECORD_ID_DIB || recordId == EscherBitmapBlip::RECORD_ID_JPEG || recordId == EscherBitmapBlip::RECORD_ID_PNG) {
            r = new EscherBitmapBlip();
        } else if(recordId == EscherMetafileBlip::RECORD_ID_EMF || recordId == EscherMetafileBlip::RECORD_ID_WMF || recordId == EscherMetafileBlip::RECORD_ID_PICT) {
            r = new EscherMetafileBlip();
        } else {
            r = new EscherBlipRecord();
        }
        npc(r)->setRecordId(recordId);
        npc(r)->setOptions(options);
        return r;
    }
    auto recordConstructor = java_cast< ::java::lang::reflect::Constructor* >(npc(recordsMap_)->get(::java::lang::Short::valueOf(recordId)));
    EscherRecord* escherRecord;
    if(recordConstructor == nullptr) {
        return new UnknownEscherRecord();
    }
    try {
        escherRecord = java_cast< EscherRecord* >(npc(recordConstructor)->newInstance(new ::java::lang::ObjectArray()));
    } catch (::java::lang::Exception* e) {
        return new UnknownEscherRecord();
    }
    npc(escherRecord)->setRecordId(recordId);
    npc(escherRecord)->setOptions(options);
    return escherRecord;
}

java::util::Map* org::apache::poi::ddf::DefaultEscherRecordFactory::recordsToMap(::java::lang::ClassArray* recClasses)
{
    clinit();
    ::java::util::Map* result = new ::java::util::HashMap();
    auto const EMPTY_CLASS_ARRAY = new ::java::lang::ClassArray(int32_t(0));
    for(auto recClass : *npc(recClasses)) {
        auto recCls = java_cast< ::java::lang::Class* >(recClass);
        int16_t sid;
        try {
            sid = npc(npc(recCls)->getField(u"RECORD_ID"_j))->getShort(nullptr);
        } catch (::java::lang::IllegalArgumentException* e) {
            throw new ::java::lang::RuntimeException(static_cast< ::java::lang::Throwable* >(e));
        } catch (::java::lang::IllegalAccessException* e) {
            throw new ::java::lang::RuntimeException(static_cast< ::java::lang::Throwable* >(e));
        } catch (::java::lang::NoSuchFieldException* e) {
            throw new ::java::lang::RuntimeException(static_cast< ::java::lang::Throwable* >(e));
        }
        ::java::lang::reflect::Constructor* constructor;
        try {
            constructor = npc(recCls)->getConstructor(EMPTY_CLASS_ARRAY);
        } catch (::java::lang::NoSuchMethodException* e) {
            throw new ::java::lang::RuntimeException(static_cast< ::java::lang::Throwable* >(e));
        }
        npc(result)->put(::java::lang::Short::valueOf(sid), constructor);
    }
    return result;
}

bool org::apache::poi::ddf::DefaultEscherRecordFactory::isContainer(int16_t options, int16_t recordId)
{
    clinit();
    if(recordId >= EscherContainerRecord::DGG_CONTAINER && recordId <= EscherContainerRecord::SOLVER_CONTAINER) {
        return true;
    } else {
        if(recordId == EscherTextboxRecord::RECORD_ID) {
            return false;
        } else {
            return (options & static_cast< int16_t >(int32_t(15))) == static_cast< int16_t >(int32_t(15));
        }
    }
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ddf::DefaultEscherRecordFactory::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ddf.DefaultEscherRecordFactory", 45);
    return c;
}

void org::apache::poi::ddf::DefaultEscherRecordFactory::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        escherRecordClasses_ = (new ::java::lang::ClassArray({
            static_cast< ::java::lang::Class* >(EscherBSERecord::class_())
            , static_cast< ::java::lang::Class* >(EscherOptRecord::class_())
            , static_cast< ::java::lang::Class* >(EscherTertiaryOptRecord::class_())
            , static_cast< ::java::lang::Class* >(EscherClientAnchorRecord::class_())
            , static_cast< ::java::lang::Class* >(EscherDgRecord::class_())
            , static_cast< ::java::lang::Class* >(EscherSpgrRecord::class_())
            , static_cast< ::java::lang::Class* >(EscherSpRecord::class_())
            , static_cast< ::java::lang::Class* >(EscherClientDataRecord::class_())
            , static_cast< ::java::lang::Class* >(EscherDggRecord::class_())
            , static_cast< ::java::lang::Class* >(EscherSplitMenuColorsRecord::class_())
            , static_cast< ::java::lang::Class* >(EscherChildAnchorRecord::class_())
            , static_cast< ::java::lang::Class* >(EscherTextboxRecord::class_())
        }));
        recordsMap_ = recordsToMap(escherRecordClasses_);
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* org::apache::poi::ddf::DefaultEscherRecordFactory::getClass0()
{
    return class_();
}

