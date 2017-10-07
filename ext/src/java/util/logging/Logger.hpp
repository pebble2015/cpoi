// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <atomic>
#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/lang/ref/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <java/util/concurrent/fwd-POI.hpp>
#include <java/util/function/fwd-POI.hpp>
#include <java/util/logging/fwd-POI.hpp>
#include <java/lang/Object.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace util
    {
        namespace logging
        {
typedef ::SubArray< ::java::util::logging::Handler, ::java::lang::ObjectArray > HandlerArray;
        } // logging
    } // util
} // java

struct default_init_tag;

class java::util::logging::Logger
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    static bool $assertionsDisabled_;
    static ::java::lang::String* GLOBAL_LOGGER_NAME_;
    static Logger_LoggerBundle* NO_RESOURCE_BUNDLE_;
    static Logger_LoggerBundle* SYSTEM_BUNDLE_;
    static ::java::lang::String* SYSTEM_LOGGER_RB_NAME_;
    bool anonymous {  };
    ::java::lang::ref::WeakReference* callersClassLoaderRef {  };
    ::java::util::ResourceBundle* catalog {  };
    ::java::util::Locale* catalogLocale {  };
    ::java::lang::String* catalogName {  };
    static HandlerArray* emptyHandlers_;
    std::atomic< Filter* > filter {  };
    static Logger* global_;
    ::java::util::concurrent::CopyOnWriteArrayList* handlers {  };
    bool isSystemLogger {  };
    ::java::util::ArrayList* kids {  };
    std::atomic< Level* > levelObject {  };
    std::atomic< int32_t > levelValue {  };
    std::atomic< Logger_LoggerBundle* > loggerBundle {  };
    std::atomic< LogManager* > manager {  };
    ::java::lang::String* name {  };
    static int32_t offValue_;
    std::atomic< Logger* > parent {  };
    static ::java::lang::Object* treeLock_;
    std::atomic< bool > useParentHandlers {  };

    /*void ctor(::java::lang::String* name); (private) */
protected:
    void ctor(::java::lang::String* name, ::java::lang::String* resourceBundleName);
    void ctor(::java::lang::String* name, ::java::lang::String* resourceBundleName, ::java::lang::Class* caller, LogManager* manager, bool isSystemLogger);

public: /* package */
    virtual HandlerArray* accessCheckedHandlers();

public:
    virtual void addHandler(Handler* handler);
    /*void checkPermission(); (private) */
    virtual void config(::java::lang::String* msg);
    virtual void config(::java::util::function::Supplier* msgSupplier);
    /*static Logger* demandLogger(::java::lang::String* name, ::java::lang::String* resourceBundleName, ::java::lang::Class* caller); (private) */
    /*void doLog(LogRecord* lr); (private) */
    /*void doLog(LogRecord* lr, ::java::lang::String* rbname); (private) */
    /*void doLog(LogRecord* lr, ::java::util::ResourceBundle* rb); (private) */
    /*void doSetParent(Logger* newParent); (private) */
    virtual void entering(::java::lang::String* sourceClass, ::java::lang::String* sourceMethod);
    virtual void entering(::java::lang::String* sourceClass, ::java::lang::String* sourceMethod, ::java::lang::Object* param1);
    virtual void entering(::java::lang::String* sourceClass, ::java::lang::String* sourceMethod, ::java::lang::ObjectArray* params);
    virtual void exiting(::java::lang::String* sourceClass, ::java::lang::String* sourceMethod);
    virtual void exiting(::java::lang::String* sourceClass, ::java::lang::String* sourceMethod, ::java::lang::Object* result);
    /*::java::util::ResourceBundle* findResourceBundle(::java::lang::String* name, bool useCallersClassLoader); (private) */
    /*static ::java::util::ResourceBundle* findSystemResourceBundle(::java::util::Locale* locale); (private) */
    virtual void fine(::java::lang::String* msg);
    virtual void fine(::java::util::function::Supplier* msgSupplier);
    virtual void finer(::java::lang::String* msg);
    virtual void finer(::java::util::function::Supplier* msgSupplier);
    virtual void finest(::java::lang::String* msg);
    virtual void finest(::java::util::function::Supplier* msgSupplier);
    static Logger* getAnonymousLogger();
    static Logger* getAnonymousLogger(::java::lang::String* resourceBundleName);
    /*::java::lang::ClassLoader* getCallersClassLoader(); (private) */
    /*Logger_LoggerBundle* getEffectiveLoggerBundle(); (private) */
    virtual Filter* getFilter();
    static Logger* getGlobal();
    virtual HandlerArray* getHandlers();
    virtual Level* getLevel();
    static Logger* getLogger(::java::lang::String* name);
    static Logger* getLogger(::java::lang::String* name, ::java::lang::String* resourceBundleName);
    virtual ::java::lang::String* getName();
    virtual Logger* getParent();

public: /* package */
    static Logger* getPlatformLogger(::java::lang::String* name);

public:
    virtual ::java::util::ResourceBundle* getResourceBundle();
    virtual ::java::lang::String* getResourceBundleName();
    virtual bool getUseParentHandlers();
    virtual void info(::java::lang::String* msg);
    virtual void info(::java::util::function::Supplier* msgSupplier);

