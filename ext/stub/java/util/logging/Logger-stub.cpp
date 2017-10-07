// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/util/logging/Logger.hpp>

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

extern void unimplemented_(const char16_t* name);
java::util::logging::Logger::Logger(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::util::logging::Logger::Logger(::java::lang::String* name, ::java::lang::String* resourceBundleName)
    : Logger(*static_cast< ::default_init_tag* >(0))
{
    ctor(name, resourceBundleName);
}

java::util::logging::Logger::Logger(::java::lang::String* name, ::java::lang::String* resourceBundleName, ::java::lang::Class* caller, LogManager* manager, bool isSystemLogger)
    : Logger(*static_cast< ::default_init_tag* >(0))
{
    ctor(name, resourceBundleName, caller, manager, isSystemLogger);
}

bool& java::util::logging::Logger::$assertionsDisabled()
{
    clinit();
    return $assertionsDisabled_;
}
bool java::util::logging::Logger::$assertionsDisabled_;
java::lang::String*& java::util::logging::Logger::GLOBAL_LOGGER_NAME()
{
    clinit();
    return GLOBAL_LOGGER_NAME_;
}
java::lang::String* java::util::logging::Logger::GLOBAL_LOGGER_NAME_;
java::util::logging::Logger_LoggerBundle*& java::util::logging::Logger::NO_RESOURCE_BUNDLE()
{
    clinit();
    return NO_RESOURCE_BUNDLE_;
}
java::util::logging::Logger_LoggerBundle* java::util::logging::Logger::NO_RESOURCE_BUNDLE_;
java::util::logging::Logger_LoggerBundle*& java::util::logging::Logger::SYSTEM_BUNDLE()
{
    clinit();
    return SYSTEM_BUNDLE_;
}
java::util::logging::Logger_LoggerBundle* java::util::logging::Logger::SYSTEM_BUNDLE_;
java::lang::String*& java::util::logging::Logger::SYSTEM_LOGGER_RB_NAME()
{
    clinit();
    return SYSTEM_LOGGER_RB_NAME_;
}
java::lang::String* java::util::logging::Logger::SYSTEM_LOGGER_RB_NAME_;
java::util::logging::HandlerArray*& java::util::logging::Logger::emptyHandlers()
{
    clinit();
    return emptyHandlers_;
}
java::util::logging::HandlerArray* java::util::logging::Logger::emptyHandlers_;
java::util::logging::Logger*& java::util::logging::Logger::global()
{
    clinit();
    return global_;
}
java::util::logging::Logger* java::util::logging::Logger::global_;
int32_t& java::util::logging::Logger::offValue()
{
    clinit();
    return offValue_;
}
int32_t java::util::logging::Logger::offValue_;
java::lang::Object*& java::util::logging::Logger::treeLock()
{
    clinit();
    return treeLock_;
}
java::lang::Object* java::util::logging::Logger::treeLock_;

/* private: void ::java::util::logging::Logger::ctor(::java::lang::String* name) */
void ::java::util::logging::Logger::ctor(::java::lang::String* name, ::java::lang::String* resourceBundleName)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::util::logging::Logger::ctor(::java::lang::String* name, ::java::lang::String* resourceBundleName)");
}

void ::java::util::logging::Logger::ctor(::java::lang::String* name, ::java::lang::String* resourceBundleName, ::java::lang::Class* caller, LogManager* manager, bool isSystemLogger)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::util::logging::Logger::ctor(::java::lang::String* name, ::java::lang::String* resourceBundleName, ::java::lang::Class* caller, LogManager* manager, bool isSystemLogger)");
}

java::util::logging::HandlerArray* java::util::logging::Logger::accessCheckedHandlers()
{ /* stub */
    unimplemented_(u"java::util::logging::HandlerArray* java::util::logging::Logger::accessCheckedHandlers()");
    return 0;
}

void java::util::logging::Logger::addHandler(Handler* handler)
{ /* stub */
    unimplemented_(u"void java::util::logging::Logger::addHandler(Handler* handler)");
}

/* private: void java::util::logging::Logger::checkPermission() */
void java::util::logging::Logger::config(::java::lang::String* msg)
{ /* stub */
    unimplemented_(u"void java::util::logging::Logger::config(::java::lang::String* msg)");
}

void java::util::logging::Logger::config(::java::util::function::Supplier* msgSupplier)
{ /* stub */
    unimplemented_(u"void java::util::logging::Logger::config(::java::util::function::Supplier* msgSupplier)");
}

