// Generated from /POI/commons-logging-1.2.jar

#pragma once

#include <atomic>
#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/net/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/commons/logging/fwd-POI.hpp>
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
typedef ::SubArray< ::java::lang::Comparable, ObjectArray > ComparableArray;
typedef ::SubArray< ::java::lang::String, ObjectArray, ::java::io::SerializableArray, ComparableArray, CharSequenceArray > StringArray;
    } // lang
} // java

struct default_init_tag;

class org::apache::commons::logging::LogFactory
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    static ::java::lang::String* DIAGNOSTICS_DEST_PROPERTY_;
    static ::java::lang::String* FACTORY_DEFAULT_;
    static ::java::lang::String* FACTORY_PROPERTIES_;
    static ::java::lang::String* FACTORY_PROPERTY_;
    static ::java::lang::String* HASHTABLE_IMPLEMENTATION_PROPERTY_;
    static ::java::lang::String* PRIORITY_KEY_;
    static ::java::lang::String* SERVICE_ID_;
    static ::java::lang::String* TCCL_KEY_;
    static ::java::lang::String* WEAK_HASHTABLE_CLASSNAME_;
    static ::java::lang::Class* class$org$apache$commons$logging$LogFactory_;
    static ::java::lang::String* diagnosticPrefix_;
    static ::java::io::PrintStream* diagnosticsStream_;
    static ::java::util::Hashtable* factories_;
    static std::atomic< LogFactory* > nullClassLoaderFactory_;
    static ::java::lang::ClassLoader* thisClassLoader_;

protected:
    void ctor();
    /*static void cacheFactory(::java::lang::ClassLoader* classLoader, LogFactory* factory); (private) */

public: /* protected */
    static ::java::lang::Object* createFactory(::java::lang::String* arg0, ::java::lang::ClassLoader* arg1);
    /*static ::java::util::Hashtable* createFactoryStore(); (private) */
    static ::java::lang::ClassLoader* directGetContextClassLoader();

public:
    virtual ::java::lang::Object* getAttribute(::java::lang::String* arg0) = 0;
    virtual ::java::lang::StringArray* getAttributeNames() = 0;
    /*static LogFactory* getCachedFactory(::java::lang::ClassLoader* contextClassLoader); (private) */

public: /* protected */
    static ::java::lang::ClassLoader* getClassLoader(::java::lang::Class* arg0);
    /*static ::java::util::Properties* getConfigurationFile(::java::lang::ClassLoader* arg0, ::java::lang::String* arg1); (private) */
    static ::java::lang::ClassLoader* getContextClassLoader();
    /*static ::java::lang::ClassLoader* getContextClassLoaderInternal(); (private) */

public:
    static LogFactory* getFactory();
    virtual Log* getInstance(::java::lang::Class* arg0) = 0;
    virtual Log* getInstance(::java::lang::String* arg0) = 0;
    static Log* getLog(::java::lang::Class* clazz);
    static Log* getLog(::java::lang::String* name);
    /*static ::java::util::Properties* getProperties(::java::net::URL* url); (private) */
    /*static ::java::io::InputStream* getResourceAsStream(::java::lang::ClassLoader* loader, ::java::lang::String* name); (private) */
    /*static ::java::util::Enumeration* getResources(::java::lang::ClassLoader* loader, ::java::lang::String* name); (private) */
    /*static ::java::lang::String* getSystemProperty(::java::lang::String* key, ::java::lang::String* def); (private) */

public: /* protected */
    static void handleThrowable(::java::lang::Throwable* t);
    /*static bool implementsLogFactory(::java::lang::Class* arg0); (private) */
    /*static ::java::io::PrintStream* initDiagnostics(); (private) */
    static bool isDiagnosticsEnabled();
    /*static void logClassLoaderEnvironment(::java::lang::Class* arg0); (private) */
    /*static void logDiagnostic(::java::lang::String* msg); (private) */
    /*static void logHierarchy(::java::lang::String* arg0, ::java::lang::ClassLoader* arg1); (private) */
    static void logRawDiagnostic(::java::lang::String* msg);
    static LogFactory* newFactory(::java::lang::String* factoryClass, ::java::lang::ClassLoader* classLoader);
    static LogFactory* newFactory(::java::lang::String* arg0, ::java::lang::ClassLoader* arg1, ::java::lang::ClassLoader* arg2);

public:
    static ::java::lang::String* objectId(::java::lang::Object* o);
    virtual void release() = 0;
    static void release(::java::lang::ClassLoader* arg0);
    static void releaseAll();
    virtual void removeAttribute(::java::lang::String* arg0) = 0;
    virtual void setAttribute(::java::lang::String* arg0, ::java::lang::Object* arg1) = 0;
    /*static ::java::lang::String* trim(::java::lang::String* src); (private) */

    // Generated

public: /* protected */
    LogFactory();
protected:
    LogFactory(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static ::java::lang::String*& DIAGNOSTICS_DEST_PROPERTY();
    static ::java::lang::String*& FACTORY_DEFAULT();
    static ::java::lang::String*& FACTORY_PROPERTIES();
    static ::java::lang::String*& FACTORY_PROPERTY();
    static ::java::lang::String*& HASHTABLE_IMPLEMENTATION_PROPERTY();
    static ::java::lang::String*& PRIORITY_KEY();

public: /* protected */
    static ::java::lang::String*& SERVICE_ID();

public:
    static ::java::lang::String*& TCCL_KEY();

private:
    static ::java::lang::String*& WEAK_HASHTABLE_CLASSNAME();

public: /* package */
    static ::java::lang::Class*& class$org$apache$commons$logging$LogFactory();

private:
    static ::java::lang::String*& diagnosticPrefix();
    static ::java::io::PrintStream*& diagnosticsStream();

public: /* protected */
    static ::java::util::Hashtable*& factories();
    static std::atomic< LogFactory* >& nullClassLoaderFactory();

private:
    static ::java::lang::ClassLoader*& thisClassLoader();
    virtual ::java::lang::Class* getClass0();
};