public: /* package */
    bool isLevelInitialized();

public:
    virtual bool isLoggable(Level* level);
    virtual void log(LogRecord* record);
    virtual void log(Level* level, ::java::lang::String* msg);
    virtual void log(Level* level, ::java::util::function::Supplier* msgSupplier);
    virtual void log(Level* level, ::java::lang::String* msg, ::java::lang::Object* param1);
    virtual void log(Level* level, ::java::lang::String* msg, ::java::lang::ObjectArray* params);
    virtual void log(Level* level, ::java::lang::String* msg, ::java::lang::Throwable* thrown);
    virtual void log(Level* level, ::java::lang::Throwable* thrown, ::java::util::function::Supplier* msgSupplier);
    virtual void logp(Level* level, ::java::lang::String* sourceClass, ::java::lang::String* sourceMethod, ::java::lang::String* msg);
    virtual void logp(Level* level, ::java::lang::String* sourceClass, ::java::lang::String* sourceMethod, ::java::util::function::Supplier* msgSupplier);
    virtual void logp(Level* level, ::java::lang::String* sourceClass, ::java::lang::String* sourceMethod, ::java::lang::String* msg, ::java::lang::Object* param1);
    virtual void logp(Level* level, ::java::lang::String* sourceClass, ::java::lang::String* sourceMethod, ::java::lang::String* msg, ::java::lang::ObjectArray* params);
    virtual void logp(Level* level, ::java::lang::String* sourceClass, ::java::lang::String* sourceMethod, ::java::lang::String* msg, ::java::lang::Throwable* thrown);
    virtual void logp(Level* level, ::java::lang::String* sourceClass, ::java::lang::String* sourceMethod, ::java::lang::Throwable* thrown, ::java::util::function::Supplier* msgSupplier);
    virtual void logrb(Level* level, ::java::lang::String* sourceClass, ::java::lang::String* sourceMethod, ::java::lang::String* bundleName, ::java::lang::String* msg);
    virtual void logrb(Level* level, ::java::lang::String* sourceClass, ::java::lang::String* sourceMethod, ::java::lang::String* bundleName, ::java::lang::String* msg, ::java::lang::Object* param1);
    virtual void logrb(Level* level, ::java::lang::String* sourceClass, ::java::lang::String* sourceMethod, ::java::lang::String* bundleName, ::java::lang::String* msg, ::java::lang::ObjectArray* params);
    virtual void logrb(Level* level, ::java::lang::String* sourceClass, ::java::lang::String* sourceMethod, ::java::util::ResourceBundle* bundle, ::java::lang::String* msg, ::java::lang::ObjectArray* params);
    virtual void logrb(Level* level, ::java::lang::String* sourceClass, ::java::lang::String* sourceMethod, ::java::lang::String* bundleName, ::java::lang::String* msg, ::java::lang::Throwable* thrown);
    virtual void logrb(Level* level, ::java::lang::String* sourceClass, ::java::lang::String* sourceMethod, ::java::util::ResourceBundle* bundle, ::java::lang::String* msg, ::java::lang::Throwable* thrown);

public: /* package */
    void removeChildLogger(LogManager_LoggerWeakRef* child);

public:
    virtual void removeHandler(Handler* handler);
    /*void setCallersClassLoaderRef(::java::lang::Class* caller); (private) */
    virtual void setFilter(Filter* newFilter);
    virtual void setLevel(Level* newLevel);

public: /* package */
    virtual void setLogManager(LogManager* manager);

public:
    virtual void setParent(Logger* parent);
    virtual void setResourceBundle(::java::util::ResourceBundle* bundle);
    virtual void setUseParentHandlers(bool useParentHandlers);
    /*void setupResourceInfo(::java::lang::String* name, ::java::lang::Class* callersClass); (private) */
    virtual void severe(::java::lang::String* msg);
    virtual void severe(::java::util::function::Supplier* msgSupplier);
    virtual void throwing(::java::lang::String* sourceClass, ::java::lang::String* sourceMethod, ::java::lang::Throwable* thrown);
    /*void updateEffectiveLevel(); (private) */
    virtual void warning(::java::lang::String* msg);
    virtual void warning(::java::util::function::Supplier* msgSupplier);

    // Generated

public: /* protected */
    Logger(::java::lang::String* name, ::java::lang::String* resourceBundleName);

public: /* package */
    Logger(::java::lang::String* name, ::java::lang::String* resourceBundleName, ::java::lang::Class* caller, LogManager* manager, bool isSystemLogger);
protected:
    Logger(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

public: /* package */
    static bool& $assertionsDisabled();

public:
    static ::java::lang::String*& GLOBAL_LOGGER_NAME();

private:
    static Logger_LoggerBundle*& NO_RESOURCE_BUNDLE();
    static Logger_LoggerBundle*& SYSTEM_BUNDLE();

public: /* package */
    static ::java::lang::String*& SYSTEM_LOGGER_RB_NAME();

private:
    static HandlerArray*& emptyHandlers();

public:
    static Logger*& global();

private:
    static int32_t& offValue();
    static ::java::lang::Object*& treeLock();
    virtual ::java::lang::Class* getClass0();
};