/* private: java::util::logging::Logger* java::util::logging::Logger::demandLogger(::java::lang::String* name, ::java::lang::String* resourceBundleName, ::java::lang::Class* caller) */
/* private: void java::util::logging::Logger::doLog(LogRecord* lr) */
/* private: void java::util::logging::Logger::doLog(LogRecord* lr, ::java::lang::String* rbname) */
/* private: void java::util::logging::Logger::doLog(LogRecord* lr, ::java::util::ResourceBundle* rb) */
/* private: void java::util::logging::Logger::doSetParent(Logger* newParent) */
void java::util::logging::Logger::entering(::java::lang::String* sourceClass, ::java::lang::String* sourceMethod)
{ /* stub */
    unimplemented_(u"void java::util::logging::Logger::entering(::java::lang::String* sourceClass, ::java::lang::String* sourceMethod)");
}

void java::util::logging::Logger::entering(::java::lang::String* sourceClass, ::java::lang::String* sourceMethod, ::java::lang::Object* param1)
{ /* stub */
    unimplemented_(u"void java::util::logging::Logger::entering(::java::lang::String* sourceClass, ::java::lang::String* sourceMethod, ::java::lang::Object* param1)");
}

void java::util::logging::Logger::entering(::java::lang::String* sourceClass, ::java::lang::String* sourceMethod, ::java::lang::ObjectArray* params)
{ /* stub */
    unimplemented_(u"void java::util::logging::Logger::entering(::java::lang::String* sourceClass, ::java::lang::String* sourceMethod, ::java::lang::ObjectArray* params)");
}

void java::util::logging::Logger::exiting(::java::lang::String* sourceClass, ::java::lang::String* sourceMethod)
{ /* stub */
    unimplemented_(u"void java::util::logging::Logger::exiting(::java::lang::String* sourceClass, ::java::lang::String* sourceMethod)");
}

void java::util::logging::Logger::exiting(::java::lang::String* sourceClass, ::java::lang::String* sourceMethod, ::java::lang::Object* result)
{ /* stub */
    unimplemented_(u"void java::util::logging::Logger::exiting(::java::lang::String* sourceClass, ::java::lang::String* sourceMethod, ::java::lang::Object* result)");
}

/* private: java::util::ResourceBundle* java::util::logging::Logger::findResourceBundle(::java::lang::String* name, bool useCallersClassLoader) */
/* private: java::util::ResourceBundle* java::util::logging::Logger::findSystemResourceBundle(::java::util::Locale* locale) */
void java::util::logging::Logger::fine(::java::lang::String* msg)
{ /* stub */
    unimplemented_(u"void java::util::logging::Logger::fine(::java::lang::String* msg)");
}

void java::util::logging::Logger::fine(::java::util::function::Supplier* msgSupplier)
{ /* stub */
    unimplemented_(u"void java::util::logging::Logger::fine(::java::util::function::Supplier* msgSupplier)");
}

void java::util::logging::Logger::finer(::java::lang::String* msg)
{ /* stub */
    unimplemented_(u"void java::util::logging::Logger::finer(::java::lang::String* msg)");
}

void java::util::logging::Logger::finer(::java::util::function::Supplier* msgSupplier)
{ /* stub */
    unimplemented_(u"void java::util::logging::Logger::finer(::java::util::function::Supplier* msgSupplier)");
}

void java::util::logging::Logger::finest(::java::lang::String* msg)
{ /* stub */
    unimplemented_(u"void java::util::logging::Logger::finest(::java::lang::String* msg)");
}

void java::util::logging::Logger::finest(::java::util::function::Supplier* msgSupplier)
{ /* stub */
    unimplemented_(u"void java::util::logging::Logger::finest(::java::util::function::Supplier* msgSupplier)");
}

java::util::logging::Logger* java::util::logging::Logger::getAnonymousLogger()
{ /* stub */
    clinit();
    unimplemented_(u"java::util::logging::Logger* java::util::logging::Logger::getAnonymousLogger()");
    return 0;
}

java::util::logging::Logger* java::util::logging::Logger::getAnonymousLogger(::java::lang::String* resourceBundleName)
{ /* stub */
    clinit();
    unimplemented_(u"java::util::logging::Logger* java::util::logging::Logger::getAnonymousLogger(::java::lang::String* resourceBundleName)");
    return 0;
}

/* private: java::lang::ClassLoader* java::util::logging::Logger::getCallersClassLoader() */
/* private: java::util::logging::Logger_LoggerBundle* java::util::logging::Logger::getEffectiveLoggerBundle() */
java::util::logging::Filter* java::util::logging::Logger::getFilter()
{ /* stub */
return filter ; /* getter */
}

