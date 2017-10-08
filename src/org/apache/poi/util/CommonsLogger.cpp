// Generated from /POI/java/org/apache/poi/util/CommonsLogger.java
#include <org/apache/poi/util/CommonsLogger.hpp>

#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/Throwable.hpp>
#include <org/apache/commons/logging/Log.hpp>
#include <org/apache/commons/logging/LogFactory.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::util::CommonsLogger::CommonsLogger(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::util::CommonsLogger::CommonsLogger()
    : CommonsLogger(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void poi::util::CommonsLogger::ctor()
{
    super::ctor();
    init();
}

void poi::util::CommonsLogger::init()
{
    log_ = nullptr;
}

org::apache::commons::logging::LogFactory*& poi::util::CommonsLogger::_creator()
{
    clinit();
    return _creator_;
}
org::apache::commons::logging::LogFactory* poi::util::CommonsLogger::_creator_;

void poi::util::CommonsLogger::initialize(::java::lang::String* cat)
{
    this->log_ = npc(_creator_)->getInstance(cat);
}

void poi::util::CommonsLogger::_log(int32_t level, ::java::lang::Object* obj1)
{
    if(level == FATAL) {
        if(npc(log_)->isFatalEnabled()) {
            npc(log_)->fatal(obj1);
        }
    } else if(level == ERROR) {
        if(npc(log_)->isErrorEnabled()) {
            npc(log_)->error(obj1);
        }
    } else if(level == WARN) {
        if(npc(log_)->isWarnEnabled()) {
            npc(log_)->warn(obj1);
        }
    } else if(level == INFO) {
        if(npc(log_)->isInfoEnabled()) {
            npc(log_)->info(obj1);
        }
    } else if(level == DEBUG) {
        if(npc(log_)->isDebugEnabled()) {
            npc(log_)->debug(obj1);
        }
    } else {
        if(npc(log_)->isTraceEnabled()) {
            npc(log_)->trace(obj1);
        }
    }
}

void poi::util::CommonsLogger::_log(int32_t level, ::java::lang::Object* obj1, ::java::lang::Throwable* exception)
{
    if(level == FATAL) {
        if(npc(log_)->isFatalEnabled()) {
            if(obj1 != nullptr)
                npc(log_)->fatal(obj1, exception);
            else
                npc(log_)->fatal(exception);
        }
    } else if(level == ERROR) {
        if(npc(log_)->isErrorEnabled()) {
            if(obj1 != nullptr)
                npc(log_)->error(obj1, exception);
            else
                npc(log_)->error(exception);
        }
    } else if(level == WARN) {
        if(npc(log_)->isWarnEnabled()) {
            if(obj1 != nullptr)
                npc(log_)->warn(obj1, exception);
            else
                npc(log_)->warn(exception);
        }
    } else if(level == INFO) {
        if(npc(log_)->isInfoEnabled()) {
            if(obj1 != nullptr)
                npc(log_)->info(obj1, exception);
            else
                npc(log_)->info(exception);
        }
    } else if(level == DEBUG) {
        if(npc(log_)->isDebugEnabled()) {
            if(obj1 != nullptr)
                npc(log_)->debug(obj1, exception);
            else
                npc(log_)->debug(exception);
        }
    } else {
        if(npc(log_)->isTraceEnabled()) {
            if(obj1 != nullptr)
                npc(log_)->trace(obj1, exception);
            else
                npc(log_)->trace(exception);
        }
    }
}

bool poi::util::CommonsLogger::check(int32_t level)
{
    if(level == FATAL) {
        if(npc(log_)->isFatalEnabled()) {
            return true;
        }
    } else if(level == ERROR) {
        if(npc(log_)->isErrorEnabled()) {
            return true;
        }
    } else if(level == WARN) {
        if(npc(log_)->isWarnEnabled()) {
            return true;
        }
    } else if(level == INFO) {
        if(npc(log_)->isInfoEnabled()) {
            return true;
        }
    } else if(level == DEBUG) {
        if(npc(log_)->isDebugEnabled()) {
            return true;
        }
    }
    return false;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::util::CommonsLogger::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.util.CommonsLogger", 33);
    return c;
}

void poi::util::CommonsLogger::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        _creator_ = ::org::apache::commons::logging::LogFactory::getFactory();
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* poi::util::CommonsLogger::getClass0()
{
    return class_();
}

