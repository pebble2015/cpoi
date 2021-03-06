// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/security/Provider.hpp>

#include <java/lang/String.hpp>

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

extern void unimplemented_(const char16_t* name);
java::security::Provider::Provider(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::security::Provider::Provider(::java::lang::String* name, double version, ::java::lang::String* info)
    : Provider(*static_cast< ::default_init_tag* >(0))
{
    ctor(name, version, info);
}

int32_t& java::security::Provider::ALIAS_LENGTH()
{
    clinit();
    return ALIAS_LENGTH_;
}
int32_t java::security::Provider::ALIAS_LENGTH_;
java::lang::String*& java::security::Provider::ALIAS_PREFIX()
{
    clinit();
    return ALIAS_PREFIX_;
}
java::lang::String* java::security::Provider::ALIAS_PREFIX_;
java::lang::String*& java::security::Provider::ALIAS_PREFIX_LOWER()
{
    clinit();
    return ALIAS_PREFIX_LOWER_;
}
java::lang::String* java::security::Provider::ALIAS_PREFIX_LOWER_;
sun::security::util::Debug*& java::security::Provider::debug()
{
    clinit();
    return debug_;
}
sun::security::util::Debug* java::security::Provider::debug_;
java::util::Map*& java::security::Provider::knownEngines()
{
    clinit();
    return knownEngines_;
}
java::util::Map* java::security::Provider::knownEngines_;
std::atomic< java::security::Provider_ServiceKey* >& java::security::Provider::previousKey()
{
    clinit();
    return previousKey_;
}
std::atomic< java::security::Provider_ServiceKey* > java::security::Provider::previousKey_;
constexpr int64_t java::security::Provider::serialVersionUID;

void ::java::security::Provider::ctor(::java::lang::String* name, double version, ::java::lang::String* info)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::security::Provider::ctor(::java::lang::String* name, double version, ::java::lang::String* info)");
}

/* private: void java::security::Provider::addEngine(::java::lang::String* name, bool sp, ::java::lang::String* paramName) */
/* private: void java::security::Provider::check(::java::lang::String* directive) */
/* private: void java::security::Provider::checkInitialized() */
/* private: bool java::security::Provider::checkLegacy(::java::lang::Object* key) */
void java::security::Provider::clear()
{ /* stub */
    unimplemented_(u"void java::security::Provider::clear()");
}

java::lang::Object* java::security::Provider::compute(::java::lang::Object* key, ::java::util::function::BiFunction* remappingFunction)
{ /* stub */
    unimplemented_(u"java::lang::Object* java::security::Provider::compute(::java::lang::Object* key, ::java::util::function::BiFunction* remappingFunction)");
    return 0;
}

java::lang::Object* java::security::Provider::computeIfAbsent(::java::lang::Object* key, ::java::util::function::Function* mappingFunction)
{ /* stub */
    unimplemented_(u"java::lang::Object* java::security::Provider::computeIfAbsent(::java::lang::Object* key, ::java::util::function::Function* mappingFunction)");
    return 0;
}

java::lang::Object* java::security::Provider::computeIfPresent(::java::lang::Object* key, ::java::util::function::BiFunction* remappingFunction)
{ /* stub */
    unimplemented_(u"java::lang::Object* java::security::Provider::computeIfPresent(::java::lang::Object* key, ::java::util::function::BiFunction* remappingFunction)");
    return 0;
}

java::util::Enumeration* java::security::Provider::elements()
{ /* stub */
    unimplemented_(u"java::util::Enumeration* java::security::Provider::elements()");
    return 0;
}

/* private: void java::security::Provider::ensureLegacyParsed() */
java::util::Set* java::security::Provider::entrySet()
{ /* stub */
    unimplemented_(u"java::util::Set* java::security::Provider::entrySet()");
    return 0;
}

void java::security::Provider::forEach(::java::util::function::BiConsumer* action)
{ /* stub */
    unimplemented_(u"void java::security::Provider::forEach(::java::util::function::BiConsumer* action)");
}

