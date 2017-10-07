// Generated from /POI/java/org/apache/poi/hssf/record/RecordFactory.java
#include <org/apache/poi/hssf/record/RecordFactory_ReflectionConstructorRecordCreator.hpp>

#include <java/lang/Class.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/IllegalAccessException.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/InstantiationException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/RuntimeException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/Throwable.hpp>
#include <java/lang/reflect/Constructor.hpp>
#include <java/lang/reflect/InvocationTargetException.hpp>
#include <org/apache/poi/EncryptedDocumentException.hpp>
#include <org/apache/poi/hssf/record/Record.hpp>
#include <org/apache/poi/hssf/record/RecordInputStream.hpp>
#include <org/apache/poi/util/RecordFormatException.hpp>
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

org::apache::poi::hssf::record::RecordFactory_ReflectionConstructorRecordCreator::RecordFactory_ReflectionConstructorRecordCreator(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::record::RecordFactory_ReflectionConstructorRecordCreator::RecordFactory_ReflectionConstructorRecordCreator(::java::lang::reflect::Constructor* c) 
    : RecordFactory_ReflectionConstructorRecordCreator(*static_cast< ::default_init_tag* >(0))
{
    ctor(c);
}

void org::apache::poi::hssf::record::RecordFactory_ReflectionConstructorRecordCreator::ctor(::java::lang::reflect::Constructor* c)
{
    super::ctor();
    _c = c;
}

org::apache::poi::hssf::record::Record* org::apache::poi::hssf::record::RecordFactory_ReflectionConstructorRecordCreator::create(RecordInputStream* in)
{
    auto args = (new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(in)}));
    try {
        return java_cast< Record* >(npc(_c)->newInstance(args));
    } catch (::java::lang::IllegalArgumentException* e) {
        throw new ::java::lang::RuntimeException(static_cast< ::java::lang::Throwable* >(e));
    } catch (::java::lang::InstantiationException* e) {
        throw new ::java::lang::RuntimeException(static_cast< ::java::lang::Throwable* >(e));
    } catch (::java::lang::IllegalAccessException* e) {
        throw new ::java::lang::RuntimeException(static_cast< ::java::lang::Throwable* >(e));
    } catch (::java::lang::reflect::InvocationTargetException* e) {
        auto t = npc(e)->getTargetException();
        if(dynamic_cast< ::org::apache::poi::util::RecordFormatException* >(t) != nullptr) {
            throw java_cast< ::org::apache::poi::util::RecordFormatException* >(t);
        } else if(dynamic_cast< ::org::apache::poi::EncryptedDocumentException* >(t) != nullptr) {
            throw java_cast< ::org::apache::poi::EncryptedDocumentException* >(t);
        } else {
            throw new ::org::apache::poi::util::RecordFormatException(u"Unable to construct record instance"_j, t);
        }
    }
}

java::lang::Class* org::apache::poi::hssf::record::RecordFactory_ReflectionConstructorRecordCreator::getRecordClass()
{
    return npc(_c)->getDeclaringClass();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::record::RecordFactory_ReflectionConstructorRecordCreator::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.RecordFactory.ReflectionConstructorRecordCreator", 75);
    return c;
}

java::lang::Class* org::apache::poi::hssf::record::RecordFactory_ReflectionConstructorRecordCreator::getClass0()
{
    return class_();
}