java::util::logging::Logger* java::util::logging::Logger::getGlobal()
{ /* stub */
    clinit();
return global() ; /* getter */
}

java::util::logging::HandlerArray* java::util::logging::Logger::getHandlers()
{ /* stub */
}

java::util::logging::Level* java::util::logging::Logger::getLevel()
{ /* stub */
    unimplemented_(u"java::util::logging::Level* java::util::logging::Logger::getLevel()");
    return 0;
}

java::util::logging::Logger* java::util::logging::Logger::getLogger(::java::lang::String* name)
{ /* stub */
    clinit();
    unimplemented_(u"java::util::logging::Logger* java::util::logging::Logger::getLogger(::java::lang::String* name)");
    return 0;
}

java::util::logging::Logger* java::util::logging::Logger::getLogger(::java::lang::String* name, ::java::lang::String* resourceBundleName)
{ /* stub */
    clinit();
    unimplemented_(u"java::util::logging::Logger* java::util::logging::Logger::getLogger(::java::lang::String* name, ::java::lang::String* resourceBundleName)");
    return 0;
}

java::lang::String* java::util::logging::Logger::getName()
{ /* stub */
return name ; /* getter */
}

java::util::logging::Logger* java::util::logging::Logger::getParent()
{ /* stub */
return parent ; /* getter */
}

java::util::logging::Logger* java::util::logging::Logger::getPlatformLogger(::java::lang::String* name)
{ /* stub */
    clinit();
    unimplemented_(u"java::util::logging::Logger* java::util::logging::Logger::getPlatformLogger(::java::lang::String* name)");
    return 0;
}

java::util::ResourceBundle* java::util::logging::Logger::getResourceBundle()
{ /* stub */
    unimplemented_(u"java::util::ResourceBundle* java::util::logging::Logger::getResourceBundle()");
    return 0;
}

java::lang::String* java::util::logging::Logger::getResourceBundleName()
{ /* stub */
    unimplemented_(u"java::lang::String* java::util::logging::Logger::getResourceBundleName()");
    return 0;
}

bool java::util::logging::Logger::getUseParentHandlers()
{ /* stub */
return useParentHandlers ; /* getter */
}

void java::util::logging::Logger::info(::java::lang::String* msg)
{ /* stub */
    unimplemented_(u"void java::util::logging::Logger::info(::java::lang::String* msg)");
}

void java::util::logging::Logger::info(::java::util::function::Supplier* msgSupplier)
{ /* stub */
    unimplemented_(u"void java::util::logging::Logger::info(::java::util::function::Supplier* msgSupplier)");
}

bool java::util::logging::Logger::isLevelInitialized()
{ /* stub */
    unimplemented_(u"bool java::util::logging::Logger::isLevelInitialized()");
    return 0;
}

bool java::util::logging::Logger::isLoggable(Level* level)
{ /* stub */
    unimplemented_(u"bool java::util::logging::Logger::isLoggable(Level* level)");
    return 0;
}

void java::util::logging::Logger::log(LogRecord* record)
{ /* stub */
    unimplemented_(u"void java::util::logging::Logger::log(LogRecord* record)");
}

void java::util::logging::Logger::log(Level* level, ::java::lang::String* msg)
{ /* stub */
    unimplemented_(u"void java::util::logging::Logger::log(Level* level, ::java::lang::String* msg)");
}

void java::util::logging::Logger::log(Level* level, ::java::util::function::Supplier* msgSupplier)
{ /* stub */
    unimplemented_(u"void java::util::logging::Logger::log(Level* level, ::java::util::function::Supplier* msgSupplier)");
}

void java::util::logging::Logger::log(Level* level, ::java::lang::String* msg, ::java::lang::Object* param1)
{ /* stub */
    unimplemented_(u"void java::util::logging::Logger::log(Level* level, ::java::lang::String* msg, ::java::lang::Object* param1)");
}

void java::util::logging::Logger::log(Level* level, ::java::lang::String* msg, ::java::lang::ObjectArray* params)
{ /* stub */
    unimplemented_(u"void java::util::logging::Logger::log(Level* level, ::java::lang::String* msg, ::java::lang::ObjectArray* params)");
}

void java::util::logging::Logger::log(Level* level, ::java::lang::String* msg, ::java::lang::Throwable* thrown)
{ /* stub */
    unimplemented_(u"void java::util::logging::Logger::log(Level* level, ::java::lang::String* msg, ::java::lang::Throwable* thrown)");
}