java::lang::Object* java::security::Provider::get(::java::lang::Object* key)
{ /* stub */
    unimplemented_(u"java::lang::Object* java::security::Provider::get(::java::lang::Object* key)");
    return 0;
}

/* private: java::lang::String* java::security::Provider::getEngineName(::java::lang::String* s) */
java::lang::String* java::security::Provider::getInfo()
{ /* stub */
return info ; /* getter */
}

java::lang::String* java::security::Provider::getName()
{ /* stub */
return name ; /* getter */
}

java::lang::Object* java::security::Provider::getOrDefault(::java::lang::Object* key, ::java::lang::Object* defaultValue)
{ /* stub */
    unimplemented_(u"java::lang::Object* java::security::Provider::getOrDefault(::java::lang::Object* key, ::java::lang::Object* defaultValue)");
    return 0;
}

java::lang::String* java::security::Provider::getProperty(::java::lang::String* key)
{ /* stub */
    unimplemented_(u"java::lang::String* java::security::Provider::getProperty(::java::lang::String* key)");
    return 0;
}

java::security::Provider_Service* java::security::Provider::getService(::java::lang::String* type, ::java::lang::String* algorithm)
{ /* stub */
    unimplemented_(u"java::security::Provider_Service* java::security::Provider::getService(::java::lang::String* type, ::java::lang::String* algorithm)");
    return 0;
}

java::util::Set* java::security::Provider::getServices()
{ /* stub */
    unimplemented_(u"java::util::Set* java::security::Provider::getServices()");
    return 0;
}

/* private: java::lang::StringArray* java::security::Provider::getTypeAndAlgorithm(::java::lang::String* key) */
double java::security::Provider::getVersion()
{ /* stub */
return version ; /* getter */
}

/* private: void java::security::Provider::implClear() */
/* private: java::lang::Object* java::security::Provider::implCompute(::java::lang::Object* key, ::java::util::function::BiFunction* remappingFunction) */
/* private: java::lang::Object* java::security::Provider::implComputeIfAbsent(::java::lang::Object* key, ::java::util::function::Function* mappingFunction) */
/* private: java::lang::Object* java::security::Provider::implComputeIfPresent(::java::lang::Object* key, ::java::util::function::BiFunction* remappingFunction) */
/* private: java::lang::Object* java::security::Provider::implMerge(::java::lang::Object* key, ::java::lang::Object* value, ::java::util::function::BiFunction* remappingFunction) */
/* private: java::lang::Object* java::security::Provider::implPut(::java::lang::Object* key, ::java::lang::Object* value) */
/* private: void java::security::Provider::implPutAll(::java::util::Map* t) */
/* private: java::lang::Object* java::security::Provider::implPutIfAbsent(::java::lang::Object* key, ::java::lang::Object* value) */
/* private: java::lang::Object* java::security::Provider::implRemove(::java::lang::Object* key) */
/* private: bool java::security::Provider::implRemove(::java::lang::Object* key, ::java::lang::Object* value) */
/* private: void java::security::Provider::implRemoveService(Provider_Service* s) */
/* private: java::lang::Object* java::security::Provider::implReplace(::java::lang::Object* key, ::java::lang::Object* value) */
/* private: bool java::security::Provider::implReplace(::java::lang::Object* key, ::java::lang::Object* oldValue, ::java::lang::Object* newValue) */
/* private: void java::security::Provider::implReplaceAll(::java::util::function::BiFunction* function) */
java::util::Set* java::security::Provider::keySet()
{ /* stub */
    unimplemented_(u"java::util::Set* java::security::Provider::keySet()");
    return 0;
}

java::util::Enumeration* java::security::Provider::keys()
{ /* stub */
    unimplemented_(u"java::util::Enumeration* java::security::Provider::keys()");
    return 0;
}

void java::security::Provider::load(::java::io::InputStream* inStream)
{ /* stub */
    unimplemented_(u"void java::security::Provider::load(::java::io::InputStream* inStream)");
}

