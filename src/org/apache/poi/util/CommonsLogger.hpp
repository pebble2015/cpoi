// Generated from /POI/java/org/apache/poi/util/CommonsLogger.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/commons/logging/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/util/POILogger.hpp>

struct default_init_tag;

class poi::util::CommonsLogger
    : public POILogger
{

public:
    typedef POILogger super;

private:
    static ::org::apache::commons::logging::LogFactory* _creator_;
    ::org::apache::commons::logging::Log* log_ {  };

public:
    void initialize(::java::lang::String* cat) override;

public: /* protected */
    void _log(int32_t level, ::java::lang::Object* obj1) override;
    void _log(int32_t level, ::java::lang::Object* obj1, ::java::lang::Throwable* exception) override;

public:
    bool check(int32_t level) override;

    // Generated
    CommonsLogger();
protected:
    void ctor();
    CommonsLogger(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    void init();
    static ::org::apache::commons::logging::LogFactory*& _creator();
    virtual ::java::lang::Class* getClass0();
};