void java::util::logging::Logger::log(Level* level, ::java::lang::Throwable* thrown, ::java::util::function::Supplier* msgSupplier)
{ /* stub */
    unimplemented_(u"void java::util::logging::Logger::log(Level* level, ::java::lang::Throwable* thrown, ::java::util::function::Supplier* msgSupplier)");
}

void java::util::logging::Logger::logp(Level* level, ::java::lang::String* sourceClass, ::java::lang::String* sourceMethod, ::java::lang::String* msg)
{ /* stub */
    unimplemented_(u"void java::util::logging::Logger::logp(Level* level, ::java::lang::String* sourceClass, ::java::lang::String* sourceMethod, ::java::lang::String* msg)");
}

void java::util::logging::Logger::logp(Level* level, ::java::lang::String* sourceClass, ::java::lang::String* sourceMethod, ::java::util::function::Supplier* msgSupplier)
{ /* stub */
    unimplemented_(u"void java::util::logging::Logger::logp(Level* level, ::java::lang::String* sourceClass, ::java::lang::String* sourceMethod, ::java::util::function::Supplier* msgSupplier)");
}

void java::util::logging::Logger::logp(Level* level, ::java::lang::String* sourceClass, ::java::lang::String* sourceMethod, ::java::lang::String* msg, ::java::lang::Object* param1)
{ /* stub */
    unimplemented_(u"void java::util::logging::Logger::logp(Level* level, ::java::lang::String* sourceClass, ::java::lang::String* sourceMethod, ::java::lang::String* msg, ::java::lang::Object* param1)");
}

void java::util::logging::Logger::logp(Level* level, ::java::lang::String* sourceClass, ::java::lang::String* sourceMethod, ::java::lang::String* msg, ::java::lang::ObjectArray* params)
{ /* stub */
    unimplemented_(u"void java::util::logging::Logger::logp(Level* level, ::java::lang::String* sourceClass, ::java::lang::String* sourceMethod, ::java::lang::String* msg, ::java::lang::ObjectArray* params)");
}

void java::util::logging::Logger::logp(Level* level, ::java::lang::String* sourceClass, ::java::lang::String* sourceMethod, ::java::lang::String* msg, ::java::lang::Throwable* thrown)
{ /* stub */
    unimplemented_(u"void java::util::logging::Logger::logp(Level* level, ::java::lang::String* sourceClass, ::java::lang::String* sourceMethod, ::java::lang::String* msg, ::java::lang::Throwable* thrown)");
}

void java::util::logging::Logger::logp(Level* level, ::java::lang::String* sourceClass, ::java::lang::String* sourceMethod, ::java::lang::Throwable* thrown, ::java::util::function::Supplier* msgSupplier)
{ /* stub */
    unimplemented_(u"void java::util::logging::Logger::logp(Level* level, ::java::lang::String* sourceClass, ::java::lang::String* sourceMethod, ::java::lang::Throwable* thrown, ::java::util::function::Supplier* msgSupplier)");
}

void java::util::logging::Logger::logrb(Level* level, ::java::lang::String* sourceClass, ::java::lang::String* sourceMethod, ::java::lang::String* bundleName, ::java::lang::String* msg)
{ /* stub */
    unimplemented_(u"void java::util::logging::Logger::logrb(Level* level, ::java::lang::String* sourceClass, ::java::lang::String* sourceMethod, ::java::lang::String* bundleName, ::java::lang::String* msg)");
}

void java::util::logging::Logger::logrb(Level* level, ::java::lang::String* sourceClass, ::java::lang::String* sourceMethod, ::java::lang::String* bundleName, ::java::lang::String* msg, ::java::lang::Object* param1)
{ /* stub */
    unimplemented_(u"void java::util::logging::Logger::logrb(Level* level, ::java::lang::String* sourceClass, ::java::lang::String* sourceMethod, ::java::lang::String* bundleName, ::java::lang::String* msg, ::java::lang::Object* param1)");
}

void java::util::logging::Logger::logrb(Level* level, ::java::lang::String* sourceClass, ::java::lang::String* sourceMethod, ::java::lang::String* bundleName, ::java::lang::String* msg, ::java::lang::ObjectArray* params)
{ /* stub */
    unimplemented_(u"void java::util::logging::Logger::logrb(Level* level, ::java::lang::String* sourceClass, ::java::lang::String* sourceMethod, ::java::lang::String* bundleName, ::java::lang::String* msg, ::java::lang::ObjectArray* params)");
}

