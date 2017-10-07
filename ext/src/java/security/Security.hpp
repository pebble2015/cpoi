// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/security/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <sun/security/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>

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
typedef ::SubArray< ::java::lang::Cloneable, ObjectArray > CloneableArray;
typedef ::SubArray< ::java::lang::Comparable, ObjectArray > ComparableArray;
typedef ::SubArray< ::java::lang::String, ObjectArray, ::java::io::SerializableArray, ComparableArray, CharSequenceArray > StringArray;
    } // lang

    namespace util
    {
typedef ::SubArray< ::java::util::Dictionary, ::java::lang::ObjectArray > DictionaryArray;
typedef ::SubArray< ::java::util::Map, ::java::lang::ObjectArray > MapArray;
typedef ::SubArray< ::java::util::Hashtable, DictionaryArray, MapArray, ::java::lang::CloneableArray, ::java::io::SerializableArray > HashtableArray;
typedef ::SubArray< ::java::util::Properties, HashtableArray > PropertiesArray;
    } // util

    namespace security
    {
typedef ::SubArray< ::java::security::Provider, ::java::util::PropertiesArray > ProviderArray;
    } // security
} // java

struct default_init_tag;

class java::security::Security final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    static ::java::util::Properties* props_;
    static ::sun::security::util::Debug* sdebug_;
    static ::java::util::Map* spiMap_;

    /*void ctor(); (private) */

public:
    static int32_t addProvider(Provider* provider);
    /*static void check(::java::lang::String* directive); (private) */
    /*static void checkInsertProvider(::java::lang::String* name); (private) */
    static ::java::lang::String* getAlgorithmProperty(::java::lang::String* algName, ::java::lang::String* propName);
    static ::java::util::Set* getAlgorithms(::java::lang::String* serviceName);
    /*static ::java::util::LinkedHashSet* getAllQualifyingCandidates(::java::lang::String* filterKey, ::java::lang::String* filterValue, ProviderArray* allProviders); (private) */

public: /* package */
    static ::java::lang::StringArray* getFilterComponents(::java::lang::String* filterKey, ::java::lang::String* filterValue);
    static ::java::lang::ObjectArray* getImpl(::java::lang::String* algorithm, ::java::lang::String* type, ::java::lang::String* provider);
    static ::java::lang::ObjectArray* getImpl(::java::lang::String* algorithm, ::java::lang::String* type, Provider* provider);
    static ::java::lang::ObjectArray* getImpl(::java::lang::String* algorithm, ::java::lang::String* type, ::java::lang::String* provider, ::java::lang::Object* params);
    static ::java::lang::ObjectArray* getImpl(::java::lang::String* algorithm, ::java::lang::String* type, Provider* provider, ::java::lang::Object* params);

public:
    static ::java::lang::String* getProperty(::java::lang::String* key);
    static Provider* getProvider(::java::lang::String* name);
    /*static Security_ProviderProperty* getProviderProperty(::java::lang::String* key); (private) */
    /*static ::java::lang::String* getProviderProperty(::java::lang::String* key, Provider* provider); (private) */
    static ProviderArray* getProviders();
    static ProviderArray* getProviders(::java::lang::String* filter);
    static ProviderArray* getProviders(::java::util::Map* filter);
    /*static ::java::util::LinkedHashSet* getProvidersNotUsingCache(::java::lang::String* serviceName, ::java::lang::String* algName, ::java::lang::String* attrName, ::java::lang::String* filterValue, ProviderArray* allProviders); (private) */
    /*static ::java::lang::Class* getSpiClass(::java::lang::String* type); (private) */
    /*static void initialize(); (private) */
    /*static void initializeStatic(); (private) */
    static int32_t insertProviderAt(Provider* provider, int32_t position);
    /*static void invalidateSMCache(::java::lang::String* key); (private) */
    /*static bool isConstraintSatisfied(::java::lang::String* attribute, ::java::lang::String* value, ::java::lang::String* prop); (private) */
    /*static bool isCriterionSatisfied(Provider* prov, ::java::lang::String* serviceName, ::java::lang::String* algName, ::java::lang::String* attrName, ::java::lang::String* filterValue); (private) */
    /*static bool isStandardAttr(::java::lang::String* attribute); (private) */
    static void removeProvider(::java::lang::String* name);
    /*static ::java::io::File* securityPropFile(::java::lang::String* filename); (private) */
    static void setProperty(::java::lang::String* key, ::java::lang::String* datum);

    // Generated
    Security();
protected:
    Security(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    static ::java::util::Properties*& props();
    static ::sun::security::util::Debug*& sdebug();
    static ::java::util::Map*& spiMap();
    virtual ::java::lang::Class* getClass0();
};
