// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <atomic>
#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/security/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <java/util/function/fwd-POI.hpp>
#include <sun/security/util/fwd-POI.hpp>
#include <java/util/Properties.hpp>

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

struct default_init_tag;

class java::security::Provider
    : public ::java::util::Properties
{

public:
    typedef ::java::util::Properties super;

private:
    static int32_t ALIAS_LENGTH_;
    static ::java::lang::String* ALIAS_PREFIX_;
    static ::java::lang::String* ALIAS_PREFIX_LOWER_;
    static ::sun::security::util::Debug* debug_;
    ::java::util::Set* entrySet_ {  };
    int32_t entrySetCallCount {  };
    ::java::lang::String* info {  };
    bool initialized {  };
    static ::java::util::Map* knownEngines_;
    bool legacyChanged {  };
    ::java::util::Map* legacyMap {  };
    ::java::util::Map* legacyStrings {  };
    ::java::lang::String* name {  };
    static std::atomic< Provider_ServiceKey* > previousKey_;

public: /* package */
    static constexpr int64_t serialVersionUID { int64_t(-4298000515446427739LL) };

private:
    ::java::util::Map* serviceMap {  };
    ::java::util::Set* serviceSet {  };
    bool servicesChanged {  };
    double version {  };

protected:
    void ctor(::java::lang::String* name, double version, ::java::lang::String* info);
    /*static void addEngine(::java::lang::String* name, bool sp, ::java::lang::String* paramName); (private) */
    /*void check(::java::lang::String* directive); (private) */
    /*void checkInitialized(); (private) */
    /*bool checkLegacy(::java::lang::Object* key); (private) */

public:
    void clear() override;
    ::java::lang::Object* compute(::java::lang::Object* key, ::java::util::function::BiFunction* remappingFunction) override;
    ::java::lang::Object* computeIfAbsent(::java::lang::Object* key, ::java::util::function::Function* mappingFunction) override;
    ::java::lang::Object* computeIfPresent(::java::lang::Object* key, ::java::util::function::BiFunction* remappingFunction) override;
    ::java::util::Enumeration* elements() override;
    /*void ensureLegacyParsed(); (private) */
    ::java::util::Set* entrySet() override;
    void forEach(::java::util::function::BiConsumer* action) override;
    ::java::lang::Object* get(::java::lang::Object* key) override;
    /*static ::java::lang::String* getEngineName(::java::lang::String* s); (private) */
    virtual ::java::lang::String* getInfo();
    virtual ::java::lang::String* getName();
    ::java::lang::Object* getOrDefault(::java::lang::Object* key, ::java::lang::Object* defaultValue) override;
    ::java::lang::String* getProperty(::java::lang::String* key) override;
    virtual Provider_Service* getService(::java::lang::String* type, ::java::lang::String* algorithm);
    virtual ::java::util::Set* getServices();
    /*::java::lang::StringArray* getTypeAndAlgorithm(::java::lang::String* key); (private) */
    virtual double getVersion();
    /*void implClear(); (private) */
    /*::java::lang::Object* implCompute(::java::lang::Object* key, ::java::util::function::BiFunction* remappingFunction); (private) */
    /*::java::lang::Object* implComputeIfAbsent(::java::lang::Object* key, ::java::util::function::Function* mappingFunction); (private) */
    /*::java::lang::Object* implComputeIfPresent(::java::lang::Object* key, ::java::util::function::BiFunction* remappingFunction); (private) */
    /*::java::lang::Object* implMerge(::java::lang::Object* key, ::java::lang::Object* value, ::java::util::function::BiFunction* remappingFunction); (private) */
    /*::java::lang::Object* implPut(::java::lang::Object* key, ::java::lang::Object* value); (private) */
    /*void implPutAll(::java::util::Map* t); (private) */
    /*::java::lang::Object* implPutIfAbsent(::java::lang::Object* key, ::java::lang::Object* value); (private) */
    /*::java::lang::Object* implRemove(::java::lang::Object* key); (private) */
    /*bool implRemove(::java::lang::Object* key, ::java::lang::Object* value); (private) */
    /*void implRemoveService(Provider_Service* s); (private) */
    /*::java::lang::Object* implReplace(::java::lang::Object* key, ::java::lang::Object* value); (private) */
    /*bool implReplace(::java::lang::Object* key, ::java::lang::Object* oldValue, ::java::lang::Object* newValue); (private) */
    /*void implReplaceAll(::java::util::function::BiFunction* function); (private) */
    ::java::util::Set* keySet() override;
    ::java::util::Enumeration* keys() override;
    void load(::java::io::InputStream* inStream) override;
    ::java::lang::Object* merge(::java::lang::Object* key, ::java::lang::Object* value, ::java::util::function::BiFunction* remappingFunction) override;
    /*void parseLegacyPut(::java::lang::String* name, ::java::lang::String* value); (private) */
    ::java::lang::Object* put(::java::lang::Object* key, ::java::lang::Object* value) override;
    void putAll(::java::util::Map* t) override;
    /*void putId(); (private) */
    ::java::lang::Object* putIfAbsent(::java::lang::Object* key, ::java::lang::Object* value) override;
    /*void putPropertyStrings(Provider_Service* s); (private) */

public: /* protected */
    virtual void putService(Provider_Service* s);
    /*void readObject(::java::io::ObjectInputStream* in); (private) */

public:
    ::java::lang::Object* remove(::java::lang::Object* key) override;
    bool remove(::java::lang::Object* key, ::java::lang::Object* value) override;
    /*void removeInvalidServices(::java::util::Map* map); (private) */
    /*void removePropertyStrings(Provider_Service* s); (private) */

public: /* protected */
    virtual void removeService(Provider_Service* s);

public:
    ::java::lang::Object* replace(::java::lang::Object* key, ::java::lang::Object* value) override;
    bool replace(::java::lang::Object* key, ::java::lang::Object* oldValue, ::java::lang::Object* newValue) override;
    void replaceAll(::java::util::function::BiFunction* function) override;
    ::java::lang::String* toString() override;
    ::java::util::Collection* values() override;

    // Generated

public: /* protected */
    Provider(::java::lang::String* name, double version, ::java::lang::String* info);
protected:
    Provider(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    virtual ::java::lang::String* getProperty(::java::lang::String* key, ::java::lang::String* defaultValue);
    virtual void load(::java::io::Reader* reader);

private:
    static int32_t& ALIAS_LENGTH();
    static ::java::lang::String*& ALIAS_PREFIX();
    static ::java::lang::String*& ALIAS_PREFIX_LOWER();
    static ::sun::security::util::Debug*& debug();
    static ::java::util::Map*& knownEngines();
    static std::atomic< Provider_ServiceKey* >& previousKey();
    virtual ::java::lang::Class* getClass0();
};