void java::util::logging::Logger::logrb(Level* level, ::java::lang::String* sourceClass, ::java::lang::String* sourceMethod, ::java::util::ResourceBundle* bundle, ::java::lang::String* msg, ::java::lang::ObjectArray* params)
{ /* stub */
    unimplemented_(u"void java::util::logging::Logger::logrb(Level* level, ::java::lang::String* sourceClass, ::java::lang::String* sourceMethod, ::java::util::ResourceBundle* bundle, ::java::lang::String* msg, ::java::lang::ObjectArray* params)");
}

void java::util::logging::Logger::logrb(Level* level, ::java::lang::String* sourceClass, ::java::lang::String* sourceMethod, ::java::lang::String* bundleName, ::java::lang::String* msg, ::java::lang::Throwable* thrown)
{ /* stub */
    unimplemented_(u"void java::util::logging::Logger::logrb(Level* level, ::java::lang::String* sourceClass, ::java::lang::String* sourceMethod, ::java::lang::String* bundleName, ::java::lang::String* msg, ::java::lang::Throwable* thrown)");
}

void java::util::logging::Logger::logrb(Level* level, ::java::lang::String* sourceClass, ::java::lang::String* sourceMethod, ::java::util::ResourceBundle* bundle, ::java::lang::String* msg, ::java::lang::Throwable* thrown)
{ /* stub */
    unimplemented_(u"void java::util::logging::Logger::logrb(Level* level, ::java::lang::String* sourceClass, ::java::lang::String* sourceMethod, ::java::util::ResourceBundle* bundle, ::java::lang::String* msg, ::java::lang::Throwable* thrown)");
}

void java::util::logging::Logger::removeChildLogger(LogManager_LoggerWeakRef* child)
{ /* stub */
    unimplemented_(u"void java::util::logging::Logger::removeChildLogger(LogManager_LoggerWeakRef* child)");
}

void java::util::logging::Logger::removeHandler(Handler* handler)
{ /* stub */
    unimplemented_(u"void java::util::logging::Logger::removeHandler(Handler* handler)");
}

/* private: void java::util::logging::Logger::setCallersClassLoaderRef(::java::lang::Class* caller) */
void java::util::logging::Logger::setFilter(Filter* newFilter)
{ /* stub */
    this->filter = newFilter; /* setter */
}

void java::util::logging::Logger::setLevel(Level* newLevel)
{ /* stub */
    unimplemented_(u"void java::util::logging::Logger::setLevel(Level* newLevel)");
}

void java::util::logging::Logger::setLogManager(LogManager* manager)
{ /* stub */
    unimplemented_(u"void java::util::logging::Logger::setLogManager(LogManager* manager)");
}

void java::util::logging::Logger::setParent(Logger* parent)
{ /* stub */
    this->parent = parent; /* setter */
}

void java::util::logging::Logger::setResourceBundle(::java::util::ResourceBundle* bundle)
{ /* stub */
    unimplemented_(u"void java::util::logging::Logger::setResourceBundle(::java::util::ResourceBundle* bundle)");
}

void java::util::logging::Logger::setUseParentHandlers(bool useParentHandlers)
{ /* stub */
    this->useParentHandlers = useParentHandlers; /* setter */
}

/* private: void java::util::logging::Logger::setupResourceInfo(::java::lang::String* name, ::java::lang::Class* callersClass) */
void java::util::logging::Logger::severe(::java::lang::String* msg)
{ /* stub */
    unimplemented_(u"void java::util::logging::Logger::severe(::java::lang::String* msg)");
}

void java::util::logging::Logger::severe(::java::util::function::Supplier* msgSupplier)
{ /* stub */
    unimplemented_(u"void java::util::logging::Logger::severe(::java::util::function::Supplier* msgSupplier)");
}

void java::util::logging::Logger::throwing(::java::lang::String* sourceClass, ::java::lang::String* sourceMethod, ::java::lang::Throwable* thrown)
{ /* stub */
    unimplemented_(u"void java::util::logging::Logger::throwing(::java::lang::String* sourceClass, ::java::lang::String* sourceMethod, ::java::lang::Throwable* thrown)");
}

/* private: void java::util::logging::Logger::updateEffectiveLevel() */
void java::util::logging::Logger::warning(::java::lang::String* msg)
{ /* stub */
    unimplemented_(u"void java::util::logging::Logger::warning(::java::lang::String* msg)");
}

void java::util::logging::Logger::warning(::java::util::function::Supplier* msgSupplier)
{ /* stub */
    unimplemented_(u"void java::util::logging::Logger::warning(::java::util::function::Supplier* msgSupplier)");
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::util::logging::Logger::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.logging.Logger", 24);
    return c;
}

java::lang::Class* java::util::logging::Logger::getClass0()
{
    return class_();
}