java::lang::Object* java::security::Provider::merge(::java::lang::Object* key, ::java::lang::Object* value, ::java::util::function::BiFunction* remappingFunction)
{ /* stub */
    unimplemented_(u"java::lang::Object* java::security::Provider::merge(::java::lang::Object* key, ::java::lang::Object* value, ::java::util::function::BiFunction* remappingFunction)");
    return 0;
}

/* private: void java::security::Provider::parseLegacyPut(::java::lang::String* name, ::java::lang::String* value) */
java::lang::Object* java::security::Provider::put(::java::lang::Object* key, ::java::lang::Object* value)
{ /* stub */
    unimplemented_(u"java::lang::Object* java::security::Provider::put(::java::lang::Object* key, ::java::lang::Object* value)");
    return 0;
}

void java::security::Provider::putAll(::java::util::Map* t)
{ /* stub */
    unimplemented_(u"void java::security::Provider::putAll(::java::util::Map* t)");
}

/* private: void java::security::Provider::putId() */
java::lang::Object* java::security::Provider::putIfAbsent(::java::lang::Object* key, ::java::lang::Object* value)
{ /* stub */
    unimplemented_(u"java::lang::Object* java::security::Provider::putIfAbsent(::java::lang::Object* key, ::java::lang::Object* value)");
    return 0;
}

/* private: void java::security::Provider::putPropertyStrings(Provider_Service* s) */
void java::security::Provider::putService(Provider_Service* s)
{ /* stub */
    unimplemented_(u"void java::security::Provider::putService(Provider_Service* s)");
}

/* private: void java::security::Provider::readObject(::java::io::ObjectInputStream* in) */
java::lang::Object* java::security::Provider::remove(::java::lang::Object* key)
{ /* stub */
    unimplemented_(u"java::lang::Object* java::security::Provider::remove(::java::lang::Object* key)");
    return 0;
}

bool java::security::Provider::remove(::java::lang::Object* key, ::java::lang::Object* value)
{ /* stub */
    unimplemented_(u"bool java::security::Provider::remove(::java::lang::Object* key, ::java::lang::Object* value)");
    return 0;
}

/* private: void java::security::Provider::removeInvalidServices(::java::util::Map* map) */
/* private: void java::security::Provider::removePropertyStrings(Provider_Service* s) */
void java::security::Provider::removeService(Provider_Service* s)
{ /* stub */
    unimplemented_(u"void java::security::Provider::removeService(Provider_Service* s)");
}

java::lang::Object* java::security::Provider::replace(::java::lang::Object* key, ::java::lang::Object* value)
{ /* stub */
    unimplemented_(u"java::lang::Object* java::security::Provider::replace(::java::lang::Object* key, ::java::lang::Object* value)");
    return 0;
}

bool java::security::Provider::replace(::java::lang::Object* key, ::java::lang::Object* oldValue, ::java::lang::Object* newValue)
{ /* stub */
    unimplemented_(u"bool java::security::Provider::replace(::java::lang::Object* key, ::java::lang::Object* oldValue, ::java::lang::Object* newValue)");
    return 0;
}

void java::security::Provider::replaceAll(::java::util::function::BiFunction* function)
{ /* stub */
    unimplemented_(u"void java::security::Provider::replaceAll(::java::util::function::BiFunction* function)");
}

java::lang::String* java::security::Provider::toString()
{ /* stub */
    unimplemented_(u"java::lang::String* java::security::Provider::toString()");
    return 0;
}

java::util::Collection* java::security::Provider::values()
{ /* stub */
    unimplemented_(u"java::util::Collection* java::security::Provider::values()");
    return 0;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::security::Provider::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.security.Provider", 22);
    return c;
}

java::lang::String* java::security::Provider::getProperty(::java::lang::String* key, ::java::lang::String* defaultValue)
{
    return super::getProperty(key, defaultValue);
}

void java::security::Provider::load(::java::io::Reader* reader)
{
    super::load(reader);
}

java::lang::Class* java::security::Provider::getClass0()
{
    return class_();
}

