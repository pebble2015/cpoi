// Generated from /POI/commons-logging-1.2.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/commons/logging/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct org::apache::commons::logging::Log
    : public virtual ::java::lang::Object
{

    virtual void debug(::java::lang::Object* arg0) = 0;
    virtual void debug(::java::lang::Object* arg0, ::java::lang::Throwable* arg1) = 0;
    virtual void error(::java::lang::Object* arg0) = 0;
    virtual void error(::java::lang::Object* arg0, ::java::lang::Throwable* arg1) = 0;
    virtual void fatal(::java::lang::Object* arg0) = 0;
    virtual void fatal(::java::lang::Object* arg0, ::java::lang::Throwable* arg1) = 0;
    virtual void info(::java::lang::Object* arg0) = 0;
    virtual void info(::java::lang::Object* arg0, ::java::lang::Throwable* arg1) = 0;
    virtual bool isDebugEnabled() = 0;
    virtual bool isErrorEnabled() = 0;
    virtual bool isFatalEnabled() = 0;
    virtual bool isInfoEnabled() = 0;
    virtual bool isTraceEnabled() = 0;
    virtual bool isWarnEnabled() = 0;
    virtual void trace(::java::lang::Object* arg0) = 0;
    virtual void trace(::java::lang::Object* arg0, ::java::lang::Throwable* arg1) = 0;
    virtual void warn(::java::lang::Object* arg0) = 0;
    virtual void warn(::java::lang::Object* arg0, ::java::lang::Throwable* arg1) = 0;

    // Generated
    static ::java::lang::Class *class_();
};
